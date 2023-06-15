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
 * Polygon_allOf.h
 *
 *
 */

#ifndef Polygon_allOf_H_
#define Polygon_allOf_H_

#include <nlohmann/json.hpp>
#include <vector>

#include "GeographicalCoordinates.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class Polygon_allOf {
 public:
  Polygon_allOf();
  virtual ~Polygon_allOf() = default;

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

  bool operator==(const Polygon_allOf& rhs) const;
  bool operator!=(const Polygon_allOf& rhs) const;

  /////////////////////////////////////////////
  /// Polygon_allOf members

  /// <summary>
  ///
  /// </summary>
  std::vector<GeographicalCoordinates> getPointList() const;
  void setPointList(std::vector<GeographicalCoordinates> const& value);

  friend void to_json(nlohmann::json& j, const Polygon_allOf& o);
  friend void from_json(const nlohmann::json& j, Polygon_allOf& o);

 protected:
  std::vector<GeographicalCoordinates> m_PointList;
};

}  // namespace oai::nef::model

#endif /* Polygon_allOf_H_ */