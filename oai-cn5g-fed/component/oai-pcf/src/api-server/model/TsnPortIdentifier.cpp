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

#include "TsnPortIdentifier.h"
#include "Helpers.h"

#include <sstream>

namespace oai {
namespace pcf {
namespace model {

TsnPortIdentifier::TsnPortIdentifier() {
  m_PortMac         = "";
  m_PortNumber      = 0;
  m_PortNumberIsSet = false;
}

void TsnPortIdentifier::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    //        throw
    //        org::openapitools::server::helpers::ValidationException(msg.str());
  }
}

bool TsnPortIdentifier::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool TsnPortIdentifier::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "TsnPortIdentifier" : pathPrefix;
  /*
  // PortMac
  {
    const std::string& value           = m_PortMac;
    const std::string currentValuePath = _pathPrefix + ".portMac";
  }
  */
  if (portNumberIsSet()) {
    const int32_t& value               = m_PortNumber;
    const std::string currentValuePath = _pathPrefix + ".portNumber";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
  }

  return success;
}

bool TsnPortIdentifier::operator==(const TsnPortIdentifier& rhs) const {
  return

      (getPortMac() == rhs.getPortMac()) &&

      ((!portNumberIsSet() && !rhs.portNumberIsSet()) ||
       (portNumberIsSet() && rhs.portNumberIsSet() &&
        getPortNumber() == rhs.getPortNumber()))

          ;
}

bool TsnPortIdentifier::operator!=(const TsnPortIdentifier& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const TsnPortIdentifier& o) {
  j            = nlohmann::json();
  j["portMac"] = o.m_PortMac;
  if (o.portNumberIsSet()) j["portNumber"] = o.m_PortNumber;
}

void from_json(const nlohmann::json& j, TsnPortIdentifier& o) {
  j.at("portMac").get_to(o.m_PortMac);
  if (j.find("portNumber") != j.end()) {
    j.at("portNumber").get_to(o.m_PortNumber);
    o.m_PortNumberIsSet = true;
  }
}

std::string TsnPortIdentifier::getPortMac() const {
  return m_PortMac;
}
void TsnPortIdentifier::setPortMac(std::string const& value) {
  m_PortMac = value;
}
int32_t TsnPortIdentifier::getPortNumber() const {
  return m_PortNumber;
}
void TsnPortIdentifier::setPortNumber(int32_t const value) {
  m_PortNumber      = value;
  m_PortNumberIsSet = true;
}
bool TsnPortIdentifier::portNumberIsSet() const {
  return m_PortNumberIsSet;
}
void TsnPortIdentifier::unsetPortNumber() {
  m_PortNumberIsSet = false;
}

}  // namespace model
}  // namespace pcf
}  // namespace oai
