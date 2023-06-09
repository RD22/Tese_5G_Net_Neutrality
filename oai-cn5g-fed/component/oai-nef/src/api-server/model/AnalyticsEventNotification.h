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
 * AnalyticsEventNotification.h
 *
 *
 */

#ifndef AnalyticsEventNotification_H_
#define AnalyticsEventNotification_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "AnalyticsEventNotif.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class AnalyticsEventNotification {
 public:
  AnalyticsEventNotification();
  virtual ~AnalyticsEventNotification() = default;

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

  bool operator==(const AnalyticsEventNotification& rhs) const;
  bool operator!=(const AnalyticsEventNotification& rhs) const;

  /////////////////////////////////////////////
  /// AnalyticsEventNotification members

  /// <summary>
  ///
  /// </summary>
  std::string getNotifId() const;
  void setNotifId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::vector<AnalyticsEventNotif> getAnalyEventNotifs() const;
  void setAnalyEventNotifs(std::vector<AnalyticsEventNotif> const& value);

  friend void to_json(nlohmann::json& j, const AnalyticsEventNotification& o);
  friend void from_json(const nlohmann::json& j, AnalyticsEventNotification& o);

 protected:
  std::string m_NotifId;

  std::vector<AnalyticsEventNotif> m_AnalyEventNotifs;
};

}  // namespace oai::nef::model

#endif /* AnalyticsEventNotification_H_ */
