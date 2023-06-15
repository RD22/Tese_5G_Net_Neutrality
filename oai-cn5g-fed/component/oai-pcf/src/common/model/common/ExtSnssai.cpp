/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2020, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ExtSnssai.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

ExtSnssai::ExtSnssai() {
  m_Sst             = 0;
  m_Sd              = "";
  m_SdIsSet         = false;
  m_SdRangesIsSet   = false;
  m_WildcardSd      = false;
  m_WildcardSdIsSet = false;
}

void ExtSnssai::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool ExtSnssai::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ExtSnssai::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "ExtSnssai" : pathPrefix;

  /* Sst */ {
    const int32_t& value               = m_Sst;
    const std::string currentValuePath = _pathPrefix + ".sst";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
    if (value > 255) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 255;";
    }
  }

  if (sdIsSet()) {
    const std::string& value           = m_Sd;
    const std::string currentValuePath = _pathPrefix + ".sd";
  }

  if (sdRangesIsSet()) {
    const std::vector<oai::model::common::SdRange>& value = m_SdRanges;
    const std::string currentValuePath = _pathPrefix + ".sdRanges";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::SdRange& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".sdRanges") && success;

        i++;
      }
    }
  }

  return success;
}

bool ExtSnssai::operator==(const ExtSnssai& rhs) const {
  return

      (getSst() == rhs.getSst()) &&

      ((!sdIsSet() && !rhs.sdIsSet()) ||
       (sdIsSet() && rhs.sdIsSet() && getSd() == rhs.getSd())) &&

      ((!sdRangesIsSet() && !rhs.sdRangesIsSet()) ||
       (sdRangesIsSet() && rhs.sdRangesIsSet() &&
        getSdRanges() == rhs.getSdRanges())) &&

      ((!wildcardSdIsSet() && !rhs.wildcardSdIsSet()) ||
       (wildcardSdIsSet() && rhs.wildcardSdIsSet() &&
        isWildcardSd() == rhs.isWildcardSd()))

          ;
}

bool ExtSnssai::operator!=(const ExtSnssai& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ExtSnssai& o) {
  j        = nlohmann::json();
  j["sst"] = o.m_Sst;
  if (o.sdIsSet()) j["sd"] = o.m_Sd;
  if (o.sdRangesIsSet() || !o.m_SdRanges.empty()) j["sdRanges"] = o.m_SdRanges;
  if (o.wildcardSdIsSet()) j["wildcardSd"] = o.m_WildcardSd;
}

void from_json(const nlohmann::json& j, ExtSnssai& o) {
  j.at("sst").get_to(o.m_Sst);
  if (j.find("sd") != j.end()) {
    j.at("sd").get_to(o.m_Sd);
    o.m_SdIsSet = true;
  }
  if (j.find("sdRanges") != j.end()) {
    j.at("sdRanges").get_to(o.m_SdRanges);
    o.m_SdRangesIsSet = true;
  }
  if (j.find("wildcardSd") != j.end()) {
    j.at("wildcardSd").get_to(o.m_WildcardSd);
    o.m_WildcardSdIsSet = true;
  }
}

int32_t ExtSnssai::getSst() const {
  return m_Sst;
}
void ExtSnssai::setSst(int32_t const value) {
  m_Sst = value;
}
std::string ExtSnssai::getSd() const {
  return m_Sd;
}
void ExtSnssai::setSd(std::string const& value) {
  m_Sd      = value;
  m_SdIsSet = true;
}
bool ExtSnssai::sdIsSet() const {
  return m_SdIsSet;
}
void ExtSnssai::unsetSd() {
  m_SdIsSet = false;
}
std::vector<oai::model::common::SdRange> ExtSnssai::getSdRanges() const {
  return m_SdRanges;
}
void ExtSnssai::setSdRanges(
    std::vector<oai::model::common::SdRange> const& value) {
  m_SdRanges      = value;
  m_SdRangesIsSet = true;
}
bool ExtSnssai::sdRangesIsSet() const {
  return m_SdRangesIsSet;
}
void ExtSnssai::unsetSdRanges() {
  m_SdRangesIsSet = false;
}
bool ExtSnssai::isWildcardSd() const {
  return m_WildcardSd;
}
void ExtSnssai::setWildcardSd(bool const value) {
  m_WildcardSd      = value;
  m_WildcardSdIsSet = true;
}
bool ExtSnssai::wildcardSdIsSet() const {
  return m_WildcardSdIsSet;
}
void ExtSnssai::unsetWildcardSd() {
  m_WildcardSdIsSet = false;
}

}  // namespace oai::model::common
