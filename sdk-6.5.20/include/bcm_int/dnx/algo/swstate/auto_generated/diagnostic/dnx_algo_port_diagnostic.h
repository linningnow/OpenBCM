/** \file algo/swstate/auto_generated/diagnostic/dnx_algo_port_diagnostic.h
 *
 * sw state functions declarations
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef __DNX_ALGO_PORT_DIAGNOSTIC_H__
#define __DNX_ALGO_PORT_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <soc/dnxc/swstate/dnx_sw_state_diagnostic_operation_counters.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/dnx_algo_port_types.h>
#include <bcm/port.h>
#include <bcm_int/dnx/algo/port/algo_port_mgmt.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <soc/dnxc/swstate/types/sw_state_bitmap.h>
#include <soc/dnxc/swstate/types/sw_state_pbmp.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    DNX_ALGO_PORT_DB_INFO,
    DNX_ALGO_PORT_DB_GENERAL_INFO,
    DNX_ALGO_PORT_DB_GENERAL_DUMMY_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_STATE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_INFO_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_INTERFACE_TYPE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_INTERFACE_OFFSET_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_NIF_HANDLE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_TM_HANDLE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_TM_HANDLE_H0_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_TM_HANDLE_H1_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_SCH_HANDLE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_SCH_HANDLE_H0_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_SCH_HANDLE_H1_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_SCH_IF_HANDLE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_SCH_IF_HANDLE_H0_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_SCH_IF_HANDLE_H1_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_PP_HANDLE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_PP_HANDLE_H0_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_PP_HANDLE_H1_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_ILKN_HANDLE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_FLEXE_CLIENT_HANDLE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_FLEXE_MAC_HANDLE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_FLEXE_SAR_HANDLE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_FLEXE_PHY_HANDLE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_TM_INTERFACE_HANDLE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_TM_INTERFACE_HANDLE_H0_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_TM_INTERFACE_HANDLE_H1_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_INTERFACE_HANDLE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_INTERFACE_HANDLE_H0_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_INTERFACE_HANDLE_H1_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_FABRIC_HANDLE_INFO,
    DNX_ALGO_PORT_DB_LOGICAL_CHANNEL_INFO,
    DNX_ALGO_PORT_DB_NIF_INFO,
    DNX_ALGO_PORT_DB_NIF_VALID_INFO,
    DNX_ALGO_PORT_DB_NIF_PHYS_INFO,
    DNX_ALGO_PORT_DB_NIF_FIRST_PHY_INFO,
    DNX_ALGO_PORT_DB_NIF_MASTER_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_NIF_LOGICAL_FIFOS_INFO,
    DNX_ALGO_PORT_DB_NIF_LATCH_DOWN_INFO,
    DNX_ALGO_PORT_DB_NIF_LOOPBACK_ORIGINAL_LINK_TRAINING_INFO,
    DNX_ALGO_PORT_DB_NIF_LOOPBACK_ORIGINAL_PHY_LANE_CONFIG_INFO,
    DNX_ALGO_PORT_DB_TM_INFO,
    DNX_ALGO_PORT_DB_TM_REF_COUNT_INFO,
    DNX_ALGO_PORT_DB_TM_TM_PORT_INFO,
    DNX_ALGO_PORT_DB_TM_CORE_INFO,
    DNX_ALGO_PORT_DB_TM_BASE_Q_PAIR_INFO,
    DNX_ALGO_PORT_DB_TM_PORT_APP_FLAGS_INFO,
    DNX_ALGO_PORT_DB_TM_PRIORITIES_INFO,
    DNX_ALGO_PORT_DB_TM_TDM_MODE_INFO,
    DNX_ALGO_PORT_DB_TM_HEADER_TYPE_IN_INFO,
    DNX_ALGO_PORT_DB_TM_HEADER_TYPE_OUT_INFO,
    DNX_ALGO_PORT_DB_TM_MASTER_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_SCH_INFO,
    DNX_ALGO_PORT_DB_SCH_VALID_INFO,
    DNX_ALGO_PORT_DB_SCH_BASE_HR_INFO,
    DNX_ALGO_PORT_DB_SCH_SCH_PRIORITIES_INFO,
    DNX_ALGO_PORT_DB_SCH_MASTER_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_PP_INFO,
    DNX_ALGO_PORT_DB_PP_REF_COUNT_INFO,
    DNX_ALGO_PORT_DB_PP_PP_PORT_INFO,
    DNX_ALGO_PORT_DB_PP_CORE_INFO,
    DNX_ALGO_PORT_DB_PP_IS_LAG_INFO,
    DNX_ALGO_PORT_DB_PP_LAG_ID_INFO,
    DNX_ALGO_PORT_DB_PP_MASTER_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_PP_HEADER_MODE_INFO,
    DNX_ALGO_PORT_DB_PP_INGRESS_LLVP_PROFILE_VALID_INFO,
    DNX_ALGO_PORT_DB_PP_EGRESS_LLVP_PROFILE_VALID_INFO,
    DNX_ALGO_PORT_DB_PP_ALLOC_INFO,
    DNX_ALGO_PORT_DB_ILKN_INFO,
    DNX_ALGO_PORT_DB_ILKN_VALID_INFO,
    DNX_ALGO_PORT_DB_ILKN_MASTER_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_ILKN_NOF_SEGMENTS_INFO,
    DNX_ALGO_PORT_DB_ILKN_IS_OVER_FABRIC_INFO,
    DNX_ALGO_PORT_DB_ILKN_IS_ELK_INFO,
    DNX_ALGO_PORT_DB_ILKN_LANES_INFO,
    DNX_ALGO_PORT_DB_ILKN_PRIORITY_INFO,
    DNX_ALGO_PORT_DB_FLEXE_INFO,
    DNX_ALGO_PORT_DB_FLEXE_CLIENT_INFO,
    DNX_ALGO_PORT_DB_FLEXE_CLIENT_VALID_INFO,
    DNX_ALGO_PORT_DB_FLEXE_CLIENT_CLIENT_INDEX_INFO,
    DNX_ALGO_PORT_DB_FLEXE_CLIENT_CLIENT_ID_INFO,
    DNX_ALGO_PORT_DB_FLEXE_CLIENT_MASTER_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_FLEXE_CLIENT_IS_BYPASS_INFO,
    DNX_ALGO_PORT_DB_FLEXE_MAC_INFO,
    DNX_ALGO_PORT_DB_FLEXE_MAC_VALID_INFO,
    DNX_ALGO_PORT_DB_FLEXE_MAC_MASTER_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_FLEXE_MAC_CLIENT_INDEX_INFO,
    DNX_ALGO_PORT_DB_FLEXE_MAC_LOGICAL_FIFOS_INFO,
    DNX_ALGO_PORT_DB_FLEXE_MAC_TIMESLOT_BITMAP_INFO,
    DNX_ALGO_PORT_DB_FLEXE_SAR_INFO,
    DNX_ALGO_PORT_DB_FLEXE_SAR_VALID_INFO,
    DNX_ALGO_PORT_DB_FLEXE_SAR_MASTER_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_FLEXE_SAR_CLIENT_INDEX_INFO,
    DNX_ALGO_PORT_DB_FLEXE_SAR_TIMESLOT_BITMAP_INFO,
    DNX_ALGO_PORT_DB_FLEXE_PHY_INFO,
    DNX_ALGO_PORT_DB_FLEXE_PHY_VALID_INFO,
    DNX_ALGO_PORT_DB_FLEXE_PHY_MASTER_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_FLEXE_PHY_LOGICAL_PHY_ID_INFO,
    DNX_ALGO_PORT_DB_FLEXE_PHY_CORE_PORT_INFO,
    DNX_ALGO_PORT_DB_FLEXE_PHY_INSTANCE_BASE_INFO,
    DNX_ALGO_PORT_DB_FLEXE_PHY_LPHY_BITMAP_INFO,
    DNX_ALGO_PORT_DB_FABRIC_INFO,
    DNX_ALGO_PORT_DB_FABRIC_VALID_INFO,
    DNX_ALGO_PORT_DB_FABRIC_LINK_INFO,
    DNX_ALGO_PORT_DB_FABRIC_MASTER_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_FABRIC_PRBS_MODE_INFO,
    DNX_ALGO_PORT_DB_FABRIC_SPEED_INFO,
    DNX_ALGO_PORT_DB_FABRIC_LOOPBACK_ORIGINAL_LINK_TRAINING_INFO,
    DNX_ALGO_PORT_DB_FABRIC_LOOPBACK_ORIGINAL_PHY_LANE_CONFIG_INFO,
    DNX_ALGO_PORT_DB_TM_INTERFACE_INFO,
    DNX_ALGO_PORT_DB_TM_INTERFACE_VALID_INFO,
    DNX_ALGO_PORT_DB_TM_INTERFACE_IS_CHANNELIZED_INFO,
    DNX_ALGO_PORT_DB_TM_INTERFACE_IS_INGRESS_INTERLEAVE_INFO,
    DNX_ALGO_PORT_DB_TM_INTERFACE_IS_EGRESS_INTERLEAVE_INFO,
    DNX_ALGO_PORT_DB_TM_INTERFACE_EGR_IF_INFO,
    DNX_ALGO_PORT_DB_TM_INTERFACE_TDM_MODE_INFO,
    DNX_ALGO_PORT_DB_TM_INTERFACE_MASTER_TDM_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_TM_INTERFACE_MASTER_NON_TDM_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_TM_INTERFACE_MASTER_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_INTERFACE_INFO,
    DNX_ALGO_PORT_DB_INTERFACE_VALID_INFO,
    DNX_ALGO_PORT_DB_INTERFACE_CORE_INFO,
    DNX_ALGO_PORT_DB_INTERFACE_RX_SPEED_INFO,
    DNX_ALGO_PORT_DB_INTERFACE_TX_SPEED_INFO,
    DNX_ALGO_PORT_DB_INTERFACE_MASTER_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_SCH_INTERFACE_INFO,
    DNX_ALGO_PORT_DB_SCH_INTERFACE_VALID_INFO,
    DNX_ALGO_PORT_DB_SCH_INTERFACE_SCH_IF_INFO,
    DNX_ALGO_PORT_DB_SCH_INTERFACE_PRIORITY_PROPAGATION_ENABLE_INFO,
    DNX_ALGO_PORT_DB_SCH_INTERFACE_MASTER_LOGICAL_PORT_INFO,
    DNX_ALGO_PORT_DB_SKIP_FIRST_USER_DEFINED_HEADER_SIZE_PROFILE_DATA_INFO,
    DNX_ALGO_PORT_DB_PRD_INFO,
    DNX_ALGO_PORT_DB_PRD_PORT_TO_PROFILE_MAP_INFO,
    DNX_ALGO_PORT_DB_INFO_NOF_ENTRIES
} sw_state_dnx_algo_port_db_layout_e;


extern dnx_sw_state_diagnostic_info_t dnx_algo_port_db_info[SOC_MAX_NUM_DEVICES][DNX_ALGO_PORT_DB_INFO_NOF_ENTRIES];

extern const char* dnx_algo_port_db_layout_str[DNX_ALGO_PORT_DB_INFO_NOF_ENTRIES];
int dnx_algo_port_db_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_general_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_general_dummy_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_state_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_info_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_interface_type_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_interface_offset_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_nif_handle_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_tm_handle_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_tm_handle_h0_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_tm_handle_h1_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_sch_handle_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_sch_handle_h0_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_sch_handle_h1_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_sch_if_handle_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_sch_if_handle_h0_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_sch_if_handle_h1_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_pp_handle_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_pp_handle_h0_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_pp_handle_h1_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_ilkn_handle_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_flexe_client_handle_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_flexe_mac_handle_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_flexe_sar_handle_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_flexe_phy_handle_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_tm_interface_handle_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_tm_interface_handle_h0_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_tm_interface_handle_h1_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_interface_handle_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_interface_handle_h0_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_interface_handle_h1_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_fabric_handle_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_logical_channel_dump(
    int unit, int logical_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_nif_dump(
    int unit, int nif_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_nif_valid_dump(
    int unit, int nif_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_nif_phys_dump(
    int unit, int nif_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_nif_first_phy_dump(
    int unit, int nif_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_nif_master_logical_port_dump(
    int unit, int nif_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_nif_logical_fifos_dump(
    int unit, int nif_idx_0, int logical_fifos_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_nif_latch_down_dump(
    int unit, int nif_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_nif_loopback_original_link_training_dump(
    int unit, int nif_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_nif_loopback_original_phy_lane_config_dump(
    int unit, int nif_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_dump(
    int unit, int tm_idx_0, int tm_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_ref_count_dump(
    int unit, int tm_idx_0, int tm_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_tm_port_dump(
    int unit, int tm_idx_0, int tm_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_core_dump(
    int unit, int tm_idx_0, int tm_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_base_q_pair_dump(
    int unit, int tm_idx_0, int tm_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_port_app_flags_dump(
    int unit, int tm_idx_0, int tm_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_priorities_dump(
    int unit, int tm_idx_0, int tm_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_tdm_mode_dump(
    int unit, int tm_idx_0, int tm_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_header_type_in_dump(
    int unit, int tm_idx_0, int tm_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_header_type_out_dump(
    int unit, int tm_idx_0, int tm_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_master_logical_port_dump(
    int unit, int tm_idx_0, int tm_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_sch_dump(
    int unit, int sch_idx_0, int sch_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_sch_valid_dump(
    int unit, int sch_idx_0, int sch_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_sch_base_hr_dump(
    int unit, int sch_idx_0, int sch_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_sch_sch_priorities_dump(
    int unit, int sch_idx_0, int sch_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_sch_master_logical_port_dump(
    int unit, int sch_idx_0, int sch_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_pp_dump(
    int unit, int pp_idx_0, int pp_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_pp_ref_count_dump(
    int unit, int pp_idx_0, int pp_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_pp_pp_port_dump(
    int unit, int pp_idx_0, int pp_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_pp_core_dump(
    int unit, int pp_idx_0, int pp_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_pp_is_lag_dump(
    int unit, int pp_idx_0, int pp_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_pp_lag_id_dump(
    int unit, int pp_idx_0, int pp_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_pp_master_logical_port_dump(
    int unit, int pp_idx_0, int pp_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_pp_header_mode_dump(
    int unit, int pp_idx_0, int pp_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_pp_ingress_llvp_profile_valid_dump(
    int unit, int pp_idx_0, int pp_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_pp_egress_llvp_profile_valid_dump(
    int unit, int pp_idx_0, int pp_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_pp_alloc_dump(
    int unit, int pp_alloc_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_ilkn_dump(
    int unit, int ilkn_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_ilkn_valid_dump(
    int unit, int ilkn_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_ilkn_master_logical_port_dump(
    int unit, int ilkn_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_ilkn_nof_segments_dump(
    int unit, int ilkn_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_ilkn_is_over_fabric_dump(
    int unit, int ilkn_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_ilkn_is_elk_dump(
    int unit, int ilkn_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_ilkn_lanes_dump(
    int unit, int ilkn_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_ilkn_priority_dump(
    int unit, int ilkn_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_client_dump(
    int unit, int client_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_client_valid_dump(
    int unit, int client_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_client_client_index_dump(
    int unit, int client_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_client_client_id_dump(
    int unit, int client_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_client_master_logical_port_dump(
    int unit, int client_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_client_is_bypass_dump(
    int unit, int client_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_mac_dump(
    int unit, int mac_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_mac_valid_dump(
    int unit, int mac_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_mac_master_logical_port_dump(
    int unit, int mac_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_mac_client_index_dump(
    int unit, int mac_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_mac_logical_fifos_dump(
    int unit, int mac_idx_0, int logical_fifos_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_mac_timeslot_bitmap_dump(
    int unit, int mac_idx_0, int timeslot_bitmap_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_sar_dump(
    int unit, int sar_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_sar_valid_dump(
    int unit, int sar_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_sar_master_logical_port_dump(
    int unit, int sar_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_sar_client_index_dump(
    int unit, int sar_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_sar_timeslot_bitmap_dump(
    int unit, int sar_idx_0, int timeslot_bitmap_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_phy_dump(
    int unit, int phy_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_phy_valid_dump(
    int unit, int phy_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_phy_master_logical_port_dump(
    int unit, int phy_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_phy_logical_phy_id_dump(
    int unit, int phy_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_phy_core_port_dump(
    int unit, int phy_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_phy_instance_base_dump(
    int unit, int phy_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_flexe_phy_lphy_bitmap_dump(
    int unit, int phy_idx_0, int lphy_bitmap_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_fabric_dump(
    int unit, int fabric_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_fabric_valid_dump(
    int unit, int fabric_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_fabric_link_dump(
    int unit, int fabric_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_fabric_master_logical_port_dump(
    int unit, int fabric_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_fabric_prbs_mode_dump(
    int unit, int fabric_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_fabric_speed_dump(
    int unit, int fabric_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_fabric_loopback_original_link_training_dump(
    int unit, int fabric_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_fabric_loopback_original_phy_lane_config_dump(
    int unit, int fabric_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_interface_dump(
    int unit, int tm_interface_idx_0, int tm_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_interface_valid_dump(
    int unit, int tm_interface_idx_0, int tm_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_interface_is_channelized_dump(
    int unit, int tm_interface_idx_0, int tm_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_interface_is_ingress_interleave_dump(
    int unit, int tm_interface_idx_0, int tm_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_interface_is_egress_interleave_dump(
    int unit, int tm_interface_idx_0, int tm_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_interface_egr_if_dump(
    int unit, int tm_interface_idx_0, int tm_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_interface_tdm_mode_dump(
    int unit, int tm_interface_idx_0, int tm_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_interface_master_tdm_logical_port_dump(
    int unit, int tm_interface_idx_0, int tm_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_interface_master_non_tdm_logical_port_dump(
    int unit, int tm_interface_idx_0, int tm_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_tm_interface_master_logical_port_dump(
    int unit, int tm_interface_idx_0, int tm_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_interface_dump(
    int unit, int interface_idx_0, int interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_interface_valid_dump(
    int unit, int interface_idx_0, int interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_interface_core_dump(
    int unit, int interface_idx_0, int interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_interface_rx_speed_dump(
    int unit, int interface_idx_0, int interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_interface_tx_speed_dump(
    int unit, int interface_idx_0, int interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_interface_master_logical_port_dump(
    int unit, int interface_idx_0, int interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_sch_interface_dump(
    int unit, int sch_interface_idx_0, int sch_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_sch_interface_valid_dump(
    int unit, int sch_interface_idx_0, int sch_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_sch_interface_sch_if_dump(
    int unit, int sch_interface_idx_0, int sch_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_sch_interface_priority_propagation_enable_dump(
    int unit, int sch_interface_idx_0, int sch_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_sch_interface_master_logical_port_dump(
    int unit, int sch_interface_idx_0, int sch_interface_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_skip_first_user_defined_header_size_profile_data_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_prd_dump(
    int unit, int prd_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_algo_port_db_prd_port_to_profile_map_dump(
    int unit, int prd_idx_0, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_ALGO_PORT_DIAGNOSTIC_H__ */