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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, char a31);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x2cce));
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
        chars_printed = printf((char *)(v1 + 0x1bcd));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049857
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, char a31) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int16_t *)(v5 + 0x49f0) = (int16_t)a1;
    *(char *)(v5 + 0x49f2) = (char)a2;
    *(int32_t *)(v5 + 0x49f4) = a3;
    *(int32_t *)(v5 + 0x49f8) = a4;
    *(int32_t *)(v5 + 0x49fc) = a5;
    *(char *)(v5 + 0x4a00) = (char)a6;
    *(int32_t *)(v5 + 0x4a04) = a7;
    *(char *)(v5 + 0x4a08) = (char)a8;
    *(int16_t *)(v5 + 0x4a0a) = (int16_t)a9;
    *(int16_t *)(v5 + 0x4a0c) = (int16_t)a10;
    *(int16_t *)(v5 + 0x4a0e) = (int16_t)a11;
    *(char *)(v5 + 0x4a10) = (char)a12;
    *(int32_t *)(v5 + 0x4a14) = a13;
    *(int32_t *)(v5 + 0x4a18) = a14;
    *(int32_t *)(v5 + 0x4a1c) = a15;
    *(int32_t *)(v5 + 0x4a20) = a16;
    *(int16_t *)(v5 + 0x4a24) = (int16_t)a17;
    *(int16_t *)(v5 + 0x4e70) = (int16_t)a18;
    *(int32_t *)(v5 + 0x4a28) = a19;
    *(int32_t *)(v5 + 0x4e74) = a20;
    *(int32_t *)(v5 + 0x4a2c) = a21;
    *(char *)(v5 + 0x4a30) = (char)a22;
    *(int16_t *)(v5 + 0x4a32) = (int16_t)a23;
    *(int16_t *)(v5 + 0x4a34) = (int16_t)a24;
    *(int16_t *)(v5 + 0x4a36) = (int16_t)a25;
    *(int16_t *)(v5 + 0x4a38) = (int16_t)a26;
    *(char *)(v5 + 0x4a3a) = (char)a27;
    *(int32_t *)(v5 + 0x4a3c) = a28;
    *(int32_t *)(v5 + 0x4a40) = a29;
    *(int32_t *)(v5 + 0x4a44) = a30;
    *(int16_t *)(v5 + 0x4a48) = (int16_t)a31;
    return 0;
}

// Address range: 0x8049857 - 0x804ac46
int32_t func_1(void) {
    // 0x8049857
    int32_t v1; // 0x8049857
    __x86_get_pc_thunk_ax(v1);
    set_var(-19, 247, -9, -0x2795, 0x46e0aee, 2, 1, 0, 0xfff6, 0x3c4f, 0x3f40, 138, -0x59d0406f, 0, 3, -3, 0x4420, 0, 0x7b06565b, -2, 0, 179, 0xfffd, 0x59c7, 0xffff, 0xcb9f, 28, 1, 2, 1, -37);
    return -36;
}

// Address range: 0x804ac46 - 0x804b0b4
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804ac6f
    int32_t v3; // 0x804ac46
    if (v1 == (char **)2) {
        // 0x804ac71
        int32_t v4; // 0x804ac46
        int32_t str = *(int32_t *)(v4 + 4); // 0x804ac77
        v2 = strcmp((char *)str, (char *)(v3 + 1343)) == 0;
    }
    // 0x804ac97
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33c7), v3 + 1345, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x33c9), v3 + 1350, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33cb), v3 + 1355, v2);
    transparent_crc(253, v3 + 1360, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33cf), v3 + 1365, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33d3), v3 + 1370, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x33d7), v3 + 1375, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33db), v3 + 1380, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x33df), v3 + 1385, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33e1), v3 + 1390, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33e3), v3 + 1395, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33e5), v3 + 1400, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x33e7), v3 + 1405, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33eb), v3 + 1410, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33ef), v3 + 1416, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33f3), v3 + 1422, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33f7), v3 + 1428, v2);
    transparent_crc(0x46c1, v3 + 1434, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33fb), v3 + 1440, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3847), v3 + 1446, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33ff), v3 + 1452, v2);
    transparent_crc(*(int32_t *)(v3 + 0x384b), v3 + 1458, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3403), v3 + 1464, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3407), v3 + 1470, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3409), v3 + 1476, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x340b), v3 + 1482, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x340d), v3 + 1488, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x340f), v3 + 1494, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3411), v3 + 1500, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3413), v3 + 1506, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3417), v3 + 1512, v2);
    transparent_crc(*(int32_t *)(v3 + 0x341b), v3 + 1518, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x341f), v3 + 1524, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x33c3), v2);
    return 0;
}

// Address range: 0x804b0b4 - 0x804b0b8
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b0b4
    return result;
}

// Address range: 0x804b0b8 - 0x804b0bc
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804b0b8
    int32_t result; // 0x804b0b8
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
