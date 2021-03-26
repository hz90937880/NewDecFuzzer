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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x218e));
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
        chars_printed = printf((char *)(v1 + 0x108d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049760
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x39f0) = a1;
    *(int32_t *)(v2 + 0x39f4) = a2;
    *(int32_t *)(v2 + 0x39f8) = a3;
    *(int16_t *)(v2 + 0x39fc) = (int16_t)a4;
    *(int16_t *)(v2 + 0x39fe) = (int16_t)a5;
    *(int32_t *)(v2 + 0x3a00) = a6;
    *(int32_t *)(v2 + 0x3a04) = a7;
    *(int32_t *)(v2 + 0x3e50) = a8;
    *(char *)(v2 + 0x3a08) = (char)a9;
    *(char *)(v2 + 0x3a09) = (char)a10;
    *(char *)(v2 + 0x3a0a) = (char)a11;
    *(int16_t *)(v2 + 0x3a0c) = (int16_t)a12;
    *(int32_t *)(v2 + 0x3a10) = a13;
    *(int16_t *)(v2 + 0x3a14) = (int16_t)a14;
    *(int16_t *)(v2 + 0x3a16) = (int16_t)a15;
    *(int32_t *)(v2 + 0x3a18) = a16;
    *(int32_t *)(v2 + 0x3a1c) = a17;
    *(int32_t *)(v2 + 0x3a20) = a18;
    *(int16_t *)(v2 + 0x3a24) = (int16_t)a19;
    return 0;
}

// Address range: 0x8049760 - 0x804a2ad
int32_t func_1(void) {
    // 0x8049760
    int32_t v1; // 0x8049760
    __x86_get_pc_thunk_ax(v1);
    set_var(-4, 0, -10, 0x5bb6, 1, 1, 9, 0, -73, -112, -81, 0x77c1, 0x34c1, 4, 0x466f, 0x4962a275, -0x3815b852, -1, 0xb9e5);
    return 0xb9e5;
}

// Address range: 0x804a2ad - 0x804a575
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a2d6
    int32_t v3; // 0x804a2ad
    if (v1 == (char **)2) {
        // 0x804a2d8
        int32_t v4; // 0x804a2ad
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a2de
        v2 = strcmp((char *)str, (char *)(v3 + 916)) == 0;
    }
    // 0x804a2fe
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2d60), v3 + 918, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d64), v3 + 922, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d68), v3 + 927, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d6c), v3 + 932, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d6e), v3 + 937, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d70), v3 + 942, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d74), v3 + 947, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31c0), v3 + 952, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d78), v3 + 957, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d79), v3 + 962, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d7a), v3 + 968, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d7c), v3 + 974, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d80), v3 + 980, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d84), v3 + 986, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d86), v3 + 992, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d88), v3 + 998, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d8c), v3 + 1004, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d90), v3 + 1010, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d94), v3 + 1016, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2d5c), v2);
    return 0;
}

// Address range: 0x804a575 - 0x804a579
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a575
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
