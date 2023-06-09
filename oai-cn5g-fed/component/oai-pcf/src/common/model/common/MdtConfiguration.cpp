/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2020, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MdtConfiguration.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

MdtConfiguration::MdtConfiguration() {
  m_ReportTypeIsSet             = false;
  m_AreaScopeIsSet              = false;
  m_MeasurementLteListIsSet     = false;
  m_MeasurementNrListIsSet      = false;
  m_SensorMeasurementListIsSet  = false;
  m_ReportingTriggerListIsSet   = false;
  m_ReportIntervalIsSet         = false;
  m_ReportAmountIsSet           = false;
  m_EventThresholdRsrp          = 0;
  m_EventThresholdRsrpIsSet     = false;
  m_EventThresholdRsrq          = 0;
  m_EventThresholdRsrqIsSet     = false;
  m_EventListIsSet              = false;
  m_LoggingIntervalIsSet        = false;
  m_LoggingDurationIsSet        = false;
  m_PositioningMethodIsSet      = false;
  m_CollectionPeriodRmmLteIsSet = false;
  m_MeasurementPeriodLteIsSet   = false;
  m_MdtAllowedPlmnIdListIsSet   = false;
  m_MbsfnAreaListIsSet          = false;
}

void MdtConfiguration::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool MdtConfiguration::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool MdtConfiguration::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "MdtConfiguration" : pathPrefix;

  if (measurementLteListIsSet()) {
    const std::vector<oai::model::common::MeasurementLteForMdt>& value =
        m_MeasurementLteList;
    const std::string currentValuePath = _pathPrefix + ".measurementLteList";

    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::MeasurementLteForMdt& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".measurementLteList") &&
            success;

        i++;
      }
    }
  }

  if (measurementNrListIsSet()) {
    const std::vector<oai::model::common::MeasurementNrForMdt>& value =
        m_MeasurementNrList;
    const std::string currentValuePath = _pathPrefix + ".measurementNrList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::MeasurementNrForMdt& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".measurementNrList") &&
            success;

        i++;
      }
    }
  }

  if (sensorMeasurementListIsSet()) {
    const std::vector<oai::model::common::SensorMeasurement>& value =
        m_SensorMeasurementList;
    const std::string currentValuePath = _pathPrefix + ".sensorMeasurementList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::SensorMeasurement& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".sensorMeasurementList") &&
            success;

        i++;
      }
    }
  }

  if (reportingTriggerListIsSet()) {
    const std::vector<oai::model::common::ReportingTrigger>& value =
        m_ReportingTriggerList;
    const std::string currentValuePath = _pathPrefix + ".reportingTriggerList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::ReportingTrigger& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".reportingTriggerList") &&
            success;

        i++;
      }
    }
  }

  if (eventThresholdRsrpIsSet()) {
    const int32_t& value               = m_EventThresholdRsrp;
    const std::string currentValuePath = _pathPrefix + ".eventThresholdRsrp";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
    if (value > 97) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 97;";
    }
  }

  if (eventThresholdRsrqIsSet()) {
    const int32_t& value               = m_EventThresholdRsrq;
    const std::string currentValuePath = _pathPrefix + ".eventThresholdRsrq";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
    if (value > 34) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 34;";
    }
  }

  if (eventListIsSet()) {
    const std::vector<oai::model::common::EventForMdt>& value = m_EventList;
    const std::string currentValuePath = _pathPrefix + ".eventList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::EventForMdt& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".eventList") && success;

        i++;
      }
    }
  }

  if (mdtAllowedPlmnIdListIsSet()) {
    const std::vector<oai::model::common::PlmnId>& value =
        m_MdtAllowedPlmnIdList;
    const std::string currentValuePath = _pathPrefix + ".mdtAllowedPlmnIdList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    if (value.size() > 16) {
      success = false;
      msg << currentValuePath << ": must have at most 16 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::PlmnId& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".mdtAllowedPlmnIdList") &&
            success;

        i++;
      }
    }
  }

  if (mbsfnAreaListIsSet()) {
    const std::vector<oai::model::common::MbsfnArea>& value = m_MbsfnAreaList;
    const std::string currentValuePath = _pathPrefix + ".mbsfnAreaList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    if (value.size() > 8) {
      success = false;
      msg << currentValuePath << ": must have at most 8 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::MbsfnArea& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".mbsfnAreaList") && success;

        i++;
      }
    }
  }

  return success;
}

