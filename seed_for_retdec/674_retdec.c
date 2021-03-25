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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x2b7e));
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
        *(int32_t *)(v2 + 0x4c4a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x4bd9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 0x1a7d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80498f5
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x49ed) = a1;
    *(int16_t *)(v5 + 0x49f1) = (int16_t)a2;
    *(char *)(v5 + 0x49f3) = (char)a3;
    *(int32_t *)(v5 + 0x49f5) = a4;
    *(int16_t *)(v5 + 0x49f9) = (int16_t)a5;
    *(int16_t *)(v5 + 0x4e8d) = (int16_t)a6;
    *(char *)(v5 + 0x49fb) = (char)a7;
    *(int16_t *)(v5 + 0x49fd) = (int16_t)a8;
    *(int32_t *)(v5 + 0x4a01) = a9;
    *(int16_t *)(v5 + 0x4a05) = (int16_t)a10;
    *(char *)(v5 + 0x4a07) = (char)a11;
    *(int32_t *)(v5 + 0x4a09) = a12;
    *(char *)(v5 + 0x4a0d) = (char)a13;
    *(int32_t *)(v5 + 0x4a11) = a14;
    *(int32_t *)(v5 + 0x4a15) = a15;
    *(int32_t *)(v5 + 0x4a19) = a16;
    *(char *)(v5 + 0x4e8f) = (char)a17;
    *(int16_t *)(v5 + 0x4a1d) = (int16_t)a18;
    *(int32_t *)(v5 + 0x4a21) = a19;
    *(int32_t *)(v5 + 0x4a25) = a20;
    *(int32_t *)(v5 + 0x4a29) = a21;
    *(int16_t *)(v5 + 0x4a2d) = (int16_t)a22;
    *(int32_t *)(v5 + 0x4a31) = a23;
    *(int16_t *)(v5 + 0x4a35) = (int16_t)a24;
    *(int16_t *)(v5 + 0x4a37) = (int16_t)a25;
    *(int16_t *)(v5 + 0x4a39) = (int16_t)a26;
    *(int32_t *)(v5 + 0x4a3d) = a27;
    *(char *)(v5 + 0x4a41) = (char)a28;
    *(int32_t *)(v5 + 0x4a45) = a29;
    *(int32_t *)(v5 + 0x4a49) = a30;
    *(int32_t *)(v5 + 0x4a4d) = a31;
    *(char *)(v5 + 0x4a51) = (char)a32;
    *(int32_t *)(v5 + 0x4a55) = a33;
    *(int32_t *)(v5 + 0x4a59) = a34;
    *(int16_t *)(v5 + 0x4a5d) = (int16_t)a35;
    *(int16_t *)(v5 + 0x4e91) = (int16_t)a36;
    *(char *)(v5 + 0x4a5f) = (char)a37;
    return 0;
}

// Address range: 0x80498f5 - 0x804aa7f
int32_t func_1(void) {
    // 0x80498f5
    int32_t v1; // 0x80498f5
    __x86_get_pc_thunk_ax(v1);
    set_var(0, 1847, 1, 1, 7, 0, 6, 0x13c5, 41, 2, 62, -7, 161, 4, -0x8d36880, 4, 0, 3, 1, -3, 0xf72682e, -0x2550, -0x3ed679c7, 0x7913, 0x5f5f, -5, 0x73475511, -66, 0x2be114a6, 9, -0x7c72, 103, 0x76813399, -4, 0xfffb, 0, 251);
    return -66;
}

// Address range: 0x804aa7f - 0x804af63
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804aaa8
    int32_t v3; // 0x804aa7f
    if (v1 == (char **)2) {
        // 0x804aaaa
        int32_t v4; // 0x804aa7f
        int32_t str = *(int32_t *)(v4 + 4); // 0x804aab0
        v2 = strcmp((char *)str, (char *)(v3 + 1458)) == 0;
    }
    // 0x804aad0
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x358e), v3 + 1460, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3592), v3 + 1464, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3594), v3 + 1469, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3596), v3 + 1474, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x359a), v3 + 1479, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3a2e), v3 + 1484, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x359c), v3 + 1489, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x359e), v3 + 1494, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35a2), v3 + 1499, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x35a6), v3 + 1504, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x35a8), v3 + 1510, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35aa), v3 + 1516, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x35ae), v3 + 1522, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35b2), v3 + 1528, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35b6), v3 + 1534, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35ba), v3 + 1540, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3a30), v3 + 1546, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x35be), v3 + 1552, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35c2), v3 + 1558, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35c6), v3 + 1564, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35ca), v3 + 1570, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x35ce), v3 + 1576, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35d2), v3 + 1582, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x35d6), v3 + 1588, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x35d8), v3 + 1594, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x35da), v3 + 1600, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35de), v3 + 1606, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x35e2), v3 + 1612, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35e6), v3 + 1618, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35ea), v3 + 1624, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35ee), v3 + 1630, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x35f2), v3 + 1636, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35f6), v3 + 1642, v2);
    transparent_crc(*(int32_t *)(v3 + 0x35fa), v3 + 1648, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x35fe), v3 + 1654, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3a32), v3 + 1660, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3600), v3 + 1666, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x358a), v2);
    return 0;
}

// Address range: 0x804af63 - 0x804af67
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804af63
    return result;
}

// Address range: 0x804af67 - 0x804af6b
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804af67
    int32_t result; // 0x804af67
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12