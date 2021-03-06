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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x386e));
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
        chars_printed = printf((char *)(v1 + 0x276d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049882
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int16_t *)(v2 + 0x49f0) = (int16_t)a1;
    *(int32_t *)(v2 + 0x49f4) = a2;
    *(int16_t *)(v2 + 0x49f8) = (int16_t)a3;
    *(int32_t *)(v2 + 0x49fc) = a4;
    *(int32_t *)(v2 + 0x4a00) = a5;
    *(char *)(v2 + 0x4a04) = (char)a6;
    *(char *)(v2 + 0x4a05) = (char)a7;
    *(int32_t *)(v2 + 0x4e90) = a8;
    *(int32_t *)(v2 + 0x4e94) = a9;
    *(char *)(v2 + 0x4a06) = (char)a10;
    *(int16_t *)(v2 + 0x4a08) = (int16_t)a11;
    *(int32_t *)(v2 + 0x4a0c) = a12;
    *(int16_t *)(v2 + 0x4a10) = (int16_t)a13;
    *(int32_t *)(v2 + 0x4a14) = a14;
    *(char *)(v2 + 0x4a18) = (char)a15;
    *(int32_t *)(v2 + 0x4a1c) = a16;
    *(char *)(v2 + 0x4a20) = (char)a17;
    *(int32_t *)(v2 + 0x4a24) = a18;
    *(int32_t *)(v2 + 0x4a28) = a19;
    *(char *)(v2 + 0x4a2c) = (char)a20;
    *(int16_t *)(v2 + 0x4a2e) = (int16_t)a21;
    *(int32_t *)(v2 + 0x4a30) = a22;
    *(int32_t *)(v2 + 0x4a34) = a23;
    *(char *)(v2 + 0x4e98) = (char)a24;
    *(int32_t *)(v2 + 0x4a38) = a25;
    *(int32_t *)(v2 + 0x4a3c) = a26;
    *(int32_t *)(v2 + 0x4a40) = a27;
    *(int32_t *)(v2 + 0x4a44) = a28;
    *(int32_t *)(v2 + 0x4a48) = a29;
    *(int16_t *)(v2 + 0x4a4c) = (int16_t)a30;
    *(int32_t *)(v2 + 0x4e9c) = a31;
    *(int32_t *)(v2 + 0x4a50) = a32;
    *(int32_t *)(v2 + 0x4a54) = a33;
    *(int32_t *)(v2 + 0x4a58) = a34;
    *(int16_t *)(v2 + 0x4a5c) = (int16_t)a35;
    *(int16_t *)(v2 + 0x4ea0) = (int16_t)a36;
    *(int32_t *)(v2 + 0x4a60) = a37;
    *(int32_t *)(v2 + 0x4a64) = a38;
    return 0;
}

// Address range: 0x8049882 - 0x804b75b
int32_t func_1(void) {
    // 0x8049882
    int32_t v1; // 0x8049882
    __x86_get_pc_thunk_ax(v1);
    set_var(-4, 1, -0x5a07, -4, 0, 68, 1, 0, 0, 6, 0xd105, 0x67205c45, 5, 0x7407bc3b, -5, 0x1be52f0d, 181, 0x68ac4890, 0x3190075, 244, 8, 1, 7, 0, -4, 1, 0x3fb9, 1, 0x777e33f6, 0x46e6, 0, -0x1e9d8b69, -0xbb168c9, 0x532bcfaf, -6, 0, -0x25e36c54, -4);
    return 0x568b;
}

// Address range: 0x804b75b - 0x804bc57
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804b784
    int32_t v3; // 0x804b75b
    if (v1 == (char **)2) {
        // 0x804b786
        int32_t v4; // 0x804b75b
        int32_t str = *(int32_t *)(v4 + 4); // 0x804b78c
        v2 = strcmp((char *)str, (char *)(v3 + 1478)) == 0;
    }
    // 0x804b7ac
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x28b2), v3 + 1480, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28b6), v3 + 1485, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x28ba), v3 + 1490, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28be), v3 + 1495, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28c2), v3 + 1500, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x28c6), v3 + 1505, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x28c7), v3 + 1510, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d52), v3 + 1515, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d56), v3 + 1520, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x28c8), v3 + 1526, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x28ca), v3 + 1532, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28ce), v3 + 1538, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x28d2), v3 + 1544, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28d6), v3 + 1550, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x28da), v3 + 1556, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28de), v3 + 1562, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x28e2), v3 + 1568, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28e6), v3 + 1574, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28ea), v3 + 1580, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x28ee), v3 + 1586, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x28f0), v3 + 1592, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28f2), v3 + 1598, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28f6), v3 + 1604, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d5a), v3 + 1610, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28fa), v3 + 1616, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28fe), v3 + 1622, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2902), v3 + 1628, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2906), v3 + 1634, v2);
    transparent_crc(*(int32_t *)(v3 + 0x290a), v3 + 1640, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x290e), v3 + 1646, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d5e), v3 + 1652, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2912), v3 + 1658, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2916), v3 + 1664, v2);
    transparent_crc(*(int32_t *)(v3 + 0x291a), v3 + 1670, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x291e), v3 + 1676, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d62), v3 + 1682, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2922), v3 + 1688, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2926), v3 + 1694, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x28ae), v2);
    return 0;
}

// Address range: 0x804bc57 - 0x804bc5b
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804bc57
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
