// auto-generated by lnp-tbox.sage.
// 
// protocol is statistically complete with correctness error >= 1 - 2^(-3)
// protocol is simulatable under MLWE(26,29,[-1,1])
// protocol is knowledge-sound with knowledge error <= 2^(-127.0) under MSIS(17,79,2^(33.599457))
// 
// Ring
// degree d = 64
// modulus q = 2199023255717, log(q) ~ 41.0
// factors q = q1
// 
// Compression
// D = 7
// gamma = 54068, log(gamma) ~ 15.722487
// 
// Dimensions of secrets
// s1: m1 = 24
// m: l = 0
// s2: m2 = 55
// 
// Size of secrets
// l2(s1) <= alpha = 112.0
// m unbounded
// s2 uniform in [-nu,nu] = [-1,1]
// 
// Norm proofs
// binary: yes (dimension: 8)
// exact euclidean: yes (dimensions: [16], bounds: [109.0])
// approximate infinity: yes (psi: 3770.0139, dimension: 8, bound: 14591.313)
// 
// Challenge space
// c uniform in [-omega,omega] = [-8,8], o(c)=c, sqrt(l1(o(c)*c)) <= eta = 140
// 
// Standard deviations
// stdev1 = 203161.6, log(stdev1/1.55) = 17.0
// stdev2 = 6348.8, log(stdev2/1.55) = 12.0
// stdev3 = 12697.6, log(stdev3/1.55) = 13.0
// stdev4 = 1625292.8, log(stdev4/1.55) = 20.0
// 
// Repetition rate
// M1 = 2.8228178
// M2 = 2.3533173
// M3 = 1.0131039
// M4 = 1.0136734
// total = 6.8220576
// 
// Security
// MSIS dimension: 17
// MSIS root hermite factor: 1.0043951
// MLWE dimension: 26
// MLWE root hermite factor: 1.0043734
// 
// Proof size
// ~ 19.7128906250000 KiB
// 
// 50 bit moduli for degree 64: [1125899906840833, 1125899906839937]
// bit length of products: [49, 99]
// inverses: [1, -162099428551732]

