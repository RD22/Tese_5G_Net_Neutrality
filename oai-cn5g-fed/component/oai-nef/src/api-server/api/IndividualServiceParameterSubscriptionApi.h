/**
 * 3gpp-service-parameter
 * API for AF service paramter © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * IndividualServiceParameterSubscriptionApi.h
 *
 *
 */

#ifndef IndividualServiceParameterSubscriptionApi_H_
#define IndividualServiceParameterSubscriptionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/router.h>

#include <optional>
#include <string>
#include <utility>

#include "ProblemDetails.h"
#include "ServiceParameterData.h"
#include "ServiceParameterDataPatch.h"

namespace oai::nef::api {

class IndividualServiceParameterSubscriptionApi {
 public:
  explicit IndividualServiceParameterSubscriptionApi(
      const std::shared_ptr<Pistache::Rest::Router>& rtr);
  virtual ~IndividualServiceParameterSubscriptionApi() = default;
  void init();

  static const std::string base;

 private:
  void setupRoutes();

  void af_id_subscriptions_subscription_id_delete_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void af_id_subscriptions_subscription_id_get_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void af_id_subscriptions_subscription_id_patch_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void af_id_subscriptions_subscription_id_put_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void individual_service_parameter_subscription_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  const std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Helper function to handle unexpected Exceptions during Parameter parsing
  /// and validation. May be overridden to return custom error formats. This is
  /// called inside a catch block. Important: When overriding, do not call
  /// `throw ex;`, but instead use `throw;`.
  /// </summary>
  virtual std::pair<Pistache::Http::Code, std::string> handleParsingException(
      const std::exception& ex) const noexcept;

  /// <summary>
  /// Helper function to handle unexpected Exceptions during processing of the
  /// request in handler functions. May be overridden to return custom error
  /// formats. This is called inside a catch block. Important: When overriding,
  /// do not call `throw ex;`, but instead use `throw;`.
  /// </summary>
  virtual std::pair<Pistache::Http::Code, std::string> handleOperationException(
      const std::exception& ex) const noexcept;

  /// <summary>
  /// Deletes an already existing subscription
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  /// <param name="subscriptionId">Identifier of the subscription
  /// resource</param>
  virtual void af_id_subscriptions_subscription_id_delete(
      const std::string& afId, const std::string& subscriptionId,
      Pistache::Http::ResponseWriter& response) = 0;
  /// <summary>
  /// read an active subscriptions for the SCS/AS and the subscription Id
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  /// <param name="subscriptionId">Identifier of the subscription
  /// resource</param>
  virtual void af_id_subscriptions_subscription_id_get(
      const std::string& afId, const std::string& subscriptionId,
      Pistache::Http::ResponseWriter& response) = 0;
  /// <summary>
  /// Updates/replaces an existing subscription resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  /// <param name="subscriptionId">Identifier of the subscription
  /// resource</param> <param name="serviceParameterDataPatch"></param>
  virtual void af_id_subscriptions_subscription_id_patch(
      const std::string& afId, const std::string& subscriptionId,
      const oai::nef::model::ServiceParameterDataPatch&
          serviceParameterDataPatch,
      Pistache::Http::ResponseWriter& response) = 0;
  /// <summary>
  /// Updates/replaces an existing subscription resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  /// <param name="subscriptionId">Identifier of the subscription
  /// resource</param> <param name="serviceParameterData">Parameters to
  /// update/replace the existing subscription</param>
  virtual void af_id_subscriptions_subscription_id_put(
      const std::string& afId, const std::string& subscriptionId,
      const oai::nef::model::ServiceParameterData& serviceParameterData,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace oai::nef::api

#endif /* IndividualServiceParameterSubscriptionApi_H_ */
