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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x160e));
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
        chars_printed = printf((char *)(v1 + 1293));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049683
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962c
    *(int32_t *)(v2 + 0x29f3) = a1;
    *(int32_t *)(v2 + 0x29f7) = a2;
    *(int32_t *)(v2 + 0x29fb) = a3;
    *(int32_t *)(v2 + 0x29ff) = a4;
    *(int32_t *)(v2 + 0x2a03) = a5;
    *(int32_t *)(v2 + 0x2a07) = a6;
    *(char *)(v2 + 0x2a0b) = (char)a7;
    return 0;
}

// Address range: 0x8049683 - 0x804989e
int32_t func_1(void) {
    // 0x8049683
    int32_t v1; // 0x8049683
    __x86_get_pc_thunk_ax(v1);
    set_var(-8, 3118, 0x3339, 0x742cc323, -0x20408c14, -0x7a051ee5, 8);
    return 1;
}

// Address range: 0x804989e - 0x80499f2
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x80498c7
    int32_t v3; // 0x804989e
    if (v1 == (char **)2) {
        // 0x80498c9
        int32_t v4; // 0x804989e
        int32_t str = *(int32_t *)(v4 + 4); // 0x80498cf
        v2 = strcmp((char *)str, (char *)(v3 + 547)) == 0;
    }
    // 0x80498ef
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x276f), v3 + 549, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2773), v3 + 554, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2777), v3 + 559, v2);
    transparent_crc(*(int32_t *)(v3 + 0x277b), v3 + 564, v2);
    transparent_crc(*(int32_t *)(v3 + 0x277f), v3 + 569, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2783), v3 + 574, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2787), v3 + 579, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x276b), v2);
    return 0;
}

// Address range: 0x80499f2 - 0x80499f6
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x80499f2
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
