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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1dce));
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
        *(int32_t *)(v2 + 0x3c2a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x3bb9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 3277));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804973c
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x39f0) = a1;
    *(int32_t *)(v2 + 0x39f4) = a2;
    *(int32_t *)(v2 + 0x39f8) = a3;
    *(int16_t *)(v2 + 0x39fc) = (int16_t)a4;
    *(char *)(v2 + 0x39fe) = (char)a5;
    *(int32_t *)(v2 + 0x3a00) = a6;
    *(int16_t *)(v2 + 0x3a04) = (int16_t)a7;
    *(int32_t *)(v2 + 0x3a08) = a8;
    *(char *)(v2 + 0x3a0c) = (char)a9;
    *(int32_t *)(v2 + 0x3a10) = a10;
    *(int32_t *)(v2 + 0x3a14) = a11;
    *(char *)(v2 + 0x3a18) = (char)a12;
    *(int32_t *)(v2 + 0x3a1c) = a13;
    *(char *)(v2 + 0x3a20) = (char)a14;
    *(int32_t *)(v2 + 0x3e70) = a15;
    *(int32_t *)(v2 + 0x3a24) = a16;
    *(int32_t *)(v2 + 0x3a28) = a17;
    *(char *)(v2 + 0x3a2c) = (char)a18;
    *(int32_t *)(v2 + 0x3a30) = a19;
    return 0;
}

// Address range: 0x804973c - 0x8049ef5
int32_t func_1(void) {
    // 0x8049e85
    int32_t v1; // 0x804973c
    __x86_get_pc_thunk_ax(v1);
    set_var(1, 0x46b80fc1, 123, 0x87fc, 252, 1, -9, 0x6b242cff, -109, 3, -0x680696d3, 229, -9, -106, 0, -10, -9, -2, 2);
    return -1;
}

// Address range: 0x8049ef5 - 0x804a1b7
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049f1e
    int32_t v3; // 0x8049ef5
    if (v1 == (char **)2) {
        // 0x8049f20
        int32_t v4; // 0x8049ef5
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049f26
        v2 = strcmp((char *)str, (char *)(v3 + 908)) == 0;
    }
    // 0x8049f46
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x3118), v3 + 910, v2);
    transparent_crc(*(int32_t *)(v3 + 0x311c), v3 + 914, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3120), v3 + 918, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3124), v3 + 922, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3126), v3 + 927, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3128), v3 + 932, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x312c), v3 + 937, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3130), v3 + 942, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3134), v3 + 947, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3138), v3 + 953, v2);
    transparent_crc(*(int32_t *)(v3 + 0x313c), v3 + 959, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3140), v3 + 965, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3144), v3 + 971, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3148), v3 + 977, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3598), v3 + 983, v2);
    transparent_crc(*(int32_t *)(v3 + 0x314c), v3 + 989, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3150), v3 + 995, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3154), v3 + 1001, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3158), v3 + 1007, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x3114), v2);
    return 0;
}

// Address range: 0x804a1b7 - 0x804a1bb
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a1b7
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
