/**
 * 3gpp-nidd-configuration-trigger
 * API for NIDD Configuration Trigger. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NiddConfigurationTrigger.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

NiddConfigurationTrigger::NiddConfigurationTrigger() {
  m_AfId     = "";
  m_NefId    = "";
  m_Gpsi     = "";
  m_SuppFeat = "";
}

void NiddConfigurationTrigger::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool NiddConfigurationTrigger::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool NiddConfigurationTrigger::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "NiddConfigurationTrigger" : pathPrefix;

  /* Gpsi */ {
    const std::string& value           = m_Gpsi;
    const std::string currentValuePath = _pathPrefix + ".gpsi";
  }

  /* SuppFeat */ {
    const std::string& value           = m_SuppFeat;
    const std::string currentValuePath = _pathPrefix + ".suppFeat";
  }

  return success;
}

bool NiddConfigurationTrigger::operator==(
    const NiddConfigurationTrigger& rhs) const {
  return

      (getAfId() == rhs.getAfId()) &&

      (getNefId() == rhs.getNefId()) &&

      (getGpsi() == rhs.getGpsi()) &&

      (getSuppFeat() == rhs.getSuppFeat())

          ;
}

bool NiddConfigurationTrigger::operator!=(
    const NiddConfigurationTrigger& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NiddConfigurationTrigger& o) {
  j             = nlohmann::json();
  j["afId"]     = o.m_AfId;
  j["nefId"]    = o.m_NefId;
  j["gpsi"]     = o.m_Gpsi;
  j["suppFeat"] = o.m_SuppFeat;
}

void from_json(const nlohmann::json& j, NiddConfigurationTrigger& o) {
  j.at("afId").get_to(o.m_AfId);
  j.at("nefId").get_to(o.m_NefId);
  j.at("gpsi").get_to(o.m_Gpsi);
  j.at("suppFeat").get_to(o.m_SuppFeat);
}

std::string NiddConfigurationTrigger::getAfId() const {
  return m_AfId;
}
void NiddConfigurationTrigger::setAfId(std::string const& value) {
  m_AfId = value;
}
std::string NiddConfigurationTrigger::getNefId() const {
  return m_NefId;
}
void NiddConfigurationTrigger::setNefId(std::string const& value) {
  m_NefId = value;
}
std::string NiddConfigurationTrigger::getGpsi() const {
  return m_Gpsi;
}
void NiddConfigurationTrigger::setGpsi(std::string const& value) {
  m_Gpsi = value;
}
std::string NiddConfigurationTrigger::getSuppFeat() const {
  return m_SuppFeat;
}
void NiddConfigurationTrigger::setSuppFeat(std::string const& value) {
  m_SuppFeat = value;
}

}  // namespace oai::nef::model
