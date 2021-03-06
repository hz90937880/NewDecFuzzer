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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1f1e));
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
        chars_printed = printf((char *)(v1 + 3613));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x8049776
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804965d
    *(int16_t *)(v2 + 0x39c2) = (int16_t)a1;
    *(int32_t *)(v2 + 0x39c6) = a2;
    *(int32_t *)(v2 + 0x3e22) = a3;
    *(int32_t *)(v2 + 0x39ca) = a4;
    *(char *)(v2 + 0x39ce) = (char)a5;
    *(int16_t *)(v2 + 0x3e26) = (int16_t)a6;
    *(int16_t *)(v2 + 0x39d0) = (int16_t)a7;
    *(char *)(v2 + 0x39d2) = (char)a8;
    *(char *)(v2 + 0x39d3) = (char)a9;
    *(int32_t *)(v2 + 0x39d6) = a10;
    *(char *)(v2 + 0x39da) = (char)a11;
    *(int32_t *)(v2 + 0x3e2a) = a12;
    *(int32_t *)(v2 + 0x39de) = a13;
    *(char *)(v2 + 0x39e2) = (char)a14;
    *(int32_t *)(v2 + 0x39e6) = a15;
    *(int32_t *)(v2 + 0x39ea) = a16;
    *(char *)(v2 + 0x39ee) = (char)a17;
    return 0;
}

// Address range: 0x8049776 - 0x804a055
int32_t func_1(void) {
    // 0x8049776
    int32_t v1; // 0x8049776
    __x86_get_pc_thunk_ax(v1);
    set_var(0xffff, 0, -5, 1, 251, 0, 1, -12, 9, 1120, 4, 0, -0x159cf05d, 3, 0x611122fb, -4, 195);
    return -5;
}

// Address range: 0x804a055 - 0x804a303
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a07e
    int32_t v3; // 0x804a055
    if (v1 == (char **)2) {
        // 0x804a080
        int32_t v4; // 0x804a055
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a086
        v2 = strcmp((char *)str, (char *)(v3 + 897)) == 0;
    }
    // 0x804a0a6
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2fb8), v3 + 899, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fbc), v3 + 903, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3418), v3 + 907, v2);
    transparent_crc(6, v3 + 911, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fc0), v3 + 916, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2fc4), v3 + 921, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x341c), v3 + 926, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2fc6), v3 + 931, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2fc8), v3 + 936, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2fc9), v3 + 941, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fcc), v3 + 946, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2fd0), v3 + 952, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3420), v3 + 958, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fd4), v3 + 964, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2fd8), v3 + 970, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fdc), v3 + 976, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fe0), v3 + 982, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2fe4), v3 + 988, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2fb4), v2);
    return 0;
}

// Address range: 0x804a303 - 0x804a307
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a303
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