bool MdtConfiguration::operator==(const MdtConfiguration& rhs) const {
  return

      (getJobType() == rhs.getJobType()) &&

      ((!reportTypeIsSet() && !rhs.reportTypeIsSet()) ||
       (reportTypeIsSet() && rhs.reportTypeIsSet() &&
        getReportType() == rhs.getReportType())) &&

      ((!areaScopeIsSet() && !rhs.areaScopeIsSet()) ||
       (areaScopeIsSet() && rhs.areaScopeIsSet() &&
        getAreaScope() == rhs.getAreaScope())) &&

      ((!measurementLteListIsSet() && !rhs.measurementLteListIsSet()) ||
       (measurementLteListIsSet() && rhs.measurementLteListIsSet() &&
        getMeasurementLteList() == rhs.getMeasurementLteList())) &&

      ((!measurementNrListIsSet() && !rhs.measurementNrListIsSet()) ||
       (measurementNrListIsSet() && rhs.measurementNrListIsSet() &&
        getMeasurementNrList() == rhs.getMeasurementNrList())) &&

      ((!sensorMeasurementListIsSet() && !rhs.sensorMeasurementListIsSet()) ||
       (sensorMeasurementListIsSet() && rhs.sensorMeasurementListIsSet() &&
        getSensorMeasurementList() == rhs.getSensorMeasurementList())) &&

      ((!reportingTriggerListIsSet() && !rhs.reportingTriggerListIsSet()) ||
       (reportingTriggerListIsSet() && rhs.reportingTriggerListIsSet() &&
        getReportingTriggerList() == rhs.getReportingTriggerList())) &&

      ((!reportIntervalIsSet() && !rhs.reportIntervalIsSet()) ||
       (reportIntervalIsSet() && rhs.reportIntervalIsSet() &&
        getReportInterval() == rhs.getReportInterval())) &&

      ((!reportAmountIsSet() && !rhs.reportAmountIsSet()) ||
       (reportAmountIsSet() && rhs.reportAmountIsSet() &&
        getReportAmount() == rhs.getReportAmount())) &&

      ((!eventThresholdRsrpIsSet() && !rhs.eventThresholdRsrpIsSet()) ||
       (eventThresholdRsrpIsSet() && rhs.eventThresholdRsrpIsSet() &&
        getEventThresholdRsrp() == rhs.getEventThresholdRsrp())) &&

      ((!eventThresholdRsrqIsSet() && !rhs.eventThresholdRsrqIsSet()) ||
       (eventThresholdRsrqIsSet() && rhs.eventThresholdRsrqIsSet() &&
        getEventThresholdRsrq() == rhs.getEventThresholdRsrq())) &&

      ((!eventListIsSet() && !rhs.eventListIsSet()) ||
       (eventListIsSet() && rhs.eventListIsSet() &&
        getEventList() == rhs.getEventList())) &&

      ((!loggingIntervalIsSet() && !rhs.loggingIntervalIsSet()) ||
       (loggingIntervalIsSet() && rhs.loggingIntervalIsSet() &&
        getLoggingInterval() == rhs.getLoggingInterval())) &&

      ((!loggingDurationIsSet() && !rhs.loggingDurationIsSet()) ||
       (loggingDurationIsSet() && rhs.loggingDurationIsSet() &&
        getLoggingDuration() == rhs.getLoggingDuration())) &&

      ((!positioningMethodIsSet() && !rhs.positioningMethodIsSet()) ||
       (positioningMethodIsSet() && rhs.positioningMethodIsSet() &&
        getPositioningMethod() == rhs.getPositioningMethod())) &&

      ((!collectionPeriodRmmLteIsSet() && !rhs.collectionPeriodRmmLteIsSet()) ||
       (collectionPeriodRmmLteIsSet() && rhs.collectionPeriodRmmLteIsSet() &&
        getCollectionPeriodRmmLte() == rhs.getCollectionPeriodRmmLte())) &&

      ((!measurementPeriodLteIsSet() && !rhs.measurementPeriodLteIsSet()) ||
       (measurementPeriodLteIsSet() && rhs.measurementPeriodLteIsSet() &&
        getMeasurementPeriodLte() == rhs.getMeasurementPeriodLte())) &&

      ((!mdtAllowedPlmnIdListIsSet() && !rhs.mdtAllowedPlmnIdListIsSet()) ||
       (mdtAllowedPlmnIdListIsSet() && rhs.mdtAllowedPlmnIdListIsSet() &&
        getMdtAllowedPlmnIdList() == rhs.getMdtAllowedPlmnIdList())) &&

      ((!mbsfnAreaListIsSet() && !rhs.mbsfnAreaListIsSet()) ||
       (mbsfnAreaListIsSet() && rhs.mbsfnAreaListIsSet() &&
        getMbsfnAreaList() == rhs.getMbsfnAreaList()))

          ;
}

