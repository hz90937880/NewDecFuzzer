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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x252e));
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
        chars_printed = printf((char *)(v1 + 0x142d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80497db
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int16_t *)(v2 + 0x39f0) = (int16_t)a1;
    *(int32_t *)(v2 + 0x3e70) = a2;
    *(int32_t *)(v2 + 0x3e74) = a3;
    *(char *)(v2 + 0x39f2) = (char)a4;
    *(int32_t *)(v2 + 0x39f4) = a5;
    *(int32_t *)(v2 + 0x3e78) = a6;
    *(char *)(v2 + 0x3e7c) = (char)a7;
    *(int16_t *)(v2 + 0x3e7e) = (int16_t)a8;
    *(int32_t *)(v2 + 0x39fc) = a9;
    *(int32_t *)(v2 + 0x3a00) = a10;
    *(int32_t *)(v2 + 0x3a04) = a11;
    *(int32_t *)(v2 + 0x3a08) = a12;
    *(int32_t *)(v2 + 0x3a0c) = a13;
    *(int16_t *)(v2 + 0x3e80) = (int16_t)a14;
    *(char *)(v2 + 0x3a10) = (char)a15;
    *(int16_t *)(v2 + 0x3a12) = (int16_t)a16;
    *(int32_t *)(v2 + 0x3e84) = a17;
    *(int32_t *)(v2 + 0x3a14) = a18;
    *(int32_t *)(v2 + 0x3a18) = a19;
    *(char *)(v2 + 0x3a1c) = (char)a20;
    *(int32_t *)(v2 + 0x3a20) = a21;
    *(char *)(v2 + 0x3a24) = (char)a22;
    *(char *)(v2 + 0x3a25) = (char)a23;
    *(int32_t *)(v2 + 0x3a28) = a24;
    *(int32_t *)(v2 + 0x3a2c) = a25;
    *(int32_t *)(v2 + 0x3a30) = a26;
    *(int32_t *)(v2 + 0x3a34) = a27;
    *(int32_t *)(v2 + 0x3a38) = a28;
    *(char *)(v2 + 0x3a3c) = (char)a29;
    *(int32_t *)(v2 + 0x3a40) = a30;
    return 0;
}

// Address range: 0x80497db - 0x804a4f1
int32_t func_1(void) {
    // 0x80497db
    int32_t v1; // 0x80497db
    __x86_get_pc_thunk_ax(v1);
    set_var(1, 0, 0, -90, -2, 0, 0, 0, -10, -4, -0x42762b13, 0x2f147413, -0x70cc7ffe, 0, -3, -2, 0, -0x71f9, -0x5863f4e0, 252, 4, 37, 24, 0x1f469dc8, 0, -0x5eb5, -0x35a78164, -0x3cb13a2d, 91, 0);
    return -0x71f9;
}

// Address range: 0x804a4f1 - 0x804a913
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a51a
    int32_t v3; // 0x804a4f1
    if (v1 == (char **)2) {
        // 0x804a51c
        int32_t v4; // 0x804a4f1
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a522
        v2 = strcmp((char *)str, (char *)(v3 + 1264)) == 0;
    }
    // 0x804a542
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b1c), v3 + 1266, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2f9c), v3 + 1270, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fa0), v3 + 1275, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b1e), v3 + 1280, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b20), v3 + 1285, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b24), v3 + 1290, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fa4), v3 + 1295, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2fa8), v3 + 1300, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2faa), v3 + 1305, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b28), v3 + 1310, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b2c), v3 + 1315, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b30), v3 + 1321, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b34), v3 + 1327, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b38), v3 + 1333, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2fac), v3 + 1339, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b3c), v3 + 1345, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b3e), v3 + 1351, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fb0), v3 + 1357, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b40), v3 + 1363, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b44), v3 + 1369, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b48), v3 + 1375, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b4c), v3 + 1381, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b50), v3 + 1387, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b51), v3 + 1393, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b54), v3 + 1399, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b58), v3 + 1405, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b5c), v3 + 1411, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b60), v3 + 1417, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b64), v3 + 1423, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b68), v3 + 1429, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b6c), v3 + 1435, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2b18), v2);
    return 0;
}

// Address range: 0x804a913 - 0x804a917
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a913
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
