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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x280e));
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
        chars_printed = printf((char *)(v1 + 0x170d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804981a
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(char *)(v5 + 0x39f0) = (char)a1;
    *(char *)(v5 + 0x39f1) = (char)a2;
    *(char *)(v5 + 0x39f2) = (char)a3;
    *(int16_t *)(v5 + 0x39f4) = (int16_t)a4;
    *(int16_t *)(v5 + 0x39f6) = (int16_t)a5;
    *(char *)(v5 + 0x39f8) = (char)a6;
    *(int32_t *)(v5 + 0x39fc) = a7;
    *(char *)(v5 + 0x3a00) = (char)a8;
    *(int16_t *)(v5 + 0x3a02) = (int16_t)a9;
    *(int16_t *)(v5 + 0x3a04) = (int16_t)a10;
    *(char *)(v5 + 0x3a06) = (char)a11;
    *(char *)(v5 + 0x3a07) = (char)a12;
    *(char *)(v5 + 0x3e50) = (char)a13;
    *(int16_t *)(v5 + 0x3a08) = (int16_t)a14;
    *(int32_t *)(v5 + 0x3e54) = a15;
    *(int16_t *)(v5 + 0x3a0a) = (int16_t)a16;
    *(int16_t *)(v5 + 0x3e58) = (int16_t)a17;
    *(int32_t *)(v5 + 0x3a0c) = a18;
    *(int32_t *)(v5 + 0x3a10) = a19;
    *(int32_t *)(v5 + 0x3a14) = a20;
    *(int32_t *)(v5 + 0x3a18) = a21;
    *(int32_t *)(v5 + 0x3a1c) = a22;
    *(int16_t *)(v5 + 0x3a20) = (int16_t)a23;
    *(int16_t *)(v5 + 0x3a22) = (int16_t)a24;
    *(int32_t *)(v5 + 0x3a24) = a25;
    return 0;
}

// Address range: 0x804981a - 0x804a871
int32_t func_1(void) {
    // 0x804a775
    int32_t v1; // 0x804981a
    __x86_get_pc_thunk_ax(v1);
    set_var(244, 99, 248, 6, -0x1fd8, -28, -2, 55, 4, -0x14f9, -9, 1, 0, 0x73a6, 0, -1, 0, 1, -0x2e8c356c, -0x5bfd31e8, -0x207b4c8c, 3, 0x31c8, 0xfff7, -3);
    return -0x2e8c356c;
}

// Address range: 0x804a871 - 0x804abf3
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a89a
    int32_t v3; // 0x804a871
    if (v1 == (char **)2) {
        // 0x804a89c
        int32_t v4; // 0x804a871
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a8a2
        v2 = strcmp((char *)str, (char *)(v3 + 1104)) == 0;
    }
    // 0x804a8c2
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(char *)(v3 + 0x279c), v3 + 1106, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x279d), v3 + 1110, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x279e), v3 + 1114, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x27a0), v3 + 1118, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x27a2), v3 + 1122, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27a4), v3 + 1127, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27a8), v3 + 1132, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27ac), v3 + 1137, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x27ae), v3 + 1142, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x27b0), v3 + 1147, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27b2), v3 + 1152, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27b3), v3 + 1157, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2bfc), v3 + 1162, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x27b4), v3 + 1167, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2c00), v3 + 1172, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x27b6), v3 + 1178, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2c04), v3 + 1184, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27b8), v3 + 1190, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27bc), v3 + 1196, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27c0), v3 + 1202, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27c4), v3 + 1208, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27c8), v3 + 1214, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x27cc), v3 + 1220, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x27ce), v3 + 1226, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27d0), v3 + 1232, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2798), v2);
    return 0;
}

// Address range: 0x804abf3 - 0x804abf7
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804abf3
    return result;
}

// Address range: 0x804abf7 - 0x804abfb
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804abf7
    int32_t result; // 0x804abf7
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
