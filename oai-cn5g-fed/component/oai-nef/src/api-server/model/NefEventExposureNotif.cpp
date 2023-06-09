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

#include "NefEventExposureNotif.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

NefEventExposureNotif::NefEventExposureNotif() {
  m_NotifId = "";
}

void NefEventExposureNotif::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool NefEventExposureNotif::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool NefEventExposureNotif::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "NefEventExposureNotif" : pathPrefix;

  /* EventNotifs */ {
    const std::vector<NefEventNotification>& value = m_EventNotifs;
    const std::string currentValuePath = _pathPrefix + ".eventNotifs";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const NefEventNotification& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".eventNotifs") && success;

        i++;
      }
    }
  }

  return success;
}

bool NefEventExposureNotif::operator==(const NefEventExposureNotif& rhs) const {
  return

      (getNotifId() == rhs.getNotifId()) &&

      (getEventNotifs() == rhs.getEventNotifs())

          ;
}

bool NefEventExposureNotif::operator!=(const NefEventExposureNotif& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NefEventExposureNotif& o) {
  j                = nlohmann::json();
  j["notifId"]     = o.m_NotifId;
  j["eventNotifs"] = o.m_EventNotifs;
}

void from_json(const nlohmann::json& j, NefEventExposureNotif& o) {
  j.at("notifId").get_to(o.m_NotifId);
  j.at("eventNotifs").get_to(o.m_EventNotifs);
}

std::string NefEventExposureNotif::getNotifId() const {
  return m_NotifId;
}
void NefEventExposureNotif::setNotifId(std::string const& value) {
  m_NotifId = value;
}
std::vector<NefEventNotification> NefEventExposureNotif::getEventNotifs()
    const {
  return m_EventNotifs;
}
void NefEventExposureNotif::setEventNotifs(
    std::vector<NefEventNotification> const& value) {
  m_EventNotifs = value;
}

}  // namespace oai::nef::model