#include "lazer.h"
static const limb_t _p1_param_q_limbs[] = {2199023255717UL};
static const int_t _p1_param_q = {{(limb_t *)_p1_param_q_limbs, 1, 0}};
static const limb_t _p1_param_qminus1_limbs[] = {2199023255716UL};
static const int_t _p1_param_qminus1 = {{(limb_t *)_p1_param_qminus1_limbs, 1, 0}};
static const limb_t _p1_param_m_limbs[] = {40671437UL};
static const int_t _p1_param_m = {{(limb_t *)_p1_param_m_limbs, 1, 0}};
static const limb_t _p1_param_mby2_limbs[] = {40671437/2UL};
static const int_t _p1_param_mby2 = {{(limb_t *)_p1_param_mby2_limbs, 1, 0}};
static const limb_t _p1_param_gamma_limbs[] = {54068UL};
static const int_t _p1_param_gamma = {{(limb_t *)_p1_param_gamma_limbs, 1, 0}};
static const limb_t _p1_param_gammaby2_limbs[] = {27034UL};
static const int_t _p1_param_gammaby2 = {{(limb_t *)_p1_param_gammaby2_limbs, 1, 0}};
static const limb_t _p1_param_pow2D_limbs[] = {128UL};
static const int_t _p1_param_pow2D = {{(limb_t *)_p1_param_pow2D_limbs, 1, 0}};
static const limb_t _p1_param_pow2Dby2_limbs[] = {64UL};
static const int_t _p1_param_pow2Dby2 = {{(limb_t *)_p1_param_pow2Dby2_limbs, 1, 0}};
static const limb_t _p1_param_Bsq_limbs[] = {2958230480359UL, 0UL};
static const int_t _p1_param_Bsq = {{(limb_t *)_p1_param_Bsq_limbs, 2, 0}};
static const limb_t _p1_param_scM1_limbs[] = {1255866945151450665UL, 15178309525591478985UL, 2UL};
static const int_t _p1_param_scM1 = {{(limb_t *)_p1_param_scM1_limbs, 3, 0}};
static const limb_t _p1_param_scM2_limbs[] = {608560980791652131UL, 6517553481399687226UL, 2UL};
static const int_t _p1_param_scM2 = {{(limb_t *)_p1_param_scM2_limbs, 3, 0}};
static const limb_t _p1_param_scM3_limbs[] = {15167496680378799663UL, 241724052390491663UL, 1UL};
static const int_t _p1_param_scM3 = {{(limb_t *)_p1_param_scM3_limbs, 3, 0}};
static const limb_t _p1_param_scM4_limbs[] = {6030099390074697201UL, 252230439596858346UL, 1UL};
static const int_t _p1_param_scM4 = {{(limb_t *)_p1_param_scM4_limbs, 3, 0}};
static const limb_t _p1_param_stdev1sq_limbs[] = {41274635715UL, 0UL};
static const int_t _p1_param_stdev1sq = {{(limb_t *)_p1_param_stdev1sq_limbs, 2, 0}};
static const limb_t _p1_param_stdev2sq_limbs[] = {40307261UL, 0UL};
static const int_t _p1_param_stdev2sq = {{(limb_t *)_p1_param_stdev2sq_limbs, 2, 0}};
static const limb_t _p1_param_stdev3sq_limbs[] = {161229046UL, 0UL};
static const int_t _p1_param_stdev3sq = {{(limb_t *)_p1_param_stdev3sq_limbs, 2, 0}};
static const limb_t _p1_param_stdev4sq_limbs[] = {2641576685732UL, 0UL};
static const int_t _p1_param_stdev4sq = {{(limb_t *)_p1_param_stdev4sq_limbs, 2, 0}};
static const limb_t _p1_param_inv2_limbs[] = {1099511627858UL};
static const int_t _p1_param_inv2 = {{(limb_t *)_p1_param_inv2_limbs, 1, 1}};
static const limb_t _p1_param_inv4_limbs[] = {549755813929UL};
static const int_t _p1_param_inv4 = {{(limb_t *)_p1_param_inv4_limbs, 1, 1}};
static const unsigned int _p1_param_n[1] = {16};
static const limb_t _p1_param_Bz3sqr_limbs[] = {111012260217UL, 0UL};
static const int_t _p1_param_Bz3sqr = {{(limb_t *)_p1_param_Bz3sqr_limbs, 2, 0}};
static const limb_t _p1_param_Bz4_limbs[] = {26004684UL};
static const int_t _p1_param_Bz4 = {{(limb_t *)_p1_param_Bz4_limbs, 1, 0}};
static const limb_t _p1_param_Pmodq_limbs[] = {7519984257UL};
static const int_t _p1_param_Pmodq = {{(limb_t *)_p1_param_Pmodq_limbs, 1, 0}};
static const limb_t _p1_param_l2Bsq0_limbs[] = {11881UL};
static const int_t _p1_param_l2Bsq0 = {{(limb_t *)_p1_param_l2Bsq0_limbs, 1, 0}};
static const limb_t _p1_param_Ppmodq_0_limbs[] = {87167UL};
static const int_t _p1_param_Ppmodq_0 = {{(limb_t *)_p1_param_Ppmodq_0_limbs, 1, 1}};
static const limb_t _p1_param_Ppmodq_1_limbs[] = {86271UL};
static const int_t _p1_param_Ppmodq_1 = {{(limb_t *)_p1_param_Ppmodq_1_limbs, 1, 1}};
static const int_srcptr _p1_param_l2Bsq[] = {_p1_param_l2Bsq0};
static const int_srcptr _p1_param_Ppmodq[] = {_p1_param_Ppmodq_0, _p1_param_Ppmodq_1};
static const polyring_t _p1_param_ring = {{_p1_param_q, 64, 42, 6, moduli_d64, 2, _p1_param_Pmodq, _p1_param_Ppmodq, _p1_param_inv2}};
static const dcompress_params_t _p1_param_dcomp = {{ _p1_param_q, _p1_param_qminus1, _p1_param_m, _p1_param_mby2, _p1_param_gamma, _p1_param_gammaby2, _p1_param_pow2D, _p1_param_pow2Dby2, 7, 1, 26 }};
static const abdlop_params_t _p1_param_tbox = {{ _p1_param_ring, _p1_param_dcomp, 25, 55, 0, 12, 17, _p1_param_Bsq, 1, 8, 5, 140, 1, 17, _p1_param_scM1, _p1_param_stdev1sq, 2, 12, _p1_param_scM2, _p1_param_stdev2sq}};
static const abdlop_params_t _p1_param_quad_eval_ = {{ _p1_param_ring, _p1_param_dcomp, 25, 55, 9, 3, 17, _p1_param_Bsq, 1, 8, 5, 140, 1, 17, _p1_param_scM1, _p1_param_stdev1sq, 2, 12, _p1_param_scM2, _p1_param_stdev2sq}};
static const abdlop_params_t _p1_param_quad_many_ = {{ _p1_param_ring, _p1_param_dcomp, 25, 55, 11, 1, 17, _p1_param_Bsq, 1, 8, 5, 140, 1, 17, _p1_param_scM1, _p1_param_stdev1sq, 2, 12, _p1_param_scM2, _p1_param_stdev2sq}};
static const lnp_quad_eval_params_t _p1_param_quad_eval = {{ _p1_param_quad_eval_, _p1_param_quad_many_, 4}};
static const lnp_tbox_params_t _p1_param = {{ _p1_param_tbox, _p1_param_quad_eval, 8, _p1_param_n, 8, 1, 25, 2, 13, _p1_param_scM3, _p1_param_stdev3sq, 2, 20, _p1_param_scM4, _p1_param_stdev4sq, _p1_param_Bz3sqr, _p1_param_Bz4, &_p1_param_l2Bsq[0], _p1_param_inv4, 20186UL }};

