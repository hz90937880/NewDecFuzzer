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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x17fe));
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
        chars_printed = printf((char *)(v1 + 1789));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x80496ce
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804965a
    *(int16_t *)(v2 + 0x2e25) = (int16_t)a1;
    *(int32_t *)(v2 + 0x29c5) = a2;
    *(int32_t *)(v2 + 0x29c9) = a3;
    *(int32_t *)(v2 + 0x29cd) = a4;
    *(int32_t *)(v2 + 0x2e29) = a5;
    *(int32_t *)(v2 + 0x29d1) = a6;
    *(int32_t *)(v2 + 0x29d5) = a7;
    *(int32_t *)(v2 + 0x29d9) = a8;
    *(int32_t *)(v2 + 0x29dd) = a9;
    *(int32_t *)(v2 + 0x29e1) = a10;
    return 0;
}

// Address range: 0x80496ce - 0x8049a36
int32_t func_1(void) {
    // 0x80496ce
    int32_t v1; // 0x80496ce
    __x86_get_pc_thunk_ax(v1);
    set_var(0, 8, 1, 1, 0, -5, 0x7519, -10, -1, -1);
    return 1;
}

// Address range: 0x8049a36 - 0x8049be0
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049a5f
    int32_t v3; // 0x8049a36
    if (v1 == (char **)2) {
        // 0x8049a61
        int32_t v4; // 0x8049a36
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049a67
        v2 = strcmp((char *)str, (char *)(v3 + 639)) == 0;
    }
    // 0x8049a87
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2a37), v3 + 641, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25d7), v3 + 645, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25db), v3 + 649, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25df), v3 + 654, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a3b), v3 + 659, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25e3), v3 + 664, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25e7), v3 + 669, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25eb), v3 + 674, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25ef), v3 + 679, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25f3), v3 + 685, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x25d3), v2);
    return 0;
}

// Address range: 0x8049be0 - 0x8049be4
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049be0
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
