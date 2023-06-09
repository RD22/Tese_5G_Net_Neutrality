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
 * NefEventExposureNotif.h
 *
 *
 */

#ifndef NefEventExposureNotif_H_
#define NefEventExposureNotif_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "NefEventNotification.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class NefEventExposureNotif {
 public:
  NefEventExposureNotif();
  virtual ~NefEventExposureNotif() = default;

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

  bool operator==(const NefEventExposureNotif& rhs) const;
  bool operator!=(const NefEventExposureNotif& rhs) const;

  /////////////////////////////////////////////
  /// NefEventExposureNotif members

  /// <summary>
  ///
  /// </summary>
  std::string getNotifId() const;
  void setNotifId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::vector<NefEventNotification> getEventNotifs() const;
  void setEventNotifs(std::vector<NefEventNotification> const& value);

  friend void to_json(nlohmann::json& j, const NefEventExposureNotif& o);
  friend void from_json(const nlohmann::json& j, NefEventExposureNotif& o);

 protected:
  std::string m_NotifId;

  std::vector<NefEventNotification> m_EventNotifs;
};

}  // namespace oai::nef::model

#endif /* NefEventExposureNotif_H_ */
