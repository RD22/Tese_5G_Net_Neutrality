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

#include "IndividualTrafficInfluenceSubscriptionApiImpl.h"

namespace oai {
namespace nef {
namespace api {

using namespace oai::nef::model;

IndividualTrafficInfluenceSubscriptionApiImpl::
    IndividualTrafficInfluenceSubscriptionApiImpl(
        const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : IndividualTrafficInfluenceSubscriptionApi(rtr) {}

void IndividualTrafficInfluenceSubscriptionApiImpl::
    af_id_subscriptions_subscription_id_delete(
        const std::string& afId, const std::string& subscriptionId,
        Pistache::Http::ResponseWriter& response) {
  response.send(
      Pistache::Http::Code::Ok, "This API has not been implemented yet!\n");
}
void IndividualTrafficInfluenceSubscriptionApiImpl::
    af_id_subscriptions_subscription_id_get(
        const std::string& afId, const std::string& subscriptionId,
        Pistache::Http::ResponseWriter& response) {
  response.send(
      Pistache::Http::Code::Ok, "This API has not been implemented yet!\n");
}
void IndividualTrafficInfluenceSubscriptionApiImpl::
    af_id_subscriptions_subscription_id_patch(
        const std::string& afId, const std::string& subscriptionId,
        const TrafficInfluSubPatch& trafficInfluSubPatch,
        Pistache::Http::ResponseWriter& response) {
  response.send(
      Pistache::Http::Code::Ok, "This API has not been implemented yet!\n");
}
void IndividualTrafficInfluenceSubscriptionApiImpl::
    af_id_subscriptions_subscription_id_put(
        const std::string& afId, const std::string& subscriptionId,
        const TrafficInfluSub& trafficInfluSub,
        Pistache::Http::ResponseWriter& response) {
  response.send(
      Pistache::Http::Code::Ok, "This API has not been implemented yet!\n");
}

}  // namespace api
}  // namespace nef
}  // namespace oai
