/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define V24_REGNUM 56
#define SP_REGNUM 31
#define R5_REGNUM 5
#define V6_REGNUM 38
#define R8_REGNUM 8
#define V2_REGNUM 34
#define R12_REGNUM 12
#define P4_REGNUM 72
#define V12_REGNUM 44
#define P3_REGNUM 71
#define P7_REGNUM 75
#define V15_REGNUM 47
#define R24_REGNUM 24
#define V27_REGNUM 59
#define R0_REGNUM 0
#define SPECULATION_SCRATCH_REGNUM 14
#define IP0_REGNUM 16
#define V5_REGNUM 37
#define V4_REGNUM 36
#define V8_REGNUM 40
#define R15_REGNUM 15
#define R26_REGNUM 26
#define R14_REGNUM 14
#define V18_REGNUM 50
#define R27_REGNUM 27
#define P11_REGNUM 79
#define SFP_REGNUM 64
#define EP0_REGNUM 12
#define V31_REGNUM 63
#define V0_REGNUM 32
#define R3_REGNUM 3
#define R18_REGNUM 18
#define P2_REGNUM 70
#define R22_REGNUM 22
#define P14_REGNUM 82
#define V22_REGNUM 54
#define R19_REGNUM 19
#define V25_REGNUM 57
#define R6_REGNUM 6
#define V10_REGNUM 42
#define R9_REGNUM 9
#define STACK_CLASH_SVE_CFA_REGNUM 11
#define V3_REGNUM 35
#define R10_REGNUM 10
#define R13_REGNUM 13
#define V13_REGNUM 45
#define P8_REGNUM 76
#define V16_REGNUM 48
#define R25_REGNUM 25
#define LAST_SAVED_REGNUM 63
#define V26_REGNUM 58
#define V20_REGNUM 52
#define V28_REGNUM 60
#define R17_REGNUM 17
#define R1_REGNUM 1
#define EP1_REGNUM 13
#define IP1_REGNUM 17
#define AP_REGNUM 65
#define V9_REGNUM 41
#define R16_REGNUM 16
#define P0_REGNUM 68
#define R28_REGNUM 28
#define P12_REGNUM 80
#define R30_REGNUM 30
#define R4_REGNUM 4
#define SPECULATION_TRACKER_REGNUM 15
#define R7_REGNUM 7
#define V1_REGNUM 33
#define V19_REGNUM 51
#define V11_REGNUM 43
#define R20_REGNUM 20
#define VG_REGNUM 67
#define V14_REGNUM 46
#define R23_REGNUM 23
#define P15_REGNUM 83
#define V23_REGNUM 55
#define LR_REGNUM 30
#define CC_REGNUM 66
#define V7_REGNUM 39
#define P6_REGNUM 74
#define P9_REGNUM 77
#define V17_REGNUM 49
#define P10_REGNUM 78
#define V29_REGNUM 61
#define R2_REGNUM 2
#define V30_REGNUM 62
#define R11_REGNUM 11
#define P1_REGNUM 69
#define P5_REGNUM 73
#define R21_REGNUM 21
#define R29_REGNUM 29
#define P13_REGNUM 81
#define V21_REGNUM 53

enum arches {
  ARCHES_ANY = 0,
  ARCHES_RCPC8_4 = 1,
  ARCHES_FP = 2,
  ARCHES_SIMD = 3,
  ARCHES_SVE = 4,
  ARCHES_FP16 = 5
};
#define NUM_ARCHES_VALUES 6
extern const char *const arches_strings[];

