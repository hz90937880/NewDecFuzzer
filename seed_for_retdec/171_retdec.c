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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x276e));
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
        *(int32_t *)(v2 + 0x3c2a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x3bb9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 0x166d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80497b1
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x39f0) = a1;
    *(char *)(v5 + 0x39f4) = (char)a2;
    *(int32_t *)(v5 + 0x39f8) = a3;
    *(int32_t *)(v5 + 0x3e70) = a4;
    *(char *)(v5 + 0x39fc) = (char)a5;
    *(int32_t *)(v5 + 0x3a00) = a6;
    *(int16_t *)(v5 + 0x3a04) = (int16_t)a7;
    *(int32_t *)(v5 + 0x3a08) = a8;
    *(int32_t *)(v5 + 0x3a0c) = a9;
    *(int32_t *)(v5 + 0x3a10) = a10;
    *(int32_t *)(v5 + 0x3a14) = a11;
    *(int32_t *)(v5 + 0x3a18) = a12;
    *(int16_t *)(v5 + 0x3a1c) = (int16_t)a13;
    *(int16_t *)(v5 + 0x3a1e) = (int16_t)a14;
    *(int32_t *)(v5 + 0x3e74) = a15;
    *(int16_t *)(v5 + 0x3a20) = (int16_t)a16;
    *(int16_t *)(v5 + 0x3a22) = (int16_t)a17;
    *(int32_t *)(v5 + 0x3a24) = a18;
    *(char *)(v5 + 0x3a28) = (char)a19;
    *(char *)(v5 + 0x3a29) = (char)a20;
    *(char *)(v5 + 0x3a2a) = (char)a21;
    *(int32_t *)(v5 + 0x3a2c) = a22;
    *(int32_t *)(v5 + 0x3a30) = a23;
    *(int32_t *)(v5 + 0x3a34) = a24;
    *(char *)(v5 + 0x3a38) = (char)a25;
    return 0;
}

// Address range: 0x80497b1 - 0x804a7e4
int32_t func_1(void) {
    // 0x80497b1
    int32_t v1; // 0x80497b1
    __x86_get_pc_thunk_ax(v1);
    set_var(-8, 0, -21, -1, 47, -0x44a9, -0x4bd1, 44, 2115, -0x6299726, -1, 6, -0x7a2d, 0x330e, 0, 1, -0x461f, -0x70a0766, 5, -122, -59, -0x7309751f, 1, 0x5e14dd74, 249);
    return 47;
}

// Address range: 0x804a7e4 - 0x804ab58
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a80d
    int32_t v3; // 0x804a7e4
    if (v1 == (char **)2) {
        // 0x804a80f
        int32_t v4; // 0x804a7e4
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a815
        v2 = strcmp((char *)str, (char *)(v3 + 1085)) == 0;
    }
    // 0x804a835
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2829), v3 + 1087, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x282d), v3 + 1091, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2831), v3 + 1095, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ca9), v3 + 1100, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2835), v3 + 1105, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2839), v3 + 1110, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x283d), v3 + 1115, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2841), v3 + 1120, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2845), v3 + 1125, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2849), v3 + 1131, v2);
    transparent_crc(*(int32_t *)(v3 + 0x284d), v3 + 1137, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2851), v3 + 1143, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2855), v3 + 1149, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2857), v3 + 1155, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cad), v3 + 1161, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2859), v3 + 1167, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x285b), v3 + 1173, v2);
    transparent_crc(*(int32_t *)(v3 + 0x285d), v3 + 1179, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2861), v3 + 1185, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2862), v3 + 1191, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2863), v3 + 1197, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2865), v3 + 1203, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2869), v3 + 1209, v2);
    transparent_crc(*(int32_t *)(v3 + 0x286d), v3 + 1215, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2871), v3 + 1221, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2825), v2);
    return 0;
}

// Address range: 0x804ab58 - 0x804ab5c
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804ab58
    return result;
}

// Address range: 0x804ab5c - 0x804ab60
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804ab5c
    int32_t result; // 0x804ab5c
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
