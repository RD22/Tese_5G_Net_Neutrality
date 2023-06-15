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
 * ServiceParameterSubscriptionsApi.h
 *
 *
 */

#ifndef ServiceParameterSubscriptionsApi_H_
#define ServiceParameterSubscriptionsApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/router.h>

#include <optional>
#include <string>
#include <utility>

#include "ProblemDetails.h"
#include "ServiceParameterData.h"

namespace oai::nef::api {

class ServiceParameterSubscriptionsApi {
 public:
  explicit ServiceParameterSubscriptionsApi(
      const std::shared_ptr<Pistache::Rest::Router>& rtr);
  virtual ~ServiceParameterSubscriptionsApi() = default;
  void init();

  static const std::string base;

 private:
  void setupRoutes();

  void af_id_subscriptions_get_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void af_id_subscriptions_post_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void service_parameter_subscriptions_api_default_handler(
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
  /// read all of the active subscriptions for the AF
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  virtual void af_id_subscriptions_get(
      const std::string& afId, Pistache::Http::ResponseWriter& response) = 0;
  /// <summary>
  /// Creates a new subscription resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  /// <param name="serviceParameterData">Request to create a new subscription
  /// resource</param>
  virtual void af_id_subscriptions_post(
      const std::string& afId,
      const oai::nef::model::ServiceParameterData& serviceParameterData,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace oai::nef::api

#endif /* ServiceParameterSubscriptionsApi_H_ */
