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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1a7e));
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
        chars_printed = printf((char *)(v1 + 2429));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049701
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(char *)(v2 + 0x29f0) = (char)a1;
    *(int16_t *)(v2 + 0x29f2) = (int16_t)a2;
    *(int32_t *)(v2 + 0x29f4) = a3;
    *(int32_t *)(v2 + 0x29f8) = a4;
    *(int16_t *)(v2 + 0x29fc) = (int16_t)a5;
    *(int32_t *)(v2 + 0x2e50) = a6;
    *(char *)(v2 + 0x29fe) = (char)a7;
    *(int32_t *)(v2 + 0x2a00) = a8;
    *(int32_t *)(v2 + 0x2a04) = a9;
    *(int32_t *)(v2 + 0x2e54) = a10;
    *(char *)(v2 + 0x2a08) = (char)a11;
    *(char *)(v2 + 0x2a09) = (char)a12;
    *(int32_t *)(v2 + 0x2a0c) = a13;
    *(int32_t *)(v2 + 0x2a10) = a14;
    return 0;
}

// Address range: 0x8049701 - 0x8049c40
int32_t func_1(void) {
    // 0x8049701
    int32_t v1; // 0x8049701
    __x86_get_pc_thunk_ax(v1);
    set_var(16, 0xff10, 0xff10, 3, 0x2ed5, 0, 94, 6, -1, 0, 1, 20, -4, 0x2a4288ea);
    return 0;
}

// Address range: 0x8049c40 - 0x8049e68
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049c69
    int32_t v3; // 0x8049c40
    if (v1 == (char **)2) {
        // 0x8049c6b
        int32_t v4; // 0x8049c40
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049c71
        v2 = strcmp((char *)str, (char *)(v3 + 753)) == 0;
    }
    // 0x8049c91
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(char *)(v3 + 0x23cd), v3 + 755, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x23cf), v3 + 760, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23d1), v3 + 765, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23d5), v3 + 770, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x23d9), v3 + 775, v2);
    transparent_crc(*(int32_t *)(v3 + 0x282d), v3 + 780, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x23db), v3 + 785, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23dd), v3 + 790, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23e1), v3 + 795, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2831), v3 + 800, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x23e5), v3 + 805, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x23e6), v3 + 810, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23e9), v3 + 816, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23ed), v3 + 822, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x23c9), v2);
    return 0;
}

// Address range: 0x8049e68 - 0x8049e6c
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049e68
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
