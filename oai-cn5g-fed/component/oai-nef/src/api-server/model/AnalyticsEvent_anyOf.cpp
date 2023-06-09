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

#include "AnalyticsEvent_anyOf.h"

#include <sstream>
#include <stdexcept>

#include "Helpers.h"

namespace oai::nef::model {

AnalyticsEvent_anyOf::AnalyticsEvent_anyOf() {}

void AnalyticsEvent_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool AnalyticsEvent_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool AnalyticsEvent_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "AnalyticsEvent_anyOf" : pathPrefix;

  if (m_value == AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool AnalyticsEvent_anyOf::operator==(const AnalyticsEvent_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool AnalyticsEvent_anyOf::operator!=(const AnalyticsEvent_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AnalyticsEvent_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf::UE_MOBILITY:
      j = "UE_MOBILITY";
      break;
    case AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf::UE_COMM:
      j = "UE_COMM";
      break;
    case AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf::ABNORMAL_BEHAVIOR:
      j = "ABNORMAL_BEHAVIOR";
      break;
    case AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf::CONGESTION:
      j = "CONGESTION";
      break;
    case AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf::NETWORK_PERFORMANCE:
      j = "NETWORK_PERFORMANCE";
      break;
    case AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf::QOS_SUSTAINABILITY:
      j = "QOS_SUSTAINABILITY";
      break;
  }
}

void from_json(const nlohmann::json& j, AnalyticsEvent_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "UE_MOBILITY") {
    o.setValue(AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf::UE_MOBILITY);
  } else if (s == "UE_COMM") {
    o.setValue(AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf::UE_COMM);
  } else if (s == "ABNORMAL_BEHAVIOR") {
    o.setValue(AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf::ABNORMAL_BEHAVIOR);
  } else if (s == "CONGESTION") {
    o.setValue(AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf::CONGESTION);
  } else if (s == "NETWORK_PERFORMANCE") {
    o.setValue(
        AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf::NETWORK_PERFORMANCE);
  } else if (s == "QOS_SUSTAINABILITY") {
    o.setValue(AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf::QOS_SUSTAINABILITY);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf AnalyticsEvent_anyOf::getValue()
    const {
  return m_value;
}
void AnalyticsEvent_anyOf::setValue(
    AnalyticsEvent_anyOf::eAnalyticsEvent_anyOf value) {
  m_value = value;
}

}  // namespace oai::nef::model
