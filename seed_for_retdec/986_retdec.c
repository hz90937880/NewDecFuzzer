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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, char a18, int32_t a19, int32_t a20, int32_t a21, int16_t a22, int32_t a23);
int32_t transparent_crc(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g1;

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

// Address range: 0x8049654 - 0x804972f
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, char a18, int32_t a19, int32_t a20, int32_t a21, int16_t a22, int32_t a23) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804965d
    *(int16_t *)(v2 + 0x3e22) = (int16_t)a1;
    *(int16_t *)(v2 + 0x39c2) = (int16_t)a2;
    *(int32_t *)(v2 + 0x39c6) = a3;
    *(int16_t *)(v2 + 0x39ca) = (int16_t)a4;
    *(int32_t *)(v2 + 0x39ce) = a5;
    *(int32_t *)(v2 + 0x39d2) = a6;
    *(int32_t *)(v2 + 0x39d6) = a7;
    *(int16_t *)(v2 + 0x39da) = (int16_t)a8;
    *(int32_t *)(v2 + 0x39de) = a9;
    *(char *)(v2 + 0x39e2) = (char)a10;
    *(int32_t *)(v2 + 0x39e6) = a11;
    *(int32_t *)(v2 + 0x39ea) = a12;
    *(int32_t *)(v2 + 0x3e26) = a13;
    *(int32_t *)(v2 + 0x39ee) = a14;
    *(int32_t *)(v2 + 0x39f2) = a15;
    *(int32_t *)(v2 + 0x39f6) = a16;
    return 0;
}

// Address range: 0x804972f - 0x8049d13
int32_t func_1(void) {
    // 0x804972f
    int32_t v1; // 0x804972f
    __x86_get_pc_thunk_ax(v1);
    set_var(0, 1, -4, 0xfff6, 1, 0x5935, -1, 0xfd71, -0x2361212a, 7, 0x8a47727, 0x1c3d1073, 0, 0xa9f5600, 1, 1, (int32_t)&g1, (char)&g1, (int32_t)&g1, (int32_t)&g1, (int32_t)&g1, (int16_t)&g1, (int32_t)&g1);
    return 189;
}

// Address range: 0x8049d13 - 0x8049f73
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049d3c
    int32_t v3; // 0x8049d13
    if (v1 == (char **)2) {
        // 0x8049d3e
        int32_t v4; // 0x8049d13
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049d44
        v2 = strcmp((char *)str, (char *)(v3 + 818)) == 0;
    }
    // 0x8049d64
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x375a), v3 + 820, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32fa), v3 + 824, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32fe), v3 + 829, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3302), v3 + 834, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3306), v3 + 839, v2);
    transparent_crc(*(int32_t *)(v3 + 0x330a), v3 + 844, v2);
    transparent_crc(*(int32_t *)(v3 + 0x330e), v3 + 849, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3312), v3 + 854, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3316), v3 + 860, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x331a), v3 + 866, v2);
    transparent_crc(*(int32_t *)(v3 + 0x331e), v3 + 872, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3322), v3 + 878, v2);
    transparent_crc(*(int32_t *)(v3 + 0x375e), v3 + 884, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3326), v3 + 890, v2);
    transparent_crc(*(int32_t *)(v3 + 0x332a), v3 + 896, v2);
    transparent_crc(*(int32_t *)(v3 + 0x332e), v3 + 902, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x32f6), v2);
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
