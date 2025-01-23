/* (c) 2025 Mario "Neo" Sieg. <mario.sieg.64@gmail.com> */

#if !defined(__SSE__) \
    || !defined(__SSE2__) \
    || !defined(__SSE3__) \
    || !defined(__SSSE3__) \
    || !defined(__SSE4_1__) \
    || !defined(__SSE4_2__) \
    || !defined(__AVX__) \
    || !defined(__AVX2__) \
    || !defined(__BMI__) \
    || !defined(__BMI2__) \
    || !defined(__F16C__) \
    || !defined(__FMA__) \
    || !defined(__AVX512F__) \
    || !defined(__AVX512BW__) \
    || !defined(__AVX512DQ__) \
    || !defined(__AVX512VL__) \
    || !defined(__AVX512VNNI__) \
    || !defined(__AVX512BF16__)
#error "BLAS specialization requires matching compile flags"
#endif
#ifdef __APX__
#error "BLAS specialization feature too high"
#endif

#define MAG_BLAS_SPECIALIZATION mag_cpu_blas_specialization_amd64_v4_5
#define MAG_BLAS_SPECIALIZATION_FEAT_REQUEST mag_cpu_blas_specialization_amd64_v4_5_features

#include "magnetron_cpu_blas.inl"
