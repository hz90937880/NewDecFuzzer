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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x264e));
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
        chars_printed = printf((char *)(v1 + 0x154d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049808
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int16_t *)(v5 + 0x39f0) = (int16_t)a1;
    *(int32_t *)(v5 + 0x39f4) = a2;
    *(int32_t *)(v5 + 0x39f8) = a3;
    *(int32_t *)(v5 + 0x39fc) = a4;
    *(int32_t *)(v5 + 0x3a00) = a5;
    *(int16_t *)(v5 + 0x3a04) = (int16_t)a6;
    *(int32_t *)(v5 + 0x3a08) = a7;
    *(char *)(v5 + 0x3e70) = (char)a8;
    *(int32_t *)(v5 + 0x3a0c) = a9;
    *(int16_t *)(v5 + 0x3a10) = (int16_t)a10;
    *(int32_t *)(v5 + 0x3e74) = a11;
    *(int16_t *)(v5 + 0x3a12) = (int16_t)a12;
    *(char *)(v5 + 0x3a14) = (char)a13;
    *(int32_t *)(v5 + 0x3a18) = a14;
    *(char *)(v5 + 0x3a1c) = (char)a15;
    *(int32_t *)(v5 + 0x3a20) = a16;
    *(char *)(v5 + 0x3a24) = (char)a17;
    *(char *)(v5 + 0x3a25) = (char)a18;
    *(int32_t *)(v5 + 0x3a28) = a19;
    *(int32_t *)(v5 + 0x3a2c) = a20;
    *(char *)(v5 + 0x3a30) = (char)a21;
    *(int16_t *)(v5 + 0x3a32) = (int16_t)a22;
    *(int32_t *)(v5 + 0x3a34) = a23;
    *(int32_t *)(v5 + 0x3a38) = a24;
    *(char *)(v5 + 0x3a3c) = (char)a25;
    *(int16_t *)(v5 + 0x3e78) = (int16_t)a26;
    *(int32_t *)(v5 + 0x3a40) = a27;
    *(int32_t *)(v5 + 0x3a44) = a28;
    *(char *)(v5 + 0x3a48) = (char)a29;
    return 0;
}

// Address range: 0x8049808 - 0x804a63b
int32_t func_1(void) {
    // 0x804a53d
    int32_t v1; // 0x8049808
    __x86_get_pc_thunk_ax(v1);
    set_var(0xc371, -6, 0, -7, -2, 1, -0x1c535b89, 0, -0x50ea, 0xffff, 0, 0x170a, -10, 3, 1, -1, 1, 5, -0x4833a310, 0x25cbbc64, 185, 0x20b9, 0x5912bbb, 0x7f1185d1, 13, 0, -8, -1, 1);
    return 185;
}

// Address range: 0x804a63b - 0x804aa37
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a664
    int32_t v3; // 0x804a63b
    if (v1 == (char **)2) {
        // 0x804a666
        int32_t v4; // 0x804a63b
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a66c
        v2 = strcmp((char *)str, (char *)(v3 + 1222)) == 0;
    }
    // 0x804a68c
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x29d2), v3 + 1224, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29d6), v3 + 1229, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29da), v3 + 1234, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29de), v3 + 1239, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29e2), v3 + 1244, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x29e6), v3 + 1249, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29ea), v3 + 1254, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2e52), v3 + 1259, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29ee), v3 + 1264, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x29f2), v3 + 1269, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e56), v3 + 1275, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x29f4), v3 + 1281, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29f6), v3 + 1287, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29fa), v3 + 1293, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29fe), v3 + 1299, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a02), v3 + 1305, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2a06), v3 + 1311, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2a07), v3 + 1317, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a0a), v3 + 1323, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a0e), v3 + 1329, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2a12), v3 + 1335, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2a14), v3 + 1341, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a16), v3 + 1347, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a1a), v3 + 1353, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2a1e), v3 + 1359, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2e5a), v3 + 1365, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a22), v3 + 1371, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a26), v3 + 1377, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2a2a), v3 + 1383, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x29ce), v2);
    return 0;
}

// Address range: 0x804aa37 - 0x804aa3b
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804aa37
    return result;
}

// Address range: 0x804aa3b - 0x804aa3f
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804aa3b
    int32_t result; // 0x804aa3b
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
