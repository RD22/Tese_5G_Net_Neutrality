/**
 * 3gpp-mo-lcs-notify
 * API for UE updated location information notification. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * LocUpdateData.h
 *
 *
 */

#ifndef LocUpdateData_H_
#define LocUpdateData_H_

#include <nlohmann/json.hpp>
#include <string>

#include "LcsQosClass.h"
#include "LocationInfo.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class LocUpdateData {
 public:
  LocUpdateData();
  virtual ~LocUpdateData() = default;

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

  bool operator==(const LocUpdateData& rhs) const;
  bool operator!=(const LocUpdateData& rhs) const;

  /////////////////////////////////////////////
  /// LocUpdateData members

  /// <summary>
  ///
  /// </summary>
  std::string getGpsi() const;
  void setGpsi(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  LocationInfo getLocInfo() const;
  void setLocInfo(LocationInfo const& value);
  /// <summary>
  ///
  /// </summary>
  LcsQosClass getLcsQosClass() const;
  void setLcsQosClass(LcsQosClass const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getSvcId() const;
  void setSvcId(std::string const& value);
  bool svcIdIsSet() const;
  void unsetSvcId();
  /// <summary>
  ///
  /// </summary>
  std::string getSuppFeat() const;
  void setSuppFeat(std::string const& value);

  friend void to_json(nlohmann::json& j, const LocUpdateData& o);
  friend void from_json(const nlohmann::json& j, LocUpdateData& o);

 protected:
  std::string m_Gpsi;

  LocationInfo m_LocInfo;

  LcsQosClass m_LcsQosClass;

  std::string m_SvcId;
  bool m_SvcIdIsSet;
  std::string m_SuppFeat;
};

}  // namespace oai::nef::model

#endif /* LocUpdateData_H_ */