enum unspec {
  UNSPEC_AUTIA1716 = 0,
  UNSPEC_AUTIB1716 = 1,
  UNSPEC_AUTIASP = 2,
  UNSPEC_AUTIBSP = 3,
  UNSPEC_CASESI = 4,
  UNSPEC_CRC32B = 5,
  UNSPEC_CRC32CB = 6,
  UNSPEC_CRC32CH = 7,
  UNSPEC_CRC32CW = 8,
  UNSPEC_CRC32CX = 9,
  UNSPEC_CRC32H = 10,
  UNSPEC_CRC32W = 11,
  UNSPEC_CRC32X = 12,
  UNSPEC_FCVTZS = 13,
  UNSPEC_FCVTZU = 14,
  UNSPEC_URECPE = 15,
  UNSPEC_FRECPE = 16,
  UNSPEC_FRECPS = 17,
  UNSPEC_FRECPX = 18,
  UNSPEC_FRINTA = 19,
  UNSPEC_FRINTI = 20,
  UNSPEC_FRINTM = 21,
  UNSPEC_FRINTN = 22,
  UNSPEC_FRINTP = 23,
  UNSPEC_FRINTX = 24,
  UNSPEC_FRINTZ = 25,
  UNSPEC_GOTSMALLPIC = 26,
  UNSPEC_GOTSMALLPIC28K = 27,
  UNSPEC_GOTSMALLTLS = 28,
  UNSPEC_GOTTINYPIC = 29,
  UNSPEC_GOTTINYTLS = 30,
  UNSPEC_LD1 = 31,
  UNSPEC_LD2 = 32,
  UNSPEC_LD2_DREG = 33,
  UNSPEC_LD2_DUP = 34,
  UNSPEC_LD3 = 35,
  UNSPEC_LD3_DREG = 36,
  UNSPEC_LD3_DUP = 37,
  UNSPEC_LD4 = 38,
  UNSPEC_LD4_DREG = 39,
  UNSPEC_LD4_DUP = 40,
  UNSPEC_LD2_LANE = 41,
  UNSPEC_LD3_LANE = 42,
  UNSPEC_LD4_LANE = 43,
  UNSPEC_MB = 44,
  UNSPEC_NOP = 45,
  UNSPEC_PACIA1716 = 46,
  UNSPEC_PACIB1716 = 47,
  UNSPEC_PACIASP = 48,
  UNSPEC_PACIBSP = 49,
  UNSPEC_PRLG_STK = 50,
  UNSPEC_REV = 51,
  UNSPEC_RBIT = 52,
  UNSPEC_SABAL = 53,
  UNSPEC_SABDL2 = 54,
  UNSPEC_SADALP = 55,
  UNSPEC_SCVTF = 56,
  UNSPEC_SISD_NEG = 57,
  UNSPEC_SISD_SSHL = 58,
  UNSPEC_SISD_USHL = 59,
  UNSPEC_SSHL_2S = 60,
  UNSPEC_ST1 = 61,
  UNSPEC_ST2 = 62,
  UNSPEC_ST3 = 63,
  UNSPEC_ST4 = 64,
  UNSPEC_ST2_LANE = 65,
  UNSPEC_ST3_LANE = 66,
  UNSPEC_ST4_LANE = 67,
  UNSPEC_TLS = 68,
  UNSPEC_TLSDESC = 69,
  UNSPEC_TLSLE12 = 70,
  UNSPEC_TLSLE24 = 71,
  UNSPEC_TLSLE32 = 72,
  UNSPEC_TLSLE48 = 73,
  UNSPEC_UABAL = 74,
  UNSPEC_UABDL2 = 75,
  UNSPEC_UADALP = 76,
  UNSPEC_UCVTF = 77,
  UNSPEC_USHL_2S = 78,
  UNSPEC_VSTRUCTDUMMY = 79,
  UNSPEC_SSP_SYSREG = 80,
  UNSPEC_SP_SET = 81,
  UNSPEC_SP_TEST = 82,
  UNSPEC_RSQRT = 83,
  UNSPEC_RSQRTE = 84,
  UNSPEC_RSQRTS = 85,
  UNSPEC_NZCV = 86,
  UNSPEC_XPACLRI = 87,
  UNSPEC_LD1_SVE = 88,
  UNSPEC_ST1_SVE = 89,
  UNSPEC_LD1RQ = 90,
  UNSPEC_LD1_GATHER = 91,
  UNSPEC_ST1_SCATTER = 92,
  UNSPEC_MERGE_PTRUE = 93,
  UNSPEC_PTEST_PTRUE = 94,
  UNSPEC_UNPACKSHI = 95,
  UNSPEC_UNPACKUHI = 96,
  UNSPEC_UNPACKSLO = 97,
  UNSPEC_UNPACKULO = 98,
  UNSPEC_PACK = 99,
  UNSPEC_FLOAT_CONVERT = 100,
  UNSPEC_WHILE_LO = 101,
  UNSPEC_LDN = 102,
  UNSPEC_STN = 103,
  UNSPEC_INSR = 104,
  UNSPEC_CLASTB = 105,
  UNSPEC_FADDA = 106,
  UNSPEC_REV_SUBREG = 107,
  UNSPEC_SPECULATION_TRACKER = 108,
  UNSPEC_COPYSIGN = 109,
  UNSPEC_ASHIFT_SIGNED = 110,
  UNSPEC_ASHIFT_UNSIGNED = 111,
  UNSPEC_ABS = 112,
  UNSPEC_FMAX = 113,
  UNSPEC_FMAXNMV = 114,
  UNSPEC_FMAXV = 115,
  UNSPEC_FMIN = 116,
  UNSPEC_FMINNMV = 117,
  UNSPEC_FMINV = 118,
  UNSPEC_FADDV = 119,
  UNSPEC_ADDV = 120,
  UNSPEC_SMAXV = 121,
  UNSPEC_SMINV = 122,
  UNSPEC_UMAXV = 123,
  UNSPEC_UMINV = 124,
  UNSPEC_SHADD = 125,
  UNSPEC_UHADD = 126,
  UNSPEC_SRHADD = 127,
  UNSPEC_URHADD = 128,
  UNSPEC_SHSUB = 129,
  UNSPEC_UHSUB = 130,
  UNSPEC_SRHSUB = 131,
  UNSPEC_URHSUB = 132,
  UNSPEC_ADDHN = 133,
  UNSPEC_RADDHN = 134,
  UNSPEC_SUBHN = 135,
  UNSPEC_RSUBHN = 136,
  UNSPEC_ADDHN2 = 137,
  UNSPEC_RADDHN2 = 138,
  UNSPEC_SUBHN2 = 139,
  UNSPEC_RSUBHN2 = 140,
  UNSPEC_SQDMULH = 141,
  UNSPEC_SQRDMULH = 142,
  UNSPEC_PMUL = 143,
  UNSPEC_FMULX = 144,
  UNSPEC_USQADD = 145,
  UNSPEC_SUQADD = 146,
  UNSPEC_SQXTUN = 147,
  UNSPEC_SQXTN = 148,
  UNSPEC_UQXTN = 149,
  UNSPEC_SSRA = 150,
  UNSPEC_USRA = 151,
  UNSPEC_SRSRA = 152,
  UNSPEC_URSRA = 153,
  UNSPEC_SRSHR = 154,
  UNSPEC_URSHR = 155,
  UNSPEC_SQSHLU = 156,
  UNSPEC_SQSHL = 157,
  UNSPEC_UQSHL = 158,
  UNSPEC_SQSHRUN = 159,
  UNSPEC_SQRSHRUN = 160,
  UNSPEC_SQSHRN = 161,
  UNSPEC_UQSHRN = 162,
  UNSPEC_SQRSHRN = 163,
  UNSPEC_UQRSHRN = 164,
  UNSPEC_SSHL = 165,
  UNSPEC_USHL = 166,
  UNSPEC_SRSHL = 167,
  UNSPEC_URSHL = 168,
  UNSPEC_SQRSHL = 169,
  UNSPEC_UQRSHL = 170,
  UNSPEC_SSLI = 171,
  UNSPEC_USLI = 172,
  UNSPEC_SSRI = 173,
  UNSPEC_USRI = 174,
  UNSPEC_SSHLL = 175,
  UNSPEC_USHLL = 176,
  UNSPEC_ADDP = 177,
  UNSPEC_TBL = 178,
  UNSPEC_TBX = 179,
  UNSPEC_CONCAT = 180,
  UNSPEC_ZIP1 = 181,
  UNSPEC_ZIP2 = 182,
  UNSPEC_UZP1 = 183,
  UNSPEC_UZP2 = 184,
  UNSPEC_TRN1 = 185,
  UNSPEC_TRN2 = 186,
  UNSPEC_EXT = 187,
  UNSPEC_REV64 = 188,
  UNSPEC_REV32 = 189,
  UNSPEC_REV16 = 190,
  UNSPEC_AESE = 191,
  UNSPEC_AESD = 192,
  UNSPEC_AESMC = 193,
  UNSPEC_AESIMC = 194,
  UNSPEC_SHA1C = 195,
  UNSPEC_SHA1M = 196,
  UNSPEC_SHA1P = 197,
  UNSPEC_SHA1H = 198,
  UNSPEC_SHA1SU0 = 199,
  UNSPEC_SHA1SU1 = 200,
  UNSPEC_SHA256H = 201,
  UNSPEC_SHA256H2 = 202,
  UNSPEC_SHA256SU0 = 203,
  UNSPEC_SHA256SU1 = 204,
  UNSPEC_PMULL = 205,
  UNSPEC_PMULL2 = 206,
  UNSPEC_REV_REGLIST = 207,
  UNSPEC_VEC_SHR = 208,
  UNSPEC_SQRDMLAH = 209,
  UNSPEC_SQRDMLSH = 210,
  UNSPEC_FMAXNM = 211,
  UNSPEC_FMINNM = 212,
  UNSPEC_SDOT = 213,
  UNSPEC_UDOT = 214,
  UNSPEC_SM3SS1 = 215,
  UNSPEC_SM3TT1A = 216,
  UNSPEC_SM3TT1B = 217,
  UNSPEC_SM3TT2A = 218,
  UNSPEC_SM3TT2B = 219,
  UNSPEC_SM3PARTW1 = 220,
  UNSPEC_SM3PARTW2 = 221,
  UNSPEC_SM4E = 222,
  UNSPEC_SM4EKEY = 223,
  UNSPEC_SHA512H = 224,
  UNSPEC_SHA512H2 = 225,
  UNSPEC_SHA512SU0 = 226,
  UNSPEC_SHA512SU1 = 227,
  UNSPEC_FMLAL = 228,
  UNSPEC_FMLSL = 229,
  UNSPEC_FMLAL2 = 230,
  UNSPEC_FMLSL2 = 231,
  UNSPEC_SEL = 232,
  UNSPEC_ANDV = 233,
  UNSPEC_IORV = 234,
  UNSPEC_XORV = 235,
  UNSPEC_ANDF = 236,
  UNSPEC_IORF = 237,
  UNSPEC_XORF = 238,
  UNSPEC_SMUL_HIGHPART = 239,
  UNSPEC_UMUL_HIGHPART = 240,
  UNSPEC_COND_ADD = 241,
  UNSPEC_COND_SUB = 242,
  UNSPEC_COND_MUL = 243,
  UNSPEC_COND_DIV = 244,
  UNSPEC_COND_MAX = 245,
  UNSPEC_COND_MIN = 246,
  UNSPEC_COND_FMLA = 247,
  UNSPEC_COND_FMLS = 248,
  UNSPEC_COND_FNMLA = 249,
  UNSPEC_COND_FNMLS = 250,
  UNSPEC_COND_LT = 251,
  UNSPEC_COND_LE = 252,
  UNSPEC_COND_EQ = 253,
  UNSPEC_COND_NE = 254,
  UNSPEC_COND_GE = 255,
  UNSPEC_COND_GT = 256,
  UNSPEC_LASTB = 257,
  UNSPEC_FCADD90 = 258,
  UNSPEC_FCADD270 = 259,
  UNSPEC_FCMLA = 260,
  UNSPEC_FCMLA90 = 261,
  UNSPEC_FCMLA180 = 262,
  UNSPEC_FCMLA270 = 263
};
#define NUM_UNSPEC_VALUES 264
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_EH_RETURN = 0,
  UNSPECV_GET_FPCR = 1,
  UNSPECV_SET_FPCR = 2,
  UNSPECV_GET_FPSR = 3,
  UNSPECV_SET_FPSR = 4,
  UNSPECV_BLOCKAGE = 5,
  UNSPECV_PROBE_STACK_RANGE = 6,
  UNSPECV_SPECULATION_BARRIER = 7,
  UNSPECV_BTI_NOARG = 8,
  UNSPECV_BTI_C = 9,
  UNSPECV_BTI_J = 10,
  UNSPECV_BTI_JC = 11,
  UNSPECV_LX = 12,
  UNSPECV_SX = 13,
  UNSPECV_LDA = 14,
  UNSPECV_STL = 15,
  UNSPECV_ATOMIC_CMPSW = 16,
  UNSPECV_ATOMIC_EXCHG = 17,
  UNSPECV_ATOMIC_CAS = 18,
  UNSPECV_ATOMIC_SWP = 19,
  UNSPECV_ATOMIC_OP = 20,
  UNSPECV_ATOMIC_LDOP_OR = 21,
  UNSPECV_ATOMIC_LDOP_BIC = 22,
  UNSPECV_ATOMIC_LDOP_XOR = 23,
  UNSPECV_ATOMIC_LDOP_PLUS = 24
};
#define NUM_UNSPECV_VALUES 25
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