static const unsigned int p1_param_Ps[8] = {16, 17, 18, 19, 20, 21, 22, 23};
static const unsigned int p1_param_Es0[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
static const unsigned int *p1_param_Es[1] = { p1_param_Es0, };
static const unsigned int p1_param_Es_nrows[1] = {16};

static const limb_t p1_param_p_limbs[] = {12289UL};
static const int_t p1_param_p = {{(limb_t *)p1_param_p_limbs, 1, 0}};
static const limb_t p1_param_pinv_limbs[] = {249087832367UL};
static const int_t p1_param_pinv = {{(limb_t *)p1_param_pinv_limbs, 1, 1}};
static const unsigned int p1_param_s1_indices[24] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
static const lin_params_t p1_param = {{ _p1_param, 64, p1_param_p, p1_param_pinv, 1, p1_param_s1_indices, 24, NULL, 0,  p1_param_Ps, 8, p1_param_Es, p1_param_Es_nrows, NULL, NULL }};

// auto-generated by lnp-tbox.sage.
// 
// protocol is statistically complete with correctness error >= 1 - 2^(-3)
// protocol is simulatable under MLWE(32,32,[-1,1])
// protocol is knowledge-sound with knowledge error <= 2^(-127.0) under MSIS(20,112,2^(40.173114))
// 
// Ring
// degree d = 64
// modulus q = 1125899906843221, log(q) ~ 50.0
// factors q = q1
// 
// Compression
// D = 15
// gamma = 16531490, log(gamma) ~ 23.978713
// 
// Dimensions of secrets
// s1: m1 = 48
// m: l = 0
// s2: m2 = 64
// 
// Size of secrets
// l2(s1) <= alpha = 5836.0
// m unbounded
// s2 uniform in [-nu,nu] = [-1,1]
// 
// Norm proofs
// binary: yes (dimension: 16)
// exact euclidean: yes (dimensions: [16, 16], bounds: [109.0, 5833.9289])
// approximate infinity: yes (psi: 3143.8325, dimension: 8, bound: 8958759.4)
// 
// Challenge space
// c uniform in [-omega,omega] = [-8,8], o(c)=c, sqrt(l1(o(c)*c)) <= eta = 140
// 
// Standard deviations
// stdev1 = 13002342.4, log(stdev1/1.55) = 23.0
// stdev2 = 6348.8, log(stdev2/1.55) = 12.0
// stdev3 = 406323.2, log(stdev3/1.55) = 18.0
// stdev4 = 832149913.6, log(stdev4/1.55) = 29.0
// 
// Repetition rate
// M1 = 2.3216894
// M2 = 2.707079
// M3 = 1.03536
// M4 = 1.0197215
// total = 6.6355669
// 
// Security
// MSIS dimension: 20
// MSIS root hermite factor: 1.0043793
// MLWE dimension: 32
// MLWE root hermite factor: 1.0043146
// 
// Proof size
// ~ 29.3593750000000 KiB
// 
// 50 bit moduli for degree 64: [1125899906840833, 1125899906839937, 1125899906837633]
// bit length of products: [49, 99, 149]
// inverses: [1, -162099428551732, 296975494591860]

#include "lazer.h"
static const limb_t _p2_param_q_limbs[] = {1125899906843221UL};
static const int_t _p2_param_q = {{(limb_t *)_p2_param_q_limbs, 1, 0}};
static const limb_t _p2_param_qminus1_limbs[] = {1125899906843220UL};
static const int_t _p2_param_qminus1 = {{(limb_t *)_p2_param_qminus1_limbs, 1, 0}};
static const limb_t _p2_param_m_limbs[] = {68106378UL};
static const int_t _p2_param_m = {{(limb_t *)_p2_param_m_limbs, 1, 0}};
static const limb_t _p2_param_mby2_limbs[] = {34053189UL};
static const int_t _p2_param_mby2 = {{(limb_t *)_p2_param_mby2_limbs, 1, 0}};
static const limb_t _p2_param_gamma_limbs[] = {16531490UL};
static const int_t _p2_param_gamma = {{(limb_t *)_p2_param_gamma_limbs, 1, 0}};
static const limb_t _p2_param_gammaby2_limbs[] = {8265745UL};
static const int_t _p2_param_gammaby2 = {{(limb_t *)_p2_param_gammaby2_limbs, 1, 0}};
static const limb_t _p2_param_pow2D_limbs[] = {32768UL};
static const int_t _p2_param_pow2D = {{(limb_t *)_p2_param_pow2D_limbs, 1, 0}};
static const limb_t _p2_param_pow2Dby2_limbs[] = {16384UL};
static const int_t _p2_param_pow2Dby2 = {{(limb_t *)_p2_param_pow2Dby2_limbs, 1, 0}};
static const limb_t _p2_param_Bsq_limbs[] = {143158532224272924UL, 0UL};
static const int_t _p2_param_Bsq = {{(limb_t *)_p2_param_Bsq_limbs, 2, 0}};
static const limb_t _p2_param_scM1_limbs[] = {9859465049745963634UL, 5934122506364705697UL, 2UL};
static const int_t _p2_param_scM1 = {{(limb_t *)_p2_param_scM1_limbs, 3, 0}};
static const limb_t _p2_param_scM2_limbs[] = {15002606599518648986UL, 13043305028329312333UL, 2UL};
static const int_t _p2_param_scM2 = {{(limb_t *)_p2_param_scM2_limbs, 3, 0}};
static const limb_t _p2_param_scM3_limbs[] = {7569140089676268920UL, 652277607672955118UL, 1UL};
static const int_t _p2_param_scM3 = {{(limb_t *)_p2_param_scM3_limbs, 3, 0}};
static const limb_t _p2_param_scM4_limbs[] = {1037701719389014861UL, 363797679677738827UL, 1UL};
static const int_t _p2_param_scM4 = {{(limb_t *)_p2_param_scM4_limbs, 3, 0}};
static const limb_t _p2_param_stdev1sq_limbs[] = {169060907886838UL, 0UL};
static const int_t _p2_param_stdev1sq = {{(limb_t *)_p2_param_stdev1sq_limbs, 2, 0}};
static const limb_t _p2_param_stdev2sq_limbs[] = {40307261UL, 0UL};
static const int_t _p2_param_stdev2sq = {{(limb_t *)_p2_param_stdev2sq_limbs, 2, 0}};
static const limb_t _p2_param_stdev3sq_limbs[] = {165098542858UL, 0UL};
static const int_t _p2_param_stdev3sq = {{(limb_t *)_p2_param_stdev3sq_limbs, 2, 0}};
static const limb_t _p2_param_stdev4sq_limbs[] = {692473478704487465UL, 0UL};
static const int_t _p2_param_stdev4sq = {{(limb_t *)_p2_param_stdev4sq_limbs, 2, 0}};
static const limb_t _p2_param_inv2_limbs[] = {562949953421610UL};
static const int_t _p2_param_inv2 = {{(limb_t *)_p2_param_inv2_limbs, 1, 1}};
static const limb_t _p2_param_inv4_limbs[] = {281474976710805UL};
static const int_t _p2_param_inv4 = {{(limb_t *)_p2_param_inv4_limbs, 1, 1}};
static const unsigned int _p2_param_n[2] = {16, 16};
static const limb_t _p2_param_Bz3sqr_limbs[] = {113676554463109UL, 0UL};
static const int_t _p2_param_Bz3sqr = {{(limb_t *)_p2_param_Bz3sqr_limbs, 2, 0}};
static const limb_t _p2_param_Bz4_limbs[] = {13314398617UL};
static const int_t _p2_param_Bz4 = {{(limb_t *)_p2_param_Bz4_limbs, 1, 0}};
static const limb_t _p2_param_Pmodq_limbs[] = {43822168896UL};
static const int_t _p2_param_Pmodq = {{(limb_t *)_p2_param_Pmodq_limbs, 1, 1}};
static const limb_t _p2_param_l2Bsq0_limbs[] = {11881UL};
static const int_t _p2_param_l2Bsq0 = {{(limb_t *)_p2_param_l2Bsq0_limbs, 1, 0}};
static const limb_t _p2_param_l2Bsq1_limbs[] = {34034726UL};
static const int_t _p2_param_l2Bsq1 = {{(limb_t *)_p2_param_l2Bsq1_limbs, 1, 0}};
static const limb_t _p2_param_Ppmodq_0_limbs[] = {18350992UL};
static const int_t _p2_param_Ppmodq_0 = {{(limb_t *)_p2_param_Ppmodq_0_limbs, 1, 0}};
static const limb_t _p2_param_Ppmodq_1_limbs[] = {13344144UL};
static const int_t _p2_param_Ppmodq_1 = {{(limb_t *)_p2_param_Ppmodq_1_limbs, 1, 0}};
static const limb_t _p2_param_Ppmodq_2_limbs[] = {7842192UL};
static const int_t _p2_param_Ppmodq_2 = {{(limb_t *)_p2_param_Ppmodq_2_limbs, 1, 0}};
static const int_srcptr _p2_param_l2Bsq[] = {_p2_param_l2Bsq0, _p2_param_l2Bsq1};
static const int_srcptr _p2_param_Ppmodq[] = {_p2_param_Ppmodq_0, _p2_param_Ppmodq_1, _p2_param_Ppmodq_2};
static const polyring_t _p2_param_ring = {{_p2_param_q, 64, 51, 6, moduli_d64, 3, _p2_param_Pmodq, _p2_param_Ppmodq, _p2_param_inv2}};
static const dcompress_params_t _p2_param_dcomp = {{ _p2_param_q, _p2_param_qminus1, _p2_param_m, _p2_param_mby2, _p2_param_gamma, _p2_param_gammaby2, _p2_param_pow2D, _p2_param_pow2Dby2, 15, 0, 27 }};
static const abdlop_params_t _p2_param_tbox = {{ _p2_param_ring, _p2_param_dcomp, 50, 64, 0, 12, 20, _p2_param_Bsq, 1, 8, 5, 140, 1, 23, _p2_param_scM1, _p2_param_stdev1sq, 2, 12, _p2_param_scM2, _p2_param_stdev2sq}};
static const abdlop_params_t _p2_param_quad_eval_ = {{ _p2_param_ring, _p2_param_dcomp, 50, 64, 9, 3, 20, _p2_param_Bsq, 1, 8, 5, 140, 1, 23, _p2_param_scM1, _p2_param_stdev1sq, 2, 12, _p2_param_scM2, _p2_param_stdev2sq}};
static const abdlop_params_t _p2_param_quad_many_ = {{ _p2_param_ring, _p2_param_dcomp, 50, 64, 11, 1, 20, _p2_param_Bsq, 1, 8, 5, 140, 1, 23, _p2_param_scM1, _p2_param_stdev1sq, 2, 12, _p2_param_scM2, _p2_param_stdev2sq}};
static const lnp_quad_eval_params_t _p2_param_quad_eval = {{ _p2_param_quad_eval_, _p2_param_quad_many_, 4}};
static const lnp_tbox_params_t _p2_param = {{ _p2_param_tbox, _p2_param_quad_eval, 16, _p2_param_n, 8, 2, 50, 2, 18, _p2_param_scM3, _p2_param_stdev3sq, 2, 29, _p2_param_scM4, _p2_param_stdev4sq, _p2_param_Bz3sqr, _p2_param_Bz4, &_p2_param_l2Bsq[0], _p2_param_inv4, 30064UL }};

static const unsigned int p2_param_Ps[16] = {16, 17, 18, 19, 20, 21, 22, 23, 40, 41, 42, 43, 44, 45, 46, 47};
static const unsigned int p2_param_Es0[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
static const unsigned int p2_param_Es1[16] = {24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
static const unsigned int *p2_param_Es[2] = { p2_param_Es0, p2_param_Es1, };
static const unsigned int p2_param_Es_nrows[2] = {16, 16};

static const limb_t p2_param_p_limbs[] = {12289UL};
static const int_t p2_param_p = {{(limb_t *)p2_param_p_limbs, 1, 0}};
static const limb_t p2_param_pinv_limbs[] = {305914215066280UL};
static const int_t p2_param_pinv = {{(limb_t *)p2_param_pinv_limbs, 1, 0}};
static const unsigned int p2_param_s1_indices[48] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47};
static const lin_params_t p2_param = {{ _p2_param, 64, p2_param_p, p2_param_pinv, 1, p2_param_s1_indices, 48, NULL, 0,  p2_param_Ps, 16, p2_param_Es, p2_param_Es_nrows, NULL, NULL }};

