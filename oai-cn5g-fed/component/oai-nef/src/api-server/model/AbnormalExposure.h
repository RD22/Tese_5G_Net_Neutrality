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
/*
 * AbnormalExposure.h
 *
 *
 */

#ifndef AbnormalExposure_H_
#define AbnormalExposure_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "AdditionalMeasurement.h"
#include "Exception.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class AbnormalExposure {
 public:
  AbnormalExposure();
  virtual ~AbnormalExposure() = default;

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

  bool operator==(const AbnormalExposure& rhs) const;
  bool operator!=(const AbnormalExposure& rhs) const;

  /////////////////////////////////////////////
  /// AbnormalExposure members

  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> getGpsis() const;
  void setGpsis(std::vector<std::string> const& value);
  bool gpsisIsSet() const;
  void unsetGpsis();
  /// <summary>
  ///
  /// </summary>
  std::string getAppId() const;
  void setAppId(std::string const& value);
  bool appIdIsSet() const;
  void unsetAppId();
  /// <summary>
  ///
  /// </summary>
  Exception getExcep() const;
  void setExcep(Exception const& value);
  /// <summary>
  ///
  /// </summary>
  int32_t getRatio() const;
  void setRatio(int32_t const value);
  bool ratioIsSet() const;
  void unsetRatio();
  /// <summary>
  ///
  /// </summary>
  int32_t getConfidence() const;
  void setConfidence(int32_t const value);
  bool confidenceIsSet() const;
  void unsetConfidence();
  /// <summary>
  ///
  /// </summary>
  AdditionalMeasurement getAddtMeasInfo() const;
  void setAddtMeasInfo(AdditionalMeasurement const& value);
  bool addtMeasInfoIsSet() const;
  void unsetAddtMeasInfo();

  friend void to_json(nlohmann::json& j, const AbnormalExposure& o);
  friend void from_json(const nlohmann::json& j, AbnormalExposure& o);

 protected:
  std::vector<std::string> m_Gpsis;
  bool m_GpsisIsSet;
  std::string m_AppId;
  bool m_AppIdIsSet;
  Exception m_Excep;

  int32_t m_Ratio;
  bool m_RatioIsSet;
  int32_t m_Confidence;
  bool m_ConfidenceIsSet;
  AdditionalMeasurement m_AddtMeasInfo;
  bool m_AddtMeasInfoIsSet;
};

}  // namespace oai::nef::model

#endif /* AbnormalExposure_H_ */
