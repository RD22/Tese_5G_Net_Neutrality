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

#include "SACEventStatus.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

SACEventStatus::SACEventStatus() {
  m_ReachedNumUesIsSet     = false;
  m_ReachedNumPduSessIsSet = false;
}

void SACEventStatus::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool SACEventStatus::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SACEventStatus::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "SACEventStatus" : pathPrefix;

  return success;
}

bool SACEventStatus::operator==(const SACEventStatus& rhs) const {
  return

      ((!reachedNumUesIsSet() && !rhs.reachedNumUesIsSet()) ||
       (reachedNumUesIsSet() && rhs.reachedNumUesIsSet() &&
        getReachedNumUes() == rhs.getReachedNumUes())) &&

      ((!reachedNumPduSessIsSet() && !rhs.reachedNumPduSessIsSet()) ||
       (reachedNumPduSessIsSet() && rhs.reachedNumPduSessIsSet() &&
        getReachedNumPduSess() == rhs.getReachedNumPduSess()))

          ;
}

bool SACEventStatus::operator!=(const SACEventStatus& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SACEventStatus& o) {
  j = nlohmann::json();
  if (o.reachedNumUesIsSet()) j["reachedNumUes"] = o.m_ReachedNumUes;
  if (o.reachedNumPduSessIsSet())
    j["reachedNumPduSess"] = o.m_ReachedNumPduSess;
}

void from_json(const nlohmann::json& j, SACEventStatus& o) {
  if (j.find("reachedNumUes") != j.end()) {
    j.at("reachedNumUes").get_to(o.m_ReachedNumUes);
    o.m_ReachedNumUesIsSet = true;
  }
  if (j.find("reachedNumPduSess") != j.end()) {
    j.at("reachedNumPduSess").get_to(o.m_ReachedNumPduSess);
    o.m_ReachedNumPduSessIsSet = true;
  }
}

SACInfo SACEventStatus::getReachedNumUes() const {
  return m_ReachedNumUes;
}
void SACEventStatus::setReachedNumUes(SACInfo const& value) {
  m_ReachedNumUes      = value;
  m_ReachedNumUesIsSet = true;
}
bool SACEventStatus::reachedNumUesIsSet() const {
  return m_ReachedNumUesIsSet;
}
void SACEventStatus::unsetReachedNumUes() {
  m_ReachedNumUesIsSet = false;
}
SACInfo SACEventStatus::getReachedNumPduSess() const {
  return m_ReachedNumPduSess;
}
void SACEventStatus::setReachedNumPduSess(SACInfo const& value) {
  m_ReachedNumPduSess      = value;
  m_ReachedNumPduSessIsSet = true;
}
bool SACEventStatus::reachedNumPduSessIsSet() const {
  return m_ReachedNumPduSessIsSet;
}
void SACEventStatus::unsetReachedNumPduSess() {
  m_ReachedNumPduSessIsSet = false;
}

}  // namespace oai::nef::model
