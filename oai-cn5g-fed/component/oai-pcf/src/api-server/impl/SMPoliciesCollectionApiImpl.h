/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2020, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1.alpha-5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * SMPoliciesCollectionApiImpl.h
 *
 *
 */

#ifndef SM_POLICIES_COLLECTION_API_IMPL_H_
#define SM_POLICIES_COLLECTION_API_IMPL_H_

#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <SMPoliciesCollectionApi.h>

#include "ProblemDetails.h"
#include "SmPolicyContextData.h"
#include "SmPolicyDecision.h"
#include <string>

#include "pcf_sm_policy_control.hpp"

namespace oai {
namespace pcf {
namespace api {

using namespace oai::pcf::model;
using namespace pcf;

class SMPoliciesCollectionApiImpl
    : public oai::pcf::api::SMPoliciesCollectionApi {
 public:
  explicit SMPoliciesCollectionApiImpl(
      const std::shared_ptr<Pistache::Rest::Router>& rtr,
      const std::shared_ptr<app::pcf_smpc> smpc_service, std::string address);
  ~SMPoliciesCollectionApiImpl() override = default;

  void create_sm_policy(
      const SmPolicyContextData& smPolicyContextData,
      Pistache::Http::ResponseWriter& response);

 private:
  std::string m_address;
  std::shared_ptr<app::pcf_smpc> smpc_service;
};

}  // namespace api
}  // namespace pcf
}  // namespace oai

#endif
