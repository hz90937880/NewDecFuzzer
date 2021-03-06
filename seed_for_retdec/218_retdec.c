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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x18ce));
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
        chars_printed = printf((char *)(v1 + 1997));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049747
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x29f0) = a1;
    *(int32_t *)(v2 + 0x29f4) = a2;
    *(char *)(v2 + 0x29f8) = (char)a3;
    *(int32_t *)(v2 + 0x29fc) = a4;
    *(char *)(v2 + 0x2a00) = (char)a5;
    *(int32_t *)(v2 + 0x2a04) = a6;
    *(int32_t *)(v2 + 0x2a08) = a7;
    *(int16_t *)(v2 + 0x2a0c) = (int16_t)a8;
    *(int32_t *)(v2 + 0x2a10) = a9;
    *(int32_t *)(v2 + 0x2e50) = a10;
    *(int16_t *)(v2 + 0x2a14) = (int16_t)a11;
    *(int32_t *)(v2 + 0x2a18) = a12;
    *(int32_t *)(v2 + 0x2a1c) = a13;
    *(int16_t *)(v2 + 0x2a20) = (int16_t)a14;
    *(int16_t *)(v2 + 0x2a22) = (int16_t)a15;
    *(int16_t *)(v2 + 0x2a24) = (int16_t)a16;
    *(char *)(v2 + 0x2a26) = (char)a17;
    *(int32_t *)(v2 + 0x2a28) = a18;
    return 0;
}

// Address range: 0x8049747 - 0x8049a1c
int32_t func_1(void) {
    // 0x80499ad
    int32_t v1; // 0x8049747
    __x86_get_pc_thunk_ax(v1);
    set_var(-0x57ca742c, 0x2f88, 0, 1, 83, -0x7c8210a1, -5, 0x51ed, 7, 0, -5, -2, 4, 7, 0x44eb, 0x9ac4, -1, -0x645b6f99);
    return -3;
}

// Address range: 0x8049a1c - 0x8049cbc
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049a45
    int32_t v3; // 0x8049a1c
    if (v1 == (char **)2) {
        // 0x8049a47
        int32_t v4; // 0x8049a1c
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049a4d
        v2 = strcmp((char *)str, (char *)(v3 + 869)) == 0;
    }
    // 0x8049a6d
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x25f1), v3 + 871, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25f5), v3 + 876, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x25f9), v3 + 881, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25fd), v3 + 886, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2601), v3 + 891, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2605), v3 + 896, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2609), v3 + 901, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x260d), v3 + 906, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2611), v3 + 911, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a51), v3 + 916, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2615), v3 + 922, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2619), v3 + 928, v2);
    transparent_crc(*(int32_t *)(v3 + 0x261d), v3 + 934, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2621), v3 + 940, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2623), v3 + 946, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2625), v3 + 952, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2627), v3 + 958, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2629), v3 + 964, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x25ed), v2);
    return 0;
}

// Address range: 0x8049cbc - 0x8049cc0
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049cbc
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
