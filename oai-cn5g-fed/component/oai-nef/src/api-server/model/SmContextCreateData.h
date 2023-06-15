/**
 * Nnef_SMContext
 * Nnef SMContext Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SmContextCreateData.h
 *
 *
 */

#ifndef SmContextCreateData_H_
#define SmContextCreateData_H_

#include <nlohmann/json.hpp>
#include <string>

#include "NiddInformation.h"
#include "SmContextConfiguration.h"
#include "Snssai.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class SmContextCreateData {
 public:
  SmContextCreateData();
  virtual ~SmContextCreateData() = default;

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

  bool operator==(const SmContextCreateData& rhs) const;
  bool operator!=(const SmContextCreateData& rhs) const;

  /////////////////////////////////////////////
  /// SmContextCreateData members

  /// <summary>
  ///
  /// </summary>
  std::string getSupi() const;
  void setSupi(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  int32_t getPduSessionId() const;
  void setPduSessionId(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  std::string getDnn() const;
  void setDnn(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  Snssai getSnssai() const;
  void setSnssai(Snssai const& value);
  /// <summary>
  /// This IE shall contain the NEF ID of the target NEF.
  /// </summary>
  std::string getNefId() const;
  void setNefId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getDlNiddEndPoint() const;
  void setDlNiddEndPoint(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getNotificationUri() const;
  void setNotificationUri(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  NiddInformation getNiddInfo() const;
  void setNiddInfo(NiddInformation const& value);
  bool niddInfoIsSet() const;
  void unsetNiddInfo();
  /// <summary>
  /// When present, this IE shall indicate the UE capability to support RDS. The
  /// value of this IE shall be set as following  - true  UE supports RDS  -
  /// false (default)  UE does not support RDS
  /// </summary>
  bool isRdsSupport() const;
  void setRdsSupport(bool const value);
  bool rdsSupportIsSet() const;
  void unsetRdsSupport();
  /// <summary>
  ///
  /// </summary>
  SmContextConfiguration getSmContextConfig() const;
  void setSmContextConfig(SmContextConfiguration const& value);
  bool smContextConfigIsSet() const;
  void unsetSmContextConfig();
  /// <summary>
  ///
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const& value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();

  friend void to_json(nlohmann::json& j, const SmContextCreateData& o);
  friend void from_json(const nlohmann::json& j, SmContextCreateData& o);

 protected:
  std::string m_Supi;

  int32_t m_PduSessionId;

  std::string m_Dnn;

  Snssai m_Snssai;

  std::string m_NefId;

  std::string m_DlNiddEndPoint;

  std::string m_NotificationUri;

  NiddInformation m_NiddInfo;
  bool m_NiddInfoIsSet;
  bool m_RdsSupport;
  bool m_RdsSupportIsSet;
  SmContextConfiguration m_SmContextConfig;
  bool m_SmContextConfigIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
};

}  // namespace oai::nef::model

#endif /* SmContextCreateData_H_ */
