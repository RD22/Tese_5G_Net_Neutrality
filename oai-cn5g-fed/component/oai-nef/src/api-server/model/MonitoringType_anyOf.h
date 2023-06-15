/**
 * 3gpp-monitoring-event
 * API for Monitoring Event. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * MonitoringType_anyOf.h
 *
 *
 */

#ifndef MonitoringType_anyOf_H_
#define MonitoringType_anyOf_H_

#include <nlohmann/json.hpp>

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class MonitoringType_anyOf {
 public:
  MonitoringType_anyOf();
  virtual ~MonitoringType_anyOf() = default;

  enum class eMonitoringType_anyOf {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    LOSS_OF_CONNECTIVITY,
    UE_REACHABILITY,
    LOCATION_REPORTING,
    CHANGE_OF_IMSI_IMEI_ASSOCIATION,
    ROAMING_STATUS,
    COMMUNICATION_FAILURE,
    AVAILABILITY_AFTER_DDN_FAILURE,
    NUMBER_OF_UES_IN_AN_AREA,
    PDN_CONNECTIVITY_STATUS,
    DOWNLINK_DATA_DELIVERY_STATUS,
    API_SUPPORT_CAPABILITY,
    NUM_OF_REGD_UES,
    NUM_OF_ESTD_PDU_SESSIONS,
    AREA_OF_INTEREST
  };

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

  bool operator==(const MonitoringType_anyOf& rhs) const;
  bool operator!=(const MonitoringType_anyOf& rhs) const;

  /////////////////////////////////////////////
  /// MonitoringType_anyOf members

  MonitoringType_anyOf::eMonitoringType_anyOf getValue() const;
  void setValue(MonitoringType_anyOf::eMonitoringType_anyOf value);

  friend void to_json(nlohmann::json& j, const MonitoringType_anyOf& o);
  friend void from_json(const nlohmann::json& j, MonitoringType_anyOf& o);

 protected:
  MonitoringType_anyOf::eMonitoringType_anyOf m_value = MonitoringType_anyOf::
      eMonitoringType_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
};

}  // namespace oai::nef::model

#endif /* MonitoringType_anyOf_H_ */
