//=================================================================
// Copyright 2017 Advanced Micro Devices, Inc. All rights reserved.
//=================================================================

#ifndef __beStringConstants_h
#define __beStringConstants_h

#include <AMDTOSWrappers/Include/osOSDefinitions.h>
#include <AMDTOSWrappers/Include/osStringConstants.h>

#define SA_BE_STR_HLSL_optionsDefaultCompilerSubfolder       OS_STR_32BitDirectoryName
#define SA_BE_STR_HLSL_optionsDefaultCompilerFileName        L"D3DCompiler_47"
#define SA_BE_STR_HLSL_optionsDefaultCompilerFileExtension   OS_MODULE_EXTENSION

// *******************
// ISA OPCODES - BEGIN
// *******************

// ***************************
// SCALAR INSTRUCTIONS - BEGIN
// ***************************
#define SOP2_S_ADD_U32      "s_add_u32"
#define SOP2_S_SUB_U32      "s_sub_u32"
#define SOP2_S_ADD_I32      "s_add_i32"
#define SOP2_S_SUB_I32      "s_sub_i32"
#define SOP2_S_ADDC_U32     "s_addc_u32"
#define SOP2_S_SUBB_U32     "s_subb_u32"
#define SOP2_S_LSHL_B32     "s_lshl_b32"
#define SOP2_S_LSHL_B64     "s_lshl_b64"
#define SOP2_S_LSHR_B32     "s_lshr_b32"
#define SOP2_S_LSHR_B64     "s_lshr_b64"
#define SOP2_S_MUL_I32      "s_mul_i32"
#define SOP2_S_AND_B32      "s_and_b32"
#define SOP2_S_AND_B64      "s_and_b64"
#define SOP2_S_OR_B32       "s_or_b32"
#define SOP2_S_OR_B64       "s_or_b64"
#define SOP2_S_XOR_B32      "s_xor_b32"
#define SOP2_S_XOR_B64      "s_xor_b64"
#define SOP2_S_ANDN2_B32    "s_andn2_b32"
#define SOP2_S_ANDN2_B64    "s_andn2_b64"
#define SOP2_S_ORN2_B32     "s_orn2_b32"
#define SOP2_S_ORN2_B64     "s_orn2_b64"
#define SOP2_S_NAND_B32     "s_nand_b32"
#define SOP2_S_NAND_B64     "s_nand_b64"
#define SOP2_S_NOR_B32      "s_nor_b32"
#define SOP2_S_NOR_B64      "s_nor_b64"
#define SOP2_S_XNOR_B32     "s_xnor_b32"
#define SOP2_S_XNOR_B64     "s_xnor_b64"
#define SOP1_S_MOV_B32      "s_mov_b32"
#define SOP1_S_MOV_B64      "s_mov_b64"
#define SOP1_S_CMOV_B32     "s_cmov_b32"
#define SOP1_S_CMOV_B64     "s_cmov_b64"
#define SOP1_S_NOT_B32      "s_not_b32"
#define SOP1_S_NOT_B64      "s_not_b64"

// Comparison.
#define SOPC_S_CMP_EQ_I32 "s_cmp_eq_i32"
#define SOPC_S_CMP_NE_I32 "s_cmp_ne_i32"
#define SOPC_S_CMP_GT_I32 "s_cmp_gt_i32"
#define SOPC_S_CMP_GE_I32 "s_cmp_ge_i32"
#define SOPC_S_CMP_LE_I32 "s_cmp_le_i32"
#define SOPC_S_CMP_LT_I32 "s_cmp_lt_i32"

#define SOPC_S_CMP_EQ_U32 "s_cmp_eq_u32"
#define SOPC_S_CMP_NE_U32 "s_cmp_ne_u32"
#define SOPC_S_CMP_GT_U32 "s_cmp_gt_u32"
#define SOPC_S_CMP_GE_U32 "s_cmp_ge_u32"
#define SOPC_S_CMP_LE_U32 "s_cmp_le_u32"
#define SOPC_S_CMP_LT_U32 "s_cmp_lt_u32"

#define SOPK_S_CMPK_EQ_I32 "s_cmpk_eq_i32"
#define SOPK_S_CMPK_NE_I32 "s_cmpk_ne_i32"
#define SOPK_S_CMPK_GT_I32 "s_cmpk_gt_i32"
#define SOPK_S_CMPK_GE_I32 "s_cmpk_ge_i32"
#define SOPK_S_CMPK_LE_I32 "s_cmpk_le_i32"
#define SOPK_S_CMPK_LT_I32 "s_cmpk_lt_i32"

#define SOPK_S_CMPK_EQ_U32 "s_cmpk_eq_u32"
#define SOPK_S_CMPK_NE_U32 "s_cmpk_ne_u32"
#define SOPK_S_CMPK_GT_U32 "s_cmpk_gt_u32"
#define SOPK_S_CMPK_GE_U32 "s_cmpk_ge_u32"
#define SOPK_S_CMPK_LE_U32 "s_cmpk_le_u32"
#define SOPK_S_CMPK_LT_U32 "s_cmpk_lt_u32"

#define SOPC_S_BITCMP0_B32 "s_bitcmp0_b32"
#define SOPC_S_BITCMP0_B64 "s_bitcmp0_b64"

#define SOPC_S_BITCMP1_B32 "s_bitcmp1_b32"
#define SOPC_S_BITCMP1_B64 "s_bitcmp1_b64"

// Other.
#define SOP2_S_MOVK_I32 "s_movk_i32"
#define SOP2_S_ASHR_I32 "s_ashr_i32"
#define SOP2_S_ASHR_I64 "s_ashr_i64"
#define SOP2_S_BFM_B32  "s_bfm_b32"
#define SOP2_S_BFM_B64  "s_bfm_b64"

