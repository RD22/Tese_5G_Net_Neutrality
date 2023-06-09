/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "N1N2MessageCollectionDocumentApiImpl.h"
#include "itti.hpp"

#include "amf_app.hpp"
#include "amf_sbi.hpp"
#include "pdu_session_context.hpp"
#include "conversions.hpp"
#include "comUt.hpp"

using namespace amf_application;

extern itti_mw* itti_inst;
extern amf_app* amf_app_inst;

namespace oai {
namespace amf {
namespace api {

using namespace oai::amf::model;

N1N2MessageCollectionDocumentApiImpl::N1N2MessageCollectionDocumentApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr,
    amf_application::amf_app* amf_app_inst)
    : N1N2MessageCollectionDocumentApi(rtr), m_amf_app(amf_app_inst) {}

void N1N2MessageCollectionDocumentApiImpl::n1_n2_message_transfer(
    const std::string& ueContextId,
    const N1N2MessageTransferReqData& n1N2MessageTransferReqData,
    Pistache::Http::ResponseWriter& response) {
  Logger::amf_server().debug("Response OK");
  response.send(
      Pistache::Http::Code::Ok,
      "N1N2MessageCollectionDocumentApiImpl::n1_n2_message_transfer API has "
      "not been implemented yet!");
}

void N1N2MessageCollectionDocumentApiImpl::n1_n2_message_transfer(
    const std::string& ueContextId,
    const N1N2MessageTransferReqData& n1N2MessageTransferReqData,
    std::string& n1sm_str, Pistache::Http::ResponseWriter& response) {
  Logger::amf_server().debug(
      "Receive N1N2MessageTransfer Request, handling...");

  Logger::amf_server().debug(
      "Receive N1N2MessageTransfer Request, handling...");

  nlohmann::json response_json = {};
  response_json["cause"] =
      n1_n2_message_transfer_cause_e2str[N1_N2_TRANSFER_INITIATED];
  Pistache::Http::Code code = Pistache::Http::Code::Ok;

  std::string supi = ueContextId;
  Logger::amf_server().debug(
      "Key for PDU Session context: SUPI (%s)", supi.c_str());
  std::shared_ptr<pdu_session_context> psc;

  if (!amf_app_inst->find_pdu_session_context(
          supi, (uint8_t) n1N2MessageTransferReqData.getPduSessionId(), psc)) {
    Logger::amf_server().error(
        "Cannot get pdu_session_context with SUPI (%s)", supi.c_str());
  }

  bstring n1sm = nullptr;
  conv::msg_str_2_msg_hex(
      n1sm_str.substr(0, n1sm_str.length()), n1sm);  // TODO: verify n1sm_length
  comUt::print_buffer(
      "amf_server", "Received N1 SM", (uint8_t*) bdata(n1sm), blength(n1sm));

  psc->n1sm              = bstrcpy(n1sm);
  psc->is_n1sm_avaliable = true;
  psc->is_n2sm_avaliable = false;

  auto itti_msg = std::make_shared<itti_n1n2_message_transfer_request>(
      AMF_SERVER, TASK_AMF_APP);
  itti_msg->supi        = ueContextId;
  itti_msg->n1sm        = bstrcpy(n1sm);
  itti_msg->is_n1sm_set = true;
  itti_msg->n2sm        = nullptr;
  itti_msg->is_n2sm_set = false;
  itti_msg->pdu_session_id =
      (uint8_t) n1N2MessageTransferReqData.getPduSessionId();

  // For Paging
  if (n1N2MessageTransferReqData.ppiIsSet()) {
    itti_msg->is_ppi_set = true;
    itti_msg->ppi        = n1N2MessageTransferReqData.getPpi();
    response_json["cause"] =
        n1_n2_message_transfer_cause_e2str[ATTEMPTING_TO_REACH_UE];
    code = Pistache::Http::Code::Accepted;
  } else {
    itti_msg->is_ppi_set = false;
  }

  // Send response to the NF Service Consumer (e.g., SMF)
  response.send(code, response_json.dump().c_str());

  // Process N1N2 Message Transfer Request
  int ret = itti_inst->send_msg(itti_msg);
  if (0 != ret) {
    Logger::amf_server().error(
        "Could not send ITTI message %s to task TASK_AMF_N2",
        itti_msg->get_msg_name());
  }

  bdestroy_wrapper(&n1sm);
}

void N1N2MessageCollectionDocumentApiImpl::n1_n2_message_transfer(
    const std::string& ueContextId,
    const N1N2MessageTransferReqData& n1N2MessageTransferReqData,
    std::string& n1sm_str, std::string& n2sm_str,
    Pistache::Http::ResponseWriter& response) {
  Logger::amf_server().debug(
      "Receive N1N2MessageTransfer Request, handling...");

  nlohmann::json response_json = {};
  response_json["cause"] =
      n1_n2_message_transfer_cause_e2str[N1_N2_TRANSFER_INITIATED];
  Pistache::Http::Code code = Pistache::Http::Code::Ok;

  std::string supi = ueContextId;
  Logger::amf_server().debug(
      "Key for PDU Session context: SUPI (%s)", supi.c_str());
  std::shared_ptr<pdu_session_context> psc;

  if (!amf_app_inst->find_pdu_session_context(
          supi, (uint8_t) n1N2MessageTransferReqData.getPduSessionId(), psc)) {
    Logger::amf_server().error(
        "Cannot get pdu_session_context with SUPI (%s)", supi.c_str());
  }

  bstring n1sm = nullptr;
  conv::msg_str_2_msg_hex(
      n1sm_str.substr(0, n1sm_str.length()), n1sm);  // TODO: verify n1sm_length

  bstring n2sm = nullptr;
  conv::msg_str_2_msg_hex(n2sm_str, n2sm);

  psc->n1sm              = bstrcpy(n1sm);
  psc->is_n1sm_avaliable = true;
  psc->n2sm              = bstrcpy(n2sm);
  psc->is_n2sm_avaliable = true;
  Logger::amf_server().debug("n2sm size in amf_server(%d)", blength(psc->n2sm));

  auto itti_msg = std::make_shared<itti_n1n2_message_transfer_request>(
      AMF_SERVER, TASK_AMF_APP);
  itti_msg->supi        = ueContextId;
  itti_msg->n1sm        = bstrcpy(n1sm);
  itti_msg->is_n1sm_set = true;
  itti_msg->n2sm        = bstrcpy(n2sm);
  itti_msg->is_n2sm_set = true;
  itti_msg->pdu_session_id =
      (uint8_t) n1N2MessageTransferReqData.getPduSessionId();
  itti_msg->n2sm_info_type = n1N2MessageTransferReqData.getN2InfoContainer()
                                 .getSmInfo()
                                 .getN2InfoContent()
                                 .getNgapIeType()
                                 .get_value();

  // For Paging
  if (n1N2MessageTransferReqData.ppiIsSet()) {
    itti_msg->is_ppi_set = true;
    itti_msg->ppi        = n1N2MessageTransferReqData.getPpi();
    response_json["cause"] =
        n1_n2_message_transfer_cause_e2str[ATTEMPTING_TO_REACH_UE];
    code = Pistache::Http::Code::Accepted;
  } else {
    itti_msg->is_ppi_set = false;
  }

  // Send response to the NF Service Consumer (e.g., SMF)
  response.send(code, response_json.dump().c_str());

  // Process N1N2 Message Transfer Request
  int ret = itti_inst->send_msg(itti_msg);
  if (0 != ret) {
    Logger::amf_server().error(
        "Could not send ITTI message %s to task TASK_AMF_N2",
        itti_msg->get_msg_name());
  }

  bdestroy_wrapper(&n1sm);
  bdestroy_wrapper(&n2sm);
}

}  // namespace api
}  // namespace amf
}  // namespace oai
