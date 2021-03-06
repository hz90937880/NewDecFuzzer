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
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
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
    return __x86_get_pc_thunk_ax(v1) + 0x3ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1a8e));
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
        *(int32_t *)(v2 + 0x2c0a + 4 * i) = v5;
    }
    // 0x80494d8
    return v2 + 0x2b8a;
}

// Address range: 0x80494db - 0x8049522
int32_t crc32_byte(int32_t a1) {
    // 0x80494db
    int32_t v1; // 0x80494db
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x80494e2
    int32_t * v3 = (int32_t *)(v2 + 0x2b39); // 0x80494f2
    uint32_t v4 = *v3; // 0x80494f2
    *v3 = *(int32_t *)(v2 + 0x2b99 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
    return v2 + 0x2b19;
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
        chars_printed = printf((char *)(v1 + 2445));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049749
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x29f0) = a1;
    *(int32_t *)(v5 + 0x29f4) = a2;
    *(int16_t *)(v5 + 0x29f8) = (int16_t)a3;
    *(char *)(v5 + 0x29fa) = (char)a4;
    *(int32_t *)(v5 + 0x29fc) = a5;
    *(char *)(v5 + 0x2a00) = (char)a6;
    *(char *)(v5 + 0x2a01) = (char)a7;
    *(int32_t *)(v5 + 0x2a04) = a8;
    *(int16_t *)(v5 + 0x2a08) = (int16_t)a9;
    *(int16_t *)(v5 + 0x2a0a) = (int16_t)a10;
    *(int16_t *)(v5 + 0x2a0c) = (int16_t)a11;
    *(int16_t *)(v5 + 0x2a0e) = (int16_t)a12;
    *(int32_t *)(v5 + 0x2a10) = a13;
    *(char *)(v5 + 0x2a14) = (char)a14;
    *(char *)(v5 + 0x2a15) = (char)a15;
    return 0;
}

// Address range: 0x8049749 - 0x8049c1f
int32_t func_1(void) {
    // 0x8049749
    int32_t v1; // 0x8049749
    __x86_get_pc_thunk_ax(v1);
    set_var(-0x4aa5, 4, -0x3afe, 118, -0x165f84d0, 255, 9, -0x68da7e12, 0xffff, -9, 48, 8, 1, -93, 215);
    return 8;
}

// Address range: 0x8049c1f - 0x8049e75
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049c48
    int32_t v3; // 0x8049c1f
    if (v1 == (char **)2) {
        // 0x8049c4a
        int32_t v4; // 0x8049c1f
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049c50
        v2 = strcmp((char *)str, (char *)(v3 + 802)) == 0;
    }
    // 0x8049c70
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x23ee), v3 + 804, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23f2), v3 + 808, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x23f6), v3 + 812, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x23f8), v3 + 816, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23fa), v3 + 821, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x23fe), v3 + 826, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x23ff), v3 + 831, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2402), v3 + 836, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2406), v3 + 841, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2408), v3 + 847, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x240a), v3 + 853, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x240c), v3 + 859, v2);
    transparent_crc(*(int32_t *)(v3 + 0x240e), v3 + 865, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2412), v3 + 871, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2413), v3 + 877, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x23ea), v2);
    return 0;
}

// Address range: 0x8049e75 - 0x8049e79
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049e75
    return result;
}

// Address range: 0x8049e79 - 0x8049e7d
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x8049e79
    int32_t result; // 0x8049e79
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
