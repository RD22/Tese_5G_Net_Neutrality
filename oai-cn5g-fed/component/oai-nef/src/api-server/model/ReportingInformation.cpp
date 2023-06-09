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

#include "ReportingInformation.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

ReportingInformation::ReportingInformation() {
  m_ImmRep            = false;
  m_ImmRepIsSet       = false;
  m_NotifMethodIsSet  = false;
  m_MaxReportNbr      = 0;
  m_MaxReportNbrIsSet = false;
  m_MonDur            = "";
  m_MonDurIsSet       = false;
  m_RepPeriod         = 0;
  m_RepPeriodIsSet    = false;
  m_SampRatio         = 0;
  m_SampRatioIsSet    = false;
  m_GrpRepTime        = 0;
  m_GrpRepTimeIsSet   = false;
}

void ReportingInformation::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool ReportingInformation::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ReportingInformation::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ReportingInformation" : pathPrefix;

  if (maxReportNbrIsSet()) {
    const int32_t& value               = m_MaxReportNbr;
    const std::string currentValuePath = _pathPrefix + ".maxReportNbr";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
  }

  if (sampRatioIsSet()) {
    const int32_t& value               = m_SampRatio;
    const std::string currentValuePath = _pathPrefix + ".sampRatio";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
    if (value > 100) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 100;";
    }
  }

  return success;
}

bool ReportingInformation::operator==(const ReportingInformation& rhs) const {
  return

      ((!immRepIsSet() && !rhs.immRepIsSet()) ||
       (immRepIsSet() && rhs.immRepIsSet() && isImmRep() == rhs.isImmRep())) &&

      ((!notifMethodIsSet() && !rhs.notifMethodIsSet()) ||
       (notifMethodIsSet() && rhs.notifMethodIsSet() &&
        getNotifMethod() == rhs.getNotifMethod())) &&

      ((!maxReportNbrIsSet() && !rhs.maxReportNbrIsSet()) ||
       (maxReportNbrIsSet() && rhs.maxReportNbrIsSet() &&
        getMaxReportNbr() == rhs.getMaxReportNbr())) &&

      ((!monDurIsSet() && !rhs.monDurIsSet()) ||
       (monDurIsSet() && rhs.monDurIsSet() &&
        getMonDur() == rhs.getMonDur())) &&

      ((!repPeriodIsSet() && !rhs.repPeriodIsSet()) ||
       (repPeriodIsSet() && rhs.repPeriodIsSet() &&
        getRepPeriod() == rhs.getRepPeriod())) &&

      ((!sampRatioIsSet() && !rhs.sampRatioIsSet()) ||
       (sampRatioIsSet() && rhs.sampRatioIsSet() &&
        getSampRatio() == rhs.getSampRatio())) &&

      ((!grpRepTimeIsSet() && !rhs.grpRepTimeIsSet()) ||
       (grpRepTimeIsSet() && rhs.grpRepTimeIsSet() &&
        getGrpRepTime() == rhs.getGrpRepTime()))

          ;
}

bool ReportingInformation::operator!=(const ReportingInformation& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ReportingInformation& o) {
  j = nlohmann::json();
  if (o.immRepIsSet()) j["immRep"] = o.m_ImmRep;
  if (o.notifMethodIsSet()) j["notifMethod"] = o.m_NotifMethod;
  if (o.maxReportNbrIsSet()) j["maxReportNbr"] = o.m_MaxReportNbr;
  if (o.monDurIsSet()) j["monDur"] = o.m_MonDur;
  if (o.repPeriodIsSet()) j["repPeriod"] = o.m_RepPeriod;
  if (o.sampRatioIsSet()) j["sampRatio"] = o.m_SampRatio;
  if (o.grpRepTimeIsSet()) j["grpRepTime"] = o.m_GrpRepTime;
}

