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
 * LocationArea.h
 *
 *
 */

#ifndef LocationArea_H_
#define LocationArea_H_

#include <nlohmann/json.hpp>
#include <vector>

#include "CivicAddress.h"
#include "GeographicArea.h"
#include "NetworkAreaInfo.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class LocationArea {
 public:
  LocationArea();
  virtual ~LocationArea() = default;

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

  bool operator==(const LocationArea& rhs) const;
  bool operator!=(const LocationArea& rhs) const;

  /////////////////////////////////////////////
  /// LocationArea members

  /// <summary>
  /// Identifies a list of geographic area of the user where the UE is located.
  /// </summary>
  std::vector<GeographicArea> getGeographicAreas() const;
  void setGeographicAreas(std::vector<GeographicArea> const& value);
  bool geographicAreasIsSet() const;
  void unsetGeographicAreas();
  /// <summary>
  /// Identifies a list of civic addresses of the user where the UE is located.
  /// </summary>
  std::vector<CivicAddress> getCivicAddresses() const;
  void setCivicAddresses(std::vector<CivicAddress> const& value);
  bool civicAddressesIsSet() const;
  void unsetCivicAddresses();
  /// <summary>
  ///
  /// </summary>
  NetworkAreaInfo getNwAreaInfo() const;
  void setNwAreaInfo(NetworkAreaInfo const& value);
  bool nwAreaInfoIsSet() const;
  void unsetNwAreaInfo();

  friend void to_json(nlohmann::json& j, const LocationArea& o);
  friend void from_json(const nlohmann::json& j, LocationArea& o);

 protected:
  std::vector<GeographicArea> m_GeographicAreas;
  bool m_GeographicAreasIsSet;
  std::vector<CivicAddress> m_CivicAddresses;
  bool m_CivicAddressesIsSet;
  NetworkAreaInfo m_NwAreaInfo;
  bool m_NwAreaInfoIsSet;
};

}  // namespace oai::nef::model

#endif /* LocationArea_H_ */