#define SOP2_S_BFE_I32  "s_bfe_i32"
#define SOP2_S_BFE_I64  "s_bfe_i64"
#define SOP2_S_BFE_U32  "s_bfe_u32"
#define SOP2_S_BFE_U64  "s_bfe_u64"

#define SOP1_S_WQM_B32  "s_wqm_b32"
#define SOP1_S_WQM_B64  "s_wqm_b64"

#define SOP1_S_QUADMASK_B32 "s_quadmask_b32"
#define SOP1_S_QUADMASK_B64 "s_quadmask_b64"

#define SOP1_S_BREV_B32 "s_brev_b32"
#define SOP1_S_BREV_B64 "s_brev_b64"

#define SOP1_S_BCNT0_I32_B32 "s_bcnt0_i32_b32"
#define SOP1_S_BCNT0_I32_B64 "s_bcnt0_i32_b64"

#define SOP1_S_BCNT1_I32_B32 "s_bcnt1_i32_b32"
#define SOP1_S_BCNT1_I32_B64 "s_bcnt1_i32_b64"

#define SOP1_S_FF0_I32_B32 "s_ff0_i32_b32"
#define SOP1_S_FF0_I32_B64 "s_ff0_i32_b64"
#define SOP1_S_FF1_I32_B32 "s_ff1_i32_b32"
#define SOP1_S_FF1_I32_B64 "s_ff1_i32_b64"

#define SOP1_S_FLBIT_I32_B32 "s_flbit_i32_b32"
#define SOP1_S_FLBIT_I32_B64 "s_flbit_i32_b64"

#define SOP1_S_FLBIT_I32        "s_flbit_i32"
#define SOP1_S_FLBIT_I32_I64    "s_flbit_i32_i64"

#define SOP1_S_BITSET0_B32 "s_bitset0_b32"
#define SOP1_S_BITSET0_B64 "s_bitset0_b64"
#define SOP1_S_BITSET1_B32 "s_bitset1_b32"
#define SOP1_S_BITSET1_B64 "s_bitset1_b64"

#define SOP1_S_AND_SAVEEXEC_B64     "s_and_saveexec_b64"
#define SOP1_S_OR_SAVEEXEC_B64      "s_or_saveexec_b64"
#define SOP1_S_XOR_SAVEEXEC_B64     "s_xor_saveexec_b64"
#define SOP1_S_ANDN2_SAVEEXEC_B64   "s_andn2_saveexec_b64"
#define SOP1_S_ORN2_SAVEEXEC_B64    "s_orn2_saveexec_b64"
#define SOP1_S_NAND_SAVEEXEC_B64    "s_nand_saveexec_b64"
#define SOP1_S_NOR_SAVEEXEC_B64     "s_nor_saveexec_b64"
#define SOP1_S_XNOR_SAVEEXEC_B64    "s_xnor_saveexec_b64"

#define SOP1_S_MOVRELS_B32 "s_movrels_b32"
#define SOP1_S_MOVRELS_B64 "s_movrels_b64"
#define SOP1_S_MOVRELD_B32 "s_movreld_b32"
#define SOP1_S_MOVRELD_B64 "s_movreld_b64"

#define SOPK_S_GETREG_B32 "s_getreg_b32"
#define SOPK_S_SETREG_B32 "s_setreg_b32"
#define SOPK_S_SETREG_IMM32_B32 "s_setreg_imm32_b32"

#define SOP2_S_CSELECT_B32 "s_cselect_b32"
#define SOP2_S_CSELECT_B64 "s_cselect_b64"

#define SOPK_S_CMOVK_I32    "s_cmovk_i32"
#define SOP1_S_CMOV_B32     "s_cmov_b32"
#define SOP1_S_CMOV_B64     "s_cmov_b64"

#define SOP2_S_ABSDIFF_I32  "s_absdiff_i32"
#define SOP2_S_MIN_I32      "s_min_i32"
#define SOP2_S_MIN_U32      "s_min_u32"
#define SOP2_S_MAX_I32      "s_max_i32"
#define SOP2_S_MAX_U32      "s_max_u32"
#define SOP1_S_ABS_I32      "s_abs_i32"
#define SOP1_S_SEXT_I32_I8  "s_sext_i32_i8"
#define SOP1_S_SEXT_I32_I16 "s_sext_i32_i16"


// SOPP - Program Control.
#define SOPP_S_NOP          "s_nop"
#define SOPP_S_ENDPGM       "s_endpgm"
#define SOPP_S_TRAP         "s_trap"
#define SOPP_S_RFE          "s_rfe"
#define SOPP_S_SETPRIO      "s_setprio"
#define SOPP_S_SLEEP        "s_sleep"
#define SOPP_S_SENDMSG      "s_sendmsg"
#define SOPP_S_BARRIER      "s_barrier"
#define SOPP_S_SETHALT      "s_sethalt"
#define SOPP_S_SENDMSGHALT  "s_sendmsghalt"
#define SOPP_S_ICACHE_INV   "s_icache_inv"
#define SOPP_S_INCPERFLEVEL "s_incperflevel"
#define SOPP_S_DECPERFLEVEL "s_decperflevel"
#define SOPP_S_TTRACEDATA   "s_ttracedata"

