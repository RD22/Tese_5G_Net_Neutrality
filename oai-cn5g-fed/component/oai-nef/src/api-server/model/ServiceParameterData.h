/**
 * 3gpp-service-parameter
 * API for AF service paramter © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ServiceParameterData.h
 *
 *
 */

#ifndef ServiceParameterData_H_
#define ServiceParameterData_H_

#include <nlohmann/json.hpp>
#include <string>

#include "Ipv6Addr.h"
#include "Snssai.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class ServiceParameterData {
 public:
  ServiceParameterData();
  virtual ~ServiceParameterData() = default;

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

  bool operator==(const ServiceParameterData& rhs) const;
  bool operator!=(const ServiceParameterData& rhs) const;

  /////////////////////////////////////////////
  /// ServiceParameterData members

  /// <summary>
  /// Identifies a service on behalf of which the AF is issuing the request.
  /// </summary>
  std::string getAfServiceId() const;
  void setAfServiceId(std::string const& value);
  bool afServiceIdIsSet() const;
  void unsetAfServiceId();
  /// <summary>
  /// Identifies an application.
  /// </summary>
  std::string getAppId() const;
  void setAppId(std::string const& value);
  bool appIdIsSet() const;
  void unsetAppId();
  /// <summary>
  ///
  /// </summary>
  std::string getDnn() const;
  void setDnn(std::string const& value);
  bool dnnIsSet() const;
  void unsetDnn();
  /// <summary>
  ///
  /// </summary>
  Snssai getSnssai() const;
  void setSnssai(Snssai const& value);
  bool snssaiIsSet() const;
  void unsetSnssai();
  /// <summary>
  /// string containing a local identifier followed by \&quot;@\&quot; and a
  /// domain identifier. Both the local identifier and the domain identifier
  /// shall be encoded as strings that do not contain any \&quot;@\&quot;
  /// characters. See Clauses 4.6.2 and 4.6.3 of 3GPP TS 23.682 for more
  /// information.
  /// </summary>
  std::string getExternalGroupId() const;
  void setExternalGroupId(std::string const& value);
  bool externalGroupIdIsSet() const;
  void unsetExternalGroupId();
  /// <summary>
  /// Identifies whether the AF request applies to any UE. This attribute shall
  /// set to \&quot;true\&quot; if applicable for any UE, otherwise, set to
  /// \&quot;false\&quot;.
  /// </summary>
  bool isAnyUeInd() const;
  void setAnyUeInd(bool const value);
  bool anyUeIndIsSet() const;
  void unsetAnyUeInd();
  /// <summary>
  ///
  /// </summary>
  std::string getGpsi() const;
  void setGpsi(std::string const& value);
  bool gpsiIsSet() const;
  void unsetGpsi();
  /// <summary>
  ///
  /// </summary>
  std::string getUeIpv4() const;
  void setUeIpv4(std::string const& value);
  bool ueIpv4IsSet() const;
  void unsetUeIpv4();
  /// <summary>
  ///
  /// </summary>
  Ipv6Addr getUeIpv6() const;
  void setUeIpv6(Ipv6Addr const& value);
  bool ueIpv6IsSet() const;
  void unsetUeIpv6();
  /// <summary>
  ///
  /// </summary>
  std::string getUeMac() const;
  void setUeMac(std::string const& value);
  bool ueMacIsSet() const;
  void unsetUeMac();
  /// <summary>
  /// string formatted according to IETF RFC 3986 identifying a referenced
  /// resource.
  /// </summary>
  std::string getSelf() const;
  void setSelf(std::string const& value);
  bool selfIsSet() const;
  void unsetSelf();
  /// <summary>
  ///
  /// </summary>
  std::string getParamOverPc5() const;
  void setParamOverPc5(std::string const& value);
  bool paramOverPc5IsSet() const;
  void unsetParamOverPc5();
  /// <summary>
  ///
  /// </summary>
  std::string getParamOverUu() const;
  void setParamOverUu(std::string const& value);
  bool paramOverUuIsSet() const;
  void unsetParamOverUu();
  /// <summary>
  ///
  /// </summary>
  std::string getMtcProviderId() const;
  void setMtcProviderId(std::string const& value);
  bool mtcProviderIdIsSet() const;
  void unsetMtcProviderId();
  /// <summary>
  ///
  /// </summary>
  std::string getSuppFeat() const;
  void setSuppFeat(std::string const& value);
  bool suppFeatIsSet() const;
  void unsetSuppFeat();

  friend void to_json(nlohmann::json& j, const ServiceParameterData& o);
  friend void from_json(const nlohmann::json& j, ServiceParameterData& o);

 protected:
  std::string m_AfServiceId;
  bool m_AfServiceIdIsSet;
  std::string m_AppId;
  bool m_AppIdIsSet;
  std::string m_Dnn;
  bool m_DnnIsSet;
  Snssai m_Snssai;
  bool m_SnssaiIsSet;
  std::string m_ExternalGroupId;
  bool m_ExternalGroupIdIsSet;
  bool m_AnyUeInd;
  bool m_AnyUeIndIsSet;
  std::string m_Gpsi;
  bool m_GpsiIsSet;
  std::string m_UeIpv4;
  bool m_UeIpv4IsSet;
  Ipv6Addr m_UeIpv6;
  bool m_UeIpv6IsSet;
  std::string m_UeMac;
  bool m_UeMacIsSet;
  std::string m_Self;
  bool m_SelfIsSet;
  std::string m_ParamOverPc5;
  bool m_ParamOverPc5IsSet;
  std::string m_ParamOverUu;
  bool m_ParamOverUuIsSet;
  std::string m_MtcProviderId;
  bool m_MtcProviderIdIsSet;
  std::string m_SuppFeat;
  bool m_SuppFeatIsSet;
};

}  // namespace oai::nef::model

#endif /* ServiceParameterData_H_ */
