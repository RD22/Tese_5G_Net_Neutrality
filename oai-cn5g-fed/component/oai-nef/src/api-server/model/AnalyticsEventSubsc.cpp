/**
 * 3gpp-analyticsexposure
 * API for Analytics Exposure. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AnalyticsEventSubsc.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

AnalyticsEventSubsc::AnalyticsEventSubsc() {
  m_AnalyEventFilterIsSet = false;
  m_TgtUeIsSet            = false;
}

void AnalyticsEventSubsc::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool AnalyticsEventSubsc::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool AnalyticsEventSubsc::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "AnalyticsEventSubsc" : pathPrefix;

  return success;
}

bool AnalyticsEventSubsc::operator==(const AnalyticsEventSubsc& rhs) const {
  return

      (getAnalyEvent() == rhs.getAnalyEvent()) &&

      ((!analyEventFilterIsSet() && !rhs.analyEventFilterIsSet()) ||
       (analyEventFilterIsSet() && rhs.analyEventFilterIsSet() &&
        getAnalyEventFilter() == rhs.getAnalyEventFilter())) &&

      ((!tgtUeIsSet() && !rhs.tgtUeIsSet()) ||
       (tgtUeIsSet() && rhs.tgtUeIsSet() && getTgtUe() == rhs.getTgtUe()))

          ;
}

bool AnalyticsEventSubsc::operator!=(const AnalyticsEventSubsc& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AnalyticsEventSubsc& o) {
  j               = nlohmann::json();
  j["analyEvent"] = o.m_AnalyEvent;
  if (o.analyEventFilterIsSet()) j["analyEventFilter"] = o.m_AnalyEventFilter;
  if (o.tgtUeIsSet()) j["tgtUe"] = o.m_TgtUe;
}

void from_json(const nlohmann::json& j, AnalyticsEventSubsc& o) {
  j.at("analyEvent").get_to(o.m_AnalyEvent);
  if (j.find("analyEventFilter") != j.end()) {
    j.at("analyEventFilter").get_to(o.m_AnalyEventFilter);
    o.m_AnalyEventFilterIsSet = true;
  }
  if (j.find("tgtUe") != j.end()) {
    j.at("tgtUe").get_to(o.m_TgtUe);
    o.m_TgtUeIsSet = true;
  }
}

AnalyticsEvent AnalyticsEventSubsc::getAnalyEvent() const {
  return m_AnalyEvent;
}
void AnalyticsEventSubsc::setAnalyEvent(AnalyticsEvent const& value) {
  m_AnalyEvent = value;
}
AnalyticsEventFilterSubsc AnalyticsEventSubsc::getAnalyEventFilter() const {
  return m_AnalyEventFilter;
}
void AnalyticsEventSubsc::setAnalyEventFilter(
    AnalyticsEventFilterSubsc const& value) {
  m_AnalyEventFilter      = value;
  m_AnalyEventFilterIsSet = true;
}
bool AnalyticsEventSubsc::analyEventFilterIsSet() const {
  return m_AnalyEventFilterIsSet;
}
void AnalyticsEventSubsc::unsetAnalyEventFilter() {
  m_AnalyEventFilterIsSet = false;
}
TargetUeId AnalyticsEventSubsc::getTgtUe() const {
  return m_TgtUe;
}
void AnalyticsEventSubsc::setTgtUe(TargetUeId const& value) {
  m_TgtUe      = value;
  m_TgtUeIsSet = true;
}
bool AnalyticsEventSubsc::tgtUeIsSet() const {
  return m_TgtUeIsSet;
}
void AnalyticsEventSubsc::unsetTgtUe() {
  m_TgtUeIsSet = false;
}

}  // namespace oai::nef::model
