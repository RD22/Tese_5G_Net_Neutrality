/**
 * 3gpp-applying-bdt-policy
 * API for applying BDT policy © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IndividualAppliedBDTPolicySubscriptionApi.h"

#include "Helpers.h"

namespace oai::nef::api {

using namespace oai::nef::helpers;
using namespace oai::nef::model;

const std::string IndividualAppliedBDTPolicySubscriptionApi::base =
    "/3gpp-applying-bdt-policy/v1";

IndividualAppliedBDTPolicySubscriptionApi::
    IndividualAppliedBDTPolicySubscriptionApi(
        const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr) {}

void IndividualAppliedBDTPolicySubscriptionApi::init() {
  setupRoutes();
}

void IndividualAppliedBDTPolicySubscriptionApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Delete(
      *router, base + "/:afId/subscriptions/:subscriptionId",
      Routes::bind(
          &IndividualAppliedBDTPolicySubscriptionApi::
              af_id_subscriptions_subscription_id_delete_handler,
          this));
  Routes::Get(
      *router, base + "/:afId/subscriptions/:subscriptionId",
      Routes::bind(
          &IndividualAppliedBDTPolicySubscriptionApi::
              af_id_subscriptions_subscription_id_get_handler,
          this));
  Routes::Patch(
      *router, base + "/:afId/subscriptions/:subscriptionId",
      Routes::bind(
          &IndividualAppliedBDTPolicySubscriptionApi::
              af_id_subscriptions_subscription_id_patch_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &IndividualAppliedBDTPolicySubscriptionApi::
          individual_applied_bdt_policy_subscription_api_default_handler,
      this));
}

std::pair<Pistache::Http::Code, std::string>
IndividualAppliedBDTPolicySubscriptionApi::handleParsingException(
    const std::exception& ex) const noexcept {
  try {
    throw;
  } catch (nlohmann::detail::exception& e) {
    return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
  } catch (oai::nef::helpers::ValidationException& e) {
    return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
  } catch (std::exception& e) {
    return std::make_pair(
        Pistache::Http::Code::Internal_Server_Error, e.what());
  }
}

std::pair<Pistache::Http::Code, std::string>
IndividualAppliedBDTPolicySubscriptionApi::handleOperationException(
    const std::exception& ex) const noexcept {
  return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void IndividualAppliedBDTPolicySubscriptionApi::
    af_id_subscriptions_subscription_id_delete_handler(
        const Pistache::Rest::Request& request,
        Pistache::Http::ResponseWriter response) {
  try {
    // Getting the path params
    auto afId           = request.param(":afId").as<std::string>();
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();

    try {
      this->af_id_subscriptions_subscription_id_delete(
          afId, subscriptionId, response);
    } catch (Pistache::Http::HttpError& e) {
      response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
      return;
    } catch (std::exception& e) {
      const std::pair<Pistache::Http::Code, std::string> errorInfo =
          this->handleOperationException(e);
      response.send(errorInfo.first, errorInfo.second);
      return;
    }

  } catch (std::exception& e) {
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
  }
}
void IndividualAppliedBDTPolicySubscriptionApi::
    af_id_subscriptions_subscription_id_get_handler(
        const Pistache::Rest::Request& request,
        Pistache::Http::ResponseWriter response) {
  try {
    // Getting the path params
    auto afId           = request.param(":afId").as<std::string>();
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();

    try {
      this->af_id_subscriptions_subscription_id_get(
          afId, subscriptionId, response);
    } catch (Pistache::Http::HttpError& e) {
      response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
      return;
    } catch (std::exception& e) {
      const std::pair<Pistache::Http::Code, std::string> errorInfo =
          this->handleOperationException(e);
      response.send(errorInfo.first, errorInfo.second);
      return;
    }

  } catch (std::exception& e) {
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
  }
}
void IndividualAppliedBDTPolicySubscriptionApi::
    af_id_subscriptions_subscription_id_patch_handler(
        const Pistache::Rest::Request& request,
        Pistache::Http::ResponseWriter response) {
  try {
    // Getting the path params
    auto afId           = request.param(":afId").as<std::string>();
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();

    // Getting the body param

    AppliedBdtPolicyPatch appliedBdtPolicyPatch;

    try {
      nlohmann::json::parse(request.body()).get_to(appliedBdtPolicyPatch);
      appliedBdtPolicyPatch.validate();
    } catch (std::exception& e) {
      const std::pair<Pistache::Http::Code, std::string> errorInfo =
          this->handleParsingException(e);
      response.send(errorInfo.first, errorInfo.second);
      return;
    }

    try {
      this->af_id_subscriptions_subscription_id_patch(
          afId, subscriptionId, appliedBdtPolicyPatch, response);
    } catch (Pistache::Http::HttpError& e) {
      response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
      return;
    } catch (std::exception& e) {
      const std::pair<Pistache::Http::Code, std::string> errorInfo =
          this->handleOperationException(e);
      response.send(errorInfo.first, errorInfo.second);
      return;
    }

  } catch (std::exception& e) {
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
  }
}

void IndividualAppliedBDTPolicySubscriptionApi::
    individual_applied_bdt_policy_subscription_api_default_handler(
        const Pistache::Rest::Request&,
        Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace oai::nef::api
