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

#include "NetworkPerfType.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

NetworkPerfType::NetworkPerfType() {}

void NetworkPerfType::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool NetworkPerfType::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool NetworkPerfType::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "NetworkPerfType" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool NetworkPerfType::operator==(const NetworkPerfType& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool NetworkPerfType::operator!=(const NetworkPerfType& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NetworkPerfType& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, NetworkPerfType& o) {
  from_json(j, o.m_value);
}

NetworkPerfType_anyOf NetworkPerfType::getValue() const {
  return m_value;
}

void NetworkPerfType::setValue(NetworkPerfType_anyOf value) {
  m_value = value;
}

NetworkPerfType_anyOf::eNetworkPerfType_anyOf NetworkPerfType::getEnumValue()
    const {
  return m_value.getValue();
}

void NetworkPerfType::setEnumValue(
    NetworkPerfType_anyOf::eNetworkPerfType_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::nef::model
