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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x215e));
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
        chars_printed = printf((char *)(v1 + 0x105d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80497d1
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x39f0) = a1;
    *(int32_t *)(v5 + 0x3e50) = a2;
    *(int32_t *)(v5 + 0x39f4) = a3;
    *(int32_t *)(v5 + 0x39f8) = a4;
    *(int16_t *)(v5 + 0x39fc) = (int16_t)a5;
    *(int32_t *)(v5 + 0x3a00) = a6;
    *(int16_t *)(v5 + 0x3a04) = (int16_t)a7;
    *(char *)(v5 + 0x3a06) = (char)a8;
    *(char *)(v5 + 0x3a07) = (char)a9;
    *(int16_t *)(v5 + 0x3a08) = (int16_t)a10;
    *(char *)(v5 + 0x3a0a) = (char)a11;
    *(int32_t *)(v5 + 0x3a0c) = a12;
    *(int32_t *)(v5 + 0x3a10) = a13;
    *(char *)(v5 + 0x3e54) = (char)a14;
    *(int32_t *)(v5 + 0x3a14) = a15;
    *(char *)(v5 + 0x3e55) = (char)a16;
    *(int32_t *)(v5 + 0x3e58) = a17;
    *(int16_t *)(v5 + 0x3a18) = (int16_t)a18;
    *(int16_t *)(v5 + 0x3e5c) = (int16_t)a19;
    *(int32_t *)(v5 + 0x3a1c) = a20;
    *(int32_t *)(v5 + 0x3e60) = a21;
    *(int16_t *)(v5 + 0x3a20) = (int16_t)a22;
    *(char *)(v5 + 0x3a22) = (char)a23;
    *(int32_t *)(v5 + 0x3a24) = a24;
    *(int16_t *)(v5 + 0x3a28) = (int16_t)a25;
    return 0;
}

// Address range: 0x80497d1 - 0x804a1bd
int32_t func_1(void) {
    // 0x80497d1
    int32_t v1; // 0x80497d1
    __x86_get_pc_thunk_ax(v1);
    set_var(7, 0, -4, -6, -0x5f8d, -1, 0x166d, 106, 1, 0x6ca9, 255, 0, 0x4ae8bcd0, 1, 1, 0, 0, 2, 0, 0x76628c78, 0, 0x4966, 58, -9, 0x654f);
    return 255;
}

// Address range: 0x804a1bd - 0x804a539
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a1e6
    int32_t v3; // 0x804a1bd
    if (v1 == (char **)2) {
        // 0x804a1e8
        int32_t v4; // 0x804a1bd
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a1ee
        v2 = strcmp((char *)str, (char *)(v3 + 1108)) == 0;
    }
    // 0x804a20e
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2e50), v3 + 1110, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32b0), v3 + 1114, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e54), v3 + 1118, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e58), v3 + 1122, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2e5c), v3 + 1126, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e60), v3 + 1131, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2e64), v3 + 1136, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2e66), v3 + 1141, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2e67), v3 + 1146, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2e68), v3 + 1151, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2e6a), v3 + 1156, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e6c), v3 + 1161, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e70), v3 + 1166, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32b4), v3 + 1171, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e74), v3 + 1177, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32b5), v3 + 1183, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32b8), v3 + 1189, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2e78), v3 + 1195, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32bc), v3 + 1201, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e7c), v3 + 1207, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32c0), v3 + 1213, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2e80), v3 + 1219, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2e82), v3 + 1225, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e84), v3 + 1231, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2e88), v3 + 1237, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2e4c), v2);
    return 0;
}

// Address range: 0x804a539 - 0x804a53d
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a539
    return result;
}

// Address range: 0x804a53d - 0x804a541
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804a53d
    int32_t result; // 0x804a53d
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12