// SOPP - Branch.
#define SOPP_S_BRANCH           "s_branch"
#define SOPP_S_CBRANCH_SCC0     "s_cbranch_scc0"
#define SOPP_S_CBRANCH_SCC1     "s_cbranch_scc1"
#define SOPP_S_CBRANCH_VCCZ     "s_cbranch_vccz"
#define SOPP_S_CBRANCH_VCCNZ    "s_cbranch_vccnz"
#define SOPP_S_CBRANCH_EXECZ    "s_cbranch_execz"
#define SOPP_S_CBRANCH_EXECNZ   "s_cbranch_execnz"
#define SOPP_S_SETPC            "s_setpc"
#define SOPP_S_SWAPPC           "s_swappc"

// Prefixes.
#define SOPP_S_COND_BRANCH_PREFIX "s_cbranch_"


// Ops.
#define OP_S_WAITCNT               "s_waitcnt"

// *************************
// SCALAR INSTRUCTIONS - END
// *************************


// ***************************
// VECTOR INSTRUCTIONS - BEGIN
// ***************************

// FULL-RATE
// Not implemented by the hardware (handled by sequencer).
#define VOP2_NO_HW_IMPL_V_MAC_F32          "v_mac_f32"
#define VOP2_NO_HW_IMPL_V_MAC_LEGACY_F32   "v_mac_legacy_f32"
#define VOP2_NO_HW_IMPL_V_SUBBREV_U32      "v_subbrev_u32"
#define VOP2_NO_HW_IMPL_V_SUB_F32          "v_sub_f32"
#define VOP2_NO_HW_IMPL_V_SUBREV_F32       "v_subrev_f32"
#define VOP2_NO_HW_IMPL_V_SUBREV_I32       "v_subrev_i32"
#define VOP2_NO_HW_IMPL_V_MADMK_F32        "v_madmk_f32"
#define VOP2_NO_HW_IMPL_V_MADAK_F32        "v_madak_f32"
#define VOP2_NO_HW_IMPL_V_SUBB_U32         "v_subb_u32"
#define VOP2_NO_HW_IMPL_V_LSHRREV_B32      "v_lshrrev_b32"
#define VOP2_NO_HW_IMPL_V_ASHRREV_I32      "v_ashrrev_i32"
#define VOP2_NO_HW_IMPL_V_LSHLREV_B32      "v_lshlrev_b32"

// Not documented.
#define VOP2_V_MOV_FED_B32          "v_mov_fed_b32"

