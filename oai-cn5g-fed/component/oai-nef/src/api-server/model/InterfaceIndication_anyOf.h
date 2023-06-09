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
 * InterfaceIndication_anyOf.h
 *
 *
 */

#ifndef InterfaceIndication_anyOf_H_
#define InterfaceIndication_anyOf_H_

#include <nlohmann/json.hpp>

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class InterfaceIndication_anyOf {
 public:
  InterfaceIndication_anyOf();
  virtual ~InterfaceIndication_anyOf() = default;

  enum class eInterfaceIndication_anyOf {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    EXPOSURE_FUNCTION,
    PDN_GATEWAY
  };

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

  bool operator==(const InterfaceIndication_anyOf& rhs) const;
  bool operator!=(const InterfaceIndication_anyOf& rhs) const;

  /////////////////////////////////////////////
  /// InterfaceIndication_anyOf members

  InterfaceIndication_anyOf::eInterfaceIndication_anyOf getValue() const;
  void setValue(InterfaceIndication_anyOf::eInterfaceIndication_anyOf value);

  friend void to_json(nlohmann::json& j, const InterfaceIndication_anyOf& o);
  friend void from_json(const nlohmann::json& j, InterfaceIndication_anyOf& o);

 protected:
  InterfaceIndication_anyOf::eInterfaceIndication_anyOf m_value =
      InterfaceIndication_anyOf::eInterfaceIndication_anyOf::
          INVALID_VALUE_OPENAPI_GENERATED;
};

}  // namespace oai::nef::model

#endif /* InterfaceIndication_anyOf_H_ */