void from_json(const nlohmann::json& j, ReportingInformation& o) {
  if (j.find("immRep") != j.end()) {
    j.at("immRep").get_to(o.m_ImmRep);
    o.m_ImmRepIsSet = true;
  }
  if (j.find("notifMethod") != j.end()) {
    j.at("notifMethod").get_to(o.m_NotifMethod);
    o.m_NotifMethodIsSet = true;
  }
  if (j.find("maxReportNbr") != j.end()) {
    j.at("maxReportNbr").get_to(o.m_MaxReportNbr);
    o.m_MaxReportNbrIsSet = true;
  }
  if (j.find("monDur") != j.end()) {
    j.at("monDur").get_to(o.m_MonDur);
    o.m_MonDurIsSet = true;
  }
  if (j.find("repPeriod") != j.end()) {
    j.at("repPeriod").get_to(o.m_RepPeriod);
    o.m_RepPeriodIsSet = true;
  }
  if (j.find("sampRatio") != j.end()) {
    j.at("sampRatio").get_to(o.m_SampRatio);
    o.m_SampRatioIsSet = true;
  }
  if (j.find("grpRepTime") != j.end()) {
    j.at("grpRepTime").get_to(o.m_GrpRepTime);
    o.m_GrpRepTimeIsSet = true;
  }
}

bool ReportingInformation::isImmRep() const {
  return m_ImmRep;
}
void ReportingInformation::setImmRep(bool const value) {
  m_ImmRep      = value;
  m_ImmRepIsSet = true;
}
bool ReportingInformation::immRepIsSet() const {
  return m_ImmRepIsSet;
}
void ReportingInformation::unsetImmRep() {
  m_ImmRepIsSet = false;
}
NotificationMethod ReportingInformation::getNotifMethod() const {
  return m_NotifMethod;
}
void ReportingInformation::setNotifMethod(NotificationMethod const& value) {
  m_NotifMethod      = value;
  m_NotifMethodIsSet = true;
}
bool ReportingInformation::notifMethodIsSet() const {
  return m_NotifMethodIsSet;
}
void ReportingInformation::unsetNotifMethod() {
  m_NotifMethodIsSet = false;
}
int32_t ReportingInformation::getMaxReportNbr() const {
  return m_MaxReportNbr;
}
void ReportingInformation::setMaxReportNbr(int32_t const value) {
  m_MaxReportNbr      = value;
  m_MaxReportNbrIsSet = true;
}
bool ReportingInformation::maxReportNbrIsSet() const {
  return m_MaxReportNbrIsSet;
}
void ReportingInformation::unsetMaxReportNbr() {
  m_MaxReportNbrIsSet = false;
}
std::string ReportingInformation::getMonDur() const {
  return m_MonDur;
}
void ReportingInformation::setMonDur(std::string const& value) {
  m_MonDur      = value;
  m_MonDurIsSet = true;
}
bool ReportingInformation::monDurIsSet() const {
  return m_MonDurIsSet;
}
void ReportingInformation::unsetMonDur() {
  m_MonDurIsSet = false;
}
int32_t ReportingInformation::getRepPeriod() const {
  return m_RepPeriod;
}
void ReportingInformation::setRepPeriod(int32_t const value) {
  m_RepPeriod      = value;
  m_RepPeriodIsSet = true;
}
bool ReportingInformation::repPeriodIsSet() const {
  return m_RepPeriodIsSet;
}
void ReportingInformation::unsetRepPeriod() {
  m_RepPeriodIsSet = false;
}
int32_t ReportingInformation::getSampRatio() const {
  return m_SampRatio;
}
void ReportingInformation::setSampRatio(int32_t const value) {
  m_SampRatio      = value;
  m_SampRatioIsSet = true;
}
bool ReportingInformation::sampRatioIsSet() const {
  return m_SampRatioIsSet;
}
void ReportingInformation::unsetSampRatio() {
  m_SampRatioIsSet = false;
}
int32_t ReportingInformation::getGrpRepTime() const {
  return m_GrpRepTime;
}
void ReportingInformation::setGrpRepTime(int32_t const value) {
  m_GrpRepTime      = value;
  m_GrpRepTimeIsSet = true;
}
bool ReportingInformation::grpRepTimeIsSet() const {
  return m_GrpRepTimeIsSet;
}
void ReportingInformation::unsetGrpRepTime() {
  m_GrpRepTimeIsSet = false;
}

}  // namespace oai::nef::model
