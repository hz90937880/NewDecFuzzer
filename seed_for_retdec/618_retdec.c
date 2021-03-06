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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x272e));
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
        chars_printed = printf((char *)(v1 + 0x162d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804978d
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x39f0) = a1;
    *(int32_t *)(v2 + 0x39f4) = a2;
    *(int32_t *)(v2 + 0x39f8) = a3;
    *(int32_t *)(v2 + 0x39fc) = a4;
    *(int32_t *)(v2 + 0x3a00) = a5;
    *(int16_t *)(v2 + 0x3e70) = (int16_t)a6;
    *(int32_t *)(v2 + 0x3a04) = a7;
    *(int32_t *)(v2 + 0x3a08) = a8;
    *(int32_t *)(v2 + 0x3a0c) = a9;
    *(char *)(v2 + 0x3a10) = (char)a10;
    *(int32_t *)(v2 + 0x3e74) = a11;
    *(int32_t *)(v2 + 0x3a14) = a12;
    *(char *)(v2 + 0x3a18) = (char)a13;
    *(int32_t *)(v2 + 0x3a1c) = a14;
    *(int32_t *)(v2 + 0x3e78) = a15;
    *(int32_t *)(v2 + 0x3a20) = a16;
    *(char *)(v2 + 0x3a24) = (char)a17;
    *(int16_t *)(v2 + 0x3a26) = (int16_t)a18;
    *(int32_t *)(v2 + 0x3a28) = a19;
    *(int32_t *)(v2 + 0x3a2c) = a20;
    *(char *)(v2 + 0x3a30) = (char)a21;
    *(int16_t *)(v2 + 0x3e7c) = (int16_t)a22;
    *(int32_t *)(v2 + 0x3a34) = a23;
    *(int32_t *)(v2 + 0x3a38) = a24;
    *(int16_t *)(v2 + 0x3a3c) = (int16_t)a25;
    *(int32_t *)(v2 + 0x3a40) = a26;
    return 0;
}

// Address range: 0x804978d - 0x804a786
int32_t func_1(void) {
    // 0x804978d
    int32_t v1; // 0x804978d
    __x86_get_pc_thunk_ax(v1);
    set_var(2, -0x3aa74541, 35, 0x45c1d102, 3, 0, 0x5d42, 0x44d7, -9, 7, 0, 0x1ea64901, -1, -3, 0, -0x7499ffd, 4, 0x1d8f, -0x5c1242ab, -0x1eeca7e9, -61, 0, -2, -4, 0xd930, 5);
    return 0x1197ba2;
}

// Address range: 0x804a786 - 0x804ab10
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a7af
    int32_t v3; // 0x804a786
    if (v1 == (char **)2) {
        // 0x804a7b1
        int32_t v4; // 0x804a786
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a7b7
        v2 = strcmp((char *)str, (char *)(v3 + 1115)) == 0;
    }
    // 0x804a7d7
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2887), v3 + 1117, v2);
    transparent_crc(*(int32_t *)(v3 + 0x288b), v3 + 1121, v2);
    transparent_crc(*(int32_t *)(v3 + 0x288f), v3 + 1125, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2893), v3 + 1130, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2897), v3 + 1135, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d07), v3 + 1140, v2);
    transparent_crc(*(int32_t *)(v3 + 0x289b), v3 + 1145, v2);
    transparent_crc(*(int32_t *)(v3 + 0x289f), v3 + 1150, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28a3), v3 + 1156, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x28a7), v3 + 1162, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d0b), v3 + 1168, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28ab), v3 + 1174, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x28af), v3 + 1180, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28b3), v3 + 1186, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d0f), v3 + 1192, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28b7), v3 + 1198, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x28bb), v3 + 1204, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x28bd), v3 + 1210, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28bf), v3 + 1216, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28c3), v3 + 1222, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x28c7), v3 + 1228, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d13), v3 + 1234, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28cb), v3 + 1240, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28cf), v3 + 1246, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x28d3), v3 + 1252, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28d7), v3 + 1258, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2883), v2);
    return 0;
}

// Address range: 0x804ab10 - 0x804ab14
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804ab10
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
