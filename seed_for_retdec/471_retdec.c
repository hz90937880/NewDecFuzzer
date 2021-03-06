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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x275e));
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
        chars_printed = printf((char *)(v1 + 0x165d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049796
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x39f0) = a1;
    *(int32_t *)(v2 + 0x39f4) = a2;
    *(int32_t *)(v2 + 0x39f8) = a3;
    *(char *)(v2 + 0x3e70) = (char)a4;
    *(int16_t *)(v2 + 0x3e72) = (int16_t)a5;
    *(int16_t *)(v2 + 0x39fc) = (int16_t)a6;
    *(int32_t *)(v2 + 0x3a00) = a7;
    *(int32_t *)(v2 + 0x3a04) = a8;
    *(int32_t *)(v2 + 0x3a08) = a9;
    *(int32_t *)(v2 + 0x3a0c) = a10;
    *(int32_t *)(v2 + 0x3a10) = a11;
    *(int32_t *)(v2 + 0x3e74) = a12;
    *(int16_t *)(v2 + 0x3a14) = (int16_t)a13;
    *(int16_t *)(v2 + 0x3a16) = (int16_t)a14;
    *(int16_t *)(v2 + 0x3e78) = (int16_t)a15;
    *(int32_t *)(v2 + 0x3a18) = a16;
    *(int16_t *)(v2 + 0x3a1c) = (int16_t)a17;
    *(int32_t *)(v2 + 0x3a20) = a18;
    *(char *)(v2 + 0x3a24) = (char)a19;
    *(int16_t *)(v2 + 0x3a26) = (int16_t)a20;
    *(int16_t *)(v2 + 0x3a28) = (int16_t)a21;
    *(int32_t *)(v2 + 0x3a2c) = a22;
    *(int32_t *)(v2 + 0x3a30) = a23;
    return 0;
}

// Address range: 0x8049796 - 0x804a80c
int32_t func_1(void) {
    // 0x804a804
    int32_t v1; // 0x8049796
    __x86_get_pc_thunk_ax(v1);
    set_var(1, 8, -0x65b772af, 0, 0, 0xc7df, 1, 80, -0x3f756e9e, 114, -0x4067d601, 0, -7, -0x3bcc, 0, -1, 1, 0x1a89dace, 187, 5, 0x19a1, -3, 0x6d88ae04);
    return 0x3758;
}

// Address range: 0x804a80c - 0x804ab42
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a835
    int32_t v3; // 0x804a80c
    if (v1 == (char **)2) {
        // 0x804a837
        int32_t v4; // 0x804a80c
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a83d
        v2 = strcmp((char *)str, (char *)(v3 + 1029)) == 0;
    }
    // 0x804a85d
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2801), v3 + 1031, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2805), v3 + 1035, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2809), v3 + 1040, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2c81), v3 + 1045, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2c83), v3 + 1050, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x280d), v3 + 1055, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2811), v3 + 1060, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2815), v3 + 1065, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2819), v3 + 1071, v2);
    transparent_crc(*(int32_t *)(v3 + 0x281d), v3 + 1077, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2821), v3 + 1083, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2c85), v3 + 1089, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2825), v3 + 1095, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2827), v3 + 1101, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2c89), v3 + 1107, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2829), v3 + 1113, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x282d), v3 + 1119, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2831), v3 + 1125, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2835), v3 + 1131, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2837), v3 + 1137, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2839), v3 + 1143, v2);
    transparent_crc(*(int32_t *)(v3 + 0x283d), v3 + 1149, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2841), v3 + 1155, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x27fd), v2);
    return 0;
}

// Address range: 0x804ab42 - 0x804ab46
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804ab42
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
