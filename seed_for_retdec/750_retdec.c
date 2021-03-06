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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24);
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
    return __x86_get_pc_thunk_ax(v1) + 0x5ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x2cde));
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
        *(int32_t *)(v2 + 0x4c0a + 4 * i) = v5;
    }
    // 0x80494d8
    return v2 + 0x4b8a;
}

// Address range: 0x80494db - 0x8049522
int32_t crc32_byte(int32_t a1) {
    // 0x80494db
    int32_t v1; // 0x80494db
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x80494e2
    int32_t * v3 = (int32_t *)(v2 + 0x4b39); // 0x80494f2
    uint32_t v4 = *v3; // 0x80494f2
    *v3 = *(int32_t *)(v2 + 0x4b99 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
    return v2 + 0x4b19;
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
        chars_printed = printf((char *)(v1 + 0x1bdd));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80497db
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x49f0) = a1;
    *(int32_t *)(v5 + 0x49f4) = a2;
    *(int32_t *)(v5 + 0x49f8) = a3;
    *(int32_t *)(v5 + 0x4e50) = a4;
    *(int16_t *)(v5 + 0x49fc) = (int16_t)a5;
    *(int16_t *)(v5 + 0x4e54) = (int16_t)a6;
    *(int32_t *)(v5 + 0x4a00) = a7;
    *(int32_t *)(v5 + 0x4a04) = a8;
    *(int32_t *)(v5 + 0x4e58) = a9;
    *(int32_t *)(v5 + 0x4a08) = a10;
    *(int16_t *)(v5 + 0x4a0c) = (int16_t)a11;
    *(char *)(v5 + 0x4a0e) = (char)a12;
    *(int16_t *)(v5 + 0x4a10) = (int16_t)a13;
    *(char *)(v5 + 0x4a12) = (char)a14;
    *(char *)(v5 + 0x4a13) = (char)a15;
    *(int16_t *)(v5 + 0x4a14) = (int16_t)a16;
    *(int32_t *)(v5 + 0x4a18) = a17;
    *(char *)(v5 + 0x4a1c) = (char)a18;
    *(char *)(v5 + 0x4a1d) = (char)a19;
    *(char *)(v5 + 0x4a1e) = (char)a20;
    *(int32_t *)(v5 + 0x4a20) = a21;
    *(int16_t *)(v5 + 0x4a24) = (int16_t)a22;
    *(char *)(v5 + 0x4a26) = (char)a23;
    *(char *)(v5 + 0x4a27) = (char)a24;
    return 0;
}

// Address range: 0x80497db - 0x804ad5b
int32_t func_1(void) {
    // 0x8049f95
    int32_t v1; // 0x80497db
    __x86_get_pc_thunk_ax(v1);
    set_var(0, -0x1405, -602, -14, 0xbe2f, 0, 0, 0xff22b77, 0, 1, -1, 8, 0xb368, -103, 255, 2, -0x72b684c6, -80, 2, 1, 50, 0xfffc, 51, 255);
    return -93;
}

// Address range: 0x804ad5b - 0x804b0c3
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804ad84
    int32_t v3; // 0x804ad5b
    if (v1 == (char **)2) {
        // 0x804ad86
        int32_t v4; // 0x804ad5b
        int32_t str = *(int32_t *)(v4 + 4); // 0x804ad8c
        v2 = strcmp((char *)str, (char *)(v3 + 1078)) == 0;
    }
    // 0x804adac
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x32b2), v3 + 1080, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32b6), v3 + 1084, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32ba), v3 + 1089, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3712), v3 + 1094, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32be), v3 + 1099, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3716), v3 + 1104, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32c2), v3 + 1110, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32c6), v3 + 1116, v2);
    transparent_crc(*(int32_t *)(v3 + 0x371a), v3 + 1122, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32ca), v3 + 1128, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32ce), v3 + 1134, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32d0), v3 + 1140, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32d2), v3 + 1146, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32d4), v3 + 1152, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32d5), v3 + 1158, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32d6), v3 + 1164, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32da), v3 + 1170, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32de), v3 + 1176, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32df), v3 + 1182, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32e0), v3 + 1188, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32e2), v3 + 1194, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32e6), v3 + 1200, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32e8), v3 + 1206, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32e9), v3 + 1212, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x32ae), v2);
    return 0;
}

// Address range: 0x804b0c3 - 0x804b0c7
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b0c3
    return result;
}

// Address range: 0x804b0c7 - 0x804b0cb
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804b0c7
    int32_t result; // 0x804b0c7
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