bool MdtConfiguration::operator!=(const MdtConfiguration& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const MdtConfiguration& o) {
  j            = nlohmann::json();
  j["jobType"] = o.m_JobType;
  if (o.reportTypeIsSet()) j["reportType"] = o.m_ReportType;
  if (o.areaScopeIsSet()) j["areaScope"] = o.m_AreaScope;
  if (o.measurementLteListIsSet() || !o.m_MeasurementLteList.empty())
    j["measurementLteList"] = o.m_MeasurementLteList;
  if (o.measurementNrListIsSet() || !o.m_MeasurementNrList.empty())
    j["measurementNrList"] = o.m_MeasurementNrList;
  if (o.sensorMeasurementListIsSet() || !o.m_SensorMeasurementList.empty())
    j["sensorMeasurementList"] = o.m_SensorMeasurementList;
  if (o.reportingTriggerListIsSet() || !o.m_ReportingTriggerList.empty())
    j["reportingTriggerList"] = o.m_ReportingTriggerList;
  if (o.reportIntervalIsSet()) j["reportInterval"] = o.m_ReportInterval;
  if (o.reportAmountIsSet()) j["reportAmount"] = o.m_ReportAmount;
  if (o.eventThresholdRsrpIsSet())
    j["eventThresholdRsrp"] = o.m_EventThresholdRsrp;
  if (o.eventThresholdRsrqIsSet())
    j["eventThresholdRsrq"] = o.m_EventThresholdRsrq;
  if (o.eventListIsSet() || !o.m_EventList.empty())
    j["eventList"] = o.m_EventList;
  if (o.loggingIntervalIsSet()) j["loggingInterval"] = o.m_LoggingInterval;
  if (o.loggingDurationIsSet()) j["loggingDuration"] = o.m_LoggingDuration;
  if (o.positioningMethodIsSet())
    j["positioningMethod"] = o.m_PositioningMethod;
  if (o.collectionPeriodRmmLteIsSet())
    j["collectionPeriodRmmLte"] = o.m_CollectionPeriodRmmLte;
  if (o.measurementPeriodLteIsSet())
    j["measurementPeriodLte"] = o.m_MeasurementPeriodLte;
  if (o.mdtAllowedPlmnIdListIsSet() || !o.m_MdtAllowedPlmnIdList.empty())
    j["mdtAllowedPlmnIdList"] = o.m_MdtAllowedPlmnIdList;
  if (o.mbsfnAreaListIsSet() || !o.m_MbsfnAreaList.empty())
    j["mbsfnAreaList"] = o.m_MbsfnAreaList;
}

