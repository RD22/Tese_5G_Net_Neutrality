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

#include "ErrorReport.h"
#include "Helpers.h"

#include <sstream>

namespace oai {
namespace pcf {
namespace model {

using namespace oai::model::common;

ErrorReport::ErrorReport() {
  m_ErrorIsSet           = false;
  m_RuleReportsIsSet     = false;
  m_SessRuleReportsIsSet = false;
}

void ErrorReport::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    //        throw
    //        org::openapitools::server::helpers::ValidationException(msg.str());
  }
}

bool ErrorReport::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ErrorReport::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ErrorReport" : pathPrefix;

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

bool ErrorReport::operator==(const ErrorReport& rhs) const {
  return

      ((!errorIsSet() && !rhs.errorIsSet()) ||
       (errorIsSet() && rhs.errorIsSet() && getError() == rhs.getError())) &&

      ((!ruleReportsIsSet() && !rhs.ruleReportsIsSet()) ||
       (ruleReportsIsSet() && rhs.ruleReportsIsSet() &&
        getRuleReports() == rhs.getRuleReports())) &&

      ((!sessRuleReportsIsSet() && !rhs.sessRuleReportsIsSet()) ||
       (sessRuleReportsIsSet() && rhs.sessRuleReportsIsSet() &&
        getSessRuleReports() == rhs.getSessRuleReports()))

          ;
}

bool ErrorReport::operator!=(const ErrorReport& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ErrorReport& o) {
  j = nlohmann::json();
  if (o.errorIsSet()) j["error"] = o.m_Error;
  if (o.ruleReportsIsSet() || !o.m_RuleReports.empty())
    j["ruleReports"] = o.m_RuleReports;
  if (o.sessRuleReportsIsSet() || !o.m_SessRuleReports.empty())
    j["sessRuleReports"] = o.m_SessRuleReports;
}

void from_json(const nlohmann::json& j, ErrorReport& o) {
  if (j.find("error") != j.end()) {
    j.at("error").get_to(o.m_Error);
    o.m_ErrorIsSet = true;
  }
  if (j.find("ruleReports") != j.end()) {
    j.at("ruleReports").get_to(o.m_RuleReports);
    o.m_RuleReportsIsSet = true;
  }
  if (j.find("sessRuleReports") != j.end()) {
    j.at("sessRuleReports").get_to(o.m_SessRuleReports);
    o.m_SessRuleReportsIsSet = true;
  }
}

ProblemDetails ErrorReport::getError() const {
  return m_Error;
}
void ErrorReport::setError(ProblemDetails const& value) {
  m_Error      = value;
  m_ErrorIsSet = true;
}
bool ErrorReport::errorIsSet() const {
  return m_ErrorIsSet;
}
void ErrorReport::unsetError() {
  m_ErrorIsSet = false;
}
std::vector<RuleReport> ErrorReport::getRuleReports() const {
  return m_RuleReports;
}
void ErrorReport::setRuleReports(std::vector<RuleReport> const& value) {
  m_RuleReports      = value;
  m_RuleReportsIsSet = true;
}
bool ErrorReport::ruleReportsIsSet() const {
  return m_RuleReportsIsSet;
}
void ErrorReport::unsetRuleReports() {
  m_RuleReportsIsSet = false;
}
std::vector<SessionRuleReport> ErrorReport::getSessRuleReports() const {
  return m_SessRuleReports;
}
void ErrorReport::setSessRuleReports(
    std::vector<SessionRuleReport> const& value) {
  m_SessRuleReports      = value;
  m_SessRuleReportsIsSet = true;
}
bool ErrorReport::sessRuleReportsIsSet() const {
  return m_SessRuleReportsIsSet;
}
void ErrorReport::unsetSessRuleReports() {
  m_SessRuleReportsIsSet = false;
}

}  // namespace model
}  // namespace pcf
}  // namespace oai
