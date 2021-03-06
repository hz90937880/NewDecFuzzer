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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1dee));
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
        chars_printed = printf((char *)(v1 + 3309));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804971a
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x39f0) = a1;
    *(int32_t *)(v2 + 0x39f4) = a2;
    *(int32_t *)(v2 + 0x39f8) = a3;
    *(char *)(v2 + 0x39fc) = (char)a4;
    *(int32_t *)(v2 + 0x3a00) = a5;
    *(int32_t *)(v2 + 0x3a04) = a6;
    *(int32_t *)(v2 + 0x3a08) = a7;
    *(char *)(v2 + 0x3a0c) = (char)a8;
    *(int32_t *)(v2 + 0x3a10) = a9;
    *(int16_t *)(v2 + 0x3a14) = (int16_t)a10;
    *(char *)(v2 + 0x3a16) = (char)a11;
    *(int32_t *)(v2 + 0x3e50) = a12;
    *(int32_t *)(v2 + 0x3e54) = a13;
    *(int32_t *)(v2 + 0x3a18) = a14;
    *(int32_t *)(v2 + 0x3a1c) = a15;
    *(int16_t *)(v2 + 0x3a20) = (int16_t)a16;
    *(int32_t *)(v2 + 0x3a24) = a17;
    *(int32_t *)(v2 + 0x3a28) = a18;
    return 0;
}

// Address range: 0x804971a - 0x8049f37
int32_t func_1(void) {
    // 0x804971a
    int32_t v1; // 0x804971a
    __x86_get_pc_thunk_ax(v1);
    set_var(-0x680950ef, 0, 0x3026d8d, -1, -1, -1, 106, 77, -0x63ce, 400, 255, 0, 0, -1, -1, 0x4212, -0x136c7555, 0x69fae0d9);
    return 9;
}

// Address range: 0x8049f37 - 0x804a1d9
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049f60
    int32_t v3; // 0x8049f37
    if (v1 == (char **)2) {
        // 0x8049f62
        int32_t v4; // 0x8049f37
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049f68
        v2 = strcmp((char *)str, (char *)(v3 + 874)) == 0;
    }
    // 0x8049f88
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x30d6), v3 + 876, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30da), v3 + 880, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30de), v3 + 884, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30e2), v3 + 889, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30e6), v3 + 894, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30ea), v3 + 899, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30ee), v3 + 904, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30f2), v3 + 909, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30f6), v3 + 914, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30fa), v3 + 919, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30fc), v3 + 924, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3536), v3 + 929, v2);
    transparent_crc(*(int32_t *)(v3 + 0x353a), v3 + 934, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30fe), v3 + 939, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3102), v3 + 945, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3106), v3 + 951, v2);
    transparent_crc(*(int32_t *)(v3 + 0x310a), v3 + 957, v2);
    transparent_crc(*(int32_t *)(v3 + 0x310e), v3 + 963, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x30d2), v2);
    return 0;
}

// Address range: 0x804a1d9 - 0x804a1dd
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a1d9
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
