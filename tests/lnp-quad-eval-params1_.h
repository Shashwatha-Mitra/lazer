// auto-generated by lnp-quad-eval-codegen.sage from ../tests/lnp-quad-eval-params1.sage.
// 
// protocol is statistically complete with correctness error >= 1 - 2^(-4)
// protocol is simulatable under MLWE(40,17,[-1,1])
// protocol is knowledge-sound with knowledge error <= 2^(-127.0)
// 
// Ring
// degree d = 64
// modulus q = 9223372036854776077, log(q) ~ 63.0
// factors q = q1
// 
// Compression
// D = 7
// gamma = 61868, log(gamma) ~ 15.916906
// m = (q-1)/gamma = 149081464357257, log(m) ~ 47.083094
// 
// Dimensions of secrets
// s1: m1 = 10
// m: l = 3
// s2: m2 = 57
// 
// Size of secrets
// l2(s1) <= alpha = 75.894664
// m unbounded
// s2 uniform in [-nu,nu] = [-1,1]
// 
// Challenge space
// c uniform in [-omega,omega] = [-8,8], o(c)=c, sqrt(l1(o(c)*c)) <= eta = 140
// 
// Standard deviations
// stdev1 = 101580.8, log(stdev1/1.55) = 16.0
// stdev2 = 101580.8, log(stdev2/1.55) = 16.0
// 
// Repetition rate
// M1 = 4.0724839
// M2 = 3.0545956
// total = 12.439792
// 
// Security
// MSIS dimension: 11
// MSIS root hermite factor: 1.0043781
// MLWE dimension: 40
// MLWE root hermite factor: 1.0043312
// 
// 50 bit moduli for degree 64: [1125899906840833, 1125899906839937, 1125899906837633]
// bit length of products: [49, 99, 149]
// inverses: [1, -162099428551732, 296975494591860]

#include "lazer.h"
static const limb_t params1_q_limbs[] = {9223372036854776077UL, 0UL};
static const int_t params1_q = {{(limb_t *)params1_q_limbs, 2, 0}};
static const limb_t params1_qminus1_limbs[] = {9223372036854776076UL, 0UL};
static const int_t params1_qminus1 = {{(limb_t *)params1_qminus1_limbs, 2, 0}};
static const limb_t params1_m_limbs[] = {149081464357257UL, 0UL};
static const int_t params1_m = {{(limb_t *)params1_m_limbs, 2, 0}};
static const limb_t params1_mby2_limbs[] = {0};
static const int_t params1_mby2 = {{(limb_t *)params1_mby2_limbs, 1, 0}};
static const limb_t params1_gamma_limbs[] = {61868UL, 0UL};
static const int_t params1_gamma = {{(limb_t *)params1_gamma_limbs, 2, 0}};
static const limb_t params1_gammaby2_limbs[] = {30934UL, 0UL};
static const int_t params1_gammaby2 = {{(limb_t *)params1_gammaby2_limbs, 2, 0}};
static const limb_t params1_pow2D_limbs[] = {128UL, 0UL};
static const int_t params1_pow2D = {{(limb_t *)params1_pow2D_limbs, 2, 0}};
static const limb_t params1_pow2Dby2_limbs[] = {64UL, 0UL};
static const int_t params1_pow2Dby2 = {{(limb_t *)params1_pow2Dby2_limbs, 2, 0}};
static const limb_t params1_Bsq_limbs[] = {94774053602392UL, 0UL, 0UL, 0UL};
static const int_t params1_Bsq = {{(limb_t *)params1_Bsq_limbs, 4, 0}};
static const limb_t params1_scM1_limbs[] = {13768581241400741304UL, 1337092322823884803UL, 4UL};
static const int_t params1_scM1 = {{(limb_t *)params1_scM1_limbs, 3, 0}};
static const limb_t params1_scM2_limbs[] = {6325006647701430646UL, 1007111908943992922UL, 3UL};
static const int_t params1_scM2 = {{(limb_t *)params1_scM2_limbs, 3, 0}};
static const limb_t params1_stdev1sq_limbs[] = {10318658929UL, 0UL, 0UL, 0UL};
static const int_t params1_stdev1sq = {{(limb_t *)params1_stdev1sq_limbs, 4, 0}};
static const limb_t params1_stdev2sq_limbs[] = {10318658929UL, 0UL, 0UL, 0UL};
static const int_t params1_stdev2sq = {{(limb_t *)params1_stdev2sq_limbs, 4, 0}};
static const limb_t params1_inv2_limbs[] = {4611686018427388038UL, 0UL};
static const int_t params1_inv2 = {{(limb_t *)params1_inv2_limbs, 2, 1}};
static const limb_t params1_Pmodq_limbs[] = {2528845729635434851UL, 0UL};
static const int_t params1_Pmodq = {{(limb_t *)params1_Pmodq_limbs, 2, 1}};
static const limb_t params1_Ppmodq_0_limbs[] = {578675581052035854UL, 0UL};
static const int_t params1_Ppmodq_0 = {{(limb_t *)params1_Ppmodq_0_limbs, 2, 0}};
static const limb_t params1_Ppmodq_1_limbs[] = {1587481897578555022UL, 0UL};
static const int_t params1_Ppmodq_1 = {{(limb_t *)params1_Ppmodq_1_limbs, 2, 0}};
static const limb_t params1_Ppmodq_2_limbs[] = {4181555282939834254UL, 0UL};
static const int_t params1_Ppmodq_2 = {{(limb_t *)params1_Ppmodq_2_limbs, 2, 0}};

static const int_srcptr params1_Ppmodq[] = {params1_Ppmodq_0, params1_Ppmodq_1, params1_Ppmodq_2};
static const polyring_t params1_ring = {{params1_q, 64, 64, 6, moduli_d64, 3, params1_Pmodq, params1_Ppmodq, params1_inv2}};
static const dcompress_params_t params1_dcomp = {{ params1_q, params1_qminus1, params1_m, params1_mby2, params1_gamma, params1_gammaby2, params1_pow2D, params1_pow2Dby2, 7, 1, 48 }};
static const abdlop_params_t params1_quad_eval = {{ params1_ring, params1_dcomp, 10, 57, 3, 3, 11, params1_Bsq, 1, 8, 5, 140, 1, 16, params1_scM1, params1_stdev1sq, 1, 16, params1_scM2, params1_stdev2sq}};
static const abdlop_params_t params1_quad_many = {{ params1_ring, params1_dcomp, 10, 57, 5, 1, 11, params1_Bsq, 1, 8, 5, 140, 1, 16, params1_scM1, params1_stdev1sq, 1, 16, params1_scM2, params1_stdev2sq}};
static const lnp_quad_eval_params_t params1 = {{ params1_quad_eval, params1_quad_many, 4}};

