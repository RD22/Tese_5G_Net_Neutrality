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

#include "LocationInfo.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

LocationInfo::LocationInfo() {
  m_AgeOfLocationInfo      = 0;
  m_AgeOfLocationInfoIsSet = false;
  m_CellId                 = "";
  m_CellIdIsSet            = false;
  m_EnodeBId               = "";
  m_EnodeBIdIsSet          = false;
  m_RoutingAreaId          = "";
  m_RoutingAreaIdIsSet     = false;
  m_TrackingAreaId         = "";
  m_TrackingAreaIdIsSet    = false;
  m_PlmnId                 = "";
  m_PlmnIdIsSet            = false;
  m_TwanId                 = "";
  m_TwanIdIsSet            = false;
  m_GeographicAreaIsSet    = false;
  m_CivicAddressIsSet      = false;
  m_PositionMethodIsSet    = false;
  m_QosFulfilIndIsSet      = false;
  m_UeVelocityIsSet        = false;
  m_LdrTypeIsSet           = false;
}

void LocationInfo::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool LocationInfo::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool LocationInfo::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "LocationInfo" : pathPrefix;

  if (ageOfLocationInfoIsSet()) {
    const int32_t& value               = m_AgeOfLocationInfo;
    const std::string currentValuePath = _pathPrefix + ".ageOfLocationInfo";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
  }

  return success;
}

bool LocationInfo::operator==(const LocationInfo& rhs) const {
  return

      ((!ageOfLocationInfoIsSet() && !rhs.ageOfLocationInfoIsSet()) ||
       (ageOfLocationInfoIsSet() && rhs.ageOfLocationInfoIsSet() &&
        getAgeOfLocationInfo() == rhs.getAgeOfLocationInfo())) &&

      ((!cellIdIsSet() && !rhs.cellIdIsSet()) ||
       (cellIdIsSet() && rhs.cellIdIsSet() &&
        getCellId() == rhs.getCellId())) &&

      ((!enodeBIdIsSet() && !rhs.enodeBIdIsSet()) ||
       (enodeBIdIsSet() && rhs.enodeBIdIsSet() &&
        getEnodeBId() == rhs.getEnodeBId())) &&

      ((!routingAreaIdIsSet() && !rhs.routingAreaIdIsSet()) ||
       (routingAreaIdIsSet() && rhs.routingAreaIdIsSet() &&
        getRoutingAreaId() == rhs.getRoutingAreaId())) &&

      ((!trackingAreaIdIsSet() && !rhs.trackingAreaIdIsSet()) ||
       (trackingAreaIdIsSet() && rhs.trackingAreaIdIsSet() &&
        getTrackingAreaId() == rhs.getTrackingAreaId())) &&

      ((!plmnIdIsSet() && !rhs.plmnIdIsSet()) ||
       (plmnIdIsSet() && rhs.plmnIdIsSet() &&
        getPlmnId() == rhs.getPlmnId())) &&

      ((!twanIdIsSet() && !rhs.twanIdIsSet()) ||
       (twanIdIsSet() && rhs.twanIdIsSet() &&
        getTwanId() == rhs.getTwanId())) &&

      ((!geographicAreaIsSet() && !rhs.geographicAreaIsSet()) ||
       (geographicAreaIsSet() && rhs.geographicAreaIsSet() &&
        getGeographicArea() == rhs.getGeographicArea())) &&

      ((!civicAddressIsSet() && !rhs.civicAddressIsSet()) ||
       (civicAddressIsSet() && rhs.civicAddressIsSet() &&
        getCivicAddress() == rhs.getCivicAddress())) &&

      ((!positionMethodIsSet() && !rhs.positionMethodIsSet()) ||
       (positionMethodIsSet() && rhs.positionMethodIsSet() &&
        getPositionMethod() == rhs.getPositionMethod())) &&

      ((!qosFulfilIndIsSet() && !rhs.qosFulfilIndIsSet()) ||
       (qosFulfilIndIsSet() && rhs.qosFulfilIndIsSet() &&
        getQosFulfilInd() == rhs.getQosFulfilInd())) &&

      ((!ueVelocityIsSet() && !rhs.ueVelocityIsSet()) ||
       (ueVelocityIsSet() && rhs.ueVelocityIsSet() &&
        getUeVelocity() == rhs.getUeVelocity())) &&

      ((!ldrTypeIsSet() && !rhs.ldrTypeIsSet()) ||
       (ldrTypeIsSet() && rhs.ldrTypeIsSet() &&
        getLdrType() == rhs.getLdrType()))

          ;
}

