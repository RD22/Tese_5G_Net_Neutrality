/**
 * 3gpp-acs-pp
 * API for 5G ACS Parameter Provision. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IndividualACSConfigurationSubscriptionApiImpl.h"

namespace oai {
namespace nef {
namespace api {

using namespace oai::nef::model;

IndividualACSConfigurationSubscriptionApiImpl::
    IndividualACSConfigurationSubscriptionApiImpl(
        const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : IndividualACSConfigurationSubscriptionApi(rtr) {}

void IndividualACSConfigurationSubscriptionApiImpl::
    af_id_subscriptions_subscription_id_delete(
        const std::string& afId, const std::string& subscriptionId,
        Pistache::Http::ResponseWriter& response) {
  response.send(
      Pistache::Http::Code::Ok, "This API has not been implemented yet!\n");
}
void IndividualACSConfigurationSubscriptionApiImpl::
    af_id_subscriptions_subscription_id_get(
        const std::string& afId, const std::string& subscriptionId,
        Pistache::Http::ResponseWriter& response) {
  response.send(
      Pistache::Http::Code::Ok, "This API has not been implemented yet!\n");
}
void IndividualACSConfigurationSubscriptionApiImpl::
    af_id_subscriptions_subscription_id_put(
        const std::string& afId, const std::string& subscriptionId,
        const AcsConfigurationData& acsConfigurationData,
        Pistache::Http::ResponseWriter& response) {
  response.send(
      Pistache::Http::Code::Ok, "This API has not been implemented yet!\n");
}

}  // namespace api
}  // namespace nef
}  // namespace oai
