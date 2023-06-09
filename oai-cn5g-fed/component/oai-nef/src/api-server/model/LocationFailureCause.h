/**
 * 3gpp-monitoring-event
 * API for Monitoring Event. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * LocationFailureCause.h
 *
 * This string Indicates the location positioning failure cause. Possible values
 * are - POSITIONING_DENIED: Positioning is denied. - UNSUPPORTED_BY_UE:
 * Positioning is not supported by UE. - NOT_REGISTED_UE: UE is not registered.
 * - UNSPECIFIED: Unspecified.
 */

#ifndef LocationFailureCause_H_
#define LocationFailureCause_H_

#include <nlohmann/json.hpp>

#include "LocationFailureCause_anyOf.h"

namespace oai::nef::model {

/// <summary>
/// This string Indicates the location positioning failure cause. Possible
/// values are - POSITIONING_DENIED: Positioning is denied. - UNSUPPORTED_BY_UE:
/// Positioning is not supported by UE. - NOT_REGISTED_UE: UE is not registered.
/// - UNSPECIFIED: Unspecified.
/// </summary>
class LocationFailureCause {
 public:
  LocationFailureCause();
  virtual ~LocationFailureCause() = default;

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

  bool operator==(const LocationFailureCause& rhs) const;
  bool operator!=(const LocationFailureCause& rhs) const;

  /////////////////////////////////////////////
  /// LocationFailureCause members

  LocationFailureCause_anyOf getValue() const;
  void setValue(LocationFailureCause_anyOf value);
  LocationFailureCause_anyOf::eLocationFailureCause_anyOf getEnumValue() const;
  void setEnumValue(
      LocationFailureCause_anyOf::eLocationFailureCause_anyOf value);
  friend void to_json(nlohmann::json& j, const LocationFailureCause& o);
  friend void from_json(const nlohmann::json& j, LocationFailureCause& o);
  friend void to_json(nlohmann::json& j, const LocationFailureCause_anyOf& o);
  friend void from_json(const nlohmann::json& j, LocationFailureCause_anyOf& o);

 protected:
  LocationFailureCause_anyOf m_value;
};

}  // namespace oai::nef::model

#endif /* LocationFailureCause_H_ */
