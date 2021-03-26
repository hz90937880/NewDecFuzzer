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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1e4e));
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
        chars_printed = printf((char *)(v1 + 3405));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049767
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x39f0) = a1;
    *(int32_t *)(v2 + 0x39f4) = a2;
    *(int32_t *)(v2 + 0x39f8) = a3;
    *(char *)(v2 + 0x39fc) = (char)a4;
    *(int32_t *)(v2 + 0x3a00) = a5;
    *(int32_t *)(v2 + 0x3e70) = a6;
    *(char *)(v2 + 0x3a04) = (char)a7;
    *(int32_t *)(v2 + 0x3a08) = a8;
    *(int32_t *)(v2 + 0x3a0c) = a9;
    *(int16_t *)(v2 + 0x3a10) = (int16_t)a10;
    *(char *)(v2 + 0x3a12) = (char)a11;
    *(int32_t *)(v2 + 0x3a14) = a12;
    *(int32_t *)(v2 + 0x3a18) = a13;
    *(int16_t *)(v2 + 0x3a1c) = (int16_t)a14;
    *(int32_t *)(v2 + 0x3a20) = a15;
    *(int16_t *)(v2 + 0x3a24) = (int16_t)a16;
    *(int16_t *)(v2 + 0x3a26) = (int16_t)a17;
    *(int32_t *)(v2 + 0x3a28) = a18;
    *(int16_t *)(v2 + 0x3a2c) = (int16_t)a19;
    *(char *)(v2 + 0x3a2e) = (char)a20;
    return 0;
}

// Address range: 0x8049767 - 0x8049f54
int32_t func_1(void) {
    // 0x8049f4c
    int32_t v1; // 0x8049767
    __x86_get_pc_thunk_ax(v1);
    set_var(-0x597c, 18, 0x17d0b0a3, -99, 0x48f7c4fb, 0, -103, -7, 0x4014c235, -0x7009, -1, -0x489b2bed, -0x9534a47, -1, -4, -3, 1, 6, -0x2437, 253);
    return 6;
}

// Address range: 0x8049f54 - 0x804a234
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049f7d
    int32_t v3; // 0x8049f54
    if (v1 == (char **)2) {
        // 0x8049f7f
        int32_t v4; // 0x8049f54
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049f85
        v2 = strcmp((char *)str, (char *)(v3 + 941)) == 0;
    }
    // 0x8049fa5
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x30b9), v3 + 943, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30bd), v3 + 947, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30c1), v3 + 951, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30c5), v3 + 956, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30c9), v3 + 961, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3539), v3 + 966, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30cd), v3 + 971, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30d1), v3 + 977, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30d5), v3 + 983, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30d9), v3 + 989, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30db), v3 + 995, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30dd), v3 + 1001, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30e1), v3 + 1007, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30e5), v3 + 1013, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30e9), v3 + 1019, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30ed), v3 + 1025, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30ef), v3 + 1031, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30f1), v3 + 1037, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30f5), v3 + 1043, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30f7), v3 + 1049, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x30b5), v2);
    return 0;
}

// Address range: 0x804a234 - 0x804a238
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a234
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