#define VOP2_NO_DOC_V_ADD_U32       "v_add_u32"
#define VOP2_NO_DOC_V_SUB_U32       "v_sub_u32"
#define VOP1_V_FRACT_F32            "v_fract_f32"
#define VOP1_V_TRUNC_F32            "v_trunc_f32"
#define VOP2_V_MAX_LEGACY_F32       "v_max_legacy_f32"
#define VOP2_V_MIN_LEGACY_F32       "v_min_legacy_f32"
#define VOP2_V_MIN_F32              "v_min_f32"
#define VOP2_V_MAX_F32              "v_max_f32"
#define VOP2_V_CEIL_F32             "v_ceil_f32"
#define VOP2_V_RNDNE_F32            "v_rndne_f32"
#define VOP2_V_FLOOR_F32            "v_floor_f32"
#define VOP2_V_MIN_I32              "v_min_i32"
#define VOP2_V_MAX_U32              "v_max_u32"
#define VOP2_V_MIN_U32              "v_min_u32"
#define VOP2_V_ASHR_I32             "v_ashr_i32"
#define VOP1_V_MOV_B32              "v_mov_b32"
#define VOP1_V_NOT_B32              "v_not_b32"
#define VOP1_V_CVT_F32_I32          "v_cvt_f32_i32"
#define VOP1_V_CVT_F32_U32          "v_cvt_f32_u32"
#define VOP1_V_CVT_U32_F32          "v_cvt_u32_f32"
#define VOP1_V_CVT_I32_F32          "v_cvt_i32_f32"
#define VOP1_V_CVT_RPI_I32_F32      "v_cvt_rpi_i32_f32"
#define VOP1_V_CVT_FLR_I32_F32      "v_cvt_flr_i32_f32"
#define VOP1_V_CVT_OFF_F32_I4       "v_cvt_off_f32_i4"
#define VOP1_V_BFREV_B32            "v_bfrev_b32"
#define VOP2_V_MUL_I32_I24          "v_mul_i32_i24"
#define VOP2_V_MUL_HI_I32_I24       "v_mul_hi_i32_i24"
#define VOP2_V_MUL_U32_U24          "v_mul_u32_u24"
#define VOP2_V_MUL_HI_U32_U24       "v_mul_hi_u32_u24"
#define VOP2_V_MUL_F32              "v_mul_f32"
#define VOP2_V_MUL_LEGACY_F32       "v_mul_legacy_f32"
#define VOP2_V_ADD_F32              "v_add_f32"
#define VOP2_V_ADD_I32              "v_add_i32"
#define VOP2_V_ADDC_U32             "v_addc_u32"
#define VOP2_V_SUB_I32              "v_sub_i32"
#define VOP2_V_LSHL_B32             "v_lshl_b32"
#define VOP2_V_XOR_B32              "v_xor_b32"
#define VOP2_V_OR_B32               "v_or_b32"
#define VOP2_V_AND_B32              "v_and_b32"
#define VOP3_V_MAD_LEGACY_F32       "v_mad_legacy_f32"
#define VOP3_V_FMA_F32              "v_fma_f32"
#define VOP3_V_MULLIT_F32           "v_mullit_f32"
#define VOP3_V_ADD_F64              "v_add_f64"
#define VOP3_V_MAD_I32_I24          "v_mad_i32_i24"
#define VOP3_V_MAD_U32_U24          "v_mad_u32_u24"
#define VOP3_V_MAD_F32              "v_mad_f32"
#define VOP2_V_BFE_I32              "v_bfe_i32"
#define VOP3_V_ALIGNBIT_B32         "v_alignbit_b32"
#define VOP3_V_ALIGNBYTE_B32        "v_alignbyte_b32"
#define VOP2_V_BFM_B32              "v_bfm_b32"
#define VOP3_V_BFI_B32              "v_bfi_b32"
#define VOP2_V_BCNT_U32_B32         "v_bcnt_u32_b32"
#define VOP2_V_MBCNT_LO_U32_B32     "v_mbcnt_lo_u32_b32"
#define VOP2_V_MBCNT_HI_U32_B32     "v_mbcnt_hi_u32_b32"
#define VOP1_V_FFBH_U32             "V_FFBH_U32"
#define VOP1_V_FFBL_B32             "V_FFBL_B32"
#define VOP1_V_FFBH_I32             "V_FFBH_I32"
#define VOP3_V_SAD_U8               "v_sad_u8"
#define VOP3_V_MSAD_U8              "v_msad_u8"
#define VOP3_V_SAD_HI_U8            "v_sad_hi_u8"
#define VOP3_V_SAD_U16              "v_sad_u16"
#define VOP3_V_SAD_U32              "v_sad_u32"
#define VOP3_V_LERP_U8              "v_lerp_u8"
#define VOP1_V_CVT_F32_UBYTE0       "v_cvt_f32_ubyte0"
#define VOP1_V_CVT_F32_UBYTE1       "v_cvt_f32_ubyte1"
#define VOP1_V_CVT_F32_UBYTE2       "v_cvt_f32_ubyte2"
#define VOP1_V_CVT_F32_UBYTE3       "v_cvt_f32_ubyte3"
#define VOP1_V_CVT_OFF_F32_I4       "v_cvt_off_f32_i4"
#define VOP1_V_CVT_F16_F32          "v_cvt_f16_f32"
#define VOP2_V_CVT_PKRTZ_F16_F32    "v_cvt_pkrtz_f16_f32"
#define VOP1_V_CVT_F32_F16          "v_cvt_f32_f16"
#define VOP2_V_CVT_PKNORM_I16_F32   "v_cvt_pknorm_i16_f32"
#define VOP2_V_CVT_PKNORM_U16_F32   "v_cvt_pknorm_u16_f32"
#define VOP2_V_CVT_PK_U16_U32       "v_cvt_pk_u16_u32"
#define VOP2_V_CVT_PK_I16_I32       "v_cvt_pk_i16_i32"
#define VOP3_V_FMA_F32              "v_fma_f32"
#define VOP2_V_MUL_U32_U24          "v_mul_u32_u24"
#define VOP2_V_MUL_HI_U32_U24       "v_mul_hi_u32_u24"
#define VOP3_V_MAD_U32_U24          "v_mad_u32_u24"
#define VOP3_V_MUL_I32_I24          "v_mul_i32_i24"
#define VOP2_V_MUL_HI_I32_I24       "v_mul_hi_i32_i24"
#define VOP3_V_MAD_I32_I24          "v_mad_i32_i24"
#define VOP3_V_MULLIT_F32           "v_mullit_f32"
#define VOP2_V_CNDMASK_B32          "v_cndmask_b32"
#define VOP3_V_CUBEID_F32           "v_cubeid_f32"
#define VOP3_V_CUBESC_F32           "v_cubesc_f32"
#define VOP3_V_CUBETC_F32           "v_cubetc_f32"
#define VOP3_V_CUBEMA_F32           "v_cubema_f32"
#define VOP3_V_MAX_F32              "v_max3_f32"
#define VOP3_V_MAX_I32              "v_max3_i32"
#define VOP3_V_MAX_U32              "v_max3_u32"
#define VOP3_V_MIN3_F32             "v_min3_f32"
#define VOP3_V_MIN3_I32             "v_min3_i32"
#define VOP3_V_MIN3_U32             "v_min3_u32"
#define VOP3_V_MED3_F32             "v_med3_f32"
#define VOP3_V_MED3_I32             "v_med3_i32"
#define VOP3_V_MED3_U32             "v_med3_u32"
#define VOP3_V_CVT_PK_U8_F32        "v_cvt_pk_u8_f32"
#define VOP1_V_FREXP_MANT_F32       "v_frexp_mant_f32"
#define VOP1_V_FREXP_EXP_I32_F32    "v_frexp_exp_i32_f32"
#define VOP2_V_LDEXP_F32            "v_ldexp_f32"
#define VOPC_V_CMP_EQ_F32           "v_cmp_eq_f32"
#define VOPC_V_CMP_LE_F32           "v_cmp_le_f32"
#define VOPC_V_CMP_GT_F32           "v_cmp_gt_f32"
#define VOPC_V_CMP_LG_F32           "v_cmp_lg_f32"
#define VOPC_V_CMP_GE_F32           "v_cmp_ge_f32"
#define VOPC_V_CMP_O_F32            "v_cmp_o_f32"
#define VOPC_V_CMP_U_F32            "v_cmp_u_f32"
#define VOPC_V_CMP_NGE_F32          "v_cmp_nge_f32"
#define VOPC_V_CMP_NLG_F32          "v_cmp_nlg_f32"
#define VOPC_V_CMP_NGT_F32          "v_cmp_ngt_f32"
#define VOPC_V_CMP_NLE_F32          "v_cmp_nle_f32"
#define VOPC_V_CMP_NEQ_F32          "v_cmp_neq_f32"
#define VOPC_V_CMP_NLT_F32          "v_cmp_nlt_f32"
#define VOPC_V_CMP_TRU_F32          "v_cmp_tru_f32"
#define VOPC_V_CMPX_NGE_F32         "v_cmpx_nge_f32"
#define VOPC_V_CMPX_NLG_F32         "v_cmpx_nlg_f32"
#define VOPC_V_CMPX_NGT_F32         "v_cmpx_ngt_f32"
#define VOPC_V_CMPX_NLE_F32         "v_cmpx_nle_f32"
#define VOPC_V_CMPX_NEQ_F32         "v_cmpx_neq_f32"
#define VOPC_V_CMPX_NLT_F32         "v_cmpx_nlt_f32"
#define VOPC_V_CMPX_TRU_F32         "v_cmpx_tru_f32"
#define VOPC_V_CMP_F_I32            "v_cmp_f_i32"
#define VOPC_V_CMP_LT_I32           "v_cmp_lt_i32"
#define VOPC_V_CMP_EQ_I32           "v_cmp_eq_i32"
#define VOPC_V_CMP_LE_I32           "v_cmp_le_i32"
#define VOPC_V_CMP_GT_I32           "v_cmp_gt_i32"
#define VOPC_V_CMP_NE_I32           "v_cmp_ne_i32"
#define VOPC_V_CMP_GE_I32           "v_cmp_ge_i32"
#define VOPC_V_CMP_T_I32            "v_cmp_t_i32"
#define VOPC_V_CMPX_F_I32           "v_cmpx_f_i32"
#define VOPC_V_CMPX_LT_I32          "v_cmpx_lt_i32"
#define VOPC_V_CMPX_EQ_I32          "v_cmpx_eq_i32"
#define VOPC_V_CMPX_LE_I32          "v_cmpx_le_i32"
#define VOPC_V_CMPX_GT_I32          "v_cmpx_gt_i32"
#define VOPC_V_CMPX_NE_I32          "v_cmpx_ne_i32"
#define VOPC_V_CMPX_GE_I32          "v_cmpx_ge_i32"
#define VOPC_V_CMPX_T_I32           "v_cmpx_t_i32"
#define VOPC_V_CMP_F_U32            "v_cmp_f_u32"
#define VOPC_V_CMP_LT_U32           "v_cmp_lt_u32"
#define VOPC_V_CMP_EQ_U32           "v_cmp_eq_u32"
#define VOPC_V_CMP_LE_U32           "v_cmp_le_u32"
#define VOPC_V_CMP_GT_U32           "v_cmp_gt_u32"
#define VOPC_V_CMP_NE_U32           "v_cmp_ne_u32"
#define VOPC_V_CMP_GE_U32           "v_cmp_ge_u32"
#define VOPC_V_CMP_T_U32            "v_cmp_t_u32"
#define VOPC_V_CMPX_F_U32           "v_cmpx_f_u32"
#define VOPC_V_CMPX_LT_U32          "v_cmpx_lt_u32"
#define VOPC_V_CMPX_EQ_U32          "v_cmpx_eq_u32"
#define VOPC_V_CMPX_LE_U32          "v_cmpx_le_u32"
#define VOPC_V_CMPX_GT_U32          "v_cmpx_gt_u32"
#define VOPC_V_CMPX_NE_U32          "v_cmpx_ne_u32"
#define VOPC_V_CMPX_GE_U32          "v_cmpx_ge_u32"
#define VOPC_V_CMPX_T_U32           "v_cmpx_t_u32"
#define VOPC_V_CMP_CLASS_F32        "v_cmp_class_f32"

