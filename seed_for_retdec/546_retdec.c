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
    return __x86_get_pc_thunk_ax(v1) + 0x3ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x196e));
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
        chars_printed = printf((char *)(v1 + 2157));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804973a
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x29f0) = a1;
    *(char *)(v2 + 0x2e50) = (char)a2;
    *(char *)(v2 + 0x29f4) = (char)a3;
    *(char *)(v2 + 0x29f5) = (char)a4;
    *(int16_t *)(v2 + 0x29f6) = (int16_t)a5;
    *(int32_t *)(v2 + 0x29f8) = a6;
    *(int32_t *)(v2 + 0x29fc) = a7;
    *(int32_t *)(v2 + 0x2e54) = a8;
    *(int16_t *)(v2 + 0x2a00) = (int16_t)a9;
    *(int16_t *)(v2 + 0x2a02) = (int16_t)a10;
    *(char *)(v2 + 0x2a04) = (char)a11;
    *(int32_t *)(v2 + 0x2a08) = a12;
    *(int32_t *)(v2 + 0x2e58) = a13;
    *(int32_t *)(v2 + 0x2a10) = a14;
    *(int32_t *)(v2 + 0x2a14) = a15;
    *(char *)(v2 + 0x2e5c) = (char)a16;
    *(int32_t *)(v2 + 0x2a18) = a17;
    return 0;
}

// Address range: 0x804973a - 0x8049aaf
int32_t func_1(void) {
    // 0x804973a
    int32_t v1; // 0x804973a
    __x86_get_pc_thunk_ax(v1);
    set_var(0x3b9da4d0, 0, 1, -42, -3851, -0x5b26e0fa, 0x4448110c, 0, -0x7c5b, 1, 177, -0x3ed5aa47, 0, -2, 0x4cd17ff1, 0, -5);
    return -0x742947e4;
}

// Address range: 0x8049aaf - 0x8049d4f
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049ad8
    int32_t v3; // 0x8049aaf
    if (v1 == (char **)2) {
        // 0x8049ada
        int32_t v4; // 0x8049aaf
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049ae0
        v2 = strcmp((char *)str, (char *)(v3 + 882)) == 0;
    }
    // 0x8049b00
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x255e), v3 + 884, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29be), v3 + 888, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2562), v3 + 892, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2563), v3 + 897, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2564), v3 + 902, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2566), v3 + 907, v2);
    transparent_crc(*(int32_t *)(v3 + 0x256a), v3 + 912, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29c2), v3 + 917, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x256e), v3 + 922, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2570), v3 + 927, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2572), v3 + 932, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2576), v3 + 937, v2);
    transparent_crc(*(int32_t *)(v3 + 0x257a), v3 + 942, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29c6), v3 + 947, v2);
    transparent_crc(*(int32_t *)(v3 + 0x257e), v3 + 952, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2582), v3 + 957, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29ca), v3 + 962, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2586), v3 + 968, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x255a), v2);
    return 0;
}

// Address range: 0x8049d4f - 0x8049d53
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049d4f
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
