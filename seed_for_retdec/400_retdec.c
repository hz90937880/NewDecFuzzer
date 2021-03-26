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
    return __x86_get_pc_thunk_ax(v1) + 0x6ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x3f7e));
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
        *(int32_t *)(v2 + 0x5c4a + 4 * i) = v5;
    }
    // 0x80494d8
    return v2 + 0x5b8a;
}

// Address range: 0x80494db - 0x8049522
int32_t crc32_byte(int32_t a1) {
    // 0x80494db
    int32_t v1; // 0x80494db
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x80494e2
    int32_t * v3 = (int32_t *)(v2 + 0x5b39); // 0x80494f2
    uint32_t v4 = *v3; // 0x80494f2
    *v3 = *(int32_t *)(v2 + 0x5bd9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
    return v2 + 0x5b19;
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
        chars_printed = printf((char *)(v1 + 0x2e7d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80498d3
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x59ed) = a1;
    *(char *)(v5 + 0x59f1) = (char)a2;
    *(int16_t *)(v5 + 0x59f3) = (int16_t)a3;
    *(int32_t *)(v5 + 0x59f5) = a4;
    *(char *)(v5 + 0x59f9) = (char)a5;
    *(int32_t *)(v5 + 0x59fd) = a6;
    *(char *)(v5 + 0x5a01) = (char)a7;
    *(int16_t *)(v5 + 0x5a03) = (int16_t)a8;
    *(int32_t *)(v5 + 0x5a05) = a9;
    *(int32_t *)(v5 + 0x5a09) = a10;
    *(int32_t *)(v5 + 0x5a0d) = a11;
    *(int32_t *)(v5 + 0x5a11) = a12;
    *(int32_t *)(v5 + 0x5a15) = a13;
    *(char *)(v5 + 0x5a19) = (char)a14;
    *(int32_t *)(v5 + 0x5a1d) = a15;
    *(int32_t *)(v5 + 0x5a21) = a16;
    *(char *)(v5 + 0x5a25) = (char)a17;
    *(char *)(v5 + 0x5a26) = (char)a18;
    *(int32_t *)(v5 + 0x5a29) = a19;
    *(char *)(v5 + 0x5a2d) = (char)a20;
    *(int32_t *)(v5 + 0x5a31) = a21;
    *(char *)(v5 + 0x5a35) = (char)a22;
    *(int16_t *)(v5 + 0x5a37) = (int16_t)a23;
    *(int32_t *)(v5 + 0x5a39) = a24;
    *(int32_t *)(v5 + 0x5a3d) = a25;
    *(int16_t *)(v5 + 0x5e8d) = (int16_t)a26;
    *(char *)(v5 + 0x5a41) = (char)a27;
    *(char *)(v5 + 0x5a42) = (char)a28;
    *(char *)(v5 + 0x5a43) = (char)a29;
    *(int32_t *)(v5 + 0x5e91) = a30;
    *(int16_t *)(v5 + 0x5a45) = (int16_t)a31;
    *(int16_t *)(v5 + 0x5a47) = (int16_t)a32;
    *(int32_t *)(v5 + 0x5a49) = a33;
    *(int32_t *)(v5 + 0x5a4d) = a34;
    *(int16_t *)(v5 + 0x5a51) = (int16_t)a35;
    *(int32_t *)(v5 + 0x5a55) = a36;
    *(int16_t *)(v5 + 0x5e95) = (int16_t)a37;
    return 0;
}

// Address range: 0x80498d3 - 0x804be70
int32_t func_1(void) {
    // 0x804a43e
    int32_t v1; // 0x80498d3
    __x86_get_pc_thunk_ax(v1);
    set_var(-0x521e62d7, 2, 0xfffa, -0x568d8c86, -114, 28, -1, 19, -1, 2, 0x3c455447, -0x59112a54, 0x10b645eb, 141, 14, -1, 255, 79, 0x303c422d, 1, 8, 2, 0xffff, -0x1a5ff8fa, 0x6b5c, 0, 49, 1, 250, 0, 1, 0x632b, 0x457f07b0, 5, -0x17c1, 1, 0);
    return 142;
}

// Address range: 0x804be70 - 0x804c35a
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804be99
    int32_t v3; // 0x804be70
    if (v1 == (char **)2) {
        // 0x804be9b
        int32_t v4; // 0x804be70
        int32_t str = *(int32_t *)(v4 + 4); // 0x804bea1
        v2 = strcmp((char *)str, (char *)(v3 + 1473)) == 0;
    }
    // 0x804bec1
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x319d), v3 + 1475, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31a1), v3 + 1479, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31a3), v3 + 1484, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31a5), v3 + 1489, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31a9), v3 + 1494, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31ad), v3 + 1499, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31b1), v3 + 1504, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31b3), v3 + 1509, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31b5), v3 + 1514, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31b9), v3 + 1519, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31bd), v3 + 1524, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31c1), v3 + 1530, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31c5), v3 + 1536, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31c9), v3 + 1542, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31cd), v3 + 1548, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31d1), v3 + 1554, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31d5), v3 + 1560, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31d6), v3 + 1566, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31d9), v3 + 1572, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31dd), v3 + 1578, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31e1), v3 + 1584, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31e5), v3 + 1590, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31e7), v3 + 1596, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31e9), v3 + 1602, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31ed), v3 + 1608, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x363d), v3 + 1614, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31f1), v3 + 1620, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31f2), v3 + 1626, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31f3), v3 + 1632, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3641), v3 + 1638, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31f5), v3 + 1644, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31f7), v3 + 1650, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31f9), v3 + 1656, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31fd), v3 + 1662, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3201), v3 + 1668, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3205), v3 + 1674, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3645), v3 + 1680, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x3199), v2);
    return 0;
}

// Address range: 0x804c35a - 0x804c35e
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804c35a
    return result;
}

// Address range: 0x804c35e - 0x804c362
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804c35e
    int32_t result; // 0x804c35e
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12