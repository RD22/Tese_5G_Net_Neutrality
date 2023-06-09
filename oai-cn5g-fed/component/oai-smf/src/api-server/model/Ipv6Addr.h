/**
 * Nsmf_EventExposure
 * Session Management Event Exposure Service. © 2019, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * Ipv6Addr.h
 *
 *
 */

#ifndef Ipv6Addr_H_
#define Ipv6Addr_H_

#include <nlohmann/json.hpp>

namespace oai {
namespace smf_server {
namespace model {

/// <summary>
///
/// </summary>
class Ipv6Addr {
 public:
  Ipv6Addr();
  virtual ~Ipv6Addr();

  void validate();

  /////////////////////////////////////////////
  /// Ipv6Addr members

  bool operator==(const Ipv6Addr& rhs) const;
  bool operator!=(const Ipv6Addr& rhs) const;

  /////////////////////////////////////////////
  /// Ipv6Addr members

  friend void to_json(nlohmann::json& j, const Ipv6Addr& o);
  friend void from_json(const nlohmann::json& j, Ipv6Addr& o);

  std::string getIpv6Addr() const;
  void setIpv6Addr(std::string const& value);

 protected:
  std::string m_Ipv6Addr;
};

}  // namespace model
}  // namespace smf_server
}  // namespace oai

#endif /* Ipv6Addr_H_ */
