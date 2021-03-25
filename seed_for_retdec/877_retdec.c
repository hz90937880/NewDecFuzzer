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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x165e));
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
        chars_printed = printf((char *)(v1 + 1373));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x80496aa
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804965a
    *(int32_t *)(v2 + 0x29c5) = a1;
    *(int32_t *)(v2 + 0x29c9) = a2;
    *(int16_t *)(v2 + 0x29cd) = (int16_t)a3;
    *(int16_t *)(v2 + 0x29cf) = (int16_t)a4;
    *(int32_t *)(v2 + 0x29d1) = a5;
    return 0;
}

// Address range: 0x80496aa - 0x8049929
int32_t func_1(void) {
    // 0x80496aa
    int32_t v1; // 0x80496aa
    __x86_get_pc_thunk_ax(v1);
    set_var(-8, 7, 0xffe9, 14, -1);
    return 14;
}

// Address range: 0x8049929 - 0x8049a47
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049952
    int32_t v3; // 0x8049929
    if (v1 == (char **)2) {
        // 0x8049954
        int32_t v4; // 0x8049929
        int32_t str = *(int32_t *)(v4 + 4); // 0x804995a
        v2 = strcmp((char *)str, (char *)(v3 + 492)) == 0;
    }
    // 0x804997a
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x26e4), v3 + 494, v2);
    transparent_crc(*(int32_t *)(v3 + 0x26e8), v3 + 498, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x26ec), v3 + 502, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x26ee), v3 + 507, v2);
    transparent_crc(*(int32_t *)(v3 + 0x26f0), v3 + 512, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x26e0), v2);
    return 0;
}

// Address range: 0x8049a47 - 0x8049a4b
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049a47
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11