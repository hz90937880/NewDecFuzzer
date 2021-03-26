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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x336e));
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
        chars_printed = printf((char *)(v1 + 0x226d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x80498f3
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2; // 0x8049654
    int32_t v3; // 0x8049654
    int32_t v4; // 0x8049654
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049654
    *(int32_t *)(v5 + 0x49c2) = a1;
    *(int16_t *)(v5 + 0x49c6) = (int16_t)a2;
    *(int16_t *)(v5 + 0x49c8) = (int16_t)a3;
    *(int32_t *)(v5 + 0x49ca) = a4;
    *(int32_t *)(v5 + 0x49ce) = a5;
    *(int16_t *)(v5 + 0x49d2) = (int16_t)a6;
    *(int32_t *)(v5 + 0x49d6) = a7;
    *(int16_t *)(v5 + 0x49da) = (int16_t)a8;
    *(char *)(v5 + 0x49dc) = (char)a9;
    *(int32_t *)(v5 + 0x49de) = a10;
    *(char *)(v5 + 0x49e2) = (char)a11;
    *(int32_t *)(v5 + 0x49e6) = a12;
    *(int16_t *)(v5 + 0x49ea) = (int16_t)a13;
    *(char *)(v5 + 0x49ec) = (char)a14;
    *(int32_t *)(v5 + 0x49ee) = a15;
    *(char *)(v5 + 0x49f2) = (char)a16;
    *(int16_t *)(v5 + 0x49f4) = (int16_t)a17;
    *(int32_t *)(v5 + 0x49f6) = a18;
    *(int32_t *)(v5 + 0x49fa) = a19;
    *(int32_t *)(v5 + 0x49fe) = a20;
    *(int16_t *)(v5 + 0x4a02) = (int16_t)a21;
    *(char *)(v5 + 0x4a04) = (char)a22;
    *(int16_t *)(v5 + 0x4a06) = (int16_t)a23;
    *(char *)(v5 + 0x4a08) = (char)a24;
    *(int32_t *)(v5 + 0x4a0a) = a25;
    *(int32_t *)(v5 + 0x4a0e) = a26;
    *(int32_t *)(v5 + 0x4a12) = a27;
    *(char *)(v5 + 0x4a16) = (char)a28;
    *(int32_t *)(v5 + 0x4a1a) = a29;
    *(int32_t *)(v5 + 0x4a1e) = a30;
    *(int32_t *)(v5 + 0x4a22) = a31;
    *(int16_t *)(v5 + 0x4a26) = (int16_t)a32;
    *(int16_t *)(v5 + 0x4e62) = (int16_t)a33;
    *(int32_t *)(v5 + 0x4a2a) = a34;
    *(int16_t *)(v5 + 0x4a2e) = (int16_t)a35;
    *(int32_t *)(v5 + 0x4a32) = a36;
    *(int32_t *)(v5 + 0x4a36) = a37;
    *(int32_t *)(v5 + 0x4e66) = a38;
    return 0;
}

// Address range: 0x80498f3 - 0x804b251
int32_t func_1(void) {
    // 0x804b109
    int32_t v1; // 0x80498f3
    __x86_get_pc_thunk_ax(v1);
    set_var(6, 0x7858, -0x2b5b, -1, -1, 0xd8d5, 0x519ba600, 0x2ee1, 1, 1, 153, -0x294be5dc, 1, 81, 0, 0, 1, 0x7c90, 8, -28, 0x68d7, 251, -5, 247, -0x27ab7443, 2, 0x6abceaac, -28, -5, -2, 0x3020056d, -10, 0, 9, 1, 1, -0x30e1d1fa, 0);
    return 0x519ba600;
}

// Address range: 0x804b251 - 0x804b749
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804b27a
    int32_t v3; // 0x804b251
    if (v1 == (char **)2) {
        // 0x804b27c
        int32_t v4; // 0x804b251
        int32_t str = *(int32_t *)(v4 + 4); // 0x804b282
        v2 = strcmp((char *)str, (char *)(v3 + 1492)) == 0;
    }
    // 0x804b2a2
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2dbc), v3 + 1494, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2dc0), v3 + 1499, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2dc2), v3 + 1504, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dc4), v3 + 1509, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dc8), v3 + 1514, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2dcc), v3 + 1519, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dd0), v3 + 1524, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2dd4), v3 + 1529, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2dd6), v3 + 1534, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dd8), v3 + 1539, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ddc), v3 + 1544, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2de0), v3 + 1549, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2de4), v3 + 1554, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2de6), v3 + 1560, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2de8), v3 + 1566, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2dec), v3 + 1572, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2dee), v3 + 1578, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2df0), v3 + 1584, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2df4), v3 + 1590, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2df8), v3 + 1596, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2dfc), v3 + 1602, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2dfe), v3 + 1608, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2e00), v3 + 1614, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2e02), v3 + 1620, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e04), v3 + 1626, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e08), v3 + 1632, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e0c), v3 + 1638, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2e10), v3 + 1644, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e14), v3 + 1650, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e18), v3 + 1656, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e1c), v3 + 1662, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2e20), v3 + 1668, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x325c), v3 + 1674, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e24), v3 + 1680, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2e28), v3 + 1686, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e2c), v3 + 1692, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e30), v3 + 1698, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3260), v3 + 1704, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2db8), v2);
    return 0;
}

// Address range: 0x804b749 - 0x804b74d
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b749
    return result;
}

// Address range: 0x804b74d - 0x804b751
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804b74d
    int32_t result; // 0x804b74d
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12