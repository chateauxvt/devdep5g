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
 * AmfEventTrigger.h
 *
 *
 */

#ifndef AmfEventTrigger_H_
#define AmfEventTrigger_H_

#include <nlohmann/json.hpp>

namespace oai {
namespace amf {
namespace model {

/// <summary>
///
/// </summary>
class AmfEventTrigger {
 public:
  AmfEventTrigger();
  virtual ~AmfEventTrigger();

  void validate();

  /////////////////////////////////////////////
  /// AmfEventTrigger members

  friend void to_json(nlohmann::json& j, const AmfEventTrigger& o);
  friend void from_json(const nlohmann::json& j, AmfEventTrigger& o);

 protected:
};

}  // namespace model
}  // namespace amf
}  // namespace oai

#endif /* AmfEventTrigger_H_ */