// New to Volcanic Islands (all Full Rate).
#define VI_V_ADD_F16                "v_add_f16"
#define VI_V_MUL_F16                "v_mul_f16"
#define VI_V_MAD_F16                "v_mad_f16"
#define VI_V_FMA_F16                "v_fma_f16"
#define VI_V_DIV_SCALE_F16          "v_div_scale_f16"
#define VI_V_DIV_FMAS_F16           "v_div_fmas_f16"
#define FRA                         "v_div_fixup_f16"
#define VI_V_FRACT_F16              "v_fract_f16"
#define VI_V_TRUNC_F16              "v_trunc_f16"
#define VI_V_CEIL_F16               "v_ceil_f16"
#define VI_V_RNDNE_F16              "v_rndne_f16"
#define VI_V_FLOOR_F16              "v_floor_f16"
#define VI_V_FREXP_MANT_F16         "v_frexp_mant_f16"
#define VI_V_FREXP_EXP_I16_F16      "v_frexp_exp_i16_f16"
#define VI_V_LDEXP_F16              "v_ldexp_f16"
#define VI_V_MAX_F16                "v_max_f16"
#define VI_V_MIN_F16                "v_min_f16"
#define VI_V_INTERP_P1LL_F16        "v_interp_p1ll_f16"
#define VI_V_INTERP_P1LV_F16        "v_interp_p1lv_f16"
#define VI_V_INTERP_P2_F16          "v_interp_p2_f16"
#define VI_V_ADD_U16                "v_add_u16"
#define VI_V_SUB_I16                "v_sub_i16"
#define VI_V_SUB_U16                "v_sub_u16"
#define VI_V_MUL_I16                "v_mul_i16"
#define VI_V_MUL_U16                "v_mul_u16"
#define VI_V_MAD_I16                "v_mad_i16"
#define VI_V_MAD_U16                "v_mad_u16"
#define VI_V_MAX_I16                "v_max_i16"
#define VI_V_MIN_I16                "v_min_i16"
#define VI_V_MAX_U16                "v_max_u16"
#define VI_V_MIN_U16                "v_min_u16"
#define VI_V_ASHR_I16               "v_ashr_i16"
#define VI_V_LSHR_B16               "v_lshr_b16"
#define VI_V_LSHL_B16               "v_lshl_b16"
#define VI_V_CVT_I16_F16            "v_cvt_i16_f16"
#define VI_V_CVT_U16_F16            "v_cvt_u16_f16"
#define VI_V_CVT_F16_I16            "v_cvt_f16_i16"
#define VI_V_CVT_F16_U16            "v_cvt_f16_u16"
#define VI_V_CVT_PERM_B32           "v_perm_b32"

