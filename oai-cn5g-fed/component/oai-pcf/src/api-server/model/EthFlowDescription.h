/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2020, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1.alpha-5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * EthFlowDescription.h
 *
 * Identifies an Ethernet flow
 */

#ifndef EthFlowDescription_H_
#define EthFlowDescription_H_

#include "FlowDirection.h"
#include <string>
#include <vector>
#include <nlohmann/json.hpp>

namespace oai {
namespace pcf {
namespace model {

/// <summary>
/// Identifies an Ethernet flow
/// </summary>
class EthFlowDescription {
 public:
  EthFlowDescription();
  virtual ~EthFlowDescription() = default;

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

  bool operator==(const EthFlowDescription& rhs) const;
  bool operator!=(const EthFlowDescription& rhs) const;

  /////////////////////////////////////////////
  /// EthFlowDescription members

  /// <summary>
  ///
  /// </summary>
  std::string getDestMacAddr() const;
  void setDestMacAddr(std::string const& value);
  bool destMacAddrIsSet() const;
  void unsetDestMacAddr();
  /// <summary>
  ///
  /// </summary>
  std::string getEthType() const;
  void setEthType(std::string const& value);
  /// <summary>
  /// Defines a packet filter of an IP flow.
  /// </summary>
  std::string getFDesc() const;
  void setFDesc(std::string const& value);
  bool fDescIsSet() const;
  void unsetFDesc();
  /// <summary>
  ///
  /// </summary>
  FlowDirection getFDir() const;
  void setFDir(FlowDirection const& value);
  bool fDirIsSet() const;
  void unsetFDir();
  /// <summary>
  ///
  /// </summary>
  std::string getSourceMacAddr() const;
  void setSourceMacAddr(std::string const& value);
  bool sourceMacAddrIsSet() const;
  void unsetSourceMacAddr();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> getVlanTags() const;
  void setVlanTags(std::vector<std::string> const& value);
  bool vlanTagsIsSet() const;
  void unsetVlanTags();
  /// <summary>
  ///
  /// </summary>
  std::string getSrcMacAddrEnd() const;
  void setSrcMacAddrEnd(std::string const& value);
  bool srcMacAddrEndIsSet() const;
  void unsetSrcMacAddrEnd();
  /// <summary>
  ///
  /// </summary>
  std::string getDestMacAddrEnd() const;
  void setDestMacAddrEnd(std::string const& value);
  bool destMacAddrEndIsSet() const;
  void unsetDestMacAddrEnd();

  friend void to_json(nlohmann::json& j, const EthFlowDescription& o);
  friend void from_json(const nlohmann::json& j, EthFlowDescription& o);

 protected:
  std::string m_DestMacAddr;
  bool m_DestMacAddrIsSet;
  std::string m_EthType;

  std::string m_FDesc;
  bool m_FDescIsSet;
  FlowDirection m_FDir;
  bool m_FDirIsSet;
  std::string m_SourceMacAddr;
  bool m_SourceMacAddrIsSet;
  std::vector<std::string> m_VlanTags;
  bool m_VlanTagsIsSet;
  std::string m_SrcMacAddrEnd;
  bool m_SrcMacAddrEndIsSet;
  std::string m_DestMacAddrEnd;
  bool m_DestMacAddrEndIsSet;
};

}  // namespace model
}  // namespace pcf
}  // namespace oai
#endif /* EthFlowDescription_H_ */
