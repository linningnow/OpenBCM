/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/device/common/common_DEVICE_OP_PT_INFO.map.ltl for
 *      bcm56880_a0
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
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56880_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* DEVICE_OP_PT_INFO field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_device_op_pt_info_map_field_data_mmd[] = {
    { /* 0 PT_ID */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_KEY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x2900,
      .depth = 0,
      .width = 14,
      .edata = BCM56880_A0_LRD_PTID_T_DATA,
    },
    { /* 1 PT_INDEX */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 2 PT_INSTANCE */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 3 PT_OP */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x9,
      .depth = 0,
      .width = 4,
      .edata = BCMLTD_COMMON_PT_OP_T_DATA,
    },
    { /* 4 PT_OP_STATUS */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCMLTD_COMMON_PT_OP_STATUS_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_device_op_pt_info_map_field_data = {
    .fields = 5,
    .field = bcm56880_a0_lrd_device_op_pt_info_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_device_op_pt_infot_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_device_op_pt_infot_attr_group = {
    .attributes = 1,
    .attr = bcm56880_a0_lrd_device_op_pt_infot_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_lrd_bcmimm_device_op_pt_info_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56880_a0_lta_bcmimm_device_op_pt_info_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56880_A0_LTA_BCMIMM_DEVICE_OP_PT_INFO_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_device_op_pt_info_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_lrd_bcmimm_device_op_pt_info_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_device_op_pt_info_map = {
    .src_id = DEVICE_OP_PT_INFOt,
    .field_data = &bcm56880_a0_lrd_device_op_pt_info_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_lrd_device_op_pt_info_map_group,
    .table_attr = &bcm56880_a0_lrd_device_op_pt_infot_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};