/**
 * Nnef_EventExposure
 * NEF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * FlowInfo.h
 *
 * Represents flow information.
 */

#ifndef FlowInfo_H_
#define FlowInfo_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace oai::nef::model {

/// <summary>
/// Represents flow information.
/// </summary>
class FlowInfo {
 public:
  FlowInfo();
  virtual ~FlowInfo() = default;

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

  bool operator==(const FlowInfo& rhs) const;
  bool operator!=(const FlowInfo& rhs) const;

  /////////////////////////////////////////////
  /// FlowInfo members

  /// <summary>
  /// Indicates the IP flow.
  /// </summary>
  int32_t getFlowId() const;
  void setFlowId(int32_t const value);
  /// <summary>
  /// Indicates the packet filters of the IP flow. Refer to subclause 5.3.8 of
  /// 3GPP TS 29.214 for encoding. It shall contain UL and/or DL IP flow
  /// description.
  /// </summary>
  std::vector<std::string> getFlowDescriptions() const;
  void setFlowDescriptions(std::vector<std::string> const& value);
  bool flowDescriptionsIsSet() const;
  void unsetFlowDescriptions();

  friend void to_json(nlohmann::json& j, const FlowInfo& o);
  friend void from_json(const nlohmann::json& j, FlowInfo& o);

 protected:
  int32_t m_FlowId;

  std::vector<std::string> m_FlowDescriptions;
  bool m_FlowDescriptionsIsSet;
};

}  // namespace oai::nef::model

#endif /* FlowInfo_H_ */
