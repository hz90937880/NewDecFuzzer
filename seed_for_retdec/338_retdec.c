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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1ede));
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
        chars_printed = printf((char *)(v1 + 3549));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80497bd
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x39f0) = a1;
    *(int32_t *)(v5 + 0x3e70) = a2;
    *(int32_t *)(v5 + 0x39f4) = a3;
    *(int32_t *)(v5 + 0x39f8) = a4;
    *(int32_t *)(v5 + 0x39fc) = a5;
    *(int16_t *)(v5 + 0x3e74) = (int16_t)a6;
    *(int32_t *)(v5 + 0x3a00) = a7;
    *(int16_t *)(v5 + 0x3a04) = (int16_t)a8;
    *(int32_t *)(v5 + 0x3a08) = a9;
    *(int32_t *)(v5 + 0x3a0c) = a10;
    *(int32_t *)(v5 + 0x3a10) = a11;
    *(int16_t *)(v5 + 0x3a14) = (int16_t)a12;
    *(int16_t *)(v5 + 0x3a16) = (int16_t)a13;
    *(int16_t *)(v5 + 0x3e76) = (int16_t)a14;
    *(int32_t *)(v5 + 0x3a18) = a15;
    *(int32_t *)(v5 + 0x3a1c) = a16;
    *(int16_t *)(v5 + 0x3a20) = (int16_t)a17;
    *(int16_t *)(v5 + 0x3a22) = (int16_t)a18;
    *(int16_t *)(v5 + 0x3a24) = (int16_t)a19;
    *(int32_t *)(v5 + 0x3a28) = a20;
    *(int16_t *)(v5 + 0x3a2c) = (int16_t)a21;
    *(int32_t *)(v5 + 0x3a30) = a22;
    *(int16_t *)(v5 + 0x3a34) = (int16_t)a23;
    *(int32_t *)(v5 + 0x3a38) = a24;
    *(int16_t *)(v5 + 0x3a3c) = (int16_t)a25;
    return 0;
}

// Address range: 0x80497bd - 0x8049f51
int32_t func_1(void) {
    // 0x80497bd
    int32_t v1; // 0x80497bd
    __x86_get_pc_thunk_ax(v1);
    set_var(0x1b3c, 0, 0x2b1cecb4, 0, -0x2f9e59ae, 0, 0x6275f98a, 0x3a0d, -0x26aca0bc, 8, -0x675044e4, 0x25f4, 3, 0, -0x1ff10774, -7, -0x706a, 7, -1, 1, -0x6ef0, 8, -0x7fa3, -0x4b0cad56, 2);
    return -0x4b438e08;
}

// Address range: 0x8049f51 - 0x804a2c7
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049f7a
    int32_t v3; // 0x8049f51
    if (v1 == (char **)2) {
        // 0x8049f7c
        int32_t v4; // 0x8049f51
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049f82
        v2 = strcmp((char *)str, (char *)(v3 + 1088)) == 0;
    }
    // 0x8049fa2
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x30bc), v3 + 1090, v2);
    transparent_crc(*(int32_t *)(v3 + 0x353c), v3 + 1094, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30c0), v3 + 1098, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30c4), v3 + 1102, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30c8), v3 + 1106, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3540), v3 + 1111, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30cc), v3 + 1116, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30d0), v3 + 1121, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30d4), v3 + 1126, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30d8), v3 + 1131, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30dc), v3 + 1136, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30e0), v3 + 1141, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30e2), v3 + 1146, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3542), v3 + 1152, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30e4), v3 + 1158, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30e8), v3 + 1164, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30ec), v3 + 1170, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30ee), v3 + 1176, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30f0), v3 + 1182, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30f4), v3 + 1188, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30f8), v3 + 1194, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30fc), v3 + 1200, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3100), v3 + 1206, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3104), v3 + 1212, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3108), v3 + 1218, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x30b8), v2);
    return 0;
}

// Address range: 0x804a2c7 - 0x804a2cb
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a2c7
    return result;
}

// Address range: 0x804a2cb - 0x804a2cf
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804a2cb
    int32_t result; // 0x804a2cb
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
