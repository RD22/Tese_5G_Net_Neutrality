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

#include "Point_allOf.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

Point_allOf::Point_allOf() {}

void Point_allOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool Point_allOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool Point_allOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "Point_allOf" : pathPrefix;

  return success;
}

bool Point_allOf::operator==(const Point_allOf& rhs) const {
  return

      (getPoint() == rhs.getPoint())

          ;
}

bool Point_allOf::operator!=(const Point_allOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Point_allOf& o) {
  j          = nlohmann::json();
  j["point"] = o.m_Point;
}

void from_json(const nlohmann::json& j, Point_allOf& o) {
  j.at("point").get_to(o.m_Point);
}

GeographicalCoordinates Point_allOf::getPoint() const {
  return m_Point;
}
void Point_allOf::setPoint(GeographicalCoordinates const& value) {
  m_Point = value;
}

}  // namespace oai::nef::model
