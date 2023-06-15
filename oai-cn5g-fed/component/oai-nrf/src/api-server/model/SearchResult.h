/**
 * NRF NFDiscovery Service
 * NRF NFDiscovery Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SearchResult.h
 *
 *
 */

#ifndef SearchResult_H_
#define SearchResult_H_

#include "NFProfile.h"
#include <string>
#include <vector>
#include <nlohmann/json.hpp>

namespace oai {
namespace nrf {
namespace model {

/// <summary>
///
/// </summary>
class SearchResult {
 public:
  SearchResult();
  virtual ~SearchResult();

  void validate();

  /////////////////////////////////////////////
  /// SearchResult members

  /// <summary>
  ///
  /// </summary>
  int32_t getValidityPeriod() const;
  void setValidityPeriod(int32_t const value);
  bool validityPeriodIsSet() const;
  void unsetValidityPeriod();
  /// <summary>
  ///
  /// </summary>
  std::vector<NFProfile>& getNfInstances();
  void setNfInstances(std::vector<NFProfile> const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getSearchId() const;
  void setSearchId(std::string const& value);
  bool searchIdIsSet() const;
  void unsetSearchId();
  /// <summary>
  ///
  /// </summary>
  int32_t getNumNfInstComplete() const;
  void setNumNfInstComplete(int32_t const value);
  bool numNfInstCompleteIsSet() const;
  void unsetNumNfInstComplete();
  /// <summary>
  ///
  /// </summary>
  std::string getNrfSupportedFeatures() const;
  void setNrfSupportedFeatures(std::string const& value);
  bool nrfSupportedFeaturesIsSet() const;
  void unsetNrfSupportedFeatures();

  friend void to_json(nlohmann::json& j, const SearchResult& o);
  friend void from_json(const nlohmann::json& j, SearchResult& o);

 protected:
  int32_t m_ValidityPeriod;
  bool m_ValidityPeriodIsSet;
  std::vector<NFProfile> m_NfInstances;

  std::string m_SearchId;
  bool m_SearchIdIsSet;
  int32_t m_NumNfInstComplete;
  bool m_NumNfInstCompleteIsSet;
  std::string m_NrfSupportedFeatures;
  bool m_NrfSupportedFeaturesIsSet;
};

}  // namespace model
}  // namespace nrf
}  // namespace oai

#endif /* SearchResult_H_ */
