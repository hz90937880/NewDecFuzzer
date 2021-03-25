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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x156e));
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
        chars_printed = printf((char *)(v1 + 1133));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049671
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962c
    *(int32_t *)(v2 + 0x29f3) = a1;
    *(int32_t *)(v2 + 0x29f7) = a2;
    *(int32_t *)(v2 + 0x29fb) = a3;
    *(char *)(v2 + 0x29ff) = (char)a4;
    *(int32_t *)(v2 + 0x2a03) = a5;
    return 0;
}

// Address range: 0x8049671 - 0x8049838
int32_t func_1(void) {
    // 0x8049813
    int32_t v1; // 0x8049671
    __x86_get_pc_thunk_ax(v1);
    set_var(0, -0x138ae95e, 0x4b7b8319, -3, -0x2e2629a0);
    return 0x4b7b8319;
}

// Address range: 0x8049838 - 0x8049952
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049861
    int32_t v3; // 0x8049838
    if (v1 == (char **)2) {
        // 0x8049863
        int32_t v4; // 0x8049838
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049869
        v2 = strcmp((char *)str, (char *)(v3 + 489)) == 0;
    }
    // 0x8049889
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x27d5), v3 + 491, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27d9), v3 + 495, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27dd), v3 + 500, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27e1), v3 + 505, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27e5), v3 + 510, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x27d1), v2);
    return 0;
}

// Address range: 0x8049952 - 0x8049956
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049952
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
