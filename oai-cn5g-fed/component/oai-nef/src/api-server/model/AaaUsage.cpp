/**
 * 3gpp-5glan-pp
 * API for 5G LAN Parameter Provision. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AaaUsage.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

AaaUsage::AaaUsage() {}

void AaaUsage::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool AaaUsage::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool AaaUsage::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "AaaUsage" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool AaaUsage::operator==(const AaaUsage& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool AaaUsage::operator!=(const AaaUsage& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AaaUsage& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, AaaUsage& o) {
  from_json(j, o.m_value);
}

AaaUsage_anyOf AaaUsage::getValue() const {
  return m_value;
}

void AaaUsage::setValue(AaaUsage_anyOf value) {
  m_value = value;
}

AaaUsage_anyOf::eAaaUsage_anyOf AaaUsage::getEnumValue() const {
  return m_value.getValue();
}

void AaaUsage::setEnumValue(AaaUsage_anyOf::eAaaUsage_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::nef::model