// Full rate, 1/4 on hybrid architecture.
#define VOP3_V_DIV_SCALE_F32    "v_div_scale_f32"
#define VOP3_V_DIV_FMAS_F32     "v_div_fmas_f32"
#define VOP3_V_DIV_FIXUP_F32    "v_div_fixup_f32"


// HALF RATE
#define VOP1_V_LOG_F32          "v_log_f32"
#define VOP1_V_LOG_CLAMP_F32    "v_log_clamp_f32"


// 1/2 rate, 1/8 on hybrid architecture:
#define VOP1_V_CVT_F32_F64              "v_cvt_f32_f64"
#define VOP1_V_CVT_I32_F64              "v_cvt_i32_f64"
#define VOP1_V_CVT_F64_I32              "v_cvt_f64_i32"
#define VOP1_V_CVT_U32_F64              "v_cvt_u32_f64"
#define VOP1_V_CVT_F64_U32              "v_cvt_f64_u32"
#define VOP3_V_MIN_F64                  "v_min_f64"
#define VOP3_V_MAX_F64                  "v_max_f64"
#define VOP3_V_LDEXP_F64                "v_ldexp_f64"
#define VOP3_V_FREXP_MANT_F64           "v_frexp_mant_f64"
#define VOP3_V_FREXP_EXP_I32_F64        "v_frexp_exp_i32_f64"
#define VOP1_V_FRACT_F64                "v_fract_f64"
#define VOP1_V_TRUNC_F64                "v_trunc_f64"
#define VOP1_V_CEIL_F64                 "v_ceil_f64"
#define VOP1_V_RNDNE_F64                "v_rndne_f64"
#define VOP1_V_FLOOR_F64                "v_floor_f64"
#define VOP3_V_ASHR_I64                 "v_ashr_i64"
#define VOP3_V_DIV_SCALE_F64            "v_div_scale_f64"
#define VOP3_V_DIV_FIXUP_F64            "v_div_fixup_f64"
#define VOPC_V_CMP_F_F64                "v_cmp_f_f64"
#define VOPC_V_CMP_LT_F64               "v_cmp_lt_f64"
#define VOPC_V_CMP_EQ_F64               "v_cmp_eq_f64"
#define VOPC_V_CMP_LE_F64               "v_cmp_le_f64"
#define VOPC_V_CMP_GT_F64               "v_cmp_gt_f64"
#define VOPC_V_CMP_LG_F64               "v_cmp_lg_f64"
#define VOPC_V_CMP_GE_F64               "v_cmp_ge_f64"
#define VOPC_V_CMP_O_F64                "v_cmp_o_f64"
#define VOPC_V_CMP_U_F64                "v_cmp_u_f64"
#define VOPC_V_CMP_NGE_F64              "v_cmp_nge_f64"
#define VOPC_V_CMP_NLG_F64              "v_cmp_nlg_f64"
#define VOPC_V_CMP_NGT_F64              "v_cmp_ngt_f64"
#define VOPC_V_CMP_NLE_F64              "v_cmp_nle_f64"
#define VOPC_V_CMP_NEQ_F64              "v_cmp_neq_f64"
#define VOPC_V_CMP_NLT_F64              "v_cmp_nlt_f64"
#define VOPC_V_CMP_TRU_F64              "v_cmp_tru_f64"
#define VOPC_V_CMPX_F_F64               "v_cmpx_f_f64"
#define VOPC_V_CMPX_LT_F64              "v_cmpx_lt_f64"
#define VOPC_V_CMPX_EQ_F64              "v_cmpx_eq_f64"
#define VOPC_V_CMPX_LE_F64              "v_cmpx_le_f64"
#define VOPC_V_CMPX_GT_F64              "v_cmpx_gt_f64"
#define VOPC_V_CMPX_LG_F64              "v_cmpx_lg_f64"
#define VOPC_V_CMPX_GE_F64              "v_cmpx_ge_f64"
#define VOPC_V_CMPX_O_F64               "v_cmpx_o_f64"
#define VOPC_V_CMPX_U_F64               "v_cmpx_u_f64"
#define VOPC_V_CMPX_NGE_F64             "v_cmpx_nge_f64"
#define VOPC_V_CMPX_NLG_F64             "v_cmpx_nlg_f64"
#define VOPC_V_CMPX_NGT_F64             "v_cmpx_ngt_f64"
#define VOPC_V_CMPX_NLE_F64             "v_cmpx_nle_f64"
#define VOPC_V_CMPX_NEQ_F64             "v_cmpx_neq_f64"
#define VOPC_V_CMPX_NLT_F64             "v_cmpx_nlt_f64"
#define VOPC_V_CMPX_TRU_F64             "v_cmpx_tru_f64"
#define VOPC_V_CMP_F_I64                "v_cmp_f_i64"
#define VOPC_V_CMP_LT_I64               "v_cmp_lt_i64"
#define VOPC_V_CMP_EQ_I64               "v_cmp_eq_i64"
#define VOPC_V_CMP_LE_I64               "v_cmp_le_i64"
#define VOPC_V_CMP_GT_I64               "v_cmp_gt_i64"
#define VOPC_V_CMP_LG_I64               "v_cmp_lg_i64"
#define VOPC_V_CMP_GE_I64               "v_cmp_ge_i64"
#define VOPC_V_CMP_T_I64                "v_cmp_t_i64"
#define VOPC_V_CMPX_F_I64               "v_cmpx_f_i64"
#define VOPC_V_CMPX_LT_I64              "v_cmpx_lt_i64"
#define VOPC_V_CMPX_EQ_I64              "v_cmpx_eq_i64"
#define VOPC_V_CMPX_LE_I64              "v_cmpx_le_i64"
#define VOPC_V_CMPX_GT_I64              "v_cmpx_gt_i64"
#define VOPC_V_CMPX_LG_I64              "v_cmpx_lg_i64"
#define VOPC_V_CMPX_GE_I64              "v_cmpx_ge_i64"
#define VOPC_V_CMPX_T_I64               "v_cmpx_t_i64"
#define VOPC_V_CMP_F_U64                "v_cmp_f_u64"
#define VOPC_V_CMP_LT_U64               "v_cmp_lt_u64"
#define VOPC_V_CMP_EQ_U64               "v_cmp_eq_u64"
#define VOPC_V_CMP_LE_U64               "v_cmp_le_u64"
#define VOPC_V_CMP_GT_U64               "v_cmp_gt_u64"
#define VOPC_V_CMP_LG_U64               "v_cmp_lg_u64"
#define VOPC_V_CMP_GE_U64               "v_cmp_ge_u64"
#define VOPC_V_CMP_T_U64                "v_cmp_t_u64"
#define VOPC_V_CMPX_F_U64               "v_cmpx_f_u64"
#define VOPC_V_CMPX_LT_U64              "v_cmpx_lt_u64"
#define VOPC_V_CMPX_EQ_U64              "v_cmpx_eq_u64"
#define VOPC_V_CMPX_LE_U64              "v_cmpx_le_u64"
#define VOPC_V_CMPX_GT_U64              "v_cmpx_gt_u64"
#define VOPC_V_CMPX_LG_U64              "v_cmpx_lg_u64"
#define VOPC_V_CMPX_GE_U64              "v_cmpx_ge_u64"
#define VOPC_V_CMPX_T_U64               "v_cmpx_t_u64"
#define VOPC_V_CMP_CLASS_F64            "v_cmp_class_f64"
#define VOPC_V_CMPX_CLASS_F64           "v_cmpx_class_f64"

