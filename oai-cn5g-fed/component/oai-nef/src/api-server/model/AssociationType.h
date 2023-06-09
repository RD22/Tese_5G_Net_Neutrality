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
 * AssociationType.h
 *
 * Possible values are - IMEI: The value shall be used when the change of
 * IMSI-IMEI association shall be detected - IMEISV: The value shall be used
 * when the change of IMSI-IMEISV association shall be detected
 */

#ifndef AssociationType_H_
#define AssociationType_H_

#include <nlohmann/json.hpp>

#include "AssociationType_anyOf.h"

namespace oai::nef::model {

/// <summary>
/// Possible values are - IMEI: The value shall be used when the change of
/// IMSI-IMEI association shall be detected - IMEISV: The value shall be used
/// when the change of IMSI-IMEISV association shall be detected
/// </summary>
class AssociationType {
 public:
  AssociationType();
  virtual ~AssociationType() = default;

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

  bool operator==(const AssociationType& rhs) const;
  bool operator!=(const AssociationType& rhs) const;

  /////////////////////////////////////////////
  /// AssociationType members

  AssociationType_anyOf getValue() const;
  void setValue(AssociationType_anyOf value);
  AssociationType_anyOf::eAssociationType_anyOf getEnumValue() const;
  void setEnumValue(AssociationType_anyOf::eAssociationType_anyOf value);
  friend void to_json(nlohmann::json& j, const AssociationType& o);
  friend void from_json(const nlohmann::json& j, AssociationType& o);
  friend void to_json(nlohmann::json& j, const AssociationType_anyOf& o);
  friend void from_json(const nlohmann::json& j, AssociationType_anyOf& o);

 protected:
  AssociationType_anyOf m_value;
};

}  // namespace oai::nef::model

#endif /* AssociationType_H_ */
