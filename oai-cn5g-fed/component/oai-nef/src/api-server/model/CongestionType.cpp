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

#include "CongestionType.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

CongestionType::CongestionType() {}

void CongestionType::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool CongestionType::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool CongestionType::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "CongestionType" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool CongestionType::operator==(const CongestionType& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool CongestionType::operator!=(const CongestionType& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CongestionType& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, CongestionType& o) {
  from_json(j, o.m_value);
}

CongestionType_anyOf CongestionType::getValue() const {
  return m_value;
}

void CongestionType::setValue(CongestionType_anyOf value) {
  m_value = value;
}

CongestionType_anyOf::eCongestionType_anyOf CongestionType::getEnumValue()
    const {
  return m_value.getValue();
}

void CongestionType::setEnumValue(
    CongestionType_anyOf::eCongestionType_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::nef::model
