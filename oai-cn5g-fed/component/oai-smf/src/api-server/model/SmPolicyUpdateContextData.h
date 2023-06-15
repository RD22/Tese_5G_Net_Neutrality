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
 * SmPolicyUpdateContextData.h
 *
 *
 */

#ifndef SmPolicyUpdateContextData_H_
#define SmPolicyUpdateContextData_H_

//#include "SubscribedDefaultQos.h"
//#include "QosNotificationControlInfo.h"
//#include "PresenceInfo.h"
//#include "MaPduIndication.h"
//#include "AccuUsageReport.h"
#include "TraceData.h"
#include "PlmnIdNid.h"
#include "PolicyControlRequestTrigger.h"
#include "Ipv6Prefix.h"
//#include "PortManagementContainer.h"
//#include "AppDetectionInfo.h"
//#include "CreditManagementStatus.h"
#include <map>
//#include "AdditionalAccessInfo.h"
//#include "AccNetChId.h"
//#include "Ambr.h"
#include "AtsssCapability.h"
#include "RatType.h"
//#include "SessionRuleReport.h"
#include <string>
//#include "ServingNfIdentity.h"
//#include "UeInitiatedResourceRequest.h"
#include <vector>
#include "AccessType.h"
//#include "QosFlowUsage.h"
//#include "QosMonitoringReport.h"
//#include "RuleReport.h"
#include "UserLocation.h"
//#include "TsnBridgeInfo.h"
//#include "IpMulticastAddressInfo.h"
#include <nlohmann/json.hpp>

namespace oai {
namespace smf_server {
namespace model {

/// <summary>
///
/// </summary>
class SmPolicyUpdateContextData {
 public:
  SmPolicyUpdateContextData();
  virtual ~SmPolicyUpdateContextData() = default;

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

  bool operator==(const SmPolicyUpdateContextData& rhs) const;
  bool operator!=(const SmPolicyUpdateContextData& rhs) const;

  /////////////////////////////////////////////
  /// SmPolicyUpdateContextData members

