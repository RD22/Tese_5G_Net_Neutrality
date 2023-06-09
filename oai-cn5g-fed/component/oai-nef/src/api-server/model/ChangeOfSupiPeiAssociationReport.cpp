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

#include "ChangeOfSupiPeiAssociationReport.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

ChangeOfSupiPeiAssociationReport::ChangeOfSupiPeiAssociationReport() {
  m_NewPei = "";
}

void ChangeOfSupiPeiAssociationReport::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool ChangeOfSupiPeiAssociationReport::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ChangeOfSupiPeiAssociationReport::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ChangeOfSupiPeiAssociationReport" : pathPrefix;

  /* NewPei */ {
    const std::string& value           = m_NewPei;
    const std::string currentValuePath = _pathPrefix + ".newPei";
  }

  return success;
}

bool ChangeOfSupiPeiAssociationReport::operator==(
    const ChangeOfSupiPeiAssociationReport& rhs) const {
  return

      (getNewPei() == rhs.getNewPei())

          ;
}

bool ChangeOfSupiPeiAssociationReport::operator!=(
    const ChangeOfSupiPeiAssociationReport& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ChangeOfSupiPeiAssociationReport& o) {
  j           = nlohmann::json();
  j["newPei"] = o.m_NewPei;
}

void from_json(const nlohmann::json& j, ChangeOfSupiPeiAssociationReport& o) {
  j.at("newPei").get_to(o.m_NewPei);
}

std::string ChangeOfSupiPeiAssociationReport::getNewPei() const {
  return m_NewPei;
}
void ChangeOfSupiPeiAssociationReport::setNewPei(std::string const& value) {
  m_NewPei = value;
}

}  // namespace oai::nef::model
