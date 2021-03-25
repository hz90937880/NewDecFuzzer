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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x346e));
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
        chars_printed = printf((char *)(v1 + 0x236d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80497cd
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x49f0) = a1;
    *(int32_t *)(v2 + 0x49f4) = a2;
    *(int32_t *)(v2 + 0x49f8) = a3;
    *(int32_t *)(v2 + 0x49fc) = a4;
    *(char *)(v2 + 0x4a00) = (char)a5;
    *(char *)(v2 + 0x4e70) = (char)a6;
    *(int16_t *)(v2 + 0x4a02) = (int16_t)a7;
    *(int32_t *)(v2 + 0x4a04) = a8;
    *(int16_t *)(v2 + 0x4a08) = (int16_t)a9;
    *(char *)(v2 + 0x4a0a) = (char)a10;
    *(int32_t *)(v2 + 0x4a0c) = a11;
    *(int32_t *)(v2 + 0x4a10) = a12;
    *(int32_t *)(v2 + 0x4a14) = a13;
    *(int16_t *)(v2 + 0x4a1a) = (int16_t)a14;
    *(int16_t *)(v2 + 0x4a1c) = (int16_t)a15;
    *(char *)(v2 + 0x4a1e) = (char)a16;
    *(int32_t *)(v2 + 0x4a20) = a17;
    *(int32_t *)(v2 + 0x4a24) = a18;
    *(int32_t *)(v2 + 0x4a28) = a19;
    *(int32_t *)(v2 + 0x4a2c) = a20;
    *(int32_t *)(v2 + 0x4a30) = a21;
    *(char *)(v2 + 0x4a34) = (char)a22;
    *(int32_t *)(v2 + 0x4a38) = a23;
    *(int32_t *)(v2 + 0x4a3c) = a24;
    *(int16_t *)(v2 + 0x4a40) = (int16_t)a25;
    *(int16_t *)(v2 + 0x4a42) = (int16_t)a26;
    *(int32_t *)(v2 + 0x4a44) = a27;
    *(int32_t *)(v2 + 0x4a48) = a28;
    return 0;
}

// Address range: 0x80497cd - 0x804b463
int32_t func_1(void) {
    // 0x80497cd
    int32_t v1; // 0x80497cd
    __x86_get_pc_thunk_ax(v1);
    set_var(9, 0, 1, 0, 248, 0, 0, -10, 0x6de4, 0, 0, -1, -0x21b5743f, 0xffff, 1, 255, -2, 0, -0x63205660, -1, -4, -89, -9, -0x6919bd7e, -0x6ea6, 0x8848, -0x2a2e, -9);
    return 1;
}

// Address range: 0x804b463 - 0x804b853
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804b48c
    int32_t v3; // 0x804b463
    if (v1 == (char **)2) {
        // 0x804b48e
        int32_t v4; // 0x804b463
        int32_t str = *(int32_t *)(v4 + 4); // 0x804b494
        v2 = strcmp((char *)str, (char *)(v3 + 1214)) == 0;
    }
    // 0x804b4b4
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2baa), v3 + 1216, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bae), v3 + 1220, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bb2), v3 + 1225, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bb6), v3 + 1230, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2bba), v3 + 1235, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x302a), v3 + 1240, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2bbc), v3 + 1245, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bbe), v3 + 1250, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2bc2), v3 + 1255, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2bc4), v3 + 1260, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bc6), v3 + 1265, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bca), v3 + 1271, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bce), v3 + 1277, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2bd2), v3 + 1283, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2bd4), v3 + 1289, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2bd6), v3 + 1295, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2bd8), v3 + 1301, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bda), v3 + 1307, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bde), v3 + 1313, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2be2), v3 + 1319, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2be6), v3 + 1325, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bea), v3 + 1331, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2bee), v3 + 1337, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bf2), v3 + 1343, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bf6), v3 + 1349, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2bfa), v3 + 1355, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2bfc), v3 + 1361, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bfe), v3 + 1367, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2c02), v3 + 1373, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2ba6), v2);
    return 0;
}

// Address range: 0x804b853 - 0x804b857
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b853
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
