/**************************************************************************//**
 * @file     vector_parser.h
 * @version  V1.00
 * @brief    CRYPTO SHA test vector parser
 *
 * @note
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2017-2020 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/

#ifndef __VECTOR_PARSER_H__
#define __VECTOR_PARSER_H__

#ifdef __cplusplus
extern "C"
{
#endif

//#include "NuMicro.h"

extern uint8_t *g_au8ShaData;
extern uint8_t g_au8ShaDigest[64];
extern int32_t g_i32DataLen;


#endif  /* __VECTOR_PARSER_H__ */
