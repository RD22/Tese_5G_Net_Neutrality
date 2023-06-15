/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#ifndef _PDU_SESSION_RESOURCE_SETUP_ITEM_SU_REQ_H_
#define _PDU_SESSION_RESOURCE_SETUP_ITEM_SU_REQ_H_

#include "NAS-PDU.hpp"
#include "PDUSessionID.hpp"
#include "S-NSSAI.hpp"

#include <optional>

extern "C" {
#include "Ngap_PDUSessionResourceSetupItemSUReq.h"
}

namespace ngap {

class PDUSessionResourceSetupItemSUReq {
 public:
  PDUSessionResourceSetupItemSUReq();
  virtual ~PDUSessionResourceSetupItemSUReq();

  void set(
      const PDUSessionID& pdu_session_id, std::optional<NAS_PDU>& nas_pdu,
      const S_NSSAI& s_nssai,
      const OCTET_STRING_t& pdu_session_resource_setup_request_transfer);
  void get(
      PDUSessionID& pdu_session_id, std::optional<NAS_PDU>& nas_pdu,
      S_NSSAI& s_nssai,
      OCTET_STRING_t& pdu_session_resource_setup_request_transfer);

  bool encode(Ngap_PDUSessionResourceSetupItemSUReq_t*
                  pdu_session_resource_setup_item_su_req);
  bool decode(Ngap_PDUSessionResourceSetupItemSUReq_t*
                  pdu_session_resource_setup_item_su_req);

 private:
  PDUSessionID pdu_session_id_;                                 // Mandatory
  std::optional<NAS_PDU> nas_pdu_;                              // Optional
  S_NSSAI s_nssai_;                                             // Mandatory
  OCTET_STRING_t pdu_session_resource_setup_request_transfer_;  // Mandatory
};

}  // namespace ngap

#endif
