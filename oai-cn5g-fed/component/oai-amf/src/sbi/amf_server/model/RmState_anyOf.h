/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * RmState_anyOf.h
 *
 *
 */

#ifndef RmState_anyOf_H_
#define RmState_anyOf_H_

#include <nlohmann/json.hpp>

namespace oai::amf::model {

/// <summary>
///
/// </summary>
class RmState_anyOf {
 public:
  RmState_anyOf();
  virtual ~RmState_anyOf() = default;

  enum class eRmState_anyOf {
    // To have a valid default value.
    // Avoiding nameclashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    REGISTERED,
    DEREGISTERED
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

  bool operator==(const RmState_anyOf& rhs) const;
  bool operator!=(const RmState_anyOf& rhs) const;

  /////////////////////////////////////////////
  /// RmState_anyOf members

  RmState_anyOf::eRmState_anyOf getValue() const;
  void setValue(RmState_anyOf::eRmState_anyOf value);

  friend void to_json(nlohmann::json& j, const RmState_anyOf& o);
  friend void from_json(const nlohmann::json& j, RmState_anyOf& o);

 protected:
  RmState_anyOf::eRmState_anyOf m_value =
      RmState_anyOf::eRmState_anyOf::INVALID_VALUE_OPENAPI_GENERATED;

  // Helper overload for validate. Used when one model stores another model and
  // calls it's validate.
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;
};

}  // namespace oai::amf::model

#endif /* RmState_anyOf_H_ */
