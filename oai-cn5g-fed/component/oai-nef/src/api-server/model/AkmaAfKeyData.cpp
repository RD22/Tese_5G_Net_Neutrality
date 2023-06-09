/**
 * 3gpp-akma
 * API for AKMA. © 2020, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI,
 * TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AkmaAfKeyData.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

AkmaAfKeyData::AkmaAfKeyData() {
  m_SuppFeat      = "";
  m_SuppFeatIsSet = false;
  m_Expiry        = "";
  m_Kaf           = "";
}

void AkmaAfKeyData::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool AkmaAfKeyData::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool AkmaAfKeyData::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "AkmaAfKeyData" : pathPrefix;

  if (suppFeatIsSet()) {
    const std::string& value           = m_SuppFeat;
    const std::string currentValuePath = _pathPrefix + ".suppFeat";
  }

  return success;
}

bool AkmaAfKeyData::operator==(const AkmaAfKeyData& rhs) const {
  return

      ((!suppFeatIsSet() && !rhs.suppFeatIsSet()) ||
       (suppFeatIsSet() && rhs.suppFeatIsSet() &&
        getSuppFeat() == rhs.getSuppFeat())) &&

      (getExpiry() == rhs.getExpiry()) &&

      (getKaf() == rhs.getKaf())

          ;
}

bool AkmaAfKeyData::operator!=(const AkmaAfKeyData& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AkmaAfKeyData& o) {
  j = nlohmann::json();
  if (o.suppFeatIsSet()) j["suppFeat"] = o.m_SuppFeat;
  j["expiry"] = o.m_Expiry;
  j["kaf"]    = o.m_Kaf;
}

void from_json(const nlohmann::json& j, AkmaAfKeyData& o) {
  if (j.find("suppFeat") != j.end()) {
    j.at("suppFeat").get_to(o.m_SuppFeat);
    o.m_SuppFeatIsSet = true;
  }
  j.at("expiry").get_to(o.m_Expiry);
  j.at("kaf").get_to(o.m_Kaf);
}

std::string AkmaAfKeyData::getSuppFeat() const {
  return m_SuppFeat;
}
void AkmaAfKeyData::setSuppFeat(std::string const& value) {
  m_SuppFeat      = value;
  m_SuppFeatIsSet = true;
}
bool AkmaAfKeyData::suppFeatIsSet() const {
  return m_SuppFeatIsSet;
}
void AkmaAfKeyData::unsetSuppFeat() {
  m_SuppFeatIsSet = false;
}
std::string AkmaAfKeyData::getExpiry() const {
  return m_Expiry;
}
void AkmaAfKeyData::setExpiry(std::string const& value) {
  m_Expiry = value;
}
std::string AkmaAfKeyData::getKaf() const {
  return m_Kaf;
}
void AkmaAfKeyData::setKaf(std::string const& value) {
  m_Kaf = value;
}

}  // namespace oai::nef::model
