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
 * AdditionalMeasurement.h
 *
 *
 */

#ifndef AdditionalMeasurement_H_
#define AdditionalMeasurement_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "AddressList.h"
#include "CircumstanceDescription.h"
#include "IpEthFlowDescription.h"
#include "NetworkAreaInfo.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class AdditionalMeasurement {
 public:
  AdditionalMeasurement();
  virtual ~AdditionalMeasurement() = default;

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

  bool operator==(const AdditionalMeasurement& rhs) const;
  bool operator!=(const AdditionalMeasurement& rhs) const;

  /////////////////////////////////////////////
  /// AdditionalMeasurement members

  /// <summary>
  ///
  /// </summary>
  NetworkAreaInfo getUnexpLoc() const;
  void setUnexpLoc(NetworkAreaInfo const& value);
  bool unexpLocIsSet() const;
  void unsetUnexpLoc();
  /// <summary>
  ///
  /// </summary>
  std::vector<IpEthFlowDescription> getUnexpFlowTeps() const;
  void setUnexpFlowTeps(std::vector<IpEthFlowDescription> const& value);
  bool unexpFlowTepsIsSet() const;
  void unsetUnexpFlowTeps();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> getUnexpWakes() const;
  void setUnexpWakes(std::vector<std::string> const& value);
  bool unexpWakesIsSet() const;
  void unsetUnexpWakes();
  /// <summary>
  ///
  /// </summary>
  AddressList getDdosAttack() const;
  void setDdosAttack(AddressList const& value);
  bool ddosAttackIsSet() const;
  void unsetDdosAttack();
  /// <summary>
  ///
  /// </summary>
  AddressList getWrgDest() const;
  void setWrgDest(AddressList const& value);
  bool wrgDestIsSet() const;
  void unsetWrgDest();
  /// <summary>
  ///
  /// </summary>
  std::vector<CircumstanceDescription> getCircums() const;
  void setCircums(std::vector<CircumstanceDescription> const& value);
  bool circumsIsSet() const;
  void unsetCircums();

  friend void to_json(nlohmann::json& j, const AdditionalMeasurement& o);
  friend void from_json(const nlohmann::json& j, AdditionalMeasurement& o);

 protected:
  NetworkAreaInfo m_UnexpLoc;
  bool m_UnexpLocIsSet;
  std::vector<IpEthFlowDescription> m_UnexpFlowTeps;
  bool m_UnexpFlowTepsIsSet;
  std::vector<std::string> m_UnexpWakes;
  bool m_UnexpWakesIsSet;
  AddressList m_DdosAttack;
  bool m_DdosAttackIsSet;
  AddressList m_WrgDest;
  bool m_WrgDestIsSet;
  std::vector<CircumstanceDescription> m_Circums;
  bool m_CircumsIsSet;
};

}  // namespace oai::nef::model

#endif /* AdditionalMeasurement_H_ */