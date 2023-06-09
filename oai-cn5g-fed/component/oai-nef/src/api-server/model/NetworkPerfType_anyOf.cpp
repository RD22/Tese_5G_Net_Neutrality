/**
 * 3gpp-analyticsexposure
 * API for Analytics Exposure. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NetworkPerfType_anyOf.h"

#include <sstream>
#include <stdexcept>

#include "Helpers.h"

namespace oai::nef::model {

NetworkPerfType_anyOf::NetworkPerfType_anyOf() {}

void NetworkPerfType_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool NetworkPerfType_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool NetworkPerfType_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "NetworkPerfType_anyOf" : pathPrefix;

  if (m_value == NetworkPerfType_anyOf::eNetworkPerfType_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool NetworkPerfType_anyOf::operator==(const NetworkPerfType_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool NetworkPerfType_anyOf::operator!=(const NetworkPerfType_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NetworkPerfType_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case NetworkPerfType_anyOf::eNetworkPerfType_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case NetworkPerfType_anyOf::eNetworkPerfType_anyOf::GNB_ACTIVE_RATIO:
      j = "GNB_ACTIVE_RATIO";
      break;
    case NetworkPerfType_anyOf::eNetworkPerfType_anyOf::GNB_COMPUTING_USAGE:
      j = "GNB_COMPUTING_USAGE";
      break;
    case NetworkPerfType_anyOf::eNetworkPerfType_anyOf::GNB_MEMORY_USAGE:
      j = "GNB_MEMORY_USAGE";
      break;
    case NetworkPerfType_anyOf::eNetworkPerfType_anyOf::GNB_DISK_USAGE:
      j = "GNB_DISK_USAGE";
      break;
    case NetworkPerfType_anyOf::eNetworkPerfType_anyOf::NUM_OF_UE:
      j = "NUM_OF_UE";
      break;
    case NetworkPerfType_anyOf::eNetworkPerfType_anyOf::SESS_SUCC_RATIO:
      j = "SESS_SUCC_RATIO";
      break;
    case NetworkPerfType_anyOf::eNetworkPerfType_anyOf::HO_SUCC_RATIO:
      j = "HO_SUCC_RATIO";
      break;
  }
}

void from_json(const nlohmann::json& j, NetworkPerfType_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "GNB_ACTIVE_RATIO") {
    o.setValue(NetworkPerfType_anyOf::eNetworkPerfType_anyOf::GNB_ACTIVE_RATIO);
  } else if (s == "GNB_COMPUTING_USAGE") {
    o.setValue(
        NetworkPerfType_anyOf::eNetworkPerfType_anyOf::GNB_COMPUTING_USAGE);
  } else if (s == "GNB_MEMORY_USAGE") {
    o.setValue(NetworkPerfType_anyOf::eNetworkPerfType_anyOf::GNB_MEMORY_USAGE);
  } else if (s == "GNB_DISK_USAGE") {
    o.setValue(NetworkPerfType_anyOf::eNetworkPerfType_anyOf::GNB_DISK_USAGE);
  } else if (s == "NUM_OF_UE") {
    o.setValue(NetworkPerfType_anyOf::eNetworkPerfType_anyOf::NUM_OF_UE);
  } else if (s == "SESS_SUCC_RATIO") {
    o.setValue(NetworkPerfType_anyOf::eNetworkPerfType_anyOf::SESS_SUCC_RATIO);
  } else if (s == "HO_SUCC_RATIO") {
    o.setValue(NetworkPerfType_anyOf::eNetworkPerfType_anyOf::HO_SUCC_RATIO);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " NetworkPerfType_anyOf::eNetworkPerfType_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

NetworkPerfType_anyOf::eNetworkPerfType_anyOf NetworkPerfType_anyOf::getValue()
    const {
  return m_value;
}
void NetworkPerfType_anyOf::setValue(
    NetworkPerfType_anyOf::eNetworkPerfType_anyOf value) {
  m_value = value;
}

}  // namespace oai::nef::model
