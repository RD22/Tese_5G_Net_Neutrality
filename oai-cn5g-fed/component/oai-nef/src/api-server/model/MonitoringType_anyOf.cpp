/**
 * 3gpp-monitoring-event
 * API for Monitoring Event. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MonitoringType_anyOf.h"

#include <sstream>
#include <stdexcept>

#include "Helpers.h"

namespace oai::nef::model {

MonitoringType_anyOf::MonitoringType_anyOf() {}

void MonitoringType_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool MonitoringType_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool MonitoringType_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "MonitoringType_anyOf" : pathPrefix;

  if (m_value == MonitoringType_anyOf::eMonitoringType_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool MonitoringType_anyOf::operator==(const MonitoringType_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool MonitoringType_anyOf::operator!=(const MonitoringType_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const MonitoringType_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case MonitoringType_anyOf::eMonitoringType_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case MonitoringType_anyOf::eMonitoringType_anyOf::LOSS_OF_CONNECTIVITY:
      j = "LOSS_OF_CONNECTIVITY";
      break;
    case MonitoringType_anyOf::eMonitoringType_anyOf::UE_REACHABILITY:
      j = "UE_REACHABILITY";
      break;
    case MonitoringType_anyOf::eMonitoringType_anyOf::LOCATION_REPORTING:
      j = "LOCATION_REPORTING";
      break;
    case MonitoringType_anyOf::eMonitoringType_anyOf::
        CHANGE_OF_IMSI_IMEI_ASSOCIATION:
      j = "CHANGE_OF_IMSI_IMEI_ASSOCIATION";
      break;
    case MonitoringType_anyOf::eMonitoringType_anyOf::ROAMING_STATUS:
      j = "ROAMING_STATUS";
      break;
    case MonitoringType_anyOf::eMonitoringType_anyOf::COMMUNICATION_FAILURE:
      j = "COMMUNICATION_FAILURE";
      break;
    case MonitoringType_anyOf::eMonitoringType_anyOf::
        AVAILABILITY_AFTER_DDN_FAILURE:
      j = "AVAILABILITY_AFTER_DDN_FAILURE";
      break;
    case MonitoringType_anyOf::eMonitoringType_anyOf::NUMBER_OF_UES_IN_AN_AREA:
      j = "NUMBER_OF_UES_IN_AN_AREA";
      break;
    case MonitoringType_anyOf::eMonitoringType_anyOf::PDN_CONNECTIVITY_STATUS:
      j = "PDN_CONNECTIVITY_STATUS";
      break;
    case MonitoringType_anyOf::eMonitoringType_anyOf::
        DOWNLINK_DATA_DELIVERY_STATUS:
      j = "DOWNLINK_DATA_DELIVERY_STATUS";
      break;
    case MonitoringType_anyOf::eMonitoringType_anyOf::API_SUPPORT_CAPABILITY:
      j = "API_SUPPORT_CAPABILITY";
      break;
    case MonitoringType_anyOf::eMonitoringType_anyOf::NUM_OF_REGD_UES:
      j = "NUM_OF_REGD_UES";
      break;
    case MonitoringType_anyOf::eMonitoringType_anyOf::NUM_OF_ESTD_PDU_SESSIONS:
      j = "NUM_OF_ESTD_PDU_SESSIONS";
      break;
    case MonitoringType_anyOf::eMonitoringType_anyOf::AREA_OF_INTEREST:
      j = "AREA_OF_INTEREST";
      break;
  }
}

void from_json(const nlohmann::json& j, MonitoringType_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "LOSS_OF_CONNECTIVITY") {
    o.setValue(
        MonitoringType_anyOf::eMonitoringType_anyOf::LOSS_OF_CONNECTIVITY);
  } else if (s == "UE_REACHABILITY") {
    o.setValue(MonitoringType_anyOf::eMonitoringType_anyOf::UE_REACHABILITY);
  } else if (s == "LOCATION_REPORTING") {
    o.setValue(MonitoringType_anyOf::eMonitoringType_anyOf::LOCATION_REPORTING);
  } else if (s == "CHANGE_OF_IMSI_IMEI_ASSOCIATION") {
    o.setValue(MonitoringType_anyOf::eMonitoringType_anyOf::
                   CHANGE_OF_IMSI_IMEI_ASSOCIATION);
  } else if (s == "ROAMING_STATUS") {
    o.setValue(MonitoringType_anyOf::eMonitoringType_anyOf::ROAMING_STATUS);
  } else if (s == "COMMUNICATION_FAILURE") {
    o.setValue(
        MonitoringType_anyOf::eMonitoringType_anyOf::COMMUNICATION_FAILURE);
  } else if (s == "AVAILABILITY_AFTER_DDN_FAILURE") {
    o.setValue(MonitoringType_anyOf::eMonitoringType_anyOf::
                   AVAILABILITY_AFTER_DDN_FAILURE);
  } else if (s == "NUMBER_OF_UES_IN_AN_AREA") {
    o.setValue(
        MonitoringType_anyOf::eMonitoringType_anyOf::NUMBER_OF_UES_IN_AN_AREA);
  } else if (s == "PDN_CONNECTIVITY_STATUS") {
    o.setValue(
        MonitoringType_anyOf::eMonitoringType_anyOf::PDN_CONNECTIVITY_STATUS);
  } else if (s == "DOWNLINK_DATA_DELIVERY_STATUS") {
    o.setValue(MonitoringType_anyOf::eMonitoringType_anyOf::
                   DOWNLINK_DATA_DELIVERY_STATUS);
  } else if (s == "API_SUPPORT_CAPABILITY") {
    o.setValue(
        MonitoringType_anyOf::eMonitoringType_anyOf::API_SUPPORT_CAPABILITY);
  } else if (s == "NUM_OF_REGD_UES") {
    o.setValue(MonitoringType_anyOf::eMonitoringType_anyOf::NUM_OF_REGD_UES);
  } else if (s == "NUM_OF_ESTD_PDU_SESSIONS") {
    o.setValue(
        MonitoringType_anyOf::eMonitoringType_anyOf::NUM_OF_ESTD_PDU_SESSIONS);
  } else if (s == "AREA_OF_INTEREST") {
    o.setValue(MonitoringType_anyOf::eMonitoringType_anyOf::AREA_OF_INTEREST);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " MonitoringType_anyOf::eMonitoringType_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

MonitoringType_anyOf::eMonitoringType_anyOf MonitoringType_anyOf::getValue()
    const {
  return m_value;
}
void MonitoringType_anyOf::setValue(
    MonitoringType_anyOf::eMonitoringType_anyOf value) {
  m_value = value;
}

}  // namespace oai::nef::model