bool LocationInfo::operator!=(const LocationInfo& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const LocationInfo& o) {
  j = nlohmann::json();
  if (o.ageOfLocationInfoIsSet())
    j["ageOfLocationInfo"] = o.m_AgeOfLocationInfo;
  if (o.cellIdIsSet()) j["cellId"] = o.m_CellId;
  if (o.enodeBIdIsSet()) j["enodeBId"] = o.m_EnodeBId;
  if (o.routingAreaIdIsSet()) j["routingAreaId"] = o.m_RoutingAreaId;
  if (o.trackingAreaIdIsSet()) j["trackingAreaId"] = o.m_TrackingAreaId;
  if (o.plmnIdIsSet()) j["plmnId"] = o.m_PlmnId;
  if (o.twanIdIsSet()) j["twanId"] = o.m_TwanId;
  if (o.geographicAreaIsSet()) j["geographicArea"] = o.m_GeographicArea;
  if (o.civicAddressIsSet()) j["civicAddress"] = o.m_CivicAddress;
  if (o.positionMethodIsSet()) j["positionMethod"] = o.m_PositionMethod;
  if (o.qosFulfilIndIsSet()) j["qosFulfilInd"] = o.m_QosFulfilInd;
  if (o.ueVelocityIsSet()) j["ueVelocity"] = o.m_UeVelocity;
  if (o.ldrTypeIsSet()) j["ldrType"] = o.m_LdrType;
}

void from_json(const nlohmann::json& j, LocationInfo& o) {
  if (j.find("ageOfLocationInfo") != j.end()) {
    j.at("ageOfLocationInfo").get_to(o.m_AgeOfLocationInfo);
    o.m_AgeOfLocationInfoIsSet = true;
  }
  if (j.find("cellId") != j.end()) {
    j.at("cellId").get_to(o.m_CellId);
    o.m_CellIdIsSet = true;
  }
  if (j.find("enodeBId") != j.end()) {
    j.at("enodeBId").get_to(o.m_EnodeBId);
    o.m_EnodeBIdIsSet = true;
  }
  if (j.find("routingAreaId") != j.end()) {
    j.at("routingAreaId").get_to(o.m_RoutingAreaId);
    o.m_RoutingAreaIdIsSet = true;
  }
  if (j.find("trackingAreaId") != j.end()) {
    j.at("trackingAreaId").get_to(o.m_TrackingAreaId);
    o.m_TrackingAreaIdIsSet = true;
  }
  if (j.find("plmnId") != j.end()) {
    j.at("plmnId").get_to(o.m_PlmnId);
    o.m_PlmnIdIsSet = true;
  }
  if (j.find("twanId") != j.end()) {
    j.at("twanId").get_to(o.m_TwanId);
    o.m_TwanIdIsSet = true;
  }
  if (j.find("geographicArea") != j.end()) {
    j.at("geographicArea").get_to(o.m_GeographicArea);
    o.m_GeographicAreaIsSet = true;
  }
  if (j.find("civicAddress") != j.end()) {
    j.at("civicAddress").get_to(o.m_CivicAddress);
    o.m_CivicAddressIsSet = true;
  }
  if (j.find("positionMethod") != j.end()) {
    j.at("positionMethod").get_to(o.m_PositionMethod);
    o.m_PositionMethodIsSet = true;
  }
  if (j.find("qosFulfilInd") != j.end()) {
    j.at("qosFulfilInd").get_to(o.m_QosFulfilInd);
    o.m_QosFulfilIndIsSet = true;
  }
  if (j.find("ueVelocity") != j.end()) {
    j.at("ueVelocity").get_to(o.m_UeVelocity);
    o.m_UeVelocityIsSet = true;
  }
  if (j.find("ldrType") != j.end()) {
    j.at("ldrType").get_to(o.m_LdrType);
    o.m_LdrTypeIsSet = true;
  }
}

