//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t __x86_get_pc_thunk_ax(int32_t result);
int32_t __x86_get_pc_thunk_bx(int32_t a1);
int32_t crc32_8bytes(uint32_t a1);
int32_t crc32_byte(int32_t a1);
int32_t crc32_gentab(void);
int32_t func_1(void);
int32_t platform_main_begin(void);
int32_t platform_main_end(int32_t a1, int32_t a2);
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15);
int32_t transparent_crc(int32_t a1, int32_t a2, int32_t a3);

// ------------------------ Functions -------------------------

// Address range: 0x8048390 - 0x8048394
int32_t __x86_get_pc_thunk_bx(int32_t a1) {
    // 0x8048390
    int32_t result; // 0x8048390
    return result;
}

// Address range: 0x8048456 - 0x8048466
int32_t platform_main_begin(void) {
    // 0x8048456
    int32_t v1; // 0x8048456
    return __x86_get_pc_thunk_ax(v1) + 0x4ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1b8e));
}

// Address range: 0x804946b - 0x80494db
int32_t crc32_gentab(void) {
    // 0x804946b
    int32_t v1; // 0x804946b
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x8049471
    for (int32_t i = 0; i < 256; i++) {
        int32_t v3 = 8; // 0x80494b4
        uint32_t v4 = i / 2;
        int32_t v5 = i % 2 == 0 ? v4 : v4 ^ -0x12477ce0;
        v3--;
        int32_t v6 = v5; // 0x80494bc
        while (v3 != 0) {
            // 0x804949a
            v4 = v6 / 2;
            v5 = v6 % 2 == 0 ? v4 : v4 ^ -0x12477ce0;
            v3--;
            v6 = v5;
        }
        // 0x80494be
        *(int32_t *)(v2 + 0x3c0a + 4 * i) = v5;
    }
    // 0x80494d8
    return v2 + 0x3b8a;
}

// Address range: 0x80494db - 0x8049522
int32_t crc32_byte(int32_t a1) {
    // 0x80494db
    int32_t v1; // 0x80494db
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x80494e2
    int32_t * v3 = (int32_t *)(v2 + 0x3b39); // 0x80494f2
    uint32_t v4 = *v3; // 0x80494f2
    *v3 = *(int32_t *)(v2 + 0x3b99 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
    return v2 + 0x3b19;
}

// Address range: 0x8049522 - 0x8049577
int32_t crc32_8bytes(uint32_t a1) {
    // 0x8049522
    int32_t v1; // 0x8049522
    __x86_get_pc_thunk_ax(v1);
    crc32_byte(a1 % 256);
    crc32_byte(a1 / 256 % 256);
    crc32_byte(a1 / 0x10000 % 256);
    return crc32_byte(a1 / 0x1000000);
}

// Address range: 0x8049577 - 0x80495be
int32_t transparent_crc(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8049577
    int32_t v1; // 0x8049577
    __x86_get_pc_thunk_bx(v1);
    int32_t chars_printed = crc32_8bytes(a1); // 0x8049598
    if (a3 != 0) {
        // 0x804959a
        chars_printed = printf((char *)(v1 + 2701));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x804974c
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804965d
    *(int32_t *)(v2 + 0x39c2) = a1;
    *(int32_t *)(v2 + 0x3e22) = a2;
    *(int32_t *)(v2 + 0x39c6) = a3;
    *(int32_t *)(v2 + 0x39ca) = a4;
    *(int32_t *)(v2 + 0x39ce) = a5;
    *(int32_t *)(v2 + 0x39d2) = a6;
    *(char *)(v2 + 0x39d6) = (char)a7;
    *(int16_t *)(v2 + 0x39d8) = (int16_t)a8;
    *(int16_t *)(v2 + 0x39da) = (int16_t)a9;
    *(int32_t *)(v2 + 0x3e26) = a10;
    *(int16_t *)(v2 + 0x3e2a) = (int16_t)a11;
    *(int16_t *)(v2 + 0x39dc) = (int16_t)a12;
    *(char *)(v2 + 0x39de) = (char)a13;
    *(int32_t *)(v2 + 0x39e2) = a14;
    *(int16_t *)(v2 + 0x39e6) = (int16_t)a15;
    return 0;
}

// Address range: 0x804974c - 0x8049d25
int32_t func_1(void) {
    // 0x804988d
    int32_t v1; // 0x804974c
    __x86_get_pc_thunk_ax(v1);
    int32_t v2 = 0x22f0f5b8;
    for (int32_t i = -10; i > -27; i--) {
        int32_t v3 = 25; // 0x80499d4
        v2 = v2 == 0;
        v3 -= 2;
        int32_t v4 = v2; // 0x80499dc
        while (v3 > 17) {
            // 0x8049953
            v2 = v4 == 0;
            v3 -= 2;
            v4 = v2;
        }
    }
    // 0x8049d1d
    set_var(0x7117, 0, -0x145110e0, 6, 0x48718302, v2, 1, 0, 0x8303, 9, 0, -1, 126, -0x6f850c7c, 0x56a0);
    return 0x48718302;
}

// Address range: 0x8049d25 - 0x8049f73
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049d4e
    int32_t v3; // 0x8049d25
    if (v1 == (char **)2) {
        // 0x8049d50
        int32_t v4; // 0x8049d25
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049d56
        v2 = strcmp((char *)str, (char *)(v3 + 800)) == 0;
    }
    // 0x8049d76
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x32e8), v3 + 802, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3748), v3 + 806, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32ec), v3 + 810, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32f0), v3 + 814, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32f4), v3 + 818, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32f8), v3 + 823, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32fc), v3 + 828, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32fe), v3 + 833, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3300), v3 + 838, v2);
    transparent_crc(*(int32_t *)(v3 + 0x374c), v3 + 843, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3750), v3 + 848, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3302), v3 + 854, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3304), v3 + 860, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3308), v3 + 866, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x330c), v3 + 872, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x32e4), v2);
    return 0;
}

// Address range: 0x8049f73 - 0x8049f77
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049f73
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
