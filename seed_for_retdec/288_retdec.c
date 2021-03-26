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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40, int32_t a41, int32_t a42, int32_t a43, int32_t a44, int32_t a45, int32_t a46, int32_t a47, int32_t a48, int32_t a49);
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
    return __x86_get_pc_thunk_ax(v1) + 0x7ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x556e));
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
        *(int32_t *)(v2 + 0x6c4a + 4 * i) = v5;
    }
    // 0x80494d8
    return v2 + 0x6b8a;
}

// Address range: 0x80494db - 0x8049522
int32_t crc32_byte(int32_t a1) {
    // 0x80494db
    int32_t v1; // 0x80494db
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x80494e2
    int32_t * v3 = (int32_t *)(v2 + 0x6b39); // 0x80494f2
    uint32_t v4 = *v3; // 0x80494f2
    *v3 = *(int32_t *)(v2 + 0x6bd9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
    return v2 + 0x6b19;
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
        chars_printed = printf((char *)(v1 + 0x446d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049a6f
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40, int32_t a41, int32_t a42, int32_t a43, int32_t a44, int32_t a45, int32_t a46, int32_t a47, int32_t a48, int32_t a49) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x69ed) = a1;
    *(char *)(v5 + 0x69f1) = (char)a2;
    *(int16_t *)(v5 + 0x69f3) = (int16_t)a3;
    *(int16_t *)(v5 + 0x6e8d) = (int16_t)a4;
    *(int32_t *)(v5 + 0x69f5) = a5;
    *(int16_t *)(v5 + 0x69f9) = (int16_t)a6;
    *(int32_t *)(v5 + 0x69fd) = a7;
    *(int32_t *)(v5 + 0x6a01) = a8;
    *(int16_t *)(v5 + 0x6a05) = (int16_t)a9;
    *(int32_t *)(v5 + 0x6a09) = a10;
    *(int16_t *)(v5 + 0x6a0d) = (int16_t)a11;
    *(char *)(v5 + 0x6a0f) = (char)a12;
    *(char *)(v5 + 0x6a10) = (char)a13;
    *(int16_t *)(v5 + 0x6a11) = (int16_t)a14;
    *(char *)(v5 + 0x6a13) = (char)a15;
    *(char *)(v5 + 0x6a14) = (char)a16;
    *(int32_t *)(v5 + 0x6e91) = a17;
    *(int32_t *)(v5 + 0x6a15) = a18;
    *(char *)(v5 + 0x6a19) = (char)a19;
    *(int32_t *)(v5 + 0x6a1d) = a20;
    *(char *)(v5 + 0x6e95) = (char)a21;
    *(int32_t *)(v5 + 0x6a21) = a22;
    *(int32_t *)(v5 + 0x6a25) = a23;
    *(int32_t *)(v5 + 0x6a29) = a24;
    *(char *)(v5 + 0x6a2d) = (char)a25;
    *(int32_t *)(v5 + 0x6a31) = a26;
    *(char *)(v5 + 0x6a35) = (char)a27;
    *(int16_t *)(v5 + 0x6a37) = (int16_t)a28;
    *(char *)(v5 + 0x6a39) = (char)a29;
    *(char *)(v5 + 0x6a3a) = (char)a30;
    *(char *)(v5 + 0x6a3b) = (char)a31;
    *(char *)(v5 + 0x6a3c) = (char)a32;
    *(char *)(v5 + 0x6a3d) = (char)a33;
    *(char *)(v5 + 0x6a3e) = (char)a34;
    *(int16_t *)(v5 + 0x6a3f) = (int16_t)a35;
    *(int32_t *)(v5 + 0x6a41) = a36;
    *(char *)(v5 + 0x6a45) = (char)a37;
    *(int16_t *)(v5 + 0x6a47) = (int16_t)a38;
    *(char *)(v5 + 0x6a49) = (char)a39;
    *(int32_t *)(v5 + 0x6a4d) = a40;
    *(int16_t *)(v5 + 0x6a51) = (int16_t)a41;
    *(int32_t *)(v5 + 0x6e99) = a42;
    *(int32_t *)(v5 + 0x6a55) = a43;
    *(int32_t *)(v5 + 0x6a59) = a44;
    *(int32_t *)(v5 + 0x6a5d) = a45;
    *(int32_t *)(v5 + 0x6a61) = a46;
    *(int16_t *)(v5 + 0x6e9d) = (int16_t)a47;
    *(int32_t *)(v5 + 0x6a65) = a48;
    *(int16_t *)(v5 + 0x6e9f) = (int16_t)a49;
    return 0;
}

// Address range: 0x8049a6f - 0x804d2d0
int32_t func_1(void) {
    // 0x804d0b6
    int32_t v1; // 0x8049a6f
    __x86_get_pc_thunk_ax(v1);
    set_var(1, 76, 0xddd1, 0, 0, 1, 0x71c19cd, -1, -0x4583, 0x3dc4, 1, 190, 75, -1, 7, 252, 0, -1, 1, -4, 0, -0x2d6b, 0x98cbd84, 0x71842ac9, -2, 0x1e57589b, 7, 2386, -9, -59, -3, 9, 114, -73, 5, 0x2746b81b, 89, 0x7425, -1, -0x685c9294, 0, 0, 0, 0x35094b4b, 1, -73, 0xffff, 0, 0);
    return 0;
}

// Address range: 0x804d2d0 - 0x804d94c
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804d2f9
    int32_t v3; // 0x804d2d0
    if (v1 == (char **)2) {
        // 0x804d2fb
        int32_t v4; // 0x804d2d0
        int32_t str = *(int32_t *)(v4 + 4); // 0x804d301
        v2 = strcmp((char *)str, (char *)(v3 + 1874)) == 0;
    }
    // 0x804d321
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2d3d), v3 + 1876, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d41), v3 + 1880, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d43), v3 + 1884, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31dd), v3 + 1889, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d45), v3 + 1894, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d49), v3 + 1899, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d4d), v3 + 1904, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d51), v3 + 1909, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d55), v3 + 1914, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d59), v3 + 1919, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d5d), v3 + 1924, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d5f), v3 + 1929, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d60), v3 + 1934, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d61), v3 + 1939, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d63), v3 + 1945, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d64), v3 + 1951, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31e1), v3 + 1957, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d65), v3 + 1963, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d69), v3 + 1969, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d6d), v3 + 1975, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31e5), v3 + 1981, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d71), v3 + 1987, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d75), v3 + 1993, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d79), v3 + 1999, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d7d), v3 + 2005, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d81), v3 + 2011, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d85), v3 + 2017, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d87), v3 + 2023, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d89), v3 + 2029, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d8a), v3 + 2035, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d8b), v3 + 2041, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d8c), v3 + 2047, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d8d), v3 + 2053, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d8e), v3 + 2059, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d8f), v3 + 2065, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d91), v3 + 2071, v2);
    transparent_crc(-105, v3 + 2077, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d95), v3 + 2083, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d97), v3 + 2089, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d99), v3 + 2095, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d9d), v3 + 2101, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2da1), v3 + 2107, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31e9), v3 + 2113, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2da5), v3 + 2119, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2da9), v3 + 2125, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dad), v3 + 2131, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2db1), v3 + 2137, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31ed), v3 + 2143, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2db5), v3 + 2149, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31ef), v3 + 2155, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2d39), v2);
    return 0;
}

// Address range: 0x804d94c - 0x804d950
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804d94c
    return result;
}

// Address range: 0x804d950 - 0x804d954
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804d950
    int32_t result; // 0x804d950
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12