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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x180e));
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
        chars_printed = printf((char *)(v1 + 1805));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80496e8
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x29f0) = a1;
    *(char *)(v2 + 0x29f4) = (char)a2;
    *(int16_t *)(v2 + 0x29f6) = (int16_t)a3;
    *(int16_t *)(v2 + 0x29f8) = (int16_t)a4;
    *(int16_t *)(v2 + 0x29fa) = (int16_t)a5;
    *(int32_t *)(v2 + 0x29fc) = a6;
    *(int32_t *)(v2 + 0x2a00) = a7;
    *(char *)(v2 + 0x2a04) = (char)a8;
    *(char *)(v2 + 0x2a05) = (char)a9;
    *(int32_t *)(v2 + 0x2a08) = a10;
    *(int32_t *)(v2 + 0x2a0c) = a11;
    return 0;
}

// Address range: 0x80496e8 - 0x8049a1b
int32_t func_1(void) {
    // 0x80496e8
    int32_t v1; // 0x80496e8
    __x86_get_pc_thunk_ax(v1);
    set_var(0, 30, -1, 1, 280, 1, 0x59c2d16c, -84, 254, 0x59c2d16c, 1);
    return 30;
}

// Address range: 0x8049a1b - 0x8049bef
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049a44
    int32_t v3; // 0x8049a1b
    if (v1 == (char **)2) {
        // 0x8049a46
        int32_t v4; // 0x8049a1b
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049a4c
        v2 = strcmp((char *)str, (char *)(v3 + 678)) == 0;
    }
    // 0x8049a6c
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x25f2), v3 + 680, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x25f6), v3 + 684, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x25f8), v3 + 689, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x25fa), v3 + 694, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x25fc), v3 + 699, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25fe), v3 + 704, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2602), v3 + 709, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2606), v3 + 714, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2607), v3 + 719, v2);
    transparent_crc(*(int32_t *)(v3 + 0x260a), v3 + 724, v2);
    transparent_crc(*(int32_t *)(v3 + 0x260e), v3 + 729, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x25ee), v2);
    return 0;
}

// Address range: 0x8049bef - 0x8049bf3
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049bef
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
