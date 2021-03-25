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

// Address range: 0x8049626 - 0x8049795
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x49f0) = a1;
    *(char *)(v2 + 0x49f4) = (char)a2;
    *(int32_t *)(v2 + 0x49f8) = a3;
    *(int32_t *)(v2 + 0x49fc) = a4;
    *(char *)(v2 + 0x4a00) = (char)a5;
    *(int32_t *)(v2 + 0x4a04) = a6;
    *(int32_t *)(v2 + 0x4a08) = a7;
    *(int32_t *)(v2 + 0x4a0c) = a8;
    *(int16_t *)(v2 + 0x4a10) = (int16_t)a9;
    *(int32_t *)(v2 + 0x4a14) = a10;
    *(int32_t *)(v2 + 0x4a18) = a11;
    *(char *)(v2 + 0x4a1c) = (char)a12;
    *(int32_t *)(v2 + 0x4a20) = a13;
    *(char *)(v2 + 0x4a24) = (char)a14;
    *(char *)(v2 + 0x4a25) = (char)a15;
    *(int32_t *)(v2 + 0x4a28) = a16;
    *(int32_t *)(v2 + 0x4a2c) = a17;
    *(int32_t *)(v2 + 0x4a30) = a18;
    *(char *)(v2 + 0x4a34) = (char)a19;
    *(int32_t *)(v2 + 0x4a38) = a20;
    *(char *)(v2 + 0x4a3c) = (char)a21;
    *(char *)(v2 + 0x4a3d) = (char)a22;
    *(int32_t *)(v2 + 0x4a40) = a23;
    *(int32_t *)(v2 + 0x4a44) = a24;
    *(int32_t *)(v2 + 0x4a48) = a25;
    *(int32_t *)(v2 + 0x4e70) = a26;
    return 0;
}

// Address range: 0x8049795 - 0x804b280
int32_t func_1(void) {
    // 0x8049795
    int32_t v1; // 0x8049795
    __x86_get_pc_thunk_ax(v1);
    set_var(0, 249, 1, 1, 59, -41, 0x261b24c0, 0x1b44b642, -2, 0x1aee02a2, -0x52a65630, 255, -1, 1, 63, -0x33955acd, 0x6acc92eb, 0x30a4d827, -33, -1, 246, 101, 0x329a494, 5, -0x1878df1c, 0);
    return 0;
}

// Address range: 0x804b280 - 0x804b610
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804b2a9
    int32_t v3; // 0x804b280
    if (v1 == (char **)2) {
        // 0x804b2ab
        int32_t v4; // 0x804b280
        int32_t str = *(int32_t *)(v4 + 4); // 0x804b2b1
        v2 = strcmp((char *)str, (char *)(v3 + 1121)) == 0;
    }
    // 0x804b2d1
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2d8d), v3 + 1123, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d91), v3 + 1127, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d95), v3 + 1132, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d99), v3 + 1137, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d9d), v3 + 1142, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2da1), v3 + 1147, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2da5), v3 + 1152, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2da9), v3 + 1157, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2dad), v3 + 1163, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2db1), v3 + 1169, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2db5), v3 + 1175, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2db9), v3 + 1181, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dbd), v3 + 1187, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2dc1), v3 + 1193, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2dc2), v3 + 1199, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dc5), v3 + 1205, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dc9), v3 + 1211, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dcd), v3 + 1217, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2dd1), v3 + 1223, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dd5), v3 + 1229, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2dd9), v3 + 1235, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2dda), v3 + 1241, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ddd), v3 + 1247, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2de1), v3 + 1253, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2de5), v3 + 1259, v2);
    transparent_crc(*(int32_t *)(v3 + 0x320d), v3 + 1265, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2d89), v2);
    return 0;
}

// Address range: 0x804b610 - 0x804b614
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b610
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