// QUARTER RATE
#define VOP1_V_SQRT_F32                 "v_sqrt_f32"
#define VOP3_V_MUL_LO_I32               "v_mul_lo_i32"
#define VOP3_V_MUL_HI_I32               "v_mul_hi_i32"
#define VOP3_V_MUL_LO_U32               "v_mul_lo_u32"
#define VOP3_V_MUL_HI_U32               "v_mul_hi_u32"
#define VOP3_V_MAD_U64_U32              "v_mad_u64_u32"
#define VOP3_V_MAD_I64_I32              "v_mad_i64_i32"
#define VOP1_V_EXP_F32                  "v_exp_f32"
#define VOP1_V_LOG_CLAMP_F32            "v_log_clamp_f32"
#define VOP1_V_RCP_CLAMP_F32            "v_rcp_clamp_f32"
#define VOP1_V_RCP_LEGACY_F32           "v_rcp_legacy_f32"
#define VOP1_V_RCP_F32                  "v_rcp_f32"
#define VOP1_V_RCP_IFLAG_F32            "v_rcp_iflag_f32"
#define VOP1_V_RSQ_CLAMP_F32            "v_rsq_clamp_f32"
#define VOP1_V_RSQ_LEGACY_F32           "v_rsq_legacy_f32"
#define VOP1_V_RSQ_F32                  "v_rsq_f32"
#define VOP1_V_SQRT_F32                 "v_sqrt_f32"
#define VOP1_V_SIN_F32                  "v_sin_f32"
#define VOP1_V_COS_F32                  "v_cos_f32"
#define VOP1_V_RCP_F64                  "v_rcp_f64"
#define VOP1_V_RCP_CLAMP_F64            "v_rcp_clamp_f64"
#define VOP1_V_RSQ_F64                  "v_rsq_f64"
#define VOP1_V_RSQ_CLAMP_F64            "v_rsq_clamp_f64"
#define VOP3_V_TRIG_PREOP_F64           "v_trig_preop_f64"
#define VOP3_V_MUL_F64                  "v_mul_f64"
#define VOP3_V_FMA_F64                  "v_fma_f64"
#define VOP3_V_DIV_FMAS_F64             "v_div_fmas_f64"
#define VOP3_V_MQSAD_PK_U16_U8          "v_mqsad_pk_u16_u8"
#define VOP3_V_MQSAD_U32_U8             "v_mqsad_u32_u8"


// QUARTER RATE - VI NEW OPCODES
#define VI_V_RCP_F16        "v_rcp_f16"
#define VI_V_SQRT_F16       "v_sqrt_f16"
#define VI_V_RSQ_F16        "v_rsq_f16"
#define VI_V_EXP_F16        "v_exp_f16"
#define VI_V_LOG_F16        "v_log_f16"
#define VI_V_SIN_F16        "v_sin_f16"
#define VI_V_COS_F16        "v_cos_f16"
#define VI_QSAD_PK_U16_U8   "v_qsad_pk_u16_u8"

