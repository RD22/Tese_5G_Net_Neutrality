/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
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
 * PatchOperation.h
 *
 *
 */

#ifndef PatchOperation_H_
#define PatchOperation_H_

#include <nlohmann/json.hpp>

namespace oai {
namespace nef {
namespace model {

/// <summary>
///
/// </summary>
class PatchOperation {
 public:
  PatchOperation();
  virtual ~PatchOperation();

  void validate();

  /////////////////////////////////////////////
  /// PatchOperation members

  friend void to_json(nlohmann::json& j, const PatchOperation& o);
  friend void from_json(const nlohmann::json& j, PatchOperation& o);

 protected:
};

}  // namespace model
}  // namespace nef
}  // namespace oai

#endif /* PatchOperation_H_ */
