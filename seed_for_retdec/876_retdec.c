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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1dde));
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
        chars_printed = printf((char *)(v1 + 3293));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x80497d8
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2; // 0x8049654
    int32_t v3; // 0x8049654
    int32_t v4; // 0x8049654
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049654
    *(char *)(v5 + 0x39c2) = (char)a1;
    *(int32_t *)(v5 + 0x39c6) = a2;
    *(int32_t *)(v5 + 0x39ca) = a3;
    *(int32_t *)(v5 + 0x39ce) = a4;
    *(int16_t *)(v5 + 0x39d2) = (int16_t)a5;
    *(int32_t *)(v5 + 0x39d6) = a6;
    *(int32_t *)(v5 + 0x39da) = a7;
    *(int16_t *)(v5 + 0x39de) = (int16_t)a8;
    *(int32_t *)(v5 + 0x39e2) = a9;
    *(int32_t *)(v5 + 0x39e6) = a10;
    *(int32_t *)(v5 + 0x39ea) = a11;
    *(char *)(v5 + 0x39ee) = (char)a12;
    *(int32_t *)(v5 + 0x3e42) = a13;
    *(int16_t *)(v5 + 0x39f0) = (int16_t)a14;
    *(char *)(v5 + 0x3e46) = (char)a15;
    *(int32_t *)(v5 + 0x3e4a) = a16;
    *(char *)(v5 + 0x39f2) = (char)a17;
    *(int32_t *)(v5 + 0x39f6) = a18;
    *(int16_t *)(v5 + 0x39fa) = (int16_t)a19;
    *(int16_t *)(v5 + 0x39fc) = (int16_t)a20;
    *(int32_t *)(v5 + 0x39fe) = a21;
    *(int16_t *)(v5 + 0x3a02) = (int16_t)a22;
    *(char *)(v5 + 0x3a04) = (char)a23;
    *(int32_t *)(v5 + 0x3a06) = a24;
    return 0;
}

// Address range: 0x80497d8 - 0x8049e6c
int32_t func_1(void) {
    // 0x80497d8
    int32_t v1; // 0x80497d8
    __x86_get_pc_thunk_ax(v1);
    set_var(7, 0, -0x3620041b, 0x5c4ce10b, 2, 0x4628aea3, 0x3f327e0e, 0xafe1, -0x37309173, 0, 1, 3, 0, 0xe3b1, 14, 0, 177, 4, 3, 0xfffe, 6, 0xc359, 6, 1);
    return -0x37309173;
}

// Address range: 0x8049e6c - 0x804a1c4
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049e95
    int32_t v3; // 0x8049e6c
    if (v1 == (char **)2) {
        // 0x8049e97
        int32_t v4; // 0x8049e6c
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049e9d
        v2 = strcmp((char *)str, (char *)(v3 + 1065)) == 0;
    }
    // 0x8049ebd
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(char *)(v3 + 0x31a1), v3 + 1067, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31a5), v3 + 1072, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31a9), v3 + 1077, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31ad), v3 + 1082, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31b1), v3 + 1087, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31b5), v3 + 1092, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31b9), v3 + 1097, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31bd), v3 + 1102, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31c1), v3 + 1107, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31c5), v3 + 1113, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31c9), v3 + 1119, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31cd), v3 + 1125, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3621), v3 + 1131, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31cf), v3 + 1137, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3625), v3 + 1143, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3629), v3 + 1149, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31d1), v3 + 1155, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31d5), v3 + 1161, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31d9), v3 + 1167, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31db), v3 + 1173, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31dd), v3 + 1179, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31e1), v3 + 1185, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31e3), v3 + 1191, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31e5), v3 + 1197, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x319d), v2);
    return 0;
}

// Address range: 0x804a1c4 - 0x804a1c8
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a1c4
    return result;
}

// Address range: 0x804a1c8 - 0x804a1cc
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804a1c8
    int32_t result; // 0x804a1c8
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
