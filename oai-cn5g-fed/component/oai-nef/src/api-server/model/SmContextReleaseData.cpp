/**
 * Nnef_SMContext
 * Nnef SMContext Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SmContextReleaseData.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

SmContextReleaseData::SmContextReleaseData() {}

void SmContextReleaseData::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool SmContextReleaseData::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SmContextReleaseData::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "SmContextReleaseData" : pathPrefix;

  return success;
}

bool SmContextReleaseData::operator==(const SmContextReleaseData& rhs) const {
  return

      (getCause() == rhs.getCause())

          ;
}

bool SmContextReleaseData::operator!=(const SmContextReleaseData& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SmContextReleaseData& o) {
  j          = nlohmann::json();
  j["cause"] = o.m_Cause;
}

void from_json(const nlohmann::json& j, SmContextReleaseData& o) {
  j.at("cause").get_to(o.m_Cause);
}

ReleaseCause SmContextReleaseData::getCause() const {
  return m_Cause;
}
void SmContextReleaseData::setCause(ReleaseCause const& value) {
  m_Cause = value;
}

}  // namespace oai::nef::model