// 1/4 rate, 1/16 on hybrid architecture:
#define VOP3_V_MUL_F64          "v_mul_f64"
#define VOP3_V_FMA_F64          "v_fma_f64"
#define VOP1_V_SQRT_F64         "v_sqrt_f64"
#define VOP1_V_RSQ_CLAMP_F64    "v_rsq_clamp_f64"
#define VOP1_V_RSQ_F64          "v_rsq_f64"

// constants used for comma separated values string
#define COMMA_SEPARATOR ","
#define NEWLINE_SEPARATOR "\n"
#define DOUBLE_QUOTES "\""
#define NA_VALUE "Varies"
#define BRANCH_CYCLES "4|16"

// *************************
// VECTOR INSTRUCTIONS - END
// *************************

// Export instructions.
#define EXPORT_EXP "EXP"

// *******************
// ISA OPCODES - END
// *******************

// To be updated: no such functional unit,
// should collapse into the LDS probably.
#define FUNC_UNIT_ATOMICS               "Atomics"

// Device Names.
#define DEVICE_NAME_CYPRESS  "Cypress"
#define DEVICE_NAME_CEDAR    "Cedar"
#define DEVICE_NAME_TAHITI   "Tahiti"
#define DEVICE_NAME_HAWAII   "Hawaii"
#define DEVICE_NAME_KALINDI  "Kalindi"
#define DEVICE_NAME_GODAVARI "Godavari"
#define DEVICE_NAME_AMUR     "Amur"
#define DEVICE_NAME_NOLAN    "Nolan"
#define DEVICE_NAME_STONEY   "Stoney"
#define DEVICE_NAME_GFX900   "gfx900"
#define DEVICE_NAME_GFX902   "gfx902"
#define DEVICE_NAME_GFX906   "gfx906"

// DUMMY SHADERS.
#define BE_STR_DUMMY_VRTX_SHADER "#version 330 core\nlayout(location = 0) in vec3 vertexPosition_modelspace;\nvoid main()\n{}"
#define BE_STR_DUMMY_TESS_EVAL_SHADER "#version 430\nlayout(triangles, equal_spacing, cw) in;\nin vec3 tcPosition[];\nout vec3 tePosition;\nout vec3 tePatchDistance;\nuniform mat4 Projection;\nuniform mat4 Modelview;\nvoid main()\n{}"

#define BE_STR_FAILED_TO_PARSE_ISA_LINE L"Failed to parse ISA line: "
#define BE_STR_LAUNCH_EXTERNAL_PROCESS  "Launching external process: \n"
#define BE_STR_SET_ENV_VAR              "Setting environment variable: "
#define BE_STR_UNSET_ENV_VAR            "Unsetting environment variable: "

// Versions.
#define BE_STR_VULKAN_VERSION L"Based on Vulkan 1.0 Specification."

// ROCm.
#ifdef __linux
#define LC_OPENCL_ROOT_DIR          L"ROCm/OpenCL"
#elif defined(_WIN64)
#define LC_OPENCL_ROOT_DIR          L"x64/ROCm/OpenCL"
#elif defined(_WIN32)
#define LC_OPENCL_ROOT_DIR          L"x86/ROCm/OpenCL"
#else
#error Unknown platform.
#endif

#define  LC_OPENCL_BIN_DIR          L"bin"
#define  LC_OPENCL_INCLUDE_DIR      L"include"
#define  LC_OPENCL_LIB_DIR          L"lib/bitcode"

#define LC_OPENCL_COMPILER_EXEC     L"clang"
#define LC_AMDGPU_OBJDUMP_EXEC      L"amdgpu-objdump"
#define LC_LLVM_OBJDUMP_EXEC        L"llvm-objdump"
#define LC_LLVM_READOBJ_EXEC        L"llvm-readobj"

#if defined(_WIN32)
#define LC_COMPILER_EXEC_EXT        L"exe"
#else
#define LC_COMPILER_EXEC_EXT        L""
#endif

// Vulkan
#ifdef __linux
#define GLSLANG_ROOT_DIR            L"Vulkan"
#define VULKAN_BACKEND_ROOT_DIR     L"Vulkan"
#elif defined(_WIN64)
#define GLSLANG_ROOT_DIR            L"x64/Vulkan"
#define VULKAN_BACKEND_ROOT_DIR     L"x64/Vulkan"
#elif defined(_WIN32)
#define GLSLANG_ROOT_DIR            L"x86/Vulkan"
#define VULKAN_BACKEND_ROOT_DIR     L"x64/Vulkan"
#else
#error Unknown platform.
#endif

#if defined(_WIN32)
#define  GLSLANG_BIN_DIR            L"bin"
#define  VULKAN_BACKEND_BIN_DIR     L"bin"
#else
#define  GLSLANG_BIN_DIR            L""
#define  VULKAN_BACKEND_BIN_DIR     L""
#endif

#define  GLSLANG_EXEC               L"glslangValidator"
#define  SPIRV_AS_EXEC              L"spirv-as"
#define  SPIRV_DIS_EXEC             L"spirv-dis"
#define  SPIRV_LINK_EXEC            L"spirv-link"
#define  VULKAN_BACKEND_EXEC        L"VulkanBackend"

#if defined(_WIN32)
#define GLSLANG_EXEC_EXT            L"exe"
#define VULKAN_BACKEND_EXEC_EXT     L"exe"
#else
#define GLSLANG_EXEC_EXT            L""
#define VULKAN_BACKEND_EXEC_EXT     L""
#endif

#define LC_EXTRA_TARGETS_FILE_NAME  L"additional-targets"

#endif // __beStringConstants_h
