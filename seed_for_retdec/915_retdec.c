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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x17ee));
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
        chars_printed = printf((char *)(v1 + 1773));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x804970b
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804965d
    *(int16_t *)(v2 + 0x29c2) = (int16_t)a1;
    *(int32_t *)(v2 + 0x29c6) = a2;
    *(int32_t *)(v2 + 0x29ca) = a3;
    *(int16_t *)(v2 + 0x29ce) = (int16_t)a4;
    *(int16_t *)(v2 + 0x29d0) = (int16_t)a5;
    *(int32_t *)(v2 + 0x29d2) = a6;
    *(char *)(v2 + 0x29d6) = (char)a7;
    *(int32_t *)(v2 + 0x29da) = a8;
    *(int32_t *)(v2 + 0x29de) = a9;
    *(int16_t *)(v2 + 0x29e2) = (int16_t)a10;
    *(int32_t *)(v2 + 0x29e6) = a11;
    *(int32_t *)(v2 + 0x29ea) = a12;
    return 0;
}

// Address range: 0x804970b - 0x80499eb
int32_t func_1(void) {
    // 0x804970b
    int32_t v1; // 0x804970b
    __x86_get_pc_thunk_ax(v1);
    set_var(0xfff5, -0x5d6b, -0x400192d, 0x55f1, -0x698a, 0x44184eb3, 31, -1, 0xc37c508, -1, 0x5647c9b6, 1);
    return -8;
}

// Address range: 0x80499eb - 0x8049bd3
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049a14
    int32_t v3; // 0x80499eb
    if (v1 == (char **)2) {
        // 0x8049a16
        int32_t v4; // 0x80499eb
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049a1c
        v2 = strcmp((char *)str, (char *)(v3 + 698)) == 0;
    }
    // 0x8049a3c
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2622), v3 + 700, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2626), v3 + 704, v2);
    transparent_crc(*(int32_t *)(v3 + 0x262a), v3 + 708, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x262e), v3 + 713, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2630), v3 + 718, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2632), v3 + 723, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2636), v3 + 728, v2);
    transparent_crc(*(int32_t *)(v3 + 0x263a), v3 + 733, v2);
    transparent_crc(*(int32_t *)(v3 + 0x263e), v3 + 738, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2642), v3 + 743, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2646), v3 + 748, v2);
    transparent_crc(*(int32_t *)(v3 + 0x264a), v3 + 753, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x261e), v2);
    return 0;
}

// Address range: 0x8049bd3 - 0x8049bd7
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049bd3
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
