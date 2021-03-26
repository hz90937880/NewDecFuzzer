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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16);
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

// Address range: 0x8049626 - 0x8049719
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x39f0) = a1;
    *(int16_t *)(v2 + 0x39f4) = (int16_t)a2;
    *(int32_t *)(v2 + 0x39f8) = a3;
    *(char *)(v2 + 0x39fc) = (char)a4;
    *(int16_t *)(v2 + 0x39fe) = (int16_t)a5;
    *(int32_t *)(v2 + 0x3a00) = a6;
    *(int32_t *)(v2 + 0x3a04) = a7;
    *(int32_t *)(v2 + 0x3a08) = a8;
    *(int32_t *)(v2 + 0x3a0c) = a9;
    *(int32_t *)(v2 + 0x3a10) = a10;
    *(int32_t *)(v2 + 0x3a14) = a11;
    *(int32_t *)(v2 + 0x3a18) = a12;
    *(int16_t *)(v2 + 0x3a1c) = (int16_t)a13;
    *(int16_t *)(v2 + 0x3e50) = (int16_t)a14;
    *(int16_t *)(v2 + 0x3a1e) = (int16_t)a15;
    *(int32_t *)(v2 + 0x3a20) = a16;
    return 0;
}

// Address range: 0x8049719 - 0x8049e12
int32_t func_1(void) {
    // 0x8049719
    int32_t v1; // 0x8049719
    __x86_get_pc_thunk_ax(v1);
    set_var(0x112567c8, 0x2a3b, -10, 1, 0x4e78, -0x6bb8, -0x624ddec6, 1, -0x68099733, 0x385637ea, 1, 8, 0x1c9d, 0xffff, 4, -0x2cc1801);
    return 181;
}

// Address range: 0x8049e12 - 0x804a07a
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049e3b
    int32_t v3; // 0x8049e12
    if (v1 == (char **)2) {
        // 0x8049e3d
        int32_t v4; // 0x8049e12
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049e43
        v2 = strcmp((char *)str, (char *)(v3 + 815)) == 0;
    }
    // 0x8049e63
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x31fb), v3 + 817, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31ff), v3 + 822, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3203), v3 + 827, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3207), v3 + 832, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3209), v3 + 837, v2);
    transparent_crc(*(int32_t *)(v3 + 0x320b), v3 + 842, v2);
    transparent_crc(*(int32_t *)(v3 + 0x320f), v3 + 847, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3213), v3 + 852, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3217), v3 + 857, v2);
    transparent_crc(*(int32_t *)(v3 + 0x321b), v3 + 862, v2);
    transparent_crc(*(int32_t *)(v3 + 0x321f), v3 + 867, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3223), v3 + 872, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3227), v3 + 877, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x365b), v3 + 882, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3229), v3 + 888, v2);
    transparent_crc(*(int32_t *)(v3 + 0x322b), v3 + 894, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x31f7), v2);
    return 0;
}

// Address range: 0x804a07a - 0x804a07e
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a07a
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
