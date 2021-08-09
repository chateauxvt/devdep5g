/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
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
 * GlobalRanNodeId.h
 *
 *
 */

#ifndef GlobalRanNodeId_H_
#define GlobalRanNodeId_H_

#include <nlohmann/json.hpp>

namespace oai {
namespace amf {
namespace model {

/// <summary>
///
/// </summary>
class GlobalRanNodeId {
 public:
  GlobalRanNodeId();
  virtual ~GlobalRanNodeId();

  void validate();

  /////////////////////////////////////////////
  /// GlobalRanNodeId members

  friend void to_json(nlohmann::json& j, const GlobalRanNodeId& o);
  friend void from_json(const nlohmann::json& j, GlobalRanNodeId& o);

 protected:
};

}  // namespace model
}  // namespace amf
}  // namespace oai

#endif /* GlobalRanNodeId_H_ */
