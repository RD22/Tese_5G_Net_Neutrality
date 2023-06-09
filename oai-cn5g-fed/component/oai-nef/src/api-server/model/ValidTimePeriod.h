/**
 * 3gpp-lpi-pp
 * API for Location Privacy Indication Parameters Provisioning. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ValidTimePeriod.h
 *
 *
 */

#ifndef ValidTimePeriod_H_
#define ValidTimePeriod_H_

#include <nlohmann/json.hpp>
#include <string>

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class ValidTimePeriod {
 public:
  ValidTimePeriod();
  virtual ~ValidTimePeriod() = default;

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

  bool operator==(const ValidTimePeriod& rhs) const;
  bool operator!=(const ValidTimePeriod& rhs) const;

  /////////////////////////////////////////////
  /// ValidTimePeriod members

  /// <summary>
  ///
  /// </summary>
  std::string getStartTime() const;
  void setStartTime(std::string const& value);
  bool startTimeIsSet() const;
  void unsetStartTime();
  /// <summary>
  ///
  /// </summary>
  std::string getEndTime() const;
  void setEndTime(std::string const& value);
  bool endTimeIsSet() const;
  void unsetEndTime();

  friend void to_json(nlohmann::json& j, const ValidTimePeriod& o);
  friend void from_json(const nlohmann::json& j, ValidTimePeriod& o);

 protected:
  std::string m_StartTime;
  bool m_StartTimeIsSet;
  std::string m_EndTime;
  bool m_EndTimeIsSet;
};

}  // namespace oai::nef::model

#endif /* ValidTimePeriod_H_ */