  /// <summary>
  /// The policy control reqeust trigges which are met.
  /// </summary>
  std::vector<PolicyControlRequestTrigger> getRepPolicyCtrlReqTriggers() const;
  void setRepPolicyCtrlReqTriggers(
      std::vector<PolicyControlRequestTrigger> const& value);
  bool repPolicyCtrlReqTriggersIsSet() const;
  void unsetRepPolicyCtrlReqTriggers();
  /// <summary>
  /// Indicates the access network charging identifier for the PCC rule(s) or
  /// whole PDU session.
  /// </summary>
  /*
  std::vector<AccNetChId> getAccNetChIds() const;
  void setAccNetChIds(std::vector<AccNetChId> const& value);
  bool accNetChIdsIsSet() const;
  void unsetAccNetChIds();
  */
  /// <summary>
  ///
  /// </summary>
  AccessType getAccessType() const;
  void setAccessType(AccessType const& value);
  bool accessTypeIsSet() const;
  void unsetAccessType();
  /// <summary>
  ///
  /// </summary>
  RatType getRatType() const;
  void setRatType(RatType const& value);
  bool ratTypeIsSet() const;
  void unsetRatType();
  /// <summary>
  ///
  /// </summary>
  /*
  AdditionalAccessInfo getAddAccessInfo() const;
  void setAddAccessInfo(AdditionalAccessInfo const& value);
  bool addAccessInfoIsSet() const;
  void unsetAddAccessInfo();
  */
  /// <summary>
  ///
  /// </summary>
  /*
  AdditionalAccessInfo getRelAccessInfo() const;
  void setRelAccessInfo(AdditionalAccessInfo const& value);
  bool relAccessInfoIsSet() const;
  void unsetRelAccessInfo();
  */
  /// <summary>
  ///
  /// </summary>
  PlmnIdNid getServingNetwork() const;
  void setServingNetwork(PlmnIdNid const& value);
  bool servingNetworkIsSet() const;
  void unsetServingNetwork();
  /// <summary>
  ///
  /// </summary>
  UserLocation getUserLocationInfo() const;
  void setUserLocationInfo(UserLocation const& value);
  bool userLocationInfoIsSet() const;
  void unsetUserLocationInfo();
  /// <summary>
  ///
  /// </summary>
  std::string getUeTimeZone() const;
  void setUeTimeZone(std::string const& value);
  bool ueTimeZoneIsSet() const;
  void unsetUeTimeZone();
  /// <summary>
  ///
  /// </summary>
  std::string getRelIpv4Address() const;
  void setRelIpv4Address(std::string const& value);
  bool relIpv4AddressIsSet() const;
  void unsetRelIpv4Address();
  /// <summary>
  ///
  /// </summary>
  std::string getIpv4Address() const;
  void setIpv4Address(std::string const& value);
  bool ipv4AddressIsSet() const;
  void unsetIpv4Address();
  /// <summary>
  /// Indicates the IPv4 address domain
  /// </summary>
  std::string getIpDomain() const;
  void setIpDomain(std::string const& value);
  bool ipDomainIsSet() const;
  void unsetIpDomain();
  /// <summary>
  ///
  /// </summary>
  /*
  Ipv6Prefix getIpv6AddressPrefix() const;
  void setIpv6AddressPrefix(Ipv6Prefix const& value);
  bool ipv6AddressPrefixIsSet() const;
  void unsetIpv6AddressPrefix();
  /// <summary>
  ///
  /// </summary>
  Ipv6Prefix getRelIpv6AddressPrefix() const;
  void setRelIpv6AddressPrefix(Ipv6Prefix const& value);
  bool relIpv6AddressPrefixIsSet() const;
  void unsetRelIpv6AddressPrefix();
  /// <summary>
  ///
  /// </summary>
  Ipv6Prefix getAddIpv6AddrPrefixes() const;
  void setAddIpv6AddrPrefixes(Ipv6Prefix const& value);
  bool addIpv6AddrPrefixesIsSet() const;
  void unsetAddIpv6AddrPrefixes();
  /// <summary>
  ///
  /// </summary>
  Ipv6Prefix getAddRelIpv6AddrPrefixes() const;
  void setAddRelIpv6AddrPrefixes(Ipv6Prefix const& value);
  bool addRelIpv6AddrPrefixesIsSet() const;
  void unsetAddRelIpv6AddrPrefixes();
  */
  /// <summary>
  ///
  /// </summary>
  std::string getRelUeMac() const;
  void setRelUeMac(std::string const& value);
  bool relUeMacIsSet() const;
  void unsetRelUeMac();
  /// <summary>
  ///
  /// </summary>
  std::string getUeMac() const;
  void setUeMac(std::string const& value);
  bool ueMacIsSet() const;
  void unsetUeMac();
  /// <summary>
  ///
  /// </summary>
  /*
  Ambr getSubsSessAmbr() const;
  void setSubsSessAmbr(Ambr const& value);
  bool subsSessAmbrIsSet() const;
  void unsetSubsSessAmbr();
  */
  /// <summary>
  /// Indicates the DN-AAA authorization profile index
  /// </summary>
  std::string getAuthProfIndex() const;
  void setAuthProfIndex(std::string const& value);
  bool authProfIndexIsSet() const;
  void unsetAuthProfIndex();
  /// <summary>
  ///
  /// </summary>
  /*
  SubscribedDefaultQos getSubsDefQos() const;
  void setSubsDefQos(SubscribedDefaultQos const& value);
  bool subsDefQosIsSet() const;
  void unsetSubsDefQos();
  */
  /// <summary>
  /// Contains the number of supported packet filter for signalled QoS rules.
  /// </summary>
  int32_t getNumOfPackFilter() const;
  void setNumOfPackFilter(int32_t const value);
  bool numOfPackFilterIsSet() const;
  void unsetNumOfPackFilter();
  /// <summary>
  /// Contains the usage report
  /// </summary>
  /*
  std::vector<AccuUsageReport> getAccuUsageReports() const;
  void setAccuUsageReports(std::vector<AccuUsageReport> const& value);
  bool accuUsageReportsIsSet() const;
  void unsetAccuUsageReports();
  */
  /// <summary>
  /// If it is included and set to true, the 3GPP PS Data Off is activated by
  /// the UE.
  /// </summary>
  bool isR3gppPsDataOffStatus() const;
  void setR3gppPsDataOffStatus(bool const value);
  bool r3gppPsDataOffStatusIsSet() const;
  void unsetr_3gppPsDataOffStatus();
  /// <summary>
  /// Report the start/stop of the application traffic and detected SDF
  /// descriptions if applicable.
  /// </summary>
  /*
  std::vector<AppDetectionInfo> getAppDetectionInfos() const;
  void setAppDetectionInfos(std::vector<AppDetectionInfo> const& value);
  bool appDetectionInfosIsSet() const;
  void unsetAppDetectionInfos();
  /// <summary>
  /// Used to report the PCC rule failure.
  /// </summary>
  std::vector<RuleReport> getRuleReports() const;
  void setRuleReports(std::vector<RuleReport> const& value);
  bool ruleReportsIsSet() const;
  void unsetRuleReports();
  /// <summary>
  /// Used to report the session rule failure.
  /// </summary>
  std::vector<SessionRuleReport> getSessRuleReports() const;
  void setSessRuleReports(std::vector<SessionRuleReport> const& value);
  bool sessRuleReportsIsSet() const;
  void unsetSessRuleReports();
  /// <summary>
  /// QoS Notification Control information.
  /// </summary>
  std::vector<QosNotificationControlInfo> getQncReports() const;
  void setQncReports(std::vector<QosNotificationControlInfo> const& value);
  bool qncReportsIsSet() const;
  void unsetQncReports();
  /// <summary>
  ///
  /// </summary>
  std::vector<QosMonitoringReport> getQosMonReports() const;
  void setQosMonReports(std::vector<QosMonitoringReport> const& value);
  bool qosMonReportsIsSet() const;
  void unsetQosMonReports();
  */
  /// <summary>
  ///
  /// </summary>
  std::string getUserLocationInfoTime() const;
  void setUserLocationInfoTime(std::string const& value);
  bool userLocationInfoTimeIsSet() const;
  void unsetUserLocationInfoTime();
  /// <summary>
  /// Reports the changes of presence reporting area.
  /// </summary>
  /*
  std::map<std::string, PresenceInfo> getRepPraInfos() const;
  void setRepPraInfos(std::map<std::string, PresenceInfo> const& value);
  bool repPraInfosIsSet() const;
  void unsetRepPraInfos();
  /// <summary>
  ///
  /// </summary>
  UeInitiatedResourceRequest getUeInitResReq() const;
  void setUeInitResReq(UeInitiatedResourceRequest const& value);
  bool ueInitResReqIsSet() const;
  void unsetUeInitResReq();
  */
  /// <summary>
  /// If it is included and set to true, the reflective QoS is supported by the
  /// UE. If it is included and set to false, the reflective QoS is revoked by
  /// the UE.
  /// </summary>
  bool isRefQosIndication() const;
  void setRefQosIndication(bool const value);
  bool refQosIndicationIsSet() const;
  void unsetRefQosIndication();
  /// <summary>
  ///
  /// </summary>
  /*
  QosFlowUsage getQosFlowUsage() const;
  void setQosFlowUsage(QosFlowUsage const& value);
  bool qosFlowUsageIsSet() const;
  void unsetQosFlowUsage();
  /// <summary>
  ///
  /// </summary>
  CreditManagementStatus getCreditManageStatus() const;
  void setCreditManageStatus(CreditManagementStatus const& value);
  bool creditManageStatusIsSet() const;
  void unsetCreditManageStatus();
  /// <summary>
  ///
  /// </summary>
  ServingNfIdentity getServNfId() const;
  void setServNfId(ServingNfIdentity const& value);
  bool servNfIdIsSet() const;
  void unsetServNfId();
  */
  /// <summary>
  ///
  /// </summary>
  TraceData getTraceReq() const;
  void setTraceReq(TraceData const& value);
  bool traceReqIsSet() const;
  void unsetTraceReq();
  /// <summary>
  ///
  /// </summary>
  /*
  MaPduIndication getMaPduInd() const;
  void setMaPduInd(MaPduIndication const& value);
  bool maPduIndIsSet() const;
  void unsetMaPduInd();
  /// <summary>
  ///
  /// </summary>
  AtsssCapability getAtsssCapab() const;
  void setAtsssCapab(AtsssCapability const& value);
  bool atsssCapabIsSet() const;
  void unsetAtsssCapab();
  /// <summary>
  ///
  /// </summary>
  TsnBridgeInfo getTsnBridgeInfo() const;
  void setTsnBridgeInfo(TsnBridgeInfo const& value);
  bool tsnBridgeInfoIsSet() const;
  void unsetTsnBridgeInfo();
  /// <summary>
  ///
  /// </summary>
  PortManagementContainer getTsnPortManContDstt() const;
  void setTsnPortManContDstt(PortManagementContainer const& value);
  bool tsnPortManContDsttIsSet() const;
  void unsetTsnPortManContDstt();
  /// <summary>
  ///
  /// </summary>
  std::vector<PortManagementContainer> getTsnPortManContNwtts() const;
  void setTsnPortManContNwtts(
      std::vector<PortManagementContainer> const& value);
  bool tsnPortManContNwttsIsSet() const;
  void unsetTsnPortManContNwtts();
  /// <summary>
  ///
  /// </summary>
  std::vector<IpMulticastAddressInfo> getMulAddrInfos() const;
  void setMulAddrInfos(std::vector<IpMulticastAddressInfo> const& value);
  bool mulAddrInfosIsSet() const;
  void unsetMulAddrInfos();
  */