void from_json(const nlohmann::json& j, MdtConfiguration& o) {
  j.at("jobType").get_to(o.m_JobType);
  if (j.find("reportType") != j.end()) {
    j.at("reportType").get_to(o.m_ReportType);
    o.m_ReportTypeIsSet = true;
  }
  if (j.find("areaScope") != j.end()) {
    j.at("areaScope").get_to(o.m_AreaScope);
    o.m_AreaScopeIsSet = true;
  }
  if (j.find("measurementLteList") != j.end()) {
    j.at("measurementLteList").get_to(o.m_MeasurementLteList);
    o.m_MeasurementLteListIsSet = true;
  }
  if (j.find("measurementNrList") != j.end()) {
    j.at("measurementNrList").get_to(o.m_MeasurementNrList);
    o.m_MeasurementNrListIsSet = true;
  }
  if (j.find("sensorMeasurementList") != j.end()) {
    j.at("sensorMeasurementList").get_to(o.m_SensorMeasurementList);
    o.m_SensorMeasurementListIsSet = true;
  }
  if (j.find("reportingTriggerList") != j.end()) {
    j.at("reportingTriggerList").get_to(o.m_ReportingTriggerList);
    o.m_ReportingTriggerListIsSet = true;
  }
  if (j.find("reportInterval") != j.end()) {
    j.at("reportInterval").get_to(o.m_ReportInterval);
    o.m_ReportIntervalIsSet = true;
  }
  if (j.find("reportAmount") != j.end()) {
    j.at("reportAmount").get_to(o.m_ReportAmount);
    o.m_ReportAmountIsSet = true;
  }
  if (j.find("eventThresholdRsrp") != j.end()) {
    j.at("eventThresholdRsrp").get_to(o.m_EventThresholdRsrp);
    o.m_EventThresholdRsrpIsSet = true;
  }
  if (j.find("eventThresholdRsrq") != j.end()) {
    j.at("eventThresholdRsrq").get_to(o.m_EventThresholdRsrq);
    o.m_EventThresholdRsrqIsSet = true;
  }
  if (j.find("eventList") != j.end()) {
    j.at("eventList").get_to(o.m_EventList);
    o.m_EventListIsSet = true;
  }
  if (j.find("loggingInterval") != j.end()) {
    j.at("loggingInterval").get_to(o.m_LoggingInterval);
    o.m_LoggingIntervalIsSet = true;
  }
  if (j.find("loggingDuration") != j.end()) {
    j.at("loggingDuration").get_to(o.m_LoggingDuration);
    o.m_LoggingDurationIsSet = true;
  }
  if (j.find("positioningMethod") != j.end()) {
    j.at("positioningMethod").get_to(o.m_PositioningMethod);
    o.m_PositioningMethodIsSet = true;
  }
  if (j.find("collectionPeriodRmmLte") != j.end()) {
    j.at("collectionPeriodRmmLte").get_to(o.m_CollectionPeriodRmmLte);
    o.m_CollectionPeriodRmmLteIsSet = true;
  }
  if (j.find("measurementPeriodLte") != j.end()) {
    j.at("measurementPeriodLte").get_to(o.m_MeasurementPeriodLte);
    o.m_MeasurementPeriodLteIsSet = true;
  }
  if (j.find("mdtAllowedPlmnIdList") != j.end()) {
    j.at("mdtAllowedPlmnIdList").get_to(o.m_MdtAllowedPlmnIdList);
    o.m_MdtAllowedPlmnIdListIsSet = true;
  }
  if (j.find("mbsfnAreaList") != j.end()) {
    j.at("mbsfnAreaList").get_to(o.m_MbsfnAreaList);
    o.m_MbsfnAreaListIsSet = true;
  }
}

