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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1eee));
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
        *(int32_t *)(v2 + 0x3c0a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x3b99 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 3565));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80497f2
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(char *)(v5 + 0x39f0) = (char)a1;
    *(int16_t *)(v5 + 0x39f2) = (int16_t)a2;
    *(int32_t *)(v5 + 0x39f4) = a3;
    *(int32_t *)(v5 + 0x39f8) = a4;
    *(int32_t *)(v5 + 0x39fc) = a5;
    *(int16_t *)(v5 + 0x3e50) = (int16_t)a6;
    *(int32_t *)(v5 + 0x3a00) = a7;
    *(int32_t *)(v5 + 0x3e54) = a8;
    *(int16_t *)(v5 + 0x3a04) = (int16_t)a9;
    *(int16_t *)(v5 + 0x3a06) = (int16_t)a10;
    *(char *)(v5 + 0x3a08) = (char)a11;
    *(char *)(v5 + 0x3a09) = (char)a12;
    *(char *)(v5 + 0x3a0a) = (char)a13;
    *(int32_t *)(v5 + 0x3a0c) = a14;
    *(int16_t *)(v5 + 0x3a10) = (int16_t)a15;
    *(int16_t *)(v5 + 0x3a12) = (int16_t)a16;
    *(int16_t *)(v5 + 0x3a14) = (int16_t)a17;
    *(char *)(v5 + 0x3a16) = (char)a18;
    *(int32_t *)(v5 + 0x3a18) = a19;
    *(char *)(v5 + 0x3a1c) = (char)a20;
    *(char *)(v5 + 0x3a1d) = (char)a21;
    *(char *)(v5 + 0x3a1e) = (char)a22;
    *(int16_t *)(v5 + 0x3a20) = (int16_t)a23;
    return 0;
}

// Address range: 0x80497f2 - 0x8049f90
int32_t func_1(void) {
    // 0x80497f2
    int32_t v1; // 0x80497f2
    __x86_get_pc_thunk_ax(v1);
    set_var(244, -0x14b4, -8, -0x107e963f, 1, 0, 5, 0, 0x41ab, 1181, 47, -18, -92, 3, 0x79af, 0x3468, 4, -6, -0x363fde17, 53, 123, 7, 0xfff9);
    return 238;
}

// Address range: 0x8049f90 - 0x804a2d8
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049fb9
    int32_t v3; // 0x8049f90
    if (v1 == (char **)2) {
        // 0x8049fbb
        int32_t v4; // 0x8049f90
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049fc1
        v2 = strcmp((char *)str, (char *)(v3 + 1041)) == 0;
    }
    // 0x8049fe1
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(char *)(v3 + 0x307d), v3 + 1043, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x307f), v3 + 1047, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3081), v3 + 1052, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3085), v3 + 1057, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3089), v3 + 1062, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x34dd), v3 + 1067, v2);
    transparent_crc(*(int32_t *)(v3 + 0x308d), v3 + 1072, v2);
    transparent_crc(*(int32_t *)(v3 + 0x34e1), v3 + 1077, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3091), v3 + 1082, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3093), v3 + 1087, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3095), v3 + 1092, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3096), v3 + 1097, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3097), v3 + 1103, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3099), v3 + 1109, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x309d), v3 + 1115, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x309f), v3 + 1121, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30a1), v3 + 1127, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30a3), v3 + 1133, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30a5), v3 + 1139, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30a9), v3 + 1145, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30aa), v3 + 1151, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30ab), v3 + 1157, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30ad), v3 + 1163, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x3079), v2);
    return 0;
}

// Address range: 0x804a2d8 - 0x804a2dc
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a2d8
    return result;
}

// Address range: 0x804a2dc - 0x804a2e0
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804a2dc
    int32_t result; // 0x804a2dc
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12