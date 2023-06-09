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
 * QosResourceType.h
 *
 *
 */

#ifndef QosResourceType_H_
#define QosResourceType_H_

#include <nlohmann/json.hpp>

#include "QosResourceType_anyOf.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class QosResourceType {
 public:
  QosResourceType();
  virtual ~QosResourceType() = default;

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

  bool operator==(const QosResourceType& rhs) const;
  bool operator!=(const QosResourceType& rhs) const;

  /////////////////////////////////////////////
  /// QosResourceType members

  QosResourceType_anyOf getValue() const;
  void setValue(QosResourceType_anyOf value);
  QosResourceType_anyOf::eQosResourceType_anyOf getEnumValue() const;
  void setEnumValue(QosResourceType_anyOf::eQosResourceType_anyOf value);
  friend void to_json(nlohmann::json& j, const QosResourceType& o);
  friend void from_json(const nlohmann::json& j, QosResourceType& o);
  friend void to_json(nlohmann::json& j, const QosResourceType_anyOf& o);
  friend void from_json(const nlohmann::json& j, QosResourceType_anyOf& o);

 protected:
  QosResourceType_anyOf m_value;
};

}  // namespace oai::nef::model

#endif /* QosResourceType_H_ */
