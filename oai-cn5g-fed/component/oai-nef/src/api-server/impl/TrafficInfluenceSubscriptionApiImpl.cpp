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

#include "TrafficInfluenceSubscriptionApiImpl.h"

namespace oai {
namespace nef {
namespace api {

using namespace oai::nef::model;

TrafficInfluenceSubscriptionApiImpl::TrafficInfluenceSubscriptionApiImpl(
    const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : TrafficInfluenceSubscriptionApi(rtr) {}

void TrafficInfluenceSubscriptionApiImpl::af_id_subscriptions_get(
    const std::string& afId, Pistache::Http::ResponseWriter& response) {
  response.send(
      Pistache::Http::Code::Ok, "This API has not been implemented yet!\n");
}
void TrafficInfluenceSubscriptionApiImpl::af_id_subscriptions_post(
    const std::string& afId, const TrafficInfluSub& trafficInfluSub,
    Pistache::Http::ResponseWriter& response) {
  response.send(
      Pistache::Http::Code::Ok, "This API has not been implemented yet!\n");
}

}  // namespace api
}  // namespace nef
}  // namespace oai
