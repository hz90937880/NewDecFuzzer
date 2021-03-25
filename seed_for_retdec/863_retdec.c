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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40, int32_t a41, int32_t a42, int32_t a43, int32_t a44, int32_t a45, int32_t a46);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x3e8e));
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
        *(int32_t *)(v2 + 0x5c6a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x5bf9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 0x2d8d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049997
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40, int32_t a41, int32_t a42, int32_t a43, int32_t a44, int32_t a45, int32_t a46) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(char *)(v5 + 0x59ed) = (char)a1;
    *(int32_t *)(v5 + 0x59f1) = a2;
    *(int32_t *)(v5 + 0x59f5) = a3;
    *(int32_t *)(v5 + 0x59f9) = a4;
    *(int16_t *)(v5 + 0x59fd) = (int16_t)a5;
    *(int16_t *)(v5 + 0x59ff) = (int16_t)a6;
    *(int16_t *)(v5 + 0x5a01) = (int16_t)a7;
    *(int32_t *)(v5 + 0x5a05) = a8;
    *(int32_t *)(v5 + 0x5a09) = a9;
    *(char *)(v5 + 0x5ead) = (char)a10;
    *(int32_t *)(v5 + 0x5a0d) = a11;
    *(int32_t *)(v5 + 0x5a11) = a12;
    *(int32_t *)(v5 + 0x5a15) = a13;
    *(int32_t *)(v5 + 0x5a19) = a14;
    *(int16_t *)(v5 + 0x5a1d) = (int16_t)a15;
    *(int16_t *)(v5 + 0x5a1f) = (int16_t)a16;
    *(int32_t *)(v5 + 0x5eb1) = a17;
    *(int32_t *)(v5 + 0x5a21) = a18;
    *(int16_t *)(v5 + 0x5a25) = (int16_t)a19;
    *(int16_t *)(v5 + 0x5a27) = (int16_t)a20;
    *(int16_t *)(v5 + 0x5a29) = (int16_t)a21;
    *(int32_t *)(v5 + 0x5eb5) = a22;
    *(char *)(v5 + 0x5a2b) = (char)a23;
    *(int32_t *)(v5 + 0x5a2d) = a24;
    *(int32_t *)(v5 + 0x5a31) = a25;
    *(int16_t *)(v5 + 0x5a35) = (int16_t)a26;
    *(int32_t *)(v5 + 0x5a39) = a27;
    *(char *)(v5 + 0x5a3d) = (char)a28;
    *(int16_t *)(v5 + 0x5a3f) = (int16_t)a29;
    *(int16_t *)(v5 + 0x5a41) = (int16_t)a30;
    *(int16_t *)(v5 + 0x5eb9) = (int16_t)a31;
    *(char *)(v5 + 0x5a43) = (char)a32;
    *(int32_t *)(v5 + 0x5a45) = a33;
    *(char *)(v5 + 0x5a49) = (char)a34;
    *(int16_t *)(v5 + 0x5a4b) = (int16_t)a35;
    *(int32_t *)(v5 + 0x5ebd) = a36;
    *(char *)(v5 + 0x5a4d) = (char)a37;
    *(int32_t *)(v5 + 0x5a51) = a38;
    *(int32_t *)(v5 + 0x5a55) = a39;
    *(int32_t *)(v5 + 0x5a59) = a40;
    *(char *)(v5 + 0x5a5d) = (char)a41;
    *(int32_t *)(v5 + 0x5a61) = a42;
    *(int32_t *)(v5 + 0x5a65) = a43;
    *(char *)(v5 + 0x5a69) = (char)a44;
    *(int32_t *)(v5 + 0x5a6d) = a45;
    *(int32_t *)(v5 + 0x5a71) = a46;
    return 0;
}

// Address range: 0x8049997 - 0x804bc7d
int32_t func_1(void) {
    // 0x8049997
    int32_t v1; // 0x8049997
    __x86_get_pc_thunk_ax(v1);
    set_var(231, -0x1852, 1004, 0x2311c7dc, 0x628f, 0x3d46, -0x2e0d, 0x779dd1f3, 4, 0, -0x67f2ad68, -0x4876, 1, -0x12ec, 0xfffc, -1, 0, 1, 1, 7, 5, 0, 1, -0x39c5e71e, 0x3311199d, -0x65d8, 1, 7, 0xa43c, 0x12c6, 0, -1, 1, 5, 0xffff, 0, 93, 1, 1, -1, 209, -0x19da4148, 0x6b903d57, 43, 0x4e2b2987, 0x3d0e7600);
    return 0x2ee7;
}

// Address range: 0x804bc7d - 0x804c26b
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804bca6
    int32_t v3; // 0x804bc7d
    if (v1 == (char **)2) {
        // 0x804bca8
        int32_t v4; // 0x804bc7d
        int32_t str = *(int32_t *)(v4 + 4); // 0x804bcae
        v2 = strcmp((char *)str, (char *)(v3 + 1732)) == 0;
    }
    // 0x804bcce
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(char *)(v3 + 0x3390), v3 + 1734, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3394), v3 + 1738, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3398), v3 + 1743, v2);
    transparent_crc(*(int32_t *)(v3 + 0x339c), v3 + 1748, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33a0), v3 + 1753, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33a2), v3 + 1758, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33a4), v3 + 1763, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33a8), v3 + 1768, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33ac), v3 + 1773, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3850), v3 + 1778, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33b0), v3 + 1783, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33b4), v3 + 1789, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33b8), v3 + 1795, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33bc), v3 + 1801, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33c0), v3 + 1807, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33c2), v3 + 1813, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3854), v3 + 1819, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33c4), v3 + 1825, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33c8), v3 + 1831, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33ca), v3 + 1837, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33cc), v3 + 1843, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3858), v3 + 1849, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x33ce), v3 + 1855, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33d0), v3 + 1861, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33d4), v3 + 1867, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33d8), v3 + 1873, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33dc), v3 + 1879, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x33e0), v3 + 1885, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33e2), v3 + 1891, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33e4), v3 + 1897, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x385c), v3 + 1903, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x33e6), v3 + 1909, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33e8), v3 + 1915, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x33ec), v3 + 1921, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33ee), v3 + 1927, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3860), v3 + 1933, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x33f0), v3 + 1939, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33f4), v3 + 1945, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33f8), v3 + 1951, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33fc), v3 + 1957, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3400), v3 + 1963, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3404), v3 + 1969, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3408), v3 + 1975, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x340c), v3 + 1981, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3410), v3 + 1987, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3414), v3 + 1993, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x338c), v2);
    return 0;
}

// Address range: 0x804c26b - 0x804c26f
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804c26b
    return result;
}

// Address range: 0x804c26f - 0x804c273
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804c26f
    int32_t result; // 0x804c26f
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
