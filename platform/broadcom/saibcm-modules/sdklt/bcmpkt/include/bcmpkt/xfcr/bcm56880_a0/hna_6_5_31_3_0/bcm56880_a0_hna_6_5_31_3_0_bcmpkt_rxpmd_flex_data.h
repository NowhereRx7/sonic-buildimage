/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) map.yml.
 * Edits to this file will be lost when it is regenerated.
 *
 * $Id: $
 * Copyright 2018-2024 Broadcom. All rights reserved.
 * The term 'Broadcom' refers to Broadcom Inc. and/or its subsidiaries.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License 
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * A copy of the GNU General Public License version 2 (GPLv2) can
 * be found in the LICENSES folder.
 * All Rights Reserved.$
 *
 * Tool Path: $SDK/INTERNAL/fltg/xfc_map_parser
 *
 ****************************************************************/

#ifndef BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_DATA_H
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_DATA_H

/*!
 * \name RX flex metadata field IDs.
 */
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_DLB_ECMP_DESTINATION_15_0                      0
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_DROP_CODE_15_0                                 1
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_DVP_15_0                                       2
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_EFFECTIVE_TTL_7_0                              3
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_EM_FT_OPAQUE_OBJ_OR_IFP_OPAQUE_OBJ_15_0        4
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_ENTROPY_LABEL_HIGH_3_0                         5
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_ENTROPY_LABEL_LOW_15_0                         6
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_EVENT_TRACE_VECTOR_31_0                        7
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_EVENT_TRACE_VECTOR_47_32                       8
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_I2E_CLASS_ID_15_0                              9
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_IFP_IOAM_GBP_ACTION_3_0                        10
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_IFP_TS_CONTROL_ACTION_3_0                      11
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_ING_PORT_GROUP_ID_3_0_3_0                      12
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_ING_PORT_GROUP_ID_7_4_3_0                      13
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_ING_TIMESTAMP_31_0                             14
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_INGRESS_PP_PORT_ITAG_PRESERVE_15_0             15
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_INGRESS_QOS_REMAP_VALUE_OR_IFP_OPAQUE_OBJ_15_0 16
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_INGRESS_QOS_REMARK_CTRL_3_0                    17
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_INT_PRI_3_0                                    18
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_L2_IIF_10_0                                    19
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_L2_OIF_10_0                                    20
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_L3_IIF_13_0                                    21
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_L3_OIF_1_13_0                                  22
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_NHOP_2_OR_ECMP_GROUP_INDEX_1_15_0              23
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_NHOP_INDEX_1_15_0                              24
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_PARSER_VHLEN_0_15_0                            25
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_PKT_MISC_CTRL_0_3_0                            26
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_SVP_15_0                                       27
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_SVP_NETWORK_GROUP_BITMAP_3_0                   28
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_SYSTEM_DESTINATION_15_0                        29
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_SYSTEM_OPCODE_3_0                              30
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_SYSTEM_SOURCE_15_0                             31
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_TIMESTAMP_CTRL_3_0                             32
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_TUNNEL_PROCESSING_RESULTS_1_3_0                33
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_VFI_15_0                                       34

#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_FID_COUNT                       35
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_COUNT                    42

/*!
 * \name Packet Flex Reason Types.
 */
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_CB_STATION_MOVE                         0
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_CML_FLAGS                               1
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_DLB_ECMP_MONITOR_EN_OR_MEMBER_REASSINED 2
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_DLB_LAG_MONITOR_EN_OR_MEMBER_REASSINED  3
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_DST_FP                                  4
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_EM_FT                                   5
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_IFP                                     6
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_IFP_METER                               7
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_IPMC_L3_IIF_OR_RPA_ID_CHECK_FAILED      8
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_IVXLT                                   9
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L2_DST_LOOKUP                           10
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L2_DST_LOOKUP_MISS                      11
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L2_SRC_STATIC_MOVE                      12
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L3_DST_LOOKUP                           13
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L3_DST_LOOKUP_MISS                      14
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L3_HDR_ERROR                            15
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L3_IIF_EQ_L3_OIF                        16
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L3_TTL_ERROR                            17
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_LEARN_CACHE_FULL                        18
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MACSA_MULTICAST_RSVD                    19
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_0                      20
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_1                      21
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_2                      22
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_3                      23
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_4                      24
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_5                      25
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_6                      26
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_7                      27
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MEMBERSHIP_CHECK_FAILED_RSVD            28
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MIRROR_SAMPLER_EGR_SAMPLED              29
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MIRROR_SAMPLER_SAMPLED                  30
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MPLS_CTRL_PKT_TO_CPU                    31
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_NO_COPY_TO_CPU                          32
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_PKT_INTEGRITY_CHECK_FAILED              33
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_PROTOCOL_PKT                            34
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_RESERVED_TRACE_BIT                      35
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_SER_DROP                                36
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_SPANNING_TREE_CHECK_FAILED_RSVD         37
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_SVP                                     38
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_TRACE_DOP                               39
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_URPF_CHECK_FAILED                       40
#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_VFP                                     41

