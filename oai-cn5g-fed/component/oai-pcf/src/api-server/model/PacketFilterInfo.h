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
 * PacketFilterInfo.h
 *
 *
 */

#ifndef PacketFilterInfo_H_
#define PacketFilterInfo_H_

#include "FlowDirection.h"
#include <string>
#include <nlohmann/json.hpp>

namespace oai {
namespace pcf {
namespace model {

/// <summary>
///
/// </summary>
class PacketFilterInfo {
 public:
  PacketFilterInfo();
  virtual ~PacketFilterInfo() = default;

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

  bool operator==(const PacketFilterInfo& rhs) const;
  bool operator!=(const PacketFilterInfo& rhs) const;

  /////////////////////////////////////////////
  /// PacketFilterInfo members

  /// <summary>
  /// An identifier of packet filter.
  /// </summary>
  std::string getPackFiltId() const;
  void setPackFiltId(std::string const& value);
  bool packFiltIdIsSet() const;
  void unsetPackFiltId();
  /// <summary>
  /// Defines a packet filter for an IP flow. Refer to subclause 5.3.54 of 3GPP
  /// TS 29.212 for encoding.
  /// </summary>
  std::string getPackFiltCont() const;
  void setPackFiltCont(std::string const& value);
  bool packFiltContIsSet() const;
  void unsetPackFiltCont();
  /// <summary>
  /// Contains the Ipv4 Type-of-Service and mask field or the Ipv6 Traffic-Class
  /// field and mask field.
  /// </summary>
  std::string getTosTrafficClass() const;
  void setTosTrafficClass(std::string const& value);
  bool tosTrafficClassIsSet() const;
  void unsetTosTrafficClass();
  /// <summary>
  /// The security parameter index of the IPSec packet.
  /// </summary>
  std::string getSpi() const;
  void setSpi(std::string const& value);
  bool spiIsSet() const;
  void unsetSpi();
  /// <summary>
  /// The Ipv6 flow label header field.
  /// </summary>
  std::string getFlowLabel() const;
  void setFlowLabel(std::string const& value);
  bool flowLabelIsSet() const;
  void unsetFlowLabel();
  /// <summary>
  ///
  /// </summary>
  FlowDirection getFlowDirection() const;
  void setFlowDirection(FlowDirection const& value);
  bool flowDirectionIsSet() const;
  void unsetFlowDirection();

  friend void to_json(nlohmann::json& j, const PacketFilterInfo& o);
  friend void from_json(const nlohmann::json& j, PacketFilterInfo& o);

 protected:
  std::string m_PackFiltId;
  bool m_PackFiltIdIsSet;
  std::string m_PackFiltCont;
  bool m_PackFiltContIsSet;
  std::string m_TosTrafficClass;
  bool m_TosTrafficClassIsSet;
  std::string m_Spi;
  bool m_SpiIsSet;
  std::string m_FlowLabel;
  bool m_FlowLabelIsSet;
  FlowDirection m_FlowDirection;
  bool m_FlowDirectionIsSet;
};

}  // namespace model
}  // namespace pcf
}  // namespace oai
#endif /* PacketFilterInfo_H_ */
