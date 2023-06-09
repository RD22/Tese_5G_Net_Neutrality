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

#include "ExceptionInfo.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

ExceptionInfo::ExceptionInfo() {
  m_IpTrafficFilterIsSet  = false;
  m_EthTrafficFilterIsSet = false;
  m_ExcepsIsSet           = false;
}

void ExceptionInfo::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool ExceptionInfo::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ExceptionInfo::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ExceptionInfo" : pathPrefix;

  if (excepsIsSet()) {
    const std::vector<Exception>& value = m_Exceps;
    const std::string currentValuePath  = _pathPrefix + ".exceps";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const Exception& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".exceps") && success;

        i++;
      }
    }
  }

  return success;
}

bool ExceptionInfo::operator==(const ExceptionInfo& rhs) const {
  return

      ((!ipTrafficFilterIsSet() && !rhs.ipTrafficFilterIsSet()) ||
       (ipTrafficFilterIsSet() && rhs.ipTrafficFilterIsSet() &&
        getIpTrafficFilter() == rhs.getIpTrafficFilter())) &&

      ((!ethTrafficFilterIsSet() && !rhs.ethTrafficFilterIsSet()) ||
       (ethTrafficFilterIsSet() && rhs.ethTrafficFilterIsSet() &&
        getEthTrafficFilter() == rhs.getEthTrafficFilter())) &&

      ((!excepsIsSet() && !rhs.excepsIsSet()) ||
       (excepsIsSet() && rhs.excepsIsSet() && getExceps() == rhs.getExceps()))

          ;
}

bool ExceptionInfo::operator!=(const ExceptionInfo& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ExceptionInfo& o) {
  j = nlohmann::json();
  if (o.ipTrafficFilterIsSet()) j["ipTrafficFilter"] = o.m_IpTrafficFilter;
  if (o.ethTrafficFilterIsSet()) j["ethTrafficFilter"] = o.m_EthTrafficFilter;
  if (o.excepsIsSet() || !o.m_Exceps.empty()) j["exceps"] = o.m_Exceps;
}

void from_json(const nlohmann::json& j, ExceptionInfo& o) {
  if (j.find("ipTrafficFilter") != j.end()) {
    j.at("ipTrafficFilter").get_to(o.m_IpTrafficFilter);
    o.m_IpTrafficFilterIsSet = true;
  }
  if (j.find("ethTrafficFilter") != j.end()) {
    j.at("ethTrafficFilter").get_to(o.m_EthTrafficFilter);
    o.m_EthTrafficFilterIsSet = true;
  }
  if (j.find("exceps") != j.end()) {
    j.at("exceps").get_to(o.m_Exceps);
    o.m_ExcepsIsSet = true;
  }
}

FlowInfo ExceptionInfo::getIpTrafficFilter() const {
  return m_IpTrafficFilter;
}
void ExceptionInfo::setIpTrafficFilter(FlowInfo const& value) {
  m_IpTrafficFilter      = value;
  m_IpTrafficFilterIsSet = true;
}
bool ExceptionInfo::ipTrafficFilterIsSet() const {
  return m_IpTrafficFilterIsSet;
}
void ExceptionInfo::unsetIpTrafficFilter() {
  m_IpTrafficFilterIsSet = false;
}
EthFlowDescription ExceptionInfo::getEthTrafficFilter() const {
  return m_EthTrafficFilter;
}
void ExceptionInfo::setEthTrafficFilter(EthFlowDescription const& value) {
  m_EthTrafficFilter      = value;
  m_EthTrafficFilterIsSet = true;
}
bool ExceptionInfo::ethTrafficFilterIsSet() const {
  return m_EthTrafficFilterIsSet;
}
void ExceptionInfo::unsetEthTrafficFilter() {
  m_EthTrafficFilterIsSet = false;
}
std::vector<Exception> ExceptionInfo::getExceps() const {
  return m_Exceps;
}
void ExceptionInfo::setExceps(std::vector<Exception> const& value) {
  m_Exceps      = value;
  m_ExcepsIsSet = true;
}
bool ExceptionInfo::excepsIsSet() const {
  return m_ExcepsIsSet;
}
void ExceptionInfo::unsetExceps() {
  m_ExcepsIsSet = false;
}

}  // namespace oai::nef::model
