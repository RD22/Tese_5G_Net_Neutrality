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
 * MeasurementNrForMdt.h
 *
 *
 */

#ifndef MeasurementNrForMdt_H_
#define MeasurementNrForMdt_H_

#include "MeasurementNrForMdt_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class MeasurementNrForMdt {
 public:
  MeasurementNrForMdt();
  virtual ~MeasurementNrForMdt() = default;

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

  bool operator==(const MeasurementNrForMdt& rhs) const;
  bool operator!=(const MeasurementNrForMdt& rhs) const;

  /////////////////////////////////////////////
  /// MeasurementNrForMdt members

  MeasurementNrForMdt_anyOf getValue() const;
  void setValue(MeasurementNrForMdt_anyOf value);
  MeasurementNrForMdt_anyOf::eMeasurementNrForMdt_anyOf getEnumValue() const;
  void setEnumValue(
      MeasurementNrForMdt_anyOf::eMeasurementNrForMdt_anyOf value);
  friend void to_json(nlohmann::json& j, const MeasurementNrForMdt& o);
  friend void from_json(const nlohmann::json& j, MeasurementNrForMdt& o);
  friend void to_json(nlohmann::json& j, const MeasurementNrForMdt_anyOf& o);
  friend void from_json(const nlohmann::json& j, MeasurementNrForMdt_anyOf& o);

 protected:
  MeasurementNrForMdt_anyOf m_value;
};

}  // namespace oai::model::common

#endif /* MeasurementNrForMdt_H_ */