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
    return __x86_get_pc_thunk_ax(v1) + 0x5ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x322e));
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
        *(int32_t *)(v2 + 0x4c2a + 4 * i) = v5;
    }
    // 0x80494d8
    return v2 + 0x4b8a;
}

// Address range: 0x80494db - 0x8049522
int32_t crc32_byte(int32_t a1) {
    // 0x80494db
    int32_t v1; // 0x80494db
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x80494e2
    int32_t * v3 = (int32_t *)(v2 + 0x4b39); // 0x80494f2
    uint32_t v4 = *v3; // 0x80494f2
    *v3 = *(int32_t *)(v2 + 0x4bb9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
    return v2 + 0x4b19;
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
        chars_printed = printf((char *)(v1 + 0x212d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049778
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x49f0) = a1;
    *(int16_t *)(v2 + 0x49f4) = (int16_t)a2;
    *(int16_t *)(v2 + 0x49fc) = (int16_t)a3;
    *(int32_t *)(v2 + 0x4a00) = a4;
    *(int32_t *)(v2 + 0x4a04) = a5;
    *(int32_t *)(v2 + 0x4e70) = a6;
    *(int32_t *)(v2 + 0x4a08) = a7;
    *(int32_t *)(v2 + 0x4a0c) = a8;
    *(int32_t *)(v2 + 0x4a10) = a9;
    *(char *)(v2 + 0x4a14) = (char)a10;
    *(int32_t *)(v2 + 0x4a18) = a11;
    *(int32_t *)(v2 + 0x4a1c) = a12;
    *(int16_t *)(v2 + 0x4a20) = (int16_t)a13;
    *(int32_t *)(v2 + 0x4a24) = a14;
    *(int16_t *)(v2 + 0x4a28) = (int16_t)a15;
    *(int32_t *)(v2 + 0x4a2c) = a16;
    *(int16_t *)(v2 + 0x4a30) = (int16_t)a17;
    *(int16_t *)(v2 + 0x4a32) = (int16_t)a18;
    *(int32_t *)(v2 + 0x4a34) = a19;
    *(int32_t *)(v2 + 0x4a38) = a20;
    *(int32_t *)(v2 + 0x4a40) = a21;
    *(int32_t *)(v2 + 0x4e74) = a22;
    *(int16_t *)(v2 + 0x4e78) = (int16_t)a23;
    return 0;
}

// Address range: 0x8049778 - 0x804b28e
int32_t func_1(void) {
    // 0x8049778
    int32_t v1; // 0x8049778
    __x86_get_pc_thunk_ax(v1);
    set_var(-6, 0x716e, -0x610b, 0x2b1956a7, 0x3e76, 0, 0x3574, 0xca4aaa5, -0x2a15, 62, 0x24d0f4eb, -1, 0x5975, 0x5feb8ad3, 0x4fe6, -3027, -0x3c15, -0x4de1, -8, -3, -9, 0, 0);
    return -6;
}

// Address range: 0x804b28e - 0x804b615
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804b2b7
    int32_t v3; // 0x804b28e
    if (v1 == (char **)2) {
        // 0x804b2b9
        int32_t v4; // 0x804b28e
        int32_t str = *(int32_t *)(v4 + 4); // 0x804b2bf
        v2 = strcmp((char *)str, (char *)(v3 + 1111)) == 0;
    }
    // 0x804b2df
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2d7f), v3 + 1113, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d83), v3 + 1117, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d87), v3 + 1122, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d8b), v3 + 1127, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d8f), v3 + 1132, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d93), v3 + 1137, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31ff), v3 + 1142, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d97), v3 + 1147, v2);
    transparent_crc(-0x3dfaaa87, v3 + 1153, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d9b), v3 + 1159, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d9f), v3 + 1165, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2da3), v3 + 1171, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2da7), v3 + 1177, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dab), v3 + 1183, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2daf), v3 + 1189, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2db3), v3 + 1195, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2db7), v3 + 1201, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dbb), v3 + 1207, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2dbf), v3 + 1213, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2dc1), v3 + 1219, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dc3), v3 + 1225, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dc7), v3 + 1231, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dcb), v3 + 1237, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dcf), v3 + 1243, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3203), v3 + 1249, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3207), v3 + 1255, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2d7b), v2);
    return 0;
}

// Address range: 0x804b615 - 0x804b619
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b615
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
