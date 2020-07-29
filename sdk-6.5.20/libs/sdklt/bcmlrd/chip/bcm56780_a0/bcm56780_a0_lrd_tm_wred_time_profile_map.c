/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/tm/bcm56780_a0/bcm56780_a0_TM_WRED_TIME_PROFILE.map.ltl for
 *      bcm56780_a0
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56780_a0_lrd_enumpool.h"
/* TM_WRED_TIME_PROFILE field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_tm_wred_time_profile_map_field_data_mmd[] = {
    { /* 0 TM_WRED_TIME_PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 1 TIME_DOMAIN */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x3f,
      .depth = 0,
      .width = 6,
      .edata = BCM56780_A0_LRD_TM_WRED_TIME_DOMAIN_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_tm_wred_time_profile_map_field_data = {
    .fields = 2,
    .field = bcm56780_a0_lrd_tm_wred_time_profile_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_tm_wred_time_profilet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = TRUE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 3,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_tm_wred_time_profilet_attr_group = {
    .attributes = 3,
    .attr = bcm56780_a0_lrd_tm_wred_time_profilet_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_lrd_tm_wred_time_profilet_mmu_wred_time_domain_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TM_WRED_TIME_PROFILEt_TM_WRED_TIME_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TIME_DOMAIN_FIELDf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TM_WRED_TIME_PROFILEt_TIME_DOMAINf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 6,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_lrd_tm_wred_time_profile_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MMU_WRED_TIME_DOMAINr,
        },
        .entries = 2,
        .entry = bcm56780_a0_lrd_tm_wred_time_profilet_mmu_wred_time_domain_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_tm_wred_time_profile_map = {
    .src_id = TM_WRED_TIME_PROFILEt,
    .field_data = &bcm56780_a0_lrd_tm_wred_time_profile_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_lrd_tm_wred_time_profile_map_group,
    .table_attr = &bcm56780_a0_lrd_tm_wred_time_profilet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};