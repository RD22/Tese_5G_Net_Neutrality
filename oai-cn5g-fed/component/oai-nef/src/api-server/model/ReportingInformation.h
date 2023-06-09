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
/*
 * ReportingInformation.h
 *
 * Represents the type of reporting that the subscription requires.
 */

#ifndef ReportingInformation_H_
#define ReportingInformation_H_

#include <nlohmann/json.hpp>
#include <string>

#include "NotificationMethod.h"

namespace oai::nef::model {

/// <summary>
/// Represents the type of reporting that the subscription requires.
/// </summary>
class ReportingInformation {
 public:
  ReportingInformation();
  virtual ~ReportingInformation() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const ReportingInformation& rhs) const;
  bool operator!=(const ReportingInformation& rhs) const;

  /////////////////////////////////////////////
  /// ReportingInformation members

  /// <summary>
  ///
  /// </summary>
  bool isImmRep() const;
  void setImmRep(bool const value);
  bool immRepIsSet() const;
  void unsetImmRep();
  /// <summary>
  ///
  /// </summary>
  NotificationMethod getNotifMethod() const;
  void setNotifMethod(NotificationMethod const& value);
  bool notifMethodIsSet() const;
  void unsetNotifMethod();
  /// <summary>
  ///
  /// </summary>
  int32_t getMaxReportNbr() const;
  void setMaxReportNbr(int32_t const value);
  bool maxReportNbrIsSet() const;
  void unsetMaxReportNbr();
  /// <summary>
  ///
  /// </summary>
  std::string getMonDur() const;
  void setMonDur(std::string const& value);
  bool monDurIsSet() const;
  void unsetMonDur();
  /// <summary>
  ///
  /// </summary>
  int32_t getRepPeriod() const;
  void setRepPeriod(int32_t const value);
  bool repPeriodIsSet() const;
  void unsetRepPeriod();
  /// <summary>
  ///
  /// </summary>
  int32_t getSampRatio() const;
  void setSampRatio(int32_t const value);
  bool sampRatioIsSet() const;
  void unsetSampRatio();
  /// <summary>
  ///
  /// </summary>
  int32_t getGrpRepTime() const;
  void setGrpRepTime(int32_t const value);
  bool grpRepTimeIsSet() const;
  void unsetGrpRepTime();

  friend void to_json(nlohmann::json& j, const ReportingInformation& o);
  friend void from_json(const nlohmann::json& j, ReportingInformation& o);

 protected:
  bool m_ImmRep;
  bool m_ImmRepIsSet;
  NotificationMethod m_NotifMethod;
  bool m_NotifMethodIsSet;
  int32_t m_MaxReportNbr;
  bool m_MaxReportNbrIsSet;
  std::string m_MonDur;
  bool m_MonDurIsSet;
  int32_t m_RepPeriod;
  bool m_RepPeriodIsSet;
  int32_t m_SampRatio;
  bool m_SampRatioIsSet;
  int32_t m_GrpRepTime;
  bool m_GrpRepTimeIsSet;
};

}  // namespace oai::nef::model

#endif /* ReportingInformation_H_ */
