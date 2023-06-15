/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "N2SmInformation.h"

namespace oai {
namespace amf {
namespace model {

N2SmInformation::N2SmInformation() {
  m_PduSessionId        = 0;
  m_N2InfoContentIsSet  = false;
  m_SNssaiIsSet         = false;
  m_HomePlmnSnssaiIsSet = false;
  m_SubjectToHo         = false;
  m_SubjectToHoIsSet    = false;
}

N2SmInformation::~N2SmInformation() {}

void N2SmInformation::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const N2SmInformation& o) {
  j                 = nlohmann::json();
  j["pduSessionId"] = o.m_PduSessionId;
  if (o.n2InfoContentIsSet()) j["n2InfoContent"] = o.m_N2InfoContent;
  if (o.sNssaiIsSet()) j["sNssai"] = o.m_SNssai;
  if (o.homePlmnSnssaiIsSet()) j["homePlmnSnssai"] = o.m_HomePlmnSnssai;
  if (o.subjectToHoIsSet()) j["subjectToHo"] = o.m_SubjectToHo;
}

void from_json(const nlohmann::json& j, N2SmInformation& o) {
  j.at("pduSessionId").get_to(o.m_PduSessionId);
  if (j.find("n2InfoContent") != j.end()) {
    j.at("n2InfoContent").get_to(o.m_N2InfoContent);
    o.m_N2InfoContentIsSet = true;
  }
  if (j.find("sNssai") != j.end()) {
    j.at("sNssai").get_to(o.m_SNssai);
    o.m_SNssaiIsSet = true;
  }
  if (j.find("homePlmnSnssai") != j.end()) {
    j.at("homePlmnSnssai").get_to(o.m_HomePlmnSnssai);
    o.m_HomePlmnSnssaiIsSet = true;
  }
  if (j.find("subjectToHo") != j.end()) {
    j.at("subjectToHo").get_to(o.m_SubjectToHo);
    o.m_SubjectToHoIsSet = true;
  }
}

int32_t N2SmInformation::getPduSessionId() const {
  return m_PduSessionId;
}
void N2SmInformation::setPduSessionId(int32_t const value) {
  m_PduSessionId = value;
}
N2InfoContent N2SmInformation::getN2InfoContent() const {
  return m_N2InfoContent;
}
void N2SmInformation::setN2InfoContent(N2InfoContent const& value) {
  m_N2InfoContent      = value;
  m_N2InfoContentIsSet = true;
}
bool N2SmInformation::n2InfoContentIsSet() const {
  return m_N2InfoContentIsSet;
}
void N2SmInformation::unsetN2InfoContent() {
  m_N2InfoContentIsSet = false;
}
Snssai N2SmInformation::getSNssai() const {
  return m_SNssai;
}
void N2SmInformation::setSNssai(Snssai const& value) {
  m_SNssai      = value;
  m_SNssaiIsSet = true;
}
bool N2SmInformation::sNssaiIsSet() const {
  return m_SNssaiIsSet;
}
void N2SmInformation::unsetSNssai() {
  m_SNssaiIsSet = false;
}
Snssai N2SmInformation::getHomePlmnSnssai() const {
  return m_HomePlmnSnssai;
}
void N2SmInformation::setHomePlmnSnssai(Snssai const& value) {
  m_HomePlmnSnssai      = value;
  m_HomePlmnSnssaiIsSet = true;
}
bool N2SmInformation::homePlmnSnssaiIsSet() const {
  return m_HomePlmnSnssaiIsSet;
}
void N2SmInformation::unsetHomePlmnSnssai() {
  m_HomePlmnSnssaiIsSet = false;
}
bool N2SmInformation::isSubjectToHo() const {
  return m_SubjectToHo;
}
void N2SmInformation::setSubjectToHo(bool const value) {
  m_SubjectToHo      = value;
  m_SubjectToHoIsSet = true;
}
bool N2SmInformation::subjectToHoIsSet() const {
  return m_SubjectToHoIsSet;
}
void N2SmInformation::unsetSubjectToHo() {
  m_SubjectToHoIsSet = false;
}

}  // namespace model
}  // namespace amf
}  // namespace oai
