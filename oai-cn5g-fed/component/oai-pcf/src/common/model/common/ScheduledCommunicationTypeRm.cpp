/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2020, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ScheduledCommunicationTypeRm.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

ScheduledCommunicationTypeRm::ScheduledCommunicationTypeRm() {}

void ScheduledCommunicationTypeRm::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool ScheduledCommunicationTypeRm::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ScheduledCommunicationTypeRm::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ScheduledCommunicationTypeRm" : pathPrefix;

  return success;
}

bool ScheduledCommunicationTypeRm::operator==(
    const ScheduledCommunicationTypeRm& rhs) const {
  return

      ;
}

bool ScheduledCommunicationTypeRm::operator!=(
    const ScheduledCommunicationTypeRm& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ScheduledCommunicationTypeRm& o) {
  j = nlohmann::json();
}

void from_json(const nlohmann::json& j, ScheduledCommunicationTypeRm& o) {}

}  // namespace oai::model::common
