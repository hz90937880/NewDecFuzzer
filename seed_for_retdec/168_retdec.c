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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27);
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
        chars_printed = printf((char *)(v1 + 0x166d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804980c
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int16_t *)(v5 + 0x39f0) = (int16_t)a1;
    *(int32_t *)(v5 + 0x39f4) = a2;
    *(char *)(v5 + 0x39f8) = (char)a3;
    *(int16_t *)(v5 + 0x39fa) = (int16_t)a4;
    *(int16_t *)(v5 + 0x39fc) = (int16_t)a5;
    *(int16_t *)(v5 + 0x39fe) = (int16_t)a6;
    *(int32_t *)(v5 + 0x3a00) = a7;
    *(int16_t *)(v5 + 0x3a04) = (int16_t)a8;
    *(char *)(v5 + 0x3e50) = (char)a9;
    *(int32_t *)(v5 + 0x3e54) = a10;
    *(int32_t *)(v5 + 0x3e58) = a11;
    *(int32_t *)(v5 + 0x3e5c) = a12;
    *(char *)(v5 + 0x3a06) = (char)a13;
    *(int32_t *)(v5 + 0x3a08) = a14;
    *(int32_t *)(v5 + 0x3a0c) = a15;
    *(int16_t *)(v5 + 0x3a10) = (int16_t)a16;
    *(int32_t *)(v5 + 0x3e60) = a17;
    *(int16_t *)(v5 + 0x3a12) = (int16_t)a18;
    *(int32_t *)(v5 + 0x3a14) = a19;
    *(int16_t *)(v5 + 0x3e64) = (int16_t)a20;
    *(int32_t *)(v5 + 0x3e68) = a21;
    *(int32_t *)(v5 + 0x3e6c) = a22;
    *(char *)(v5 + 0x3a18) = (char)a23;
    *(char *)(v5 + 0x3a19) = (char)a24;
    *(int32_t *)(v5 + 0x3a1c) = a25;
    *(int16_t *)(v5 + 0x3a20) = (int16_t)a26;
    *(int16_t *)(v5 + 0x3a22) = (int16_t)a27;
    return 0;
}

// Address range: 0x804980c - 0x804a796
int32_t func_1(void) {
    // 0x804a78e
    int32_t v1; // 0x804980c
    __x86_get_pc_thunk_ax(v1);
    set_var(1, -38, 0, 0, 1134, -0x3c02, -55, 512, 0, 0, 1, 0, -116, 5, -0x6e25c64d, 0x25e2, 1, 0, 0x40a051b8, 0, 0, 0, 42, -3, 9, 1975, 0xfffe);
    return 1134;
}

// Address range: 0x804a796 - 0x804ab4a
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a7bf
    int32_t v3; // 0x804a796
    if (v1 == (char **)2) {
        // 0x804a7c1
        int32_t v4; // 0x804a796
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a7c7
        v2 = strcmp((char *)str, (char *)(v3 + 1163)) == 0;
    }
    // 0x804a7e7
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2877), v3 + 1165, v2);
    transparent_crc(*(int32_t *)(v3 + 0x287b), v3 + 1169, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x287f), v3 + 1174, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2881), v3 + 1179, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2883), v3 + 1184, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2885), v3 + 1189, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2887), v3 + 1194, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x288b), v3 + 1199, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2cd7), v3 + 1204, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cdb), v3 + 1210, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cdf), v3 + 1216, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ce3), v3 + 1222, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x288d), v3 + 1228, v2);
    transparent_crc(*(int32_t *)(v3 + 0x288f), v3 + 1234, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2893), v3 + 1240, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2897), v3 + 1246, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ce7), v3 + 1252, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2899), v3 + 1258, v2);
    transparent_crc(*(int32_t *)(v3 + 0x289b), v3 + 1264, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2ceb), v3 + 1270, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cef), v3 + 1276, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cf3), v3 + 1282, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x289f), v3 + 1288, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x28a0), v3 + 1294, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28a3), v3 + 1300, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x28a7), v3 + 1306, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x28a9), v3 + 1312, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2873), v2);
    return 0;
}

// Address range: 0x804ab4a - 0x804ab4e
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804ab4a
    return result;
}

// Address range: 0x804ab4e - 0x804ab52
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804ab4e
    int32_t result; // 0x804ab4e
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
