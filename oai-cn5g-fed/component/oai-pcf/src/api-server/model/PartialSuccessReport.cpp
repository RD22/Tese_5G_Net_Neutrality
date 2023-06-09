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

#include "PartialSuccessReport.h"
#include "Helpers.h"

#include <sstream>

namespace oai {
namespace pcf {
namespace model {

PartialSuccessReport::PartialSuccessReport() {
  m_RuleReportsIsSet     = false;
  m_SessRuleReportsIsSet = false;
  m_UeCampingRepIsSet    = false;
}

void PartialSuccessReport::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    //        throw
    //        org::openapitools::server::helpers::ValidationException(msg.str());
  }
}

bool PartialSuccessReport::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool PartialSuccessReport::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "PartialSuccessReport" : pathPrefix;

  if (ruleReportsIsSet()) {
    const std::vector<RuleReport>& value = m_RuleReports;
    const std::string currentValuePath   = _pathPrefix + ".ruleReports";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const RuleReport& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".ruleReports") && success;

        i++;
      }
    }
  }

  if (sessRuleReportsIsSet()) {
    const std::vector<SessionRuleReport>& value = m_SessRuleReports;
    const std::string currentValuePath = _pathPrefix + ".sessRuleReports";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const SessionRuleReport& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".sessRuleReports") &&
                  success;

        i++;
      }
    }
  }

  return success;
}

bool PartialSuccessReport::operator==(const PartialSuccessReport& rhs) const {
  return

      (getFailureCause() == rhs.getFailureCause()) &&

      ((!ruleReportsIsSet() && !rhs.ruleReportsIsSet()) ||
       (ruleReportsIsSet() && rhs.ruleReportsIsSet() &&
        getRuleReports() == rhs.getRuleReports())) &&

      ((!sessRuleReportsIsSet() && !rhs.sessRuleReportsIsSet()) ||
       (sessRuleReportsIsSet() && rhs.sessRuleReportsIsSet() &&
        getSessRuleReports() == rhs.getSessRuleReports())) &&

      ((!ueCampingRepIsSet() && !rhs.ueCampingRepIsSet()) ||
       (ueCampingRepIsSet() && rhs.ueCampingRepIsSet() &&
        getUeCampingRep() == rhs.getUeCampingRep()))

          ;
}

bool PartialSuccessReport::operator!=(const PartialSuccessReport& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PartialSuccessReport& o) {
  j                 = nlohmann::json();
  j["failureCause"] = o.m_FailureCause;
  if (o.ruleReportsIsSet() || !o.m_RuleReports.empty())
    j["ruleReports"] = o.m_RuleReports;
  if (o.sessRuleReportsIsSet() || !o.m_SessRuleReports.empty())
    j["sessRuleReports"] = o.m_SessRuleReports;
  if (o.ueCampingRepIsSet()) j["ueCampingRep"] = o.m_UeCampingRep;
}

void from_json(const nlohmann::json& j, PartialSuccessReport& o) {
  j.at("failureCause").get_to(o.m_FailureCause);
  if (j.find("ruleReports") != j.end()) {
    j.at("ruleReports").get_to(o.m_RuleReports);
    o.m_RuleReportsIsSet = true;
  }
  if (j.find("sessRuleReports") != j.end()) {
    j.at("sessRuleReports").get_to(o.m_SessRuleReports);
    o.m_SessRuleReportsIsSet = true;
  }
  if (j.find("ueCampingRep") != j.end()) {
    j.at("ueCampingRep").get_to(o.m_UeCampingRep);
    o.m_UeCampingRepIsSet = true;
  }
}

FailureCause PartialSuccessReport::getFailureCause() const {
  return m_FailureCause;
}
void PartialSuccessReport::setFailureCause(FailureCause const& value) {
  m_FailureCause = value;
}
std::vector<RuleReport> PartialSuccessReport::getRuleReports() const {
  return m_RuleReports;
}
void PartialSuccessReport::setRuleReports(
    std::vector<RuleReport> const& value) {
  m_RuleReports      = value;
  m_RuleReportsIsSet = true;
}
bool PartialSuccessReport::ruleReportsIsSet() const {
  return m_RuleReportsIsSet;
}
void PartialSuccessReport::unsetRuleReports() {
  m_RuleReportsIsSet = false;
}
std::vector<SessionRuleReport> PartialSuccessReport::getSessRuleReports()
    const {
  return m_SessRuleReports;
}
void PartialSuccessReport::setSessRuleReports(
    std::vector<SessionRuleReport> const& value) {
  m_SessRuleReports      = value;
  m_SessRuleReportsIsSet = true;
}
bool PartialSuccessReport::sessRuleReportsIsSet() const {
  return m_SessRuleReportsIsSet;
}
void PartialSuccessReport::unsetSessRuleReports() {
  m_SessRuleReportsIsSet = false;
}
UeCampingRep PartialSuccessReport::getUeCampingRep() const {
  return m_UeCampingRep;
}
void PartialSuccessReport::setUeCampingRep(UeCampingRep const& value) {
  m_UeCampingRep      = value;
  m_UeCampingRepIsSet = true;
}
bool PartialSuccessReport::ueCampingRepIsSet() const {
  return m_UeCampingRepIsSet;
}
void PartialSuccessReport::unsetUeCampingRep() {
  m_UeCampingRepIsSet = false;
}

}  // namespace model
}  // namespace pcf
}  // namespace oai