int32_t LocationInfo::getAgeOfLocationInfo() const {
  return m_AgeOfLocationInfo;
}
void LocationInfo::setAgeOfLocationInfo(int32_t const value) {
  m_AgeOfLocationInfo      = value;
  m_AgeOfLocationInfoIsSet = true;
}
bool LocationInfo::ageOfLocationInfoIsSet() const {
  return m_AgeOfLocationInfoIsSet;
}
void LocationInfo::unsetAgeOfLocationInfo() {
  m_AgeOfLocationInfoIsSet = false;
}
std::string LocationInfo::getCellId() const {
  return m_CellId;
}
void LocationInfo::setCellId(std::string const& value) {
  m_CellId      = value;
  m_CellIdIsSet = true;
}
bool LocationInfo::cellIdIsSet() const {
  return m_CellIdIsSet;
}
void LocationInfo::unsetCellId() {
  m_CellIdIsSet = false;
}
std::string LocationInfo::getEnodeBId() const {
  return m_EnodeBId;
}
void LocationInfo::setEnodeBId(std::string const& value) {
  m_EnodeBId      = value;
  m_EnodeBIdIsSet = true;
}
bool LocationInfo::enodeBIdIsSet() const {
  return m_EnodeBIdIsSet;
}
void LocationInfo::unsetEnodeBId() {
  m_EnodeBIdIsSet = false;
}
std::string LocationInfo::getRoutingAreaId() const {
  return m_RoutingAreaId;
}
void LocationInfo::setRoutingAreaId(std::string const& value) {
  m_RoutingAreaId      = value;
  m_RoutingAreaIdIsSet = true;
}
bool LocationInfo::routingAreaIdIsSet() const {
  return m_RoutingAreaIdIsSet;
}
void LocationInfo::unsetRoutingAreaId() {
  m_RoutingAreaIdIsSet = false;
}
std::string LocationInfo::getTrackingAreaId() const {
  return m_TrackingAreaId;
}
void LocationInfo::setTrackingAreaId(std::string const& value) {
  m_TrackingAreaId      = value;
  m_TrackingAreaIdIsSet = true;
}
bool LocationInfo::trackingAreaIdIsSet() const {
  return m_TrackingAreaIdIsSet;
}
void LocationInfo::unsetTrackingAreaId() {
  m_TrackingAreaIdIsSet = false;
}
std::string LocationInfo::getPlmnId() const {
  return m_PlmnId;
}
void LocationInfo::setPlmnId(std::string const& value) {
  m_PlmnId      = value;
  m_PlmnIdIsSet = true;
}
bool LocationInfo::plmnIdIsSet() const {
  return m_PlmnIdIsSet;
}
void LocationInfo::unsetPlmnId() {
  m_PlmnIdIsSet = false;
}
std::string LocationInfo::getTwanId() const {
  return m_TwanId;
}
void LocationInfo::setTwanId(std::string const& value) {
  m_TwanId      = value;
  m_TwanIdIsSet = true;
}
bool LocationInfo::twanIdIsSet() const {
  return m_TwanIdIsSet;
}
void LocationInfo::unsetTwanId() {
  m_TwanIdIsSet = false;
}
GeographicArea LocationInfo::getGeographicArea() const {
  return m_GeographicArea;
}
void LocationInfo::setGeographicArea(GeographicArea const& value) {
  m_GeographicArea      = value;
  m_GeographicAreaIsSet = true;
}
bool LocationInfo::geographicAreaIsSet() const {
  return m_GeographicAreaIsSet;
}
void LocationInfo::unsetGeographicArea() {
  m_GeographicAreaIsSet = false;
}
CivicAddress LocationInfo::getCivicAddress() const {
  return m_CivicAddress;
}
void LocationInfo::setCivicAddress(CivicAddress const& value) {
  m_CivicAddress      = value;
  m_CivicAddressIsSet = true;
}
bool LocationInfo::civicAddressIsSet() const {
  return m_CivicAddressIsSet;
}
void LocationInfo::unsetCivicAddress() {
  m_CivicAddressIsSet = false;
}
PositioningMethod LocationInfo::getPositionMethod() const {
  return m_PositionMethod;
}
void LocationInfo::setPositionMethod(PositioningMethod const& value) {
  m_PositionMethod      = value;
  m_PositionMethodIsSet = true;
}
bool LocationInfo::positionMethodIsSet() const {
  return m_PositionMethodIsSet;
}
void LocationInfo::unsetPositionMethod() {
  m_PositionMethodIsSet = false;
}
AccuracyFulfilmentIndicator LocationInfo::getQosFulfilInd() const {
  return m_QosFulfilInd;
}
void LocationInfo::setQosFulfilInd(AccuracyFulfilmentIndicator const& value) {
  m_QosFulfilInd      = value;
  m_QosFulfilIndIsSet = true;
}
bool LocationInfo::qosFulfilIndIsSet() const {
  return m_QosFulfilIndIsSet;
}
void LocationInfo::unsetQosFulfilInd() {
  m_QosFulfilIndIsSet = false;
}
VelocityEstimate LocationInfo::getUeVelocity() const {
  return m_UeVelocity;
}
void LocationInfo::setUeVelocity(VelocityEstimate const& value) {
  m_UeVelocity      = value;
  m_UeVelocityIsSet = true;
}
bool LocationInfo::ueVelocityIsSet() const {
  return m_UeVelocityIsSet;
}
void LocationInfo::unsetUeVelocity() {
  m_UeVelocityIsSet = false;
}
LdrType LocationInfo::getLdrType() const {
  return m_LdrType;
}
void LocationInfo::setLdrType(LdrType const& value) {
  m_LdrType      = value;
  m_LdrTypeIsSet = true;
}
bool LocationInfo::ldrTypeIsSet() const {
  return m_LdrTypeIsSet;
}
void LocationInfo::unsetLdrType() {
  m_LdrTypeIsSet = false;
}

}  // namespace oai::nef::model
