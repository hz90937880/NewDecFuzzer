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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x277e));
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
        *(int32_t *)(v2 + 0x3c4a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x3bd9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 0x167d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804986f
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x39f0) = a1;
    *(int32_t *)(v5 + 0x39f4) = a2;
    *(int32_t *)(v5 + 0x39f8) = a3;
    *(int32_t *)(v5 + 0x39fc) = a4;
    *(char *)(v5 + 0x3a00) = (char)a5;
    *(char *)(v5 + 0x3a01) = (char)a6;
    *(int32_t *)(v5 + 0x3a04) = a7;
    *(char *)(v5 + 0x3a08) = (char)a8;
    *(char *)(v5 + 0x3a09) = (char)a9;
    *(int32_t *)(v5 + 0x3a0c) = a10;
    *(char *)(v5 + 0x3a10) = (char)a11;
    *(int32_t *)(v5 + 0x3a14) = a12;
    *(char *)(v5 + 0x3a18) = (char)a13;
    *(char *)(v5 + 0x3a19) = (char)a14;
    *(char *)(v5 + 0x3a1a) = (char)a15;
    *(char *)(v5 + 0x3a1b) = (char)a16;
    *(int32_t *)(v5 + 0x3a1c) = a17;
    *(char *)(v5 + 0x3a20) = (char)a18;
    *(int32_t *)(v5 + 0x3a24) = a19;
    *(int32_t *)(v5 + 0x3a28) = a20;
    *(int32_t *)(v5 + 0x3a2c) = a21;
    *(char *)(v5 + 0x3a30) = (char)a22;
    *(int16_t *)(v5 + 0x3a32) = (int16_t)a23;
    *(int32_t *)(v5 + 0x3a34) = a24;
    *(int32_t *)(v5 + 0x3a38) = a25;
    *(int32_t *)(v5 + 0x3a3c) = a26;
    *(int32_t *)(v5 + 0x3a40) = a27;
    *(int32_t *)(v5 + 0x3a44) = a28;
    *(char *)(v5 + 0x3a48) = (char)a29;
    *(int32_t *)(v5 + 0x3a4c) = a30;
    *(int32_t *)(v5 + 0x3a50) = a31;
    *(int32_t *)(v5 + 0x3a54) = a32;
    *(char *)(v5 + 0x3a58) = (char)a33;
    *(int32_t *)(v5 + 0x3a5c) = a34;
    *(int16_t *)(v5 + 0x3a60) = (int16_t)a35;
    *(int16_t *)(v5 + 0x3e90) = (int16_t)a36;
    return 0;
}

// Address range: 0x804986f - 0x804a697
int32_t func_1(void) {
    // 0x804986f
    int32_t v1; // 0x804986f
    __x86_get_pc_thunk_ax(v1);
    set_var(-0x4539b598, -0x579f4b1, 1, 0, 46, -4, -0x23816f97, 49, 107, 1, 17, -5, -1, 1, 1, 233, -0x4a549354, 251, 0x1f3ec1de, 3, -0x192b3063, 246, 1, -1, 0x13493115, -0x1078da8b, -0x7d712a76, 0x206afcf2, 1, 0x42aa8039, -0x50ff1348, -1, 236, -0xa6bece0, 0x5da1, 0);
    return 0;
}

// Address range: 0x804a697 - 0x804ab63
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a6c0
    int32_t v3; // 0x804a697
    if (v1 == (char **)2) {
        // 0x804a6c2
        int32_t v4; // 0x804a697
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a6c8
        v2 = strcmp((char *)str, (char *)(v3 + 1434)) == 0;
    }
    // 0x804a6e8
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2976), v3 + 1436, v2);
    transparent_crc(*(int32_t *)(v3 + 0x297a), v3 + 1440, v2);
    transparent_crc(*(int32_t *)(v3 + 0x297e), v3 + 1444, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2982), v3 + 1448, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2986), v3 + 1453, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2987), v3 + 1458, v2);
    transparent_crc(*(int32_t *)(v3 + 0x298a), v3 + 1463, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x298e), v3 + 1468, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x298f), v3 + 1473, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2992), v3 + 1478, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2996), v3 + 1484, v2);
    transparent_crc(*(int32_t *)(v3 + 0x299a), v3 + 1490, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x299e), v3 + 1496, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x299f), v3 + 1502, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29a0), v3 + 1508, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29a1), v3 + 1514, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29a2), v3 + 1520, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29a6), v3 + 1526, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29aa), v3 + 1532, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29ae), v3 + 1538, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29b2), v3 + 1544, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29b6), v3 + 1550, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x29b8), v3 + 1556, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29ba), v3 + 1562, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29be), v3 + 1568, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29c2), v3 + 1574, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29c6), v3 + 1580, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29ca), v3 + 1586, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29ce), v3 + 1592, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29d2), v3 + 1598, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29d6), v3 + 1604, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29da), v3 + 1610, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29de), v3 + 1616, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29e2), v3 + 1622, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x29e6), v3 + 1628, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2e16), v3 + 1634, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2972), v2);
    return 0;
}

// Address range: 0x804ab63 - 0x804ab67
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804ab63
    return result;
}

// Address range: 0x804ab67 - 0x804ab6b
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804ab67
    int32_t result; // 0x804ab67
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12