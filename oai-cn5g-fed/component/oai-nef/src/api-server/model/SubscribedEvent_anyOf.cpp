/**
 * 3gpp-traffic-influence
 * API for AF traffic influence © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SubscribedEvent_anyOf.h"

#include <sstream>
#include <stdexcept>

#include "Helpers.h"

namespace oai::nef::model {

SubscribedEvent_anyOf::SubscribedEvent_anyOf() {}

void SubscribedEvent_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool SubscribedEvent_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SubscribedEvent_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "SubscribedEvent_anyOf" : pathPrefix;

  if (m_value == SubscribedEvent_anyOf::eSubscribedEvent_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool SubscribedEvent_anyOf::operator==(const SubscribedEvent_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool SubscribedEvent_anyOf::operator!=(const SubscribedEvent_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SubscribedEvent_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case SubscribedEvent_anyOf::eSubscribedEvent_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case SubscribedEvent_anyOf::eSubscribedEvent_anyOf::UP_PATH_CHANGE:
      j = "UP_PATH_CHANGE";
      break;
  }
}

void from_json(const nlohmann::json& j, SubscribedEvent_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "UP_PATH_CHANGE") {
    o.setValue(SubscribedEvent_anyOf::eSubscribedEvent_anyOf::UP_PATH_CHANGE);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " SubscribedEvent_anyOf::eSubscribedEvent_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

SubscribedEvent_anyOf::eSubscribedEvent_anyOf SubscribedEvent_anyOf::getValue()
    const {
  return m_value;
}
void SubscribedEvent_anyOf::setValue(
    SubscribedEvent_anyOf::eSubscribedEvent_anyOf value) {
  m_value = value;
}

}  // namespace oai::nef::model
