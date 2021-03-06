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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40, int32_t a41, int32_t a42, int32_t a43, int32_t a44, int32_t a45);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x483e));
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
        chars_printed = printf((char *)(v1 + 0x373d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049987
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40, int32_t a41, int32_t a42, int32_t a43, int32_t a44, int32_t a45) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x59ed) = a1;
    *(char *)(v5 + 0x59f1) = (char)a2;
    *(char *)(v5 + 0x59f2) = (char)a3;
    *(int32_t *)(v5 + 0x59f5) = a4;
    *(int32_t *)(v5 + 0x59f9) = a5;
    *(int32_t *)(v5 + 0x59fd) = a6;
    *(int16_t *)(v5 + 0x5a01) = (int16_t)a7;
    *(int32_t *)(v5 + 0x5ead) = a8;
    *(char *)(v5 + 0x5a03) = (char)a9;
    *(int32_t *)(v5 + 0x5eb1) = a10;
    *(char *)(v5 + 0x5eb5) = (char)a11;
    *(int32_t *)(v5 + 0x5a05) = a12;
    *(int16_t *)(v5 + 0x5a09) = (int16_t)a13;
    *(int16_t *)(v5 + 0x5a0b) = (int16_t)a14;
    *(char *)(v5 + 0x5a0d) = (char)a15;
    *(char *)(v5 + 0x5a0e) = (char)a16;
    *(int32_t *)(v5 + 0x5a11) = a17;
    *(int32_t *)(v5 + 0x5a15) = a18;
    *(int16_t *)(v5 + 0x5a19) = (int16_t)a19;
    *(int32_t *)(v5 + 0x5a1d) = a20;
    *(int32_t *)(v5 + 0x5a21) = a21;
    *(int16_t *)(v5 + 0x5a25) = (int16_t)a22;
    *(int32_t *)(v5 + 0x5a29) = a23;
    *(int16_t *)(v5 + 0x5a2d) = (int16_t)a24;
    *(int32_t *)(v5 + 0x5a31) = a25;
    *(int16_t *)(v5 + 0x5a35) = (int16_t)a26;
    *(int16_t *)(v5 + 0x5a37) = (int16_t)a27;
    *(int32_t *)(v5 + 0x5a39) = a28;
    *(int16_t *)(v5 + 0x5eb7) = (int16_t)a29;
    *(int16_t *)(v5 + 0x5a3d) = (int16_t)a30;
    *(char *)(v5 + 0x5a3f) = (char)a31;
    *(int32_t *)(v5 + 0x5a41) = a32;
    *(int32_t *)(v5 + 0x5a45) = a33;
    *(int32_t *)(v5 + 0x5a49) = a34;
    *(char *)(v5 + 0x5a4d) = (char)a35;
    *(int32_t *)(v5 + 0x5a51) = a36;
    *(int32_t *)(v5 + 0x5a55) = a37;
    *(char *)(v5 + 0x5a59) = (char)a38;
    *(int32_t *)(v5 + 0x5a5d) = a39;
    *(int32_t *)(v5 + 0x5a61) = a40;
    *(int32_t *)(v5 + 0x5a65) = a41;
    *(int16_t *)(v5 + 0x5a69) = (int16_t)a42;
    *(char *)(v5 + 0x5eb9) = (char)a43;
    *(char *)(v5 + 0x5a6b) = (char)a44;
    *(int32_t *)(v5 + 0x5a6d) = a45;
    return 0;
}

// Address range: 0x8049987 - 0x804c637
int32_t func_1(void) {
    // 0x804a5ea
    int32_t v1; // 0x8049987
    __x86_get_pc_thunk_ax(v1);
    set_var(-2, 255, 254, -8, 0x2e26595a, 0x37e05af8, -5, 0, 19, 0, 0, -10, 672, -9, 1, 251, 0, -0x733dc252, 0, 0x4377b065, 0x3f422aac, -0x40af, 0, 0, -0x7f20105, -2379, 0x5522, 0x268e1f56, 0, 1, -113, 0x147a8b92, -0x553e44, 0x70c34d30, 43, 1, 0x29f08c16, 47, 1, 0x24a4c455, 0x4feae600, -1, 0, 1, -0x3cb31c46);
    return 5;
}

// Address range: 0x804c637 - 0x804cc27
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804c660
    int32_t v3; // 0x804c637
    if (v1 == (char **)2) {
        // 0x804c662
        int32_t v4; // 0x804c637
        int32_t str = *(int32_t *)(v4 + 4); // 0x804c668
        v2 = strcmp((char *)str, (char *)(v3 + 1722)) == 0;
    }
    // 0x804c688
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x29d6), v3 + 1724, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29da), v3 + 1728, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29db), v3 + 1733, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29de), v3 + 1738, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29e2), v3 + 1743, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29e6), v3 + 1748, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x29ea), v3 + 1753, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e96), v3 + 1758, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29ec), v3 + 1763, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e9a), v3 + 1768, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2e9e), v3 + 1773, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29ee), v3 + 1778, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x29f2), v3 + 1783, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x29f4), v3 + 1789, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29f6), v3 + 1795, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29f7), v3 + 1801, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29fa), v3 + 1807, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29fe), v3 + 1813, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2a02), v3 + 1819, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a06), v3 + 1825, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a0a), v3 + 1831, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2a0e), v3 + 1837, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a12), v3 + 1843, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2a16), v3 + 1849, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2a18), v3 + 1855, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a1a), v3 + 1861, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2a1e), v3 + 1867, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2a20), v3 + 1873, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a22), v3 + 1879, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2ea0), v3 + 1885, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2a26), v3 + 1891, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2a28), v3 + 1897, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a2a), v3 + 1903, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a2e), v3 + 1909, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a32), v3 + 1915, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2a36), v3 + 1921, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a3a), v3 + 1927, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a3e), v3 + 1933, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2a42), v3 + 1939, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a46), v3 + 1945, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a4a), v3 + 1951, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a4e), v3 + 1957, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2a52), v3 + 1963, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ea2), v3 + 1969, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2a54), v3 + 1975, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a56), v3 + 1981, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x29d2), v2);
    return 0;
}

// Address range: 0x804cc27 - 0x804cc2b
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804cc27
    return result;
}

// Address range: 0x804cc2b - 0x804cc2f
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804cc2b
    int32_t result; // 0x804cc2b
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
