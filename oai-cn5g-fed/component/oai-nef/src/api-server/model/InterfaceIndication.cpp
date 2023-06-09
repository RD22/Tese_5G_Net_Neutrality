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

#include "InterfaceIndication.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

InterfaceIndication::InterfaceIndication() {}

void InterfaceIndication::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool InterfaceIndication::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool InterfaceIndication::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "InterfaceIndication" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool InterfaceIndication::operator==(const InterfaceIndication& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool InterfaceIndication::operator!=(const InterfaceIndication& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const InterfaceIndication& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, InterfaceIndication& o) {
  from_json(j, o.m_value);
}

InterfaceIndication_anyOf InterfaceIndication::getValue() const {
  return m_value;
}

void InterfaceIndication::setValue(InterfaceIndication_anyOf value) {
  m_value = value;
}

InterfaceIndication_anyOf::eInterfaceIndication_anyOf
InterfaceIndication::getEnumValue() const {
  return m_value.getValue();
}

void InterfaceIndication::setEnumValue(
    InterfaceIndication_anyOf::eInterfaceIndication_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::nef::model
