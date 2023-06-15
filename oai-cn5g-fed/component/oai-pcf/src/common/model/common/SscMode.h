/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2020, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SscMode.h
 *
 *
 */

#ifndef SscMode_H_
#define SscMode_H_

#include "SscMode_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class SscMode {
 public:
  SscMode();
  virtual ~SscMode() = default;

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

  bool operator==(const SscMode& rhs) const;
  bool operator!=(const SscMode& rhs) const;

  /////////////////////////////////////////////
  /// SscMode members

  SscMode_anyOf getValue() const;
  void setValue(SscMode_anyOf value);
  SscMode_anyOf::eSscMode_anyOf getEnumValue() const;
  void setEnumValue(SscMode_anyOf::eSscMode_anyOf value);
  friend void to_json(nlohmann::json& j, const SscMode& o);
  friend void from_json(const nlohmann::json& j, SscMode& o);
  friend void to_json(nlohmann::json& j, const SscMode_anyOf& o);
  friend void from_json(const nlohmann::json& j, SscMode_anyOf& o);

 protected:
  SscMode_anyOf m_value;
};

}  // namespace oai::model::common

#endif /* SscMode_H_ */
