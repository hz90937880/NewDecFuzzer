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
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t crc32_8bytes(uint32_t a1);
int32_t crc32_byte(int32_t a1);
int32_t crc32_gentab(void);
int32_t func_1(void);
int32_t platform_main_begin(void);
int32_t platform_main_end(int32_t a1, int32_t a2);
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x20be));
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
        chars_printed = printf((char *)(v1 + 4029));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049796
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x39f0) = a1;
    *(int16_t *)(v5 + 0x3e70) = (int16_t)a2;
    *(char *)(v5 + 0x39f4) = (char)a3;
    *(int32_t *)(v5 + 0x39f8) = a4;
    *(int16_t *)(v5 + 0x39fc) = (int16_t)a5;
    *(int32_t *)(v5 + 0x3a00) = a6;
    *(int32_t *)(v5 + 0x3a04) = a7;
    *(int32_t *)(v5 + 0x3e74) = a8;
    *(char *)(v5 + 0x3a08) = (char)a9;
    *(char *)(v5 + 0x3a09) = (char)a10;
    *(char *)(v5 + 0x3a0a) = (char)a11;
    *(int32_t *)(v5 + 0x3a0c) = a12;
    *(int32_t *)(v5 + 0x3a10) = a13;
    *(int32_t *)(v5 + 0x3a14) = a14;
    *(int16_t *)(v5 + 0x3a18) = (int16_t)a15;
    *(int32_t *)(v5 + 0x3a1c) = a16;
    *(char *)(v5 + 0x3a20) = (char)a17;
    *(int32_t *)(v5 + 0x3a24) = a18;
    *(int16_t *)(v5 + 0x3a28) = (int16_t)a19;
    *(int32_t *)(v5 + 0x3a2c) = a20;
    *(char *)(v5 + 0x3a30) = (char)a21;
    *(int16_t *)(v5 + 0x3a32) = (int16_t)a22;
    return 0;
}

// Address range: 0x8049796 - 0x804a17e
int32_t func_1(void) {
    // 0x8049796
    int32_t v1; // 0x8049796
    __x86_get_pc_thunk_ax(v1);
    set_var(-1, 1, 0, 0x3fe69fee, -0x6e0d, -0x6175, -0x10d70f1c, 0, 255, 80, 112, -0x28052f43, 1, 0xa6dbe89, -6, 1, 247, -0x69090fe9, -5, 0x3df3290, 78, 6);
    return -6;
}

// Address range: 0x804a17e - 0x804a49a
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a1a7
    int32_t v3; // 0x804a17e
    if (v1 == (char **)2) {
        // 0x804a1a9
        int32_t v4; // 0x804a17e
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a1af
        v2 = strcmp((char *)str, (char *)(v3 + 1011)) == 0;
    }
    // 0x804a1cf
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2e8f), v3 + 1013, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x330f), v3 + 1017, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2e93), v3 + 1022, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e97), v3 + 1027, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2e9b), v3 + 1032, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e9f), v3 + 1037, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ea3), v3 + 1042, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3313), v3 + 1047, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ea7), v3 + 1052, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ea8), v3 + 1058, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ea9), v3 + 1064, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2eab), v3 + 1070, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2eaf), v3 + 1076, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2eb3), v3 + 1082, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2eb7), v3 + 1088, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ebb), v3 + 1094, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ebf), v3 + 1100, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ec3), v3 + 1106, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2ec7), v3 + 1112, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ecb), v3 + 1118, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ecf), v3 + 1124, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2ed1), v3 + 1130, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2e8b), v2);
    return 0;
}

// Address range: 0x804a49a - 0x804a49e
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a49a
    return result;
}

// Address range: 0x804a49e - 0x804a4a2
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804a49e
    int32_t result; // 0x804a49e
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
