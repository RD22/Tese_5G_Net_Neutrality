/**
 * Nnef_EventExposure
 * NEF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "RmState.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

RmState::RmState() {}

void RmState::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool RmState::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool RmState::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "RmState" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool RmState::operator==(const RmState& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool RmState::operator!=(const RmState& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const RmState& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, RmState& o) {
  from_json(j, o.m_value);
}

RmState_anyOf RmState::getValue() const {
  return m_value;
}

void RmState::setValue(RmState_anyOf value) {
  m_value = value;
}

RmState_anyOf::eRmState_anyOf RmState::getEnumValue() const {
  return m_value.getValue();
}

void RmState::setEnumValue(RmState_anyOf::eRmState_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::nef::model
