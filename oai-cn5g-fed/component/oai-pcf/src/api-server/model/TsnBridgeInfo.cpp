/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2020, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1.alpha-5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TsnBridgeInfo.h"
#include "Helpers.h"

#include <sstream>

namespace oai {
namespace pcf {
namespace model {

TsnBridgeInfo::TsnBridgeInfo() {
  m_BridgeName         = "";
  m_BridgeNameIsSet    = false;
  m_BridgeMac          = "";
  m_BridgeMacIsSet     = false;
  m_NwttPortsIsSet     = false;
  m_DsttPortIsSet      = false;
  m_DsttResidTime      = 0;
  m_DsttResidTimeIsSet = false;
}

void TsnBridgeInfo::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    //        throw
    //        org::openapitools::server::helpers::ValidationException(msg.str());
  }
}

bool TsnBridgeInfo::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool TsnBridgeInfo::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "TsnBridgeInfo" : pathPrefix;
  /*
  if (bridgeMacIsSet()) {
    const std::string& value           = m_BridgeMac;
    const std::string currentValuePath = _pathPrefix + ".bridgeMac";
  }
  */
  if (nwttPortsIsSet()) {
    const std::vector<TsnPortIdentifier>& value = m_NwttPorts;
    const std::string currentValuePath          = _pathPrefix + ".nwttPorts";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    /*
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const TsnPortIdentifier& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".nwttPorts") && success;

        i++;
      }
    }
    */
  }

  if (dsttResidTimeIsSet()) {
    const int32_t& value               = m_DsttResidTime;
    const std::string currentValuePath = _pathPrefix + ".dsttResidTime";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
  }

  return success;
}

bool TsnBridgeInfo::operator==(const TsnBridgeInfo& rhs) const {
  return

      ((!bridgeNameIsSet() && !rhs.bridgeNameIsSet()) ||
       (bridgeNameIsSet() && rhs.bridgeNameIsSet() &&
        getBridgeName() == rhs.getBridgeName())) &&

      ((!bridgeMacIsSet() && !rhs.bridgeMacIsSet()) ||
       (bridgeMacIsSet() && rhs.bridgeMacIsSet() &&
        getBridgeMac() == rhs.getBridgeMac())) &&

      ((!nwttPortsIsSet() && !rhs.nwttPortsIsSet()) ||
       (nwttPortsIsSet() && rhs.nwttPortsIsSet() &&
        getNwttPorts() == rhs.getNwttPorts())) &&

      ((!dsttPortIsSet() && !rhs.dsttPortIsSet()) ||
       (dsttPortIsSet() && rhs.dsttPortIsSet() &&
        getDsttPort() == rhs.getDsttPort())) &&

      ((!dsttResidTimeIsSet() && !rhs.dsttResidTimeIsSet()) ||
       (dsttResidTimeIsSet() && rhs.dsttResidTimeIsSet() &&
        getDsttResidTime() == rhs.getDsttResidTime()))

          ;
}

bool TsnBridgeInfo::operator!=(const TsnBridgeInfo& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const TsnBridgeInfo& o) {
  j = nlohmann::json();
  if (o.bridgeNameIsSet()) j["bridgeName"] = o.m_BridgeName;
  if (o.bridgeMacIsSet()) j["bridgeMac"] = o.m_BridgeMac;
  if (o.nwttPortsIsSet() || !o.m_NwttPorts.empty())
    j["nwttPorts"] = o.m_NwttPorts;
  if (o.dsttPortIsSet()) j["dsttPort"] = o.m_DsttPort;
  if (o.dsttResidTimeIsSet()) j["dsttResidTime"] = o.m_DsttResidTime;
}

void from_json(const nlohmann::json& j, TsnBridgeInfo& o) {
  if (j.find("bridgeName") != j.end()) {
    j.at("bridgeName").get_to(o.m_BridgeName);
    o.m_BridgeNameIsSet = true;
  }
  if (j.find("bridgeMac") != j.end()) {
    j.at("bridgeMac").get_to(o.m_BridgeMac);
    o.m_BridgeMacIsSet = true;
  }
  if (j.find("nwttPorts") != j.end()) {
    j.at("nwttPorts").get_to(o.m_NwttPorts);
    o.m_NwttPortsIsSet = true;
  }
  if (j.find("dsttPort") != j.end()) {
    j.at("dsttPort").get_to(o.m_DsttPort);
    o.m_DsttPortIsSet = true;
  }
  if (j.find("dsttResidTime") != j.end()) {
    j.at("dsttResidTime").get_to(o.m_DsttResidTime);
    o.m_DsttResidTimeIsSet = true;
  }
}

std::string TsnBridgeInfo::getBridgeName() const {
  return m_BridgeName;
}
void TsnBridgeInfo::setBridgeName(std::string const& value) {
  m_BridgeName      = value;
  m_BridgeNameIsSet = true;
}
bool TsnBridgeInfo::bridgeNameIsSet() const {
  return m_BridgeNameIsSet;
}
void TsnBridgeInfo::unsetBridgeName() {
  m_BridgeNameIsSet = false;
}
std::string TsnBridgeInfo::getBridgeMac() const {
  return m_BridgeMac;
}
void TsnBridgeInfo::setBridgeMac(std::string const& value) {
  m_BridgeMac      = value;
  m_BridgeMacIsSet = true;
}
bool TsnBridgeInfo::bridgeMacIsSet() const {
  return m_BridgeMacIsSet;
}
void TsnBridgeInfo::unsetBridgeMac() {
  m_BridgeMacIsSet = false;
}
std::vector<TsnPortIdentifier> TsnBridgeInfo::getNwttPorts() const {
  return m_NwttPorts;
}
void TsnBridgeInfo::setNwttPorts(std::vector<TsnPortIdentifier> const& value) {
  m_NwttPorts      = value;
  m_NwttPortsIsSet = true;
}
bool TsnBridgeInfo::nwttPortsIsSet() const {
  return m_NwttPortsIsSet;
}
void TsnBridgeInfo::unsetNwttPorts() {
  m_NwttPortsIsSet = false;
}
TsnPortIdentifier TsnBridgeInfo::getDsttPort() const {
  return m_DsttPort;
}
void TsnBridgeInfo::setDsttPort(TsnPortIdentifier const& value) {
  m_DsttPort      = value;
  m_DsttPortIsSet = true;
}
bool TsnBridgeInfo::dsttPortIsSet() const {
  return m_DsttPortIsSet;
}
void TsnBridgeInfo::unsetDsttPort() {
  m_DsttPortIsSet = false;
}
int32_t TsnBridgeInfo::getDsttResidTime() const {
  return m_DsttResidTime;
}
void TsnBridgeInfo::setDsttResidTime(int32_t const value) {
  m_DsttResidTime      = value;
  m_DsttResidTimeIsSet = true;
}
bool TsnBridgeInfo::dsttResidTimeIsSet() const {
  return m_DsttResidTimeIsSet;
}
void TsnBridgeInfo::unsetDsttResidTime() {
  m_DsttResidTimeIsSet = false;
}

}  // namespace model
}  // namespace pcf
}  // namespace oai
