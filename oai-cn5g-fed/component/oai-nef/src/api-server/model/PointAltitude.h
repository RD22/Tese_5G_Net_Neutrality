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
 * PointAltitude.h
 *
 *
 */

#ifndef PointAltitude_H_
#define PointAltitude_H_

#include <nlohmann/json.hpp>

#include "GADShape.h"
#include "GeographicalCoordinates.h"
#include "PointAltitude_allOf.h"
#include "SupportedGADShapes.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class PointAltitude {
 public:
  PointAltitude();
  virtual ~PointAltitude() = default;

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

  bool operator==(const PointAltitude& rhs) const;
  bool operator!=(const PointAltitude& rhs) const;

  /////////////////////////////////////////////
  /// PointAltitude members

  /// <summary>
  ///
  /// </summary>
  SupportedGADShapes getShape() const;
  void setShape(SupportedGADShapes const& value);
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

  friend void to_json(nlohmann::json& j, const PointAltitude& o);
  friend void from_json(const nlohmann::json& j, PointAltitude& o);

 protected:
  SupportedGADShapes m_Shape;

  GeographicalCoordinates m_Point;

  double m_Altitude;
};

}  // namespace oai::nef::model

#endif /* PointAltitude_H_ */
