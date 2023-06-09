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

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "common_types.h"
#include "TLVEncoder.h"
#include "TLVDecoder.h"
#include "ProcedureTransactionIdentity.h"

int encode_procedure_transaction_identity(
    ProcedureTransactionIdentity proceduretransactionidentity, uint8_t iei,
    uint8_t* buffer, uint32_t len) {
  uint8_t encoded = 0;
  CHECK_PDU_POINTER_AND_LENGTH_ENCODER(
      buffer, PROCEDURE_TRANSACTION_IDENTITY_MINIMUM_LENGTH, len);
  ENCODE_U8(buffer + encoded, (uint8_t) proceduretransactionidentity, encoded);
  return encoded;
}

int decode_procedure_transaction_identity(
    ProcedureTransactionIdentity* proceduretransactionidentity, uint8_t iei,
    uint8_t* buffer, uint32_t len) {
  int decoded = 0;
  uint8_t pti = 0;
  // TODO: should remove raw pointer
  DECODE_U8(buffer + decoded, pti, decoded);
  *proceduretransactionidentity = pti;
  return decoded;
}
