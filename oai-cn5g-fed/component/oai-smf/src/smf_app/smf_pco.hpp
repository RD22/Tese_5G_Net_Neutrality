/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

/*! \file smf_pco.hpp
 \brief
 \author Lionel Gauthier
 \company Eurecom
 \email: lionel.gauthier@eurecom.fr
 */
#ifndef FILE_SMF_PCO_HPP_SEEN
#define FILE_SMF_PCO_HPP_SEEN

#include <stdint.h>

/**
 * protocol_configuration_options_ids_t
 *
 * Container for caching which protocol/container identifiers have been set in
 * the message sent by the UE.
 *
 * ID specifications based on 3GPP #24.008.
 */
typedef struct protocol_configuration_options_ids_s {
  // Protocol identifiers (from configuration protocol options list)
  uint8_t pi_ipcp : 1;

  // Container identifiers (from additional parameters list)
  uint8_t ci_dns_server_ipv4_address_request : 1;
  uint8_t ci_ip_address_allocation_via_nas_signalling : 1;
  uint8_t ci_ipv4_address_allocation_via_dhcpv4 : 1;
  uint8_t ci_ipv4_link_mtu_request : 1;
  uint8_t ci_dns_server_ipv6_address_request : 1;
  uint8_t ci_ipv6_p_cscf_request : 1;
  uint8_t ci_ipv4_p_cscf_request : 1;
  uint8_t ci_selected_bearer_control_mode : 1;
} protocol_configuration_options_ids_t;

#endif