oai::model::common::JobType MdtConfiguration::getJobType() const {
  return m_JobType;
}
void MdtConfiguration::setJobType(oai::model::common::JobType const& value) {
  m_JobType = value;
}
oai::model::common::ReportTypeMdt MdtConfiguration::getReportType() const {
  return m_ReportType;
}
void MdtConfiguration::setReportType(
    oai::model::common::ReportTypeMdt const& value) {
  m_ReportType      = value;
  m_ReportTypeIsSet = true;
}
bool MdtConfiguration::reportTypeIsSet() const {
  return m_ReportTypeIsSet;
}
void MdtConfiguration::unsetReportType() {
  m_ReportTypeIsSet = false;
}
oai::model::common::AreaScope MdtConfiguration::getAreaScope() const {
  return m_AreaScope;
}
void MdtConfiguration::setAreaScope(
    oai::model::common::AreaScope const& value) {
  m_AreaScope      = value;
  m_AreaScopeIsSet = true;
}
bool MdtConfiguration::areaScopeIsSet() const {
  return m_AreaScopeIsSet;
}
void MdtConfiguration::unsetAreaScope() {
  m_AreaScopeIsSet = false;
}
std::vector<oai::model::common::MeasurementLteForMdt>
MdtConfiguration::getMeasurementLteList() const {
  return m_MeasurementLteList;
}
void MdtConfiguration::setMeasurementLteList(
    std::vector<oai::model::common::MeasurementLteForMdt> const& value) {
  m_MeasurementLteList      = value;
  m_MeasurementLteListIsSet = true;
}
bool MdtConfiguration::measurementLteListIsSet() const {
  return m_MeasurementLteListIsSet;
}
void MdtConfiguration::unsetMeasurementLteList() {
  m_MeasurementLteListIsSet = false;
}
std::vector<oai::model::common::MeasurementNrForMdt>
MdtConfiguration::getMeasurementNrList() const {
  return m_MeasurementNrList;
}
void MdtConfiguration::setMeasurementNrList(
    std::vector<oai::model::common::MeasurementNrForMdt> const& value) {
  m_MeasurementNrList      = value;
  m_MeasurementNrListIsSet = true;
}
bool MdtConfiguration::measurementNrListIsSet() const {
  return m_MeasurementNrListIsSet;
}
void MdtConfiguration::unsetMeasurementNrList() {
  m_MeasurementNrListIsSet = false;
}
std::vector<oai::model::common::SensorMeasurement>
MdtConfiguration::getSensorMeasurementList() const {
  return m_SensorMeasurementList;
}
void MdtConfiguration::setSensorMeasurementList(
    std::vector<oai::model::common::SensorMeasurement> const& value) {
  m_SensorMeasurementList      = value;
  m_SensorMeasurementListIsSet = true;
}
bool MdtConfiguration::sensorMeasurementListIsSet() const {
  return m_SensorMeasurementListIsSet;
}
void MdtConfiguration::unsetSensorMeasurementList() {
  m_SensorMeasurementListIsSet = false;
}
std::vector<oai::model::common::ReportingTrigger>
MdtConfiguration::getReportingTriggerList() const {
  return m_ReportingTriggerList;
}
void MdtConfiguration::setReportingTriggerList(
    std::vector<oai::model::common::ReportingTrigger> const& value) {
  m_ReportingTriggerList      = value;
  m_ReportingTriggerListIsSet = true;
}
bool MdtConfiguration::reportingTriggerListIsSet() const {
  return m_ReportingTriggerListIsSet;
}
void MdtConfiguration::unsetReportingTriggerList() {
  m_ReportingTriggerListIsSet = false;
}
oai::model::common::ReportIntervalMdt MdtConfiguration::getReportInterval()
    const {
  return m_ReportInterval;
}
void MdtConfiguration::setReportInterval(
    oai::model::common::ReportIntervalMdt const& value) {
  m_ReportInterval      = value;
  m_ReportIntervalIsSet = true;
}
bool MdtConfiguration::reportIntervalIsSet() const {
  return m_ReportIntervalIsSet;
}
void MdtConfiguration::unsetReportInterval() {
  m_ReportIntervalIsSet = false;
}
oai::model::common::ReportAmountMdt MdtConfiguration::getReportAmount() const {
  return m_ReportAmount;
}
void MdtConfiguration::setReportAmount(
    oai::model::common::ReportAmountMdt const& value) {
  m_ReportAmount      = value;
  m_ReportAmountIsSet = true;
}
bool MdtConfiguration::reportAmountIsSet() const {
  return m_ReportAmountIsSet;
}
void MdtConfiguration::unsetReportAmount() {
  m_ReportAmountIsSet = false;
}
int32_t MdtConfiguration::getEventThresholdRsrp() const {
  return m_EventThresholdRsrp;
}
void MdtConfiguration::setEventThresholdRsrp(int32_t const value) {
  m_EventThresholdRsrp      = value;
  m_EventThresholdRsrpIsSet = true;
}
bool MdtConfiguration::eventThresholdRsrpIsSet() const {
  return m_EventThresholdRsrpIsSet;
}
void MdtConfiguration::unsetEventThresholdRsrp() {
  m_EventThresholdRsrpIsSet = false;
}
int32_t MdtConfiguration::getEventThresholdRsrq() const {
  return m_EventThresholdRsrq;
}
void MdtConfiguration::setEventThresholdRsrq(int32_t const value) {
  m_EventThresholdRsrq      = value;
  m_EventThresholdRsrqIsSet = true;
}
bool MdtConfiguration::eventThresholdRsrqIsSet() const {
  return m_EventThresholdRsrqIsSet;
}
void MdtConfiguration::unsetEventThresholdRsrq() {
  m_EventThresholdRsrqIsSet = false;
}
std::vector<oai::model::common::EventForMdt> MdtConfiguration::getEventList()
    const {
  return m_EventList;
}
void MdtConfiguration::setEventList(
    std::vector<oai::model::common::EventForMdt> const& value) {
  m_EventList      = value;
  m_EventListIsSet = true;
}
bool MdtConfiguration::eventListIsSet() const {
  return m_EventListIsSet;
}
void MdtConfiguration::unsetEventList() {
  m_EventListIsSet = false;
}
oai::model::common::LoggingIntervalMdt MdtConfiguration::getLoggingInterval()
    const {
  return m_LoggingInterval;
}
void MdtConfiguration::setLoggingInterval(
    oai::model::common::LoggingIntervalMdt const& value) {
  m_LoggingInterval      = value;
  m_LoggingIntervalIsSet = true;
}
bool MdtConfiguration::loggingIntervalIsSet() const {
  return m_LoggingIntervalIsSet;
}
void MdtConfiguration::unsetLoggingInterval() {
  m_LoggingIntervalIsSet = false;
}
oai::model::common::LoggingDurationMdt MdtConfiguration::getLoggingDuration()
    const {
  return m_LoggingDuration;
}
void MdtConfiguration::setLoggingDuration(
    oai::model::common::LoggingDurationMdt const& value) {
  m_LoggingDuration      = value;
  m_LoggingDurationIsSet = true;
}
bool MdtConfiguration::loggingDurationIsSet() const {
  return m_LoggingDurationIsSet;
}
void MdtConfiguration::unsetLoggingDuration() {
  m_LoggingDurationIsSet = false;
}
oai::model::common::PositioningMethodMdt
MdtConfiguration::getPositioningMethod() const {
  return m_PositioningMethod;
}
void MdtConfiguration::setPositioningMethod(
    oai::model::common::PositioningMethodMdt const& value) {
  m_PositioningMethod      = value;
  m_PositioningMethodIsSet = true;
}
bool MdtConfiguration::positioningMethodIsSet() const {
  return m_PositioningMethodIsSet;
}
void MdtConfiguration::unsetPositioningMethod() {
  m_PositioningMethodIsSet = false;
}
oai::model::common::CollectionPeriodRmmLteMdt
MdtConfiguration::getCollectionPeriodRmmLte() const {
  return m_CollectionPeriodRmmLte;
}
void MdtConfiguration::setCollectionPeriodRmmLte(
    oai::model::common::CollectionPeriodRmmLteMdt const& value) {
  m_CollectionPeriodRmmLte      = value;
  m_CollectionPeriodRmmLteIsSet = true;
}
bool MdtConfiguration::collectionPeriodRmmLteIsSet() const {
  return m_CollectionPeriodRmmLteIsSet;
}
void MdtConfiguration::unsetCollectionPeriodRmmLte() {
  m_CollectionPeriodRmmLteIsSet = false;
}
oai::model::common::MeasurementPeriodLteMdt
MdtConfiguration::getMeasurementPeriodLte() const {
  return m_MeasurementPeriodLte;
}
void MdtConfiguration::setMeasurementPeriodLte(
    oai::model::common::MeasurementPeriodLteMdt const& value) {
  m_MeasurementPeriodLte      = value;
  m_MeasurementPeriodLteIsSet = true;
}
bool MdtConfiguration::measurementPeriodLteIsSet() const {
  return m_MeasurementPeriodLteIsSet;
}
void MdtConfiguration::unsetMeasurementPeriodLte() {
  m_MeasurementPeriodLteIsSet = false;
}
std::vector<oai::model::common::PlmnId>
MdtConfiguration::getMdtAllowedPlmnIdList() const {
  return m_MdtAllowedPlmnIdList;
}
void MdtConfiguration::setMdtAllowedPlmnIdList(
    std::vector<oai::model::common::PlmnId> const& value) {
  m_MdtAllowedPlmnIdList      = value;
  m_MdtAllowedPlmnIdListIsSet = true;
}
bool MdtConfiguration::mdtAllowedPlmnIdListIsSet() const {
  return m_MdtAllowedPlmnIdListIsSet;
}
void MdtConfiguration::unsetMdtAllowedPlmnIdList() {
  m_MdtAllowedPlmnIdListIsSet = false;
}
std::vector<oai::model::common::MbsfnArea> MdtConfiguration::getMbsfnAreaList()
    const {
  return m_MbsfnAreaList;
}
void MdtConfiguration::setMbsfnAreaList(
    std::vector<oai::model::common::MbsfnArea> const& value) {
  m_MbsfnAreaList      = value;
  m_MbsfnAreaListIsSet = true;
}
bool MdtConfiguration::mbsfnAreaListIsSet() const {
  return m_MbsfnAreaListIsSet;
}
void MdtConfiguration::unsetMbsfnAreaList() {
  m_MbsfnAreaListIsSet = false;
}

}  // namespace oai::model::common
