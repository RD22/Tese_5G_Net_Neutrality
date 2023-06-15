/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudm_UECM
 * Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Guami.h"

namespace oai::udm::model {

Guami::Guami() {
  m_AmfId = "";
}

Guami::~Guami() {}

void Guami::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const Guami& o) {
  j           = nlohmann::json();
  j["plmnId"] = o.m_PlmnId;
  j["amfId"]  = o.m_AmfId;
}

void from_json(const nlohmann::json& j, Guami& o) {
  j.at("plmnId").get_to(o.m_PlmnId);
  j.at("amfId").get_to(o.m_AmfId);
}

PlmnIdNid Guami::getPlmnId() const {
  return m_PlmnId;
}
void Guami::setPlmnId(PlmnIdNid const& value) {
  m_PlmnId = value;
}
std::string Guami::getAmfId() const {
  return m_AmfId;
}
void Guami::setAmfId(std::string const& value) {
  m_AmfId = value;
}

}  // namespace oai::udm::model