/**
 * 3gpp-traffic-influence
 * API for AF traffic influence © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "EventNotification.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

EventNotification::EventNotification() {
  m_AfTransId               = "";
  m_AfTransIdIsSet          = false;
  m_SourceTrafficRouteIsSet = false;
  m_TargetTrafficRouteIsSet = false;
  m_SourceDnai              = "";
  m_SourceDnaiIsSet         = false;
  m_TargetDnai              = "";
  m_TargetDnaiIsSet         = false;
  m_Gpsi                    = "";
  m_GpsiIsSet               = false;
  m_SrcUeIpv4Addr           = "";
  m_SrcUeIpv4AddrIsSet      = false;
  m_SrcUeIpv6PrefixIsSet    = false;
  m_TgtUeIpv4Addr           = "";
  m_TgtUeIpv4AddrIsSet      = false;
  m_TgtUeIpv6PrefixIsSet    = false;
  m_UeMac                   = "";
  m_UeMacIsSet              = false;
  m_AfAckUri                = "";
  m_AfAckUriIsSet           = false;
}

void EventNotification::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool EventNotification::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool EventNotification::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "EventNotification" : pathPrefix;

  if (gpsiIsSet()) {
    const std::string& value           = m_Gpsi;
    const std::string currentValuePath = _pathPrefix + ".gpsi";
  }

  if (ueMacIsSet()) {
    const std::string& value           = m_UeMac;
    const std::string currentValuePath = _pathPrefix + ".ueMac";
  }

  return success;
}

bool EventNotification::operator==(const EventNotification& rhs) const {
  return

      ((!afTransIdIsSet() && !rhs.afTransIdIsSet()) ||
       (afTransIdIsSet() && rhs.afTransIdIsSet() &&
        getAfTransId() == rhs.getAfTransId())) &&

      (getDnaiChgType() == rhs.getDnaiChgType()) &&

      ((!sourceTrafficRouteIsSet() && !rhs.sourceTrafficRouteIsSet()) ||
       (sourceTrafficRouteIsSet() && rhs.sourceTrafficRouteIsSet() &&
        getSourceTrafficRoute() == rhs.getSourceTrafficRoute())) &&

      (getSubscribedEvent() == rhs.getSubscribedEvent()) &&

      ((!targetTrafficRouteIsSet() && !rhs.targetTrafficRouteIsSet()) ||
       (targetTrafficRouteIsSet() && rhs.targetTrafficRouteIsSet() &&
        getTargetTrafficRoute() == rhs.getTargetTrafficRoute())) &&

      ((!sourceDnaiIsSet() && !rhs.sourceDnaiIsSet()) ||
       (sourceDnaiIsSet() && rhs.sourceDnaiIsSet() &&
        getSourceDnai() == rhs.getSourceDnai())) &&

      ((!targetDnaiIsSet() && !rhs.targetDnaiIsSet()) ||
       (targetDnaiIsSet() && rhs.targetDnaiIsSet() &&
        getTargetDnai() == rhs.getTargetDnai())) &&

      ((!gpsiIsSet() && !rhs.gpsiIsSet()) ||
       (gpsiIsSet() && rhs.gpsiIsSet() && getGpsi() == rhs.getGpsi())) &&

      ((!srcUeIpv4AddrIsSet() && !rhs.srcUeIpv4AddrIsSet()) ||
       (srcUeIpv4AddrIsSet() && rhs.srcUeIpv4AddrIsSet() &&
        getSrcUeIpv4Addr() == rhs.getSrcUeIpv4Addr())) &&

      ((!srcUeIpv6PrefixIsSet() && !rhs.srcUeIpv6PrefixIsSet()) ||
       (srcUeIpv6PrefixIsSet() && rhs.srcUeIpv6PrefixIsSet() &&
        getSrcUeIpv6Prefix() == rhs.getSrcUeIpv6Prefix())) &&

      ((!tgtUeIpv4AddrIsSet() && !rhs.tgtUeIpv4AddrIsSet()) ||
       (tgtUeIpv4AddrIsSet() && rhs.tgtUeIpv4AddrIsSet() &&
        getTgtUeIpv4Addr() == rhs.getTgtUeIpv4Addr())) &&

      ((!tgtUeIpv6PrefixIsSet() && !rhs.tgtUeIpv6PrefixIsSet()) ||
       (tgtUeIpv6PrefixIsSet() && rhs.tgtUeIpv6PrefixIsSet() &&
        getTgtUeIpv6Prefix() == rhs.getTgtUeIpv6Prefix())) &&

      ((!ueMacIsSet() && !rhs.ueMacIsSet()) ||
       (ueMacIsSet() && rhs.ueMacIsSet() && getUeMac() == rhs.getUeMac())) &&

      ((!afAckUriIsSet() && !rhs.afAckUriIsSet()) ||
       (afAckUriIsSet() && rhs.afAckUriIsSet() &&
        getAfAckUri() == rhs.getAfAckUri()))

          ;
}

bool EventNotification::operator!=(const EventNotification& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const EventNotification& o) {
  j = nlohmann::json();
  if (o.afTransIdIsSet()) j["afTransId"] = o.m_AfTransId;
  j["dnaiChgType"] = o.m_DnaiChgType;
  if (o.sourceTrafficRouteIsSet())
    j["sourceTrafficRoute"] = o.m_SourceTrafficRoute;
  j["subscribedEvent"] = o.m_SubscribedEvent;
  if (o.targetTrafficRouteIsSet())
    j["targetTrafficRoute"] = o.m_TargetTrafficRoute;
  if (o.sourceDnaiIsSet()) j["sourceDnai"] = o.m_SourceDnai;
  if (o.targetDnaiIsSet()) j["targetDnai"] = o.m_TargetDnai;
  if (o.gpsiIsSet()) j["gpsi"] = o.m_Gpsi;
  if (o.srcUeIpv4AddrIsSet()) j["srcUeIpv4Addr"] = o.m_SrcUeIpv4Addr;
  if (o.srcUeIpv6PrefixIsSet()) j["srcUeIpv6Prefix"] = o.m_SrcUeIpv6Prefix;
  if (o.tgtUeIpv4AddrIsSet()) j["tgtUeIpv4Addr"] = o.m_TgtUeIpv4Addr;
  if (o.tgtUeIpv6PrefixIsSet()) j["tgtUeIpv6Prefix"] = o.m_TgtUeIpv6Prefix;
  if (o.ueMacIsSet()) j["ueMac"] = o.m_UeMac;
  if (o.afAckUriIsSet()) j["afAckUri"] = o.m_AfAckUri;
}

void from_json(const nlohmann::json& j, EventNotification& o) {
  if (j.find("afTransId") != j.end()) {
    j.at("afTransId").get_to(o.m_AfTransId);
    o.m_AfTransIdIsSet = true;
  }
  j.at("dnaiChgType").get_to(o.m_DnaiChgType);
  if (j.find("sourceTrafficRoute") != j.end()) {
    j.at("sourceTrafficRoute").get_to(o.m_SourceTrafficRoute);
    o.m_SourceTrafficRouteIsSet = true;
  }
  j.at("subscribedEvent").get_to(o.m_SubscribedEvent);
  if (j.find("targetTrafficRoute") != j.end()) {
    j.at("targetTrafficRoute").get_to(o.m_TargetTrafficRoute);
    o.m_TargetTrafficRouteIsSet = true;
  }
  if (j.find("sourceDnai") != j.end()) {
    j.at("sourceDnai").get_to(o.m_SourceDnai);
    o.m_SourceDnaiIsSet = true;
  }
  if (j.find("targetDnai") != j.end()) {
    j.at("targetDnai").get_to(o.m_TargetDnai);
    o.m_TargetDnaiIsSet = true;
  }
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
  if (j.find("srcUeIpv4Addr") != j.end()) {
    j.at("srcUeIpv4Addr").get_to(o.m_SrcUeIpv4Addr);
    o.m_SrcUeIpv4AddrIsSet = true;
  }
  if (j.find("srcUeIpv6Prefix") != j.end()) {
    j.at("srcUeIpv6Prefix").get_to(o.m_SrcUeIpv6Prefix);
    o.m_SrcUeIpv6PrefixIsSet = true;
  }
  if (j.find("tgtUeIpv4Addr") != j.end()) {
    j.at("tgtUeIpv4Addr").get_to(o.m_TgtUeIpv4Addr);
    o.m_TgtUeIpv4AddrIsSet = true;
  }
  if (j.find("tgtUeIpv6Prefix") != j.end()) {
    j.at("tgtUeIpv6Prefix").get_to(o.m_TgtUeIpv6Prefix);
    o.m_TgtUeIpv6PrefixIsSet = true;
  }
  if (j.find("ueMac") != j.end()) {
    j.at("ueMac").get_to(o.m_UeMac);
    o.m_UeMacIsSet = true;
  }
  if (j.find("afAckUri") != j.end()) {
    j.at("afAckUri").get_to(o.m_AfAckUri);
    o.m_AfAckUriIsSet = true;
  }
}

std::string EventNotification::getAfTransId() const {
  return m_AfTransId;
}
void EventNotification::setAfTransId(std::string const& value) {
  m_AfTransId      = value;
  m_AfTransIdIsSet = true;
}
bool EventNotification::afTransIdIsSet() const {
  return m_AfTransIdIsSet;
}
void EventNotification::unsetAfTransId() {
  m_AfTransIdIsSet = false;
}
DnaiChangeType EventNotification::getDnaiChgType() const {
  return m_DnaiChgType;
}
void EventNotification::setDnaiChgType(DnaiChangeType const& value) {
  m_DnaiChgType = value;
}
RouteToLocation EventNotification::getSourceTrafficRoute() const {
  return m_SourceTrafficRoute;
}
void EventNotification::setSourceTrafficRoute(RouteToLocation const& value) {
  m_SourceTrafficRoute      = value;
  m_SourceTrafficRouteIsSet = true;
}
bool EventNotification::sourceTrafficRouteIsSet() const {
  return m_SourceTrafficRouteIsSet;
}
void EventNotification::unsetSourceTrafficRoute() {
  m_SourceTrafficRouteIsSet = false;
}
SubscribedEvent EventNotification::getSubscribedEvent() const {
  return m_SubscribedEvent;
}
void EventNotification::setSubscribedEvent(SubscribedEvent const& value) {
  m_SubscribedEvent = value;
}
RouteToLocation EventNotification::getTargetTrafficRoute() const {
  return m_TargetTrafficRoute;
}
void EventNotification::setTargetTrafficRoute(RouteToLocation const& value) {
  m_TargetTrafficRoute      = value;
  m_TargetTrafficRouteIsSet = true;
}
bool EventNotification::targetTrafficRouteIsSet() const {
  return m_TargetTrafficRouteIsSet;
}
void EventNotification::unsetTargetTrafficRoute() {
  m_TargetTrafficRouteIsSet = false;
}
std::string EventNotification::getSourceDnai() const {
  return m_SourceDnai;
}
void EventNotification::setSourceDnai(std::string const& value) {
  m_SourceDnai      = value;
  m_SourceDnaiIsSet = true;
}
bool EventNotification::sourceDnaiIsSet() const {
  return m_SourceDnaiIsSet;
}
void EventNotification::unsetSourceDnai() {
  m_SourceDnaiIsSet = false;
}
std::string EventNotification::getTargetDnai() const {
  return m_TargetDnai;
}
void EventNotification::setTargetDnai(std::string const& value) {
  m_TargetDnai      = value;
  m_TargetDnaiIsSet = true;
}
bool EventNotification::targetDnaiIsSet() const {
  return m_TargetDnaiIsSet;
}
void EventNotification::unsetTargetDnai() {
  m_TargetDnaiIsSet = false;
}
std::string EventNotification::getGpsi() const {
  return m_Gpsi;
}
void EventNotification::setGpsi(std::string const& value) {
  m_Gpsi      = value;
  m_GpsiIsSet = true;
}
bool EventNotification::gpsiIsSet() const {
  return m_GpsiIsSet;
}
void EventNotification::unsetGpsi() {
  m_GpsiIsSet = false;
}
std::string EventNotification::getSrcUeIpv4Addr() const {
  return m_SrcUeIpv4Addr;
}
void EventNotification::setSrcUeIpv4Addr(std::string const& value) {
  m_SrcUeIpv4Addr      = value;
  m_SrcUeIpv4AddrIsSet = true;
}
bool EventNotification::srcUeIpv4AddrIsSet() const {
  return m_SrcUeIpv4AddrIsSet;
}
void EventNotification::unsetSrcUeIpv4Addr() {
  m_SrcUeIpv4AddrIsSet = false;
}
Ipv6Prefix EventNotification::getSrcUeIpv6Prefix() const {
  return m_SrcUeIpv6Prefix;
}
void EventNotification::setSrcUeIpv6Prefix(Ipv6Prefix const& value) {
  m_SrcUeIpv6Prefix      = value;
  m_SrcUeIpv6PrefixIsSet = true;
}
bool EventNotification::srcUeIpv6PrefixIsSet() const {
  return m_SrcUeIpv6PrefixIsSet;
}
void EventNotification::unsetSrcUeIpv6Prefix() {
  m_SrcUeIpv6PrefixIsSet = false;
}
std::string EventNotification::getTgtUeIpv4Addr() const {
  return m_TgtUeIpv4Addr;
}
void EventNotification::setTgtUeIpv4Addr(std::string const& value) {
  m_TgtUeIpv4Addr      = value;
  m_TgtUeIpv4AddrIsSet = true;
}
bool EventNotification::tgtUeIpv4AddrIsSet() const {
  return m_TgtUeIpv4AddrIsSet;
}
void EventNotification::unsetTgtUeIpv4Addr() {
  m_TgtUeIpv4AddrIsSet = false;
}
Ipv6Prefix EventNotification::getTgtUeIpv6Prefix() const {
  return m_TgtUeIpv6Prefix;
}
void EventNotification::setTgtUeIpv6Prefix(Ipv6Prefix const& value) {
  m_TgtUeIpv6Prefix      = value;
  m_TgtUeIpv6PrefixIsSet = true;
}
bool EventNotification::tgtUeIpv6PrefixIsSet() const {
  return m_TgtUeIpv6PrefixIsSet;
}
void EventNotification::unsetTgtUeIpv6Prefix() {
  m_TgtUeIpv6PrefixIsSet = false;
}
std::string EventNotification::getUeMac() const {
  return m_UeMac;
}
void EventNotification::setUeMac(std::string const& value) {
  m_UeMac      = value;
  m_UeMacIsSet = true;
}
bool EventNotification::ueMacIsSet() const {
  return m_UeMacIsSet;
}
void EventNotification::unsetUeMac() {
  m_UeMacIsSet = false;
}
std::string EventNotification::getAfAckUri() const {
  return m_AfAckUri;
}
void EventNotification::setAfAckUri(std::string const& value) {
  m_AfAckUri      = value;
  m_AfAckUriIsSet = true;
}
bool EventNotification::afAckUriIsSet() const {
  return m_AfAckUriIsSet;
}
void EventNotification::unsetAfAckUri() {
  m_AfAckUriIsSet = false;
}

}  // namespace oai::nef::model
