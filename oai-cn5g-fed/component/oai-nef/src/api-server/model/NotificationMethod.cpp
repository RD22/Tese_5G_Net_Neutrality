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

#include "NotificationMethod.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

NotificationMethod::NotificationMethod() {}

void NotificationMethod::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool NotificationMethod::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool NotificationMethod::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "NotificationMethod" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool NotificationMethod::operator==(const NotificationMethod& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool NotificationMethod::operator!=(const NotificationMethod& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NotificationMethod& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, NotificationMethod& o) {
  from_json(j, o.m_value);
}

NotificationMethod_anyOf NotificationMethod::getValue() const {
  return m_value;
}

void NotificationMethod::setValue(NotificationMethod_anyOf value) {
  m_value = value;
}

NotificationMethod_anyOf::eNotificationMethod_anyOf
NotificationMethod::getEnumValue() const {
  return m_value.getValue();
}

void NotificationMethod::setEnumValue(
    NotificationMethod_anyOf::eNotificationMethod_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::nef::model
