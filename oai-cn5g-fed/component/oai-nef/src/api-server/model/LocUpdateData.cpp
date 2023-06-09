/**
 * 3gpp-mo-lcs-notify
 * API for UE updated location information notification. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "LocUpdateData.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

LocUpdateData::LocUpdateData() {
  m_Gpsi       = "";
  m_SvcId      = "";
  m_SvcIdIsSet = false;
  m_SuppFeat   = "";
}

void LocUpdateData::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool LocUpdateData::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool LocUpdateData::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "LocUpdateData" : pathPrefix;

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

bool LocUpdateData::operator==(const LocUpdateData& rhs) const {
  return

      (getGpsi() == rhs.getGpsi()) &&

      (getLocInfo() == rhs.getLocInfo()) &&

      (getLcsQosClass() == rhs.getLcsQosClass()) &&

      ((!svcIdIsSet() && !rhs.svcIdIsSet()) ||
       (svcIdIsSet() && rhs.svcIdIsSet() && getSvcId() == rhs.getSvcId())) &&

      (getSuppFeat() == rhs.getSuppFeat())

          ;
}

bool LocUpdateData::operator!=(const LocUpdateData& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const LocUpdateData& o) {
  j                = nlohmann::json();
  j["gpsi"]        = o.m_Gpsi;
  j["locInfo"]     = o.m_LocInfo;
  j["lcsQosClass"] = o.m_LcsQosClass;
  if (o.svcIdIsSet()) j["svcId"] = o.m_SvcId;
  j["suppFeat"] = o.m_SuppFeat;
}

void from_json(const nlohmann::json& j, LocUpdateData& o) {
  j.at("gpsi").get_to(o.m_Gpsi);
  j.at("locInfo").get_to(o.m_LocInfo);
  j.at("lcsQosClass").get_to(o.m_LcsQosClass);
  if (j.find("svcId") != j.end()) {
    j.at("svcId").get_to(o.m_SvcId);
    o.m_SvcIdIsSet = true;
  }
  j.at("suppFeat").get_to(o.m_SuppFeat);
}

std::string LocUpdateData::getGpsi() const {
  return m_Gpsi;
}
void LocUpdateData::setGpsi(std::string const& value) {
  m_Gpsi = value;
}
LocationInfo LocUpdateData::getLocInfo() const {
  return m_LocInfo;
}
void LocUpdateData::setLocInfo(LocationInfo const& value) {
  m_LocInfo = value;
}
LcsQosClass LocUpdateData::getLcsQosClass() const {
  return m_LcsQosClass;
}
void LocUpdateData::setLcsQosClass(LcsQosClass const& value) {
  m_LcsQosClass = value;
}
std::string LocUpdateData::getSvcId() const {
  return m_SvcId;
}
void LocUpdateData::setSvcId(std::string const& value) {
  m_SvcId      = value;
  m_SvcIdIsSet = true;
}
bool LocUpdateData::svcIdIsSet() const {
  return m_SvcIdIsSet;
}
void LocUpdateData::unsetSvcId() {
  m_SvcIdIsSet = false;
}
std::string LocUpdateData::getSuppFeat() const {
  return m_SuppFeat;
}
void LocUpdateData::setSuppFeat(std::string const& value) {
  m_SuppFeat = value;
}

}  // namespace oai::nef::model
