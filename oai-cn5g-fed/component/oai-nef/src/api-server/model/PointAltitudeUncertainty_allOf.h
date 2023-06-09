/**
 * 3gpp-mo-lcs-notify
 * API for UE updated location information notification. © 2021, 3GPP
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
 * PointAltitudeUncertainty_allOf.h
 *
 *
 */

#ifndef PointAltitudeUncertainty_allOf_H_
#define PointAltitudeUncertainty_allOf_H_

#include <nlohmann/json.hpp>

#include "GeographicalCoordinates.h"
#include "UncertaintyEllipse.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class PointAltitudeUncertainty_allOf {
 public:
  PointAltitudeUncertainty_allOf();
  virtual ~PointAltitudeUncertainty_allOf() = default;

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

  bool operator==(const PointAltitudeUncertainty_allOf& rhs) const;
  bool operator!=(const PointAltitudeUncertainty_allOf& rhs) const;

  /////////////////////////////////////////////
  /// PointAltitudeUncertainty_allOf members

  /// <summary>
  ///
  /// </summary>
  GeographicalCoordinates getPoint() const;
  void setPoint(GeographicalCoordinates const& value);
  /// <summary>
  ///
  /// </summary>
  double getAltitude() const;
  void setAltitude(double const value);
  /// <summary>
  ///
  /// </summary>
  UncertaintyEllipse getUncertaintyEllipse() const;
  void setUncertaintyEllipse(UncertaintyEllipse const& value);
  /// <summary>
  ///
  /// </summary>
  float getUncertaintyAltitude() const;
  void setUncertaintyAltitude(float const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getConfidence() const;
  void setConfidence(int32_t const value);

  friend void to_json(
      nlohmann::json& j, const PointAltitudeUncertainty_allOf& o);
  friend void from_json(
      const nlohmann::json& j, PointAltitudeUncertainty_allOf& o);

 protected:
  GeographicalCoordinates m_Point;

  double m_Altitude;

  UncertaintyEllipse m_UncertaintyEllipse;

  float m_UncertaintyAltitude;

  int32_t m_Confidence;
};

}  // namespace oai::nef::model

#endif /* PointAltitudeUncertainty_allOf_H_ */
