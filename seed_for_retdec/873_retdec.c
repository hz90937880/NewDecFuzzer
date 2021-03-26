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
    return __x86_get_pc_thunk_ax(v1) + 0x4ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1c8e));
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
        chars_printed = printf((char *)(v1 + 2957));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x804976a
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2; // 0x8049654
    int32_t v3; // 0x8049654
    int32_t v4; // 0x8049654
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049654
    *(char *)(v5 + 0x3e22) = (char)a1;
    *(char *)(v5 + 0x39c2) = (char)a2;
    *(char *)(v5 + 0x39c3) = (char)a3;
    *(char *)(v5 + 0x39c4) = (char)a4;
    *(char *)(v5 + 0x39c5) = (char)a5;
    *(int32_t *)(v5 + 0x39c6) = a6;
    *(int32_t *)(v5 + 0x39ca) = a7;
    *(int16_t *)(v5 + 0x39ce) = (int16_t)a8;
    *(int16_t *)(v5 + 0x39d0) = (int16_t)a9;
    *(int16_t *)(v5 + 0x39d2) = (int16_t)a10;
    *(int32_t *)(v5 + 0x39d6) = a11;
    *(char *)(v5 + 0x39da) = (char)a12;
    *(char *)(v5 + 0x39db) = (char)a13;
    *(int32_t *)(v5 + 0x39de) = a14;
    return 0;
}

// Address range: 0x804976a - 0x8049e3d
int32_t func_1(void) {
    // 0x8049db0
    int32_t v1; // 0x804976a
    __x86_get_pc_thunk_ax(v1);
    set_var(0, 49, -44, -42, 49, -117, -0x47a6, 1, 0x29b2, 0xbc76, 1, 116, 12, -3);
    return -3;
}

// Address range: 0x8049e3d - 0x804a075
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049e66
    int32_t v3; // 0x8049e3d
    if (v1 == (char **)2) {
        // 0x8049e68
        int32_t v4; // 0x8049e3d
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049e6e
        v2 = strcmp((char *)str, (char *)(v3 + 776)) == 0;
    }
    // 0x8049e8e
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(char *)(v3 + 0x3630), v3 + 778, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31d0), v3 + 782, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31d1), v3 + 787, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31d2), v3 + 792, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31d3), v3 + 797, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31d4), v3 + 802, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31d8), v3 + 807, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31dc), v3 + 812, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31de), v3 + 817, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31e0), v3 + 822, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31e4), v3 + 827, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31e8), v3 + 832, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31e9), v3 + 838, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31ec), v3 + 844, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x31cc), v2);
    return 0;
}

// Address range: 0x804a075 - 0x804a079
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a075
    return result;
}

// Address range: 0x804a079 - 0x804a07d
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804a079
    int32_t result; // 0x804a079
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12