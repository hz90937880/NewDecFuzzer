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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x3fee));
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
        chars_printed = printf((char *)(v1 + 0x2eed));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80498ff
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int16_t *)(v5 + 0x59ed) = (int16_t)a1;
    *(int32_t *)(v5 + 0x59f1) = a2;
    *(char *)(v5 + 0x59f5) = (char)a3;
    *(int32_t *)(v5 + 0x59f9) = a4;
    *(int32_t *)(v5 + 0x59fd) = a5;
    *(int32_t *)(v5 + 0x5a01) = a6;
    *(int16_t *)(v5 + 0x5a05) = (int16_t)a7;
    *(int16_t *)(v5 + 0x5a07) = (int16_t)a8;
    *(int32_t *)(v5 + 0x5a09) = a9;
    *(int32_t *)(v5 + 0x5e8d) = a10;
    *(int32_t *)(v5 + 0x5a0d) = a11;
    *(int32_t *)(v5 + 0x5a11) = a12;
    *(int32_t *)(v5 + 0x5a15) = a13;
    *(int32_t *)(v5 + 0x5a19) = a14;
    *(int16_t *)(v5 + 0x5a1d) = (int16_t)a15;
    *(char *)(v5 + 0x5a1f) = (char)a16;
    *(char *)(v5 + 0x5a20) = (char)a17;
    *(char *)(v5 + 0x5a21) = (char)a18;
    *(int32_t *)(v5 + 0x5a25) = a19;
    *(int16_t *)(v5 + 0x5a29) = (int16_t)a20;
    *(int16_t *)(v5 + 0x5e91) = (int16_t)a21;
    *(int32_t *)(v5 + 0x5a2d) = a22;
    *(int32_t *)(v5 + 0x5a31) = a23;
    *(int32_t *)(v5 + 0x5a35) = a24;
    *(int32_t *)(v5 + 0x5a39) = a25;
    *(int16_t *)(v5 + 0x5a3d) = (int16_t)a26;
    *(char *)(v5 + 0x5a3f) = (char)a27;
    *(char *)(v5 + 0x5a40) = (char)a28;
    *(int16_t *)(v5 + 0x5e93) = (int16_t)a29;
    *(int32_t *)(v5 + 0x5e95) = a30;
    *(int32_t *)(v5 + 0x5e99) = a31;
    *(int32_t *)(v5 + 0x5a41) = a32;
    *(int16_t *)(v5 + 0x5a45) = (int16_t)a33;
    *(int16_t *)(v5 + 0x5a47) = (int16_t)a34;
    *(int32_t *)(v5 + 0x5a49) = a35;
    *(int32_t *)(v5 + 0x5a4d) = a36;
    *(int16_t *)(v5 + 0x5a51) = (int16_t)a37;
    *(int32_t *)(v5 + 0x5a55) = a38;
    *(char *)(v5 + 0x5a59) = (char)a39;
    *(int16_t *)(v5 + 0x5a5b) = (int16_t)a40;
    return 0;
}

// Address range: 0x80498ff - 0x804be89
int32_t func_1(void) {
    // 0x804bd2a
    int32_t v1; // 0x80498ff
    __x86_get_pc_thunk_ax(v1);
    set_var(0xbdd8, 0, 255, 0x4912, -8, -4, -0x32de, 2935, 1, 0, 1, 1, -8, 1, -1, 42, -1, 1, 0, -0x1db6, 0, -0x22f95f16, -0x248f4228, 1, -0x3b5748fa, -0x16db, 255, 255, 0, 0, 0, -0x6ac84302, 0x8ae9, 0xf77f, 0x608c0232, 0x5dacdae, 0x9638, -0x395b3d13, 251, 0xffff);
    return 65;
}

// Address range: 0x804be89 - 0x804c3d8
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804beb2
    int32_t v3; // 0x804be89
    if (v1 == (char **)2) {
        // 0x804beb4
        int32_t v4; // 0x804be89
        int32_t str = *(int32_t *)(v4 + 4); // 0x804beba
        v2 = strcmp((char *)str, (char *)(v3 + 1564)) == 0;
    }
    // 0x804beda
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(-1, v3 + 1566, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3184), v3 + 1571, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3188), v3 + 1576, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x318c), v3 + 1581, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3190), v3 + 1586, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3194), v3 + 1591, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3198), v3 + 1596, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x319c), v3 + 1601, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x319e), v3 + 1606, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31a0), v3 + 1611, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3624), v3 + 1616, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31a4), v3 + 1622, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31a8), v3 + 1628, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31ac), v3 + 1634, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31b0), v3 + 1640, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31b4), v3 + 1646, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31b6), v3 + 1652, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31b7), v3 + 1658, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31b8), v3 + 1664, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31bc), v3 + 1670, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31c0), v3 + 1676, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3628), v3 + 1682, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31c4), v3 + 1688, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31c8), v3 + 1694, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31cc), v3 + 1700, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31d0), v3 + 1706, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31d4), v3 + 1712, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31d6), v3 + 1718, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31d7), v3 + 1724, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x362a), v3 + 1730, v2);
    transparent_crc(*(int32_t *)(v3 + 0x362c), v3 + 1736, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3630), v3 + 1742, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31d8), v3 + 1748, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31dc), v3 + 1754, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31de), v3 + 1760, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31e0), v3 + 1766, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31e4), v3 + 1772, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31e8), v3 + 1778, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31ec), v3 + 1784, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31f0), v3 + 1790, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31f2), v3 + 1796, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x3180), v2);
    return 0;
}

// Address range: 0x804c3d8 - 0x804c3dc
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804c3d8
    return result;
}

// Address range: 0x804c3dc - 0x804c3e0
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804c3dc
    int32_t result; // 0x804c3dc
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
