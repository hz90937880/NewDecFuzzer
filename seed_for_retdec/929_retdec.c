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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x186e));
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
        chars_printed = printf((char *)(v1 + 1901));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x8049707
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804965c
    *(int32_t *)(v2 + 0x29c3) = a1;
    *(int32_t *)(v2 + 0x29c7) = a2;
    *(int32_t *)(v2 + 0x29cb) = a3;
    *(int32_t *)(v2 + 0x29cf) = a4;
    *(int16_t *)(v2 + 0x29d3) = (int16_t)a5;
    *(int32_t *)(v2 + 0x29d7) = a6;
    *(char *)(v2 + 0x29db) = (char)a7;
    *(int16_t *)(v2 + 0x29dd) = (int16_t)a8;
    *(int32_t *)(v2 + 0x29df) = a9;
    *(int32_t *)(v2 + 0x29e3) = a10;
    *(char *)(v2 + 0x29e7) = (char)a11;
    *(int32_t *)(v2 + 0x2e23) = a12;
    *(int32_t *)(v2 + 0x29eb) = a13;
    return 0;
}

// Address range: 0x8049707 - 0x8049a44
int32_t func_1(void) {
    // 0x8049867
    int32_t v1; // 0x8049707
    __x86_get_pc_thunk_ax(v1);
    set_var(-0x13d1f30b, -0x17c388d0, 5, -28, 26, -7, -5, 0x8475, -1, 1, -9, 0, 0x5a815809);
    return 5;
}

// Address range: 0x8049a44 - 0x8049c54
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049a6d
    int32_t v3; // 0x8049a44
    if (v1 == (char **)2) {
        // 0x8049a6f
        int32_t v4; // 0x8049a44
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049a75
        v2 = strcmp((char *)str, (char *)(v3 + 737)) == 0;
    }
    // 0x8049a95
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x25c9), v3 + 739, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25cd), v3 + 743, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25d1), v3 + 747, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25d5), v3 + 751, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x25d9), v3 + 755, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25dd), v3 + 760, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x25e1), v3 + 765, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x25e3), v3 + 770, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25e5), v3 + 775, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25e9), v3 + 780, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x25ed), v3 + 785, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a29), v3 + 790, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25f1), v3 + 795, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x25c5), v2);
    return 0;
}

// Address range: 0x8049c54 - 0x8049c58
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049c54
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
