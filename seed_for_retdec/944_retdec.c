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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x162e));
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
        *(int32_t *)(v2 + 0x2bea + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x2b79 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 1325));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x80496ee
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804965d
    *(char *)(v2 + 0x29c2) = (char)a1;
    *(int16_t *)(v2 + 0x2e02) = (int16_t)a2;
    *(int16_t *)(v2 + 0x2e04) = (int16_t)a3;
    *(int16_t *)(v2 + 0x29c4) = (int16_t)a4;
    *(int32_t *)(v2 + 0x29c6) = a5;
    *(int32_t *)(v2 + 0x29ca) = a6;
    *(char *)(v2 + 0x29ce) = (char)a7;
    *(int32_t *)(v2 + 0x29d2) = a8;
    return 0;
}

// Address range: 0x80496ee - 0x804989e
int32_t func_1(void) {
    // 0x80496ee
    int32_t v1; // 0x80496ee
    __x86_get_pc_thunk_ax(v1);
    set_var(1, 0, 0, 2183, -2, 2, 251, 1);
    return -0x191cdbb;
}

// Address range: 0x804989e - 0x8049a16
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x80498c7
    int32_t v3; // 0x804989e
    if (v1 == (char **)2) {
        // 0x80498c9
        int32_t v4; // 0x804989e
        int32_t str = *(int32_t *)(v4 + 4); // 0x80498cf
        v2 = strcmp((char *)str, (char *)(v3 + 583)) == 0;
    }
    // 0x80498ef
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(char *)(v3 + 0x276f), v3 + 585, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2baf), v3 + 589, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2bb1), v3 + 594, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2771), v3 + 599, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2773), v3 + 604, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2777), v3 + 609, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x277b), v3 + 614, v2);
    transparent_crc(*(int32_t *)(v3 + 0x277f), v3 + 619, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x276b), v2);
    return 0;
}

// Address range: 0x8049a16 - 0x8049a1a
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049a16
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
