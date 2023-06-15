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
 * AmfEventReport.h
 *
 *
 */

#ifndef AmfEventReport_H_
#define AmfEventReport_H_

#include "RmInfo.h"
#include "UeReachability.h"
#include "AmfEventState.h"
#include "AmfEventArea.h"
#include <string>
#include "UserLocation.h"
#include "5GsUserStateInfo.h"
#include <vector>
#include "AccessType.h"
#include "AmfEventType.h"
#include "CmInfo.h"
#include "CommunicationFailure.h"
#include "LossOfConnectivityReason.h"
#include <nlohmann/json.hpp>

namespace oai::amf::model {

/// <summary>
///
/// </summary>
class AmfEventReport {
 public:
  AmfEventReport();
  virtual ~AmfEventReport() = default;

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

  bool operator==(const AmfEventReport& rhs) const;
  bool operator!=(const AmfEventReport& rhs) const;

  /////////////////////////////////////////////
  /// AmfEventReport members

  /// <summary>
  ///
  /// </summary>
  AmfEventType getType() const;
  void setType(AmfEventType const& value);
  /// <summary>
  ///
  /// </summary>
  AmfEventState getState() const;
  void setState(AmfEventState const& value);
  /// <summary>
  ///
  /// </summary>
  uint64_t getTimeStamp() const;
  void setTimeStamp(uint64_t const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getSubscriptionId() const;
  void setSubscriptionId(std::string const& value);
  bool subscriptionIdIsSet() const;
  void unsetSubscriptionId();
  /// <summary>
  ///
  /// </summary>
  bool isAnyUe() const;
  void setAnyUe(bool const value);
  bool anyUeIsSet() const;
  void unsetAnyUe();
  /// <summary>
  ///
  /// </summary>
  std::string getSupi() const;
  void setSupi(std::string const& value);
  bool supiIsSet() const;
  void unsetSupi();
  /// <summary>
  ///
  /// </summary>
  std::vector<AmfEventArea> getAreaList() const;
  void setAreaList(std::vector<AmfEventArea> const& value);
  bool areaListIsSet() const;
  void unsetAreaList();
  /// <summary>
  ///
  /// </summary>
  int32_t getRefId() const;
  void setRefId(int32_t const value);
  bool refIdIsSet() const;
  void unsetRefId();
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
  std::string getPei() const;
  void setPei(std::string const& value);
  bool peiIsSet() const;
  void unsetPei();
  /// <summary>
  ///
  /// </summary>
  UserLocation getLocation() const;
  void setLocation(UserLocation const& value);
  bool locationIsSet() const;
  void unsetLocation();
  /// <summary>
  ///
  /// </summary>
  std::string getTimezone() const;
  void setTimezone(std::string const& value);
  bool timezoneIsSet() const;
  void unsetTimezone();
  /// <summary>
  ///
  /// </summary>
  std::vector<AccessType> getAccessTypeList() const;
  void setAccessTypeList(std::vector<AccessType> const& value);
  bool accessTypeListIsSet() const;
  void unsetAccessTypeList();
  /// <summary>
  ///
  /// </summary>
  std::vector<RmInfo> getRmInfoList() const;
  void setRmInfoList(std::vector<RmInfo> const& value);
  bool rmInfoListIsSet() const;
  void unsetRmInfoList();
  /// <summary>
  ///
  /// </summary>
  std::vector<CmInfo> getCmInfoList() const;
  void setCmInfoList(std::vector<CmInfo> const& value);
  bool cmInfoListIsSet() const;
  void unsetCmInfoList();
  /// <summary>
  ///
  /// </summary>
  UeReachability getReachability() const;
  void setReachability(UeReachability const& value);
  bool reachabilityIsSet() const;
  void unsetReachability();
  /// <summary>
  ///
  /// </summary>
  CommunicationFailure getCommFailure() const;
  void setCommFailure(CommunicationFailure const& value);
  bool commFailureIsSet() const;
  void unsetCommFailure();
  /// <summary>
  ///
  /// </summary>
  LossOfConnectivityReason getLossOfConnectReason() const;
  void setLossOfConnectReason(LossOfConnectivityReason const& value);
  bool lossOfConnectReasonIsSet() const;
  void unsetLossOfConnectReason();
  /// <summary>
  ///
  /// </summary>
  uint32_t getRanUeNgapId() const;
  void setRanUeNgapId(uint32_t const value);
  bool ranUeNgapIdIsSet() const;
  void unsetRanUeNgapId();
  /// <summary>
  ///
  /// </summary>
  long getAmfUeNgapId() const;
  void setAmfUeNgapId(long const value);
  bool amfUeNgapIdIsSet() const;
  void unsetAmfUeNgapId();
  /// <summary>
  ///
  /// </summary>
  int32_t getNumberOfUes() const;
  void setNumberOfUes(int32_t const value);
  bool numberOfUesIsSet() const;
  void unsetNumberOfUes();
  /// <summary>
  ///
  /// </summary>
  std::vector<_5GsUserStateInfo> getR5gsUserStateList() const;
  void setR5gsUserStateList(std::vector<_5GsUserStateInfo> const& value);
  bool r5gsUserStateListIsSet() const;
  void unsetr_5gsUserStateList();

  friend void to_json(nlohmann::json& j, const AmfEventReport& o);
  friend void from_json(const nlohmann::json& j, AmfEventReport& o);
  // Helper overload for validate. Used when one model stores another model and
  // calls it's validate.
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

 protected:
  AmfEventType m_Type;

  AmfEventState m_State;

  uint64_t m_TimeStamp;

  std::string m_SubscriptionId;
  bool m_SubscriptionIdIsSet;
  bool m_AnyUe;
  bool m_AnyUeIsSet;
  std::string m_Supi;
  bool m_SupiIsSet;
  std::vector<AmfEventArea> m_AreaList;
  bool m_AreaListIsSet;
  int32_t m_RefId;
  bool m_RefIdIsSet;
  std::string m_Gpsi;
  bool m_GpsiIsSet;
  std::string m_Pei;
  bool m_PeiIsSet;
  UserLocation m_Location;
  bool m_LocationIsSet;
  std::string m_Timezone;
  bool m_TimezoneIsSet;
  std::vector<AccessType> m_AccessTypeList;
  bool m_AccessTypeListIsSet;
  std::vector<RmInfo> m_RmInfoList;
  bool m_RmInfoListIsSet;
  std::vector<CmInfo> m_CmInfoList;
  bool m_CmInfoListIsSet;
  UeReachability m_Reachability;
  bool m_ReachabilityIsSet;
  CommunicationFailure m_CommFailure;
  bool m_CommFailureIsSet;
  LossOfConnectivityReason m_LossOfConnectReason;
  bool m_LossOfConnectReasonIsSet;
  uint32_t m_RanUeNgapId;
  bool m_RanUeNgapIdIsSet;
  long m_AmfUeNgapId;
  bool m_AmfUeNgapIdIsSet;
  int32_t m_NumberOfUes;
  bool m_NumberOfUesIsSet;
  std::vector<_5GsUserStateInfo> m_r_5gsUserStateList;
  bool m_r_5gsUserStateListIsSet;
};

}  // namespace oai::amf::model

#endif /* AmfEventReport_H_ */
