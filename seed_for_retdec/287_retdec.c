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
    return __x86_get_pc_thunk_ax(v1) + 0x3ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1b3e));
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
        chars_printed = printf((char *)(v1 + 2621));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804972c
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int16_t *)(v2 + 0x29f0) = (int16_t)a1;
    *(int32_t *)(v2 + 0x29f4) = a2;
    *(char *)(v2 + 0x29f8) = (char)a3;
    *(int32_t *)(v2 + 0x29fc) = a4;
    *(int16_t *)(v2 + 0x2a00) = (int16_t)a5;
    *(int32_t *)(v2 + 0x2a04) = a6;
    *(int32_t *)(v2 + 0x2a08) = a7;
    *(int32_t *)(v2 + 0x2a0c) = a8;
    *(int16_t *)(v2 + 0x2a10) = (int16_t)a9;
    *(int32_t *)(v2 + 0x2a14) = a10;
    *(int16_t *)(v2 + 0x2a18) = (int16_t)a11;
    *(char *)(v2 + 0x2a1a) = (char)a12;
    *(int16_t *)(v2 + 0x2a1c) = (int16_t)a13;
    *(char *)(v2 + 0x2a1e) = (char)a14;
    *(int32_t *)(v2 + 0x2e50) = a15;
    return 0;
}

// Address range: 0x804972c - 0x8049cd9
int32_t func_1(void) {
    // 0x8049cd1
    int32_t v1; // 0x804972c
    __x86_get_pc_thunk_ax(v1);
    set_var(6, 1, 7, 0x3809d00f, 0, -0x4945ff4a, 0, 0, 1606, -16, -6, 2, 2506, 2, 0);
    return 71;
}

// Address range: 0x8049cd9 - 0x8049f23
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049d02
    int32_t v3; // 0x8049cd9
    if (v1 == (char **)2) {
        // 0x8049d04
        int32_t v4; // 0x8049cd9
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049d0a
        v2 = strcmp((char *)str, (char *)(v3 + 792)) == 0;
    }
    // 0x8049d2a
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2334), v3 + 794, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2338), v3 + 798, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x233c), v3 + 802, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2340), v3 + 807, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2344), v3 + 812, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2348), v3 + 817, v2);
    transparent_crc(*(int32_t *)(v3 + 0x234c), v3 + 822, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2350), v3 + 827, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2354), v3 + 832, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2358), v3 + 837, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x235c), v3 + 842, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x235e), v3 + 848, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2360), v3 + 854, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2362), v3 + 860, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2794), v3 + 866, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2330), v2);
    return 0;
}

// Address range: 0x8049f23 - 0x8049f27
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049f23
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11