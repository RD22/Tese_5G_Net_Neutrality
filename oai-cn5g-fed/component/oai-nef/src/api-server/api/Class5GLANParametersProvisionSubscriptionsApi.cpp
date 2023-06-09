/**
 * 3gpp-5glan-pp
 * API for 5G LAN Parameter Provision. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Class5GLANParametersProvisionSubscriptionsApi.h"

#include "Helpers.h"

namespace oai::nef::api {

using namespace oai::nef::helpers;
using namespace oai::nef::model;

const std::string Class5GLANParametersProvisionSubscriptionsApi::base =
    "/3gpp-5glan-pp/v1";

Class5GLANParametersProvisionSubscriptionsApi::
    Class5GLANParametersProvisionSubscriptionsApi(
        const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr) {}

void Class5GLANParametersProvisionSubscriptionsApi::init() {
  setupRoutes();
}

void Class5GLANParametersProvisionSubscriptionsApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router, base + "/:afId/subscriptions",
      Routes::bind(
          &Class5GLANParametersProvisionSubscriptionsApi::
              af_id_subscriptions_get_handler,
          this));
  Routes::Post(
      *router, base + "/:afId/subscriptions",
      Routes::bind(
          &Class5GLANParametersProvisionSubscriptionsApi::
              af_id_subscriptions_post_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &Class5GLANParametersProvisionSubscriptionsApi::
          class5_glan_parameters_provision_subscriptions_api_default_handler,
      this));
}

std::pair<Pistache::Http::Code, std::string>
Class5GLANParametersProvisionSubscriptionsApi::handleParsingException(
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
Class5GLANParametersProvisionSubscriptionsApi::handleOperationException(
    const std::exception& ex) const noexcept {
  return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void Class5GLANParametersProvisionSubscriptionsApi::
    af_id_subscriptions_get_handler(
        const Pistache::Rest::Request& request,
        Pistache::Http::ResponseWriter response) {
  try {
    // Getting the path params
    auto afId = request.param(":afId").as<std::string>();

    try {
      this->af_id_subscriptions_get(afId, response);
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
void Class5GLANParametersProvisionSubscriptionsApi::
    af_id_subscriptions_post_handler(
        const Pistache::Rest::Request& request,
        Pistache::Http::ResponseWriter response) {
  try {
    // Getting the path params
    auto afId = request.param(":afId").as<std::string>();

    // Getting the body param

    _5GLanParametersProvision r_5GLanParametersProvision;

    try {
      nlohmann::json::parse(request.body()).get_to(r_5GLanParametersProvision);
      r_5GLanParametersProvision.validate();
    } catch (std::exception& e) {
      const std::pair<Pistache::Http::Code, std::string> errorInfo =
          this->handleParsingException(e);
      response.send(errorInfo.first, errorInfo.second);
      return;
    }

    try {
      this->af_id_subscriptions_post(
          afId, r_5GLanParametersProvision, response);
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

void Class5GLANParametersProvisionSubscriptionsApi::
    class5_glan_parameters_provision_subscriptions_api_default_handler(
        const Pistache::Rest::Request&,
        Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace oai::nef::api
