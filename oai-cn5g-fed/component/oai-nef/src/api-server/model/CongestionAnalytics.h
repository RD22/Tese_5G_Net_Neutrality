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
 * CongestionAnalytics.h
 *
 *
 */

#ifndef CongestionAnalytics_H_
#define CongestionAnalytics_H_

#include <nlohmann/json.hpp>

#include "CongestionType.h"
#include "ThresholdLevel.h"
#include "TimeWindow.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class CongestionAnalytics {
 public:
  CongestionAnalytics();
  virtual ~CongestionAnalytics() = default;

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

  bool operator==(const CongestionAnalytics& rhs) const;
  bool operator!=(const CongestionAnalytics& rhs) const;

  /////////////////////////////////////////////
  /// CongestionAnalytics members

  /// <summary>
  ///
  /// </summary>
  CongestionType getCngType() const;
  void setCngType(CongestionType const& value);
  /// <summary>
  ///
  /// </summary>
  TimeWindow getTmWdw() const;
  void setTmWdw(TimeWindow const& value);
  /// <summary>
  ///
  /// </summary>
  ThresholdLevel getNsi() const;
  void setNsi(ThresholdLevel const& value);
  /// <summary>
  ///
  /// </summary>
  int32_t getConfidence() const;
  void setConfidence(int32_t const value);
  bool confidenceIsSet() const;
  void unsetConfidence();

  friend void to_json(nlohmann::json& j, const CongestionAnalytics& o);
  friend void from_json(const nlohmann::json& j, CongestionAnalytics& o);

 protected:
  CongestionType m_CngType;

  TimeWindow m_TmWdw;

  ThresholdLevel m_Nsi;

  int32_t m_Confidence;
  bool m_ConfidenceIsSet;
};

}  // namespace oai::nef::model

#endif /* CongestionAnalytics_H_ */
