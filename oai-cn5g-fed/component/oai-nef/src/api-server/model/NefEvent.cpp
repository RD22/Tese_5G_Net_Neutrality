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

#include "NefEvent.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

NefEvent::NefEvent() {}

void NefEvent::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool NefEvent::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool NefEvent::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "NefEvent" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool NefEvent::operator==(const NefEvent& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool NefEvent::operator!=(const NefEvent& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NefEvent& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, NefEvent& o) {
  from_json(j, o.m_value);
}

NefEvent_anyOf NefEvent::getValue() const {
  return m_value;
}

void NefEvent::setValue(NefEvent_anyOf value) {
  m_value = value;
}

NefEvent_anyOf::eNefEvent_anyOf NefEvent::getEnumValue() const {
  return m_value.getValue();
}

void NefEvent::setEnumValue(NefEvent_anyOf::eNefEvent_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::nef::model
