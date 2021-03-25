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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x238e));
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
        chars_printed = printf((char *)(v1 + 0x128d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x804977a
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804965d
    *(int32_t *)(v2 + 0x39c2) = a1;
    *(int32_t *)(v2 + 0x3e22) = a2;
    *(char *)(v2 + 0x39c6) = (char)a3;
    *(char *)(v2 + 0x39c7) = (char)a4;
    *(char *)(v2 + 0x39c8) = (char)a5;
    *(int16_t *)(v2 + 0x39ca) = (int16_t)a6;
    *(int32_t *)(v2 + 0x39ce) = a7;
    *(int32_t *)(v2 + 0x39d2) = a8;
    *(int32_t *)(v2 + 0x39d6) = a9;
    *(int32_t *)(v2 + 0x39da) = a10;
    *(int16_t *)(v2 + 0x39de) = (int16_t)a11;
    *(int16_t *)(v2 + 0x39e0) = (int16_t)a12;
    *(char *)(v2 + 0x39e2) = (char)a13;
    *(int32_t *)(v2 + 0x39e6) = a14;
    *(char *)(v2 + 0x39ea) = (char)a15;
    *(int32_t *)(v2 + 0x39ee) = a16;
    *(int32_t *)(v2 + 0x39f2) = a17;
    *(int32_t *)(v2 + 0x3e26) = a18;
    *(int32_t *)(v2 + 0x39f6) = a19;
    return 0;
}

// Address range: 0x804977a - 0x804a4ae
int32_t func_1(void) {
    // 0x804977a
    int32_t v1; // 0x804977a
    __x86_get_pc_thunk_ax(v1);
    set_var(-4, 0, 9, 0, 9, 0xfff6, 0xfff7, -6, -3, 79, 1, -10, 93, -0x9ad3cd1, -62, 0x2d377b2b, -9, 0, -0x5348709);
    return 9;
}

// Address range: 0x804a4ae - 0x804a772
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a4d7
    int32_t v3; // 0x804a4ae
    if (v1 == (char **)2) {
        // 0x804a4d9
        int32_t v4; // 0x804a4ae
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a4df
        v2 = strcmp((char *)str, (char *)(v3 + 919)) == 0;
    }
    // 0x804a4ff
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2b5f), v3 + 921, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fbf), v3 + 926, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b63), v3 + 931, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b64), v3 + 936, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b65), v3 + 941, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b67), v3 + 946, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b6b), v3 + 951, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b6f), v3 + 956, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b73), v3 + 961, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b77), v3 + 966, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b7b), v3 + 971, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b7d), v3 + 976, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b7f), v3 + 982, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b83), v3 + 988, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b87), v3 + 994, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b8b), v3 + 1000, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b8f), v3 + 1006, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fc3), v3 + 1012, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b93), v3 + 1018, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2b5b), v2);
    return 0;
}

// Address range: 0x804a772 - 0x804a776
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a772
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
