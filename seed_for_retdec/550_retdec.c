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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x27be));
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
        *(int32_t *)(v2 + 0x3c2a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x3bb9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 0x16bd));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804976b
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x39f0) = a1;
    *(int32_t *)(v2 + 0x39f4) = a2;
    *(char *)(v2 + 0x39f8) = (char)a3;
    *(int32_t *)(v2 + 0x39fc) = a4;
    *(int32_t *)(v2 + 0x3a00) = a5;
    *(int16_t *)(v2 + 0x3a04) = (int16_t)a6;
    *(int16_t *)(v2 + 0x3a06) = (int16_t)a7;
    *(int32_t *)(v2 + 0x3a08) = a8;
    *(int16_t *)(v2 + 0x3a0c) = (int16_t)a9;
    *(int16_t *)(v2 + 0x3a0e) = (int16_t)a10;
    *(int32_t *)(v2 + 0x3a10) = a11;
    *(int32_t *)(v2 + 0x3a14) = a12;
    *(int16_t *)(v2 + 0x3a18) = (int16_t)a13;
    *(int32_t *)(v2 + 0x3a1c) = a14;
    *(int16_t *)(v2 + 0x3a20) = (int16_t)a15;
    *(char *)(v2 + 0x3e70) = (char)a16;
    *(int32_t *)(v2 + 0x3a24) = a17;
    *(int16_t *)(v2 + 0x3a28) = (int16_t)a18;
    *(int32_t *)(v2 + 0x3a2c) = a19;
    *(int32_t *)(v2 + 0x3a30) = a20;
    return 0;
}

// Address range: 0x804976b - 0x804a8c5
int32_t func_1(void) {
    // 0x804a8bd
    int32_t v1; // 0x804976b
    __x86_get_pc_thunk_ax(v1);
    set_var(-1, -1, 252, -3, 0x548dc091, 0x484a, 0x336e, -7, 0xfffb, -1, 0x600c2219, -34, 1, 43, 0xd1c2, 0, -0x44e0a8ac, 0x12a8, 0x7aa3e77e, 0x42d67fbc);
    return 7;
}

// Address range: 0x804a8c5 - 0x804aba7
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a8ee
    int32_t v3; // 0x804a8c5
    if (v1 == (char **)2) {
        // 0x804a8f0
        int32_t v4; // 0x804a8c5
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a8f6
        v2 = strcmp((char *)str, (char *)(v3 + 940)) == 0;
    }
    // 0x804a916
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2748), v3 + 942, v2);
    transparent_crc(*(int32_t *)(v3 + 0x274c), v3 + 946, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2750), v3 + 951, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2754), v3 + 956, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2758), v3 + 961, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x275c), v3 + 967, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x275e), v3 + 973, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2760), v3 + 979, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2764), v3 + 985, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2766), v3 + 991, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2768), v3 + 997, v2);
    transparent_crc(*(int32_t *)(v3 + 0x276c), v3 + 1003, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2770), v3 + 1009, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2774), v3 + 1015, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2778), v3 + 1021, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2bc8), v3 + 1027, v2);
    transparent_crc(*(int32_t *)(v3 + 0x277c), v3 + 1033, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2780), v3 + 1039, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2784), v3 + 1045, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2788), v3 + 1051, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2744), v2);
    return 0;
}

// Address range: 0x804aba7 - 0x804abab
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804aba7
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
