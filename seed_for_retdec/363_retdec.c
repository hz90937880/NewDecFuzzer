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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int16_t a12, int16_t a13);
int32_t transparent_crc(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g1;

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

// Address range: 0x8049626 - 0x80496c0
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int16_t a12, int16_t a13) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962d
    *(int32_t *)(v2 + 0x29f2) = a1;
    *(int16_t *)(v2 + 0x29f6) = (int16_t)a2;
    *(int32_t *)(v2 + 0x29fa) = a3;
    *(int32_t *)(v2 + 0x29fe) = a4;
    *(int32_t *)(v2 + 0x2a02) = a5;
    *(int32_t *)(v2 + 0x2a06) = a6;
    *(int32_t *)(v2 + 0x2a0a) = a7;
    *(int16_t *)(v2 + 0x2e52) = (int16_t)a8;
    *(int32_t *)(v2 + 0x2a0e) = a9;
    *(int32_t *)(v2 + 0x2a12) = a10;
    *(int16_t *)(v2 + 0x2a16) = (int16_t)a11;
    return 0;
}

// Address range: 0x80496c0 - 0x8049a1e
int32_t func_1(void) {
    // 0x80496c0
    int32_t v1; // 0x80496c0
    __x86_get_pc_thunk_ax(v1);
    set_var(0, 0x8dc4, 0, 0, 9, 1, 0x48bb, 0, -1, 9, 0xdae5, (int16_t)&g1, (int16_t)&g1);
    return 9;
}

// Address range: 0x8049a1e - 0x8049bea
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049a47
    int32_t v3; // 0x8049a1e
    if (v1 == (char **)2) {
        // 0x8049a49
        int32_t v4; // 0x8049a1e
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049a4f
        v2 = strcmp((char *)str, (char *)(v3 + 659)) == 0;
    }
    // 0x8049a6f
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x25ef), v3 + 661, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x25f3), v3 + 665, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25f7), v3 + 670, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25fb), v3 + 675, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25ff), v3 + 680, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2603), v3 + 685, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2607), v3 + 690, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2a4f), v3 + 695, v2);
    transparent_crc(*(int32_t *)(v3 + 0x260b), v3 + 700, v2);
    transparent_crc(*(int32_t *)(v3 + 0x260f), v3 + 705, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2613), v3 + 710, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x25eb), v2);
    return 0;
}

// Address range: 0x8049bea - 0x8049bee
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049bea
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