#define BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_NAME_MAP_INIT \
    {"CB_STATION_MOVE", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_CB_STATION_MOVE},\
    {"CML_FLAGS", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_CML_FLAGS},\
    {"DLB_ECMP_MONITOR_EN_OR_MEMBER_REASSINED", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_DLB_ECMP_MONITOR_EN_OR_MEMBER_REASSINED},\
    {"DLB_LAG_MONITOR_EN_OR_MEMBER_REASSINED", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_DLB_LAG_MONITOR_EN_OR_MEMBER_REASSINED},\
    {"DST_FP", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_DST_FP},\
    {"EM_FT", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_EM_FT},\
    {"IFP", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_IFP},\
    {"IFP_METER", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_IFP_METER},\
    {"IPMC_L3_IIF_OR_RPA_ID_CHECK_FAILED", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_IPMC_L3_IIF_OR_RPA_ID_CHECK_FAILED},\
    {"IVXLT", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_IVXLT},\
    {"L2_DST_LOOKUP", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L2_DST_LOOKUP},\
    {"L2_DST_LOOKUP_MISS", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L2_DST_LOOKUP_MISS},\
    {"L2_SRC_STATIC_MOVE", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L2_SRC_STATIC_MOVE},\
    {"L3_DST_LOOKUP", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L3_DST_LOOKUP},\
    {"L3_DST_LOOKUP_MISS", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L3_DST_LOOKUP_MISS},\
    {"L3_HDR_ERROR", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L3_HDR_ERROR},\
    {"L3_IIF_EQ_L3_OIF", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L3_IIF_EQ_L3_OIF},\
    {"L3_TTL_ERROR", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_L3_TTL_ERROR},\
    {"LEARN_CACHE_FULL", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_LEARN_CACHE_FULL},\
    {"MACSA_MULTICAST_RSVD", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MACSA_MULTICAST_RSVD},\
    {"MATCHED_RULE_BIT_0", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_0},\
    {"MATCHED_RULE_BIT_1", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_1},\
    {"MATCHED_RULE_BIT_2", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_2},\
    {"MATCHED_RULE_BIT_3", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_3},\
    {"MATCHED_RULE_BIT_4", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_4},\
    {"MATCHED_RULE_BIT_5", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_5},\
    {"MATCHED_RULE_BIT_6", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_6},\
    {"MATCHED_RULE_BIT_7", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MATCHED_RULE_BIT_7},\
    {"MEMBERSHIP_CHECK_FAILED_RSVD", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MEMBERSHIP_CHECK_FAILED_RSVD},\
    {"MIRROR_SAMPLER_EGR_SAMPLED", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MIRROR_SAMPLER_EGR_SAMPLED},\
    {"MIRROR_SAMPLER_SAMPLED", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MIRROR_SAMPLER_SAMPLED},\
    {"MPLS_CTRL_PKT_TO_CPU", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_MPLS_CTRL_PKT_TO_CPU},\
    {"NO_COPY_TO_CPU", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_NO_COPY_TO_CPU},\
    {"PKT_INTEGRITY_CHECK_FAILED", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_PKT_INTEGRITY_CHECK_FAILED},\
    {"PROTOCOL_PKT", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_PROTOCOL_PKT},\
    {"RESERVED_TRACE_BIT", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_RESERVED_TRACE_BIT},\
    {"SER_DROP", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_SER_DROP},\
    {"SPANNING_TREE_CHECK_FAILED_RSVD", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_SPANNING_TREE_CHECK_FAILED_RSVD},\
    {"SVP", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_SVP},\
    {"TRACE_DOP", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_TRACE_DOP},\
    {"URPF_CHECK_FAILED", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_URPF_CHECK_FAILED},\
    {"VFP", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_VFP},\
    {"flex reason count", BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_REASON_COUNT}

#endif /* BCM56880_A0_HNA_6_5_31_3_0_BCMPKT_RXPMD_FLEX_DATA_H */
