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
 * ReachabilityForSmsReport.h
 *
 *
 */

#ifndef ReachabilityForSmsReport_H_
#define ReachabilityForSmsReport_H_

#include <nlohmann/json.hpp>
#include <string>

#include "AccessType.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class ReachabilityForSmsReport {
 public:
  ReachabilityForSmsReport();
  virtual ~ReachabilityForSmsReport() = default;

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

  bool operator==(const ReachabilityForSmsReport& rhs) const;
  bool operator!=(const ReachabilityForSmsReport& rhs) const;

  /////////////////////////////////////////////
  /// ReachabilityForSmsReport members

  /// <summary>
  ///
  /// </summary>
  AccessType getSmsfAccessType() const;
  void setSmsfAccessType(AccessType const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getMaxAvailabilityTime() const;
  void setMaxAvailabilityTime(std::string const& value);
  bool maxAvailabilityTimeIsSet() const;
  void unsetMaxAvailabilityTime();

  friend void to_json(nlohmann::json& j, const ReachabilityForSmsReport& o);
  friend void from_json(const nlohmann::json& j, ReachabilityForSmsReport& o);

 protected:
  AccessType m_SmsfAccessType;

  std::string m_MaxAvailabilityTime;
  bool m_MaxAvailabilityTimeIsSet;
};

}  // namespace oai::nef::model

#endif /* ReachabilityForSmsReport_H_ */