  friend void to_json(nlohmann::json& j, const SmPolicyUpdateContextData& o);
  friend void from_json(const nlohmann::json& j, SmPolicyUpdateContextData& o);

 protected:
  std::vector<PolicyControlRequestTrigger> m_RepPolicyCtrlReqTriggers;
  bool m_RepPolicyCtrlReqTriggersIsSet;
  // std::vector<AccNetChId> m_AccNetChIds;
  // bool m_AccNetChIdsIsSet;
  AccessType m_AccessType;
  bool m_AccessTypeIsSet;
  RatType m_RatType;
  bool m_RatTypeIsSet;
  // AdditionalAccessInfo m_AddAccessInfo;
  // bool m_AddAccessInfoIsSet;
  // AdditionalAccessInfo m_RelAccessInfo;
  // bool m_RelAccessInfoIsSet;
  PlmnIdNid m_ServingNetwork;
  bool m_ServingNetworkIsSet;
  UserLocation m_UserLocationInfo;
  bool m_UserLocationInfoIsSet;
  std::string m_UeTimeZone;
  bool m_UeTimeZoneIsSet;
  std::string m_RelIpv4Address;
  bool m_RelIpv4AddressIsSet;
  std::string m_Ipv4Address;
  bool m_Ipv4AddressIsSet;
  std::string m_IpDomain;
  bool m_IpDomainIsSet;
  Ipv6Prefix m_Ipv6AddressPrefix;
  bool m_Ipv6AddressPrefixIsSet;
  Ipv6Prefix m_RelIpv6AddressPrefix;
  bool m_RelIpv6AddressPrefixIsSet;
  Ipv6Prefix m_AddIpv6AddrPrefixes;
  bool m_AddIpv6AddrPrefixesIsSet;
  Ipv6Prefix m_AddRelIpv6AddrPrefixes;
  bool m_AddRelIpv6AddrPrefixesIsSet;
  std::string m_RelUeMac;
  bool m_RelUeMacIsSet;
  std::string m_UeMac;
  bool m_UeMacIsSet;
  // Ambr m_SubsSessAmbr;
  // bool m_SubsSessAmbrIsSet;
  std::string m_AuthProfIndex;
  bool m_AuthProfIndexIsSet;
  // SubscribedDefaultQos m_SubsDefQos;
  // bool m_SubsDefQosIsSet;
  int32_t m_NumOfPackFilter;
  bool m_NumOfPackFilterIsSet;
  // std::vector<AccuUsageReport> m_AccuUsageReports;
  // bool m_AccuUsageReportsIsSet;
  bool m_r_3gppPsDataOffStatus;
  bool m_r_3gppPsDataOffStatusIsSet;
  // std::vector<AppDetectionInfo> m_AppDetectionInfos;
  // bool m_AppDetectionInfosIsSet;
  // std::vector<RuleReport> m_RuleReports;
  // bool m_RuleReportsIsSet;
  // std::vector<SessionRuleReport> m_SessRuleReports;
  // bool m_SessRuleReportsIsSet;
  // std::vector<QosNotificationControlInfo> m_QncReports;
  // bool m_QncReportsIsSet;
  // std::vector<QosMonitoringReport> m_QosMonReports;
  bool m_QosMonReportsIsSet;
  std::string m_UserLocationInfoTime;
  bool m_UserLocationInfoTimeIsSet;
  // std::map<std::string, PresenceInfo> m_RepPraInfos;
  // bool m_RepPraInfosIsSet;
  // UeInitiatedResourceRequest m_UeInitResReq;
  ////bool m_UeInitResReqIsSet;
  bool m_RefQosIndication;
  bool m_RefQosIndicationIsSet;
  // QosFlowUsage m_QosFlowUsage;
  // bool m_QosFlowUsageIsSet;
  // CreditManagementStatus m_CreditManageStatus;
  // bool m_CreditManageStatusIsSet;
  // ServingNfIdentity m_ServNfId;
  // bool m_ServNfIdIsSet;
  TraceData m_TraceReq;
  bool m_TraceReqIsSet;
  // MaPduIndication m_MaPduInd;
  // bool m_MaPduIndIsSet;
  AtsssCapability m_AtsssCapab;
  bool m_AtsssCapabIsSet;
  // TsnBridgeInfo m_TsnBridgeInfo;
  // bool m_TsnBridgeInfoIsSet;
  // PortManagementContainer m_TsnPortManContDstt;
  // bool m_TsnPortManContDsttIsSet;
  // std::vector<PortManagementContainer> m_TsnPortManContNwtts;
  // bool m_TsnPortManContNwttsIsSet;
  // std::vector<IpMulticastAddressInfo> m_MulAddrInfos;
  // bool m_MulAddrInfosIsSet;
};

}  // namespace model
}  // namespace smf_server
}  // namespace oai
#endif /* SmPolicyUpdateContextData_H_ */
