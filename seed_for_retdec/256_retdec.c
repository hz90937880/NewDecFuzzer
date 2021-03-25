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
    return __x86_get_pc_thunk_ax(v1) + 0x3ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1a8e));
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
        *(int32_t *)(v2 + 0x2c2a + 4 * i) = v5;
    }
    // 0x80494d8
    return v2 + 0x2b8a;
}

// Address range: 0x80494db - 0x8049522
int32_t crc32_byte(int32_t a1) {
    // 0x80494db
    int32_t v1; // 0x80494db
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x80494e2
    int32_t * v3 = (int32_t *)(v2 + 0x2b39); // 0x80494f2
    uint32_t v4 = *v3; // 0x80494f2
    *v3 = *(int32_t *)(v2 + 0x2bb9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
    return v2 + 0x2b19;
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
        chars_printed = printf((char *)(v1 + 2445));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804981d
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int16_t *)(v5 + 0x29f0) = (int16_t)a1;
    *(int32_t *)(v5 + 0x29f4) = a2;
    *(int32_t *)(v5 + 0x29f8) = a3;
    *(char *)(v5 + 0x29fc) = (char)a4;
    *(int32_t *)(v5 + 0x2a00) = a5;
    *(char *)(v5 + 0x2a04) = (char)a6;
    *(int16_t *)(v5 + 0x2a06) = (int16_t)a7;
    *(int16_t *)(v5 + 0x2a08) = (int16_t)a8;
    *(int32_t *)(v5 + 0x2a0c) = a9;
    *(char *)(v5 + 0x2a10) = (char)a10;
    *(char *)(v5 + 0x2e70) = (char)a11;
    *(int16_t *)(v5 + 0x2a12) = (int16_t)a12;
    *(char *)(v5 + 0x2a14) = (char)a13;
    *(int32_t *)(v5 + 0x2a18) = a14;
    *(int16_t *)(v5 + 0x2a1c) = (int16_t)a15;
    *(char *)(v5 + 0x2a1e) = (char)a16;
    *(int32_t *)(v5 + 0x2a20) = a17;
    *(int32_t *)(v5 + 0x2a24) = a18;
    *(int16_t *)(v5 + 0x2a28) = (int16_t)a19;
    *(int32_t *)(v5 + 0x2a2c) = a20;
    *(int32_t *)(v5 + 0x2a30) = a21;
    *(char *)(v5 + 0x2a34) = (char)a22;
    *(char *)(v5 + 0x2a35) = (char)a23;
    *(int16_t *)(v5 + 0x2a36) = (int16_t)a24;
    *(char *)(v5 + 0x2a38) = (char)a25;
    *(int32_t *)(v5 + 0x2a3c) = a26;
    *(int32_t *)(v5 + 0x2a40) = a27;
    *(int32_t *)(v5 + 0x2e74) = a28;
    return 0;
}

// Address range: 0x804981d - 0x8049a70
int32_t func_1(void) {
    // 0x804981d
    int32_t v1; // 0x804981d
    __x86_get_pc_thunk_ax(v1);
    set_var(0x2eac, 0x9884cb8, 0, 0, 0x3a099773, 51, -0x67f6, 0xfffb, -5, -71, 0, 0xffff, -53, -4, 0x6913, -10, -0x64490a3e, -0x633d8aa8, 1, 6, -0x78b83b17, 248, 100, 0xffff, 255, 1, 0x62333d65, 0);
    return 0x9884cb8;
}

// Address range: 0x8049a70 - 0x8049e6c
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049a99
    int32_t v3; // 0x8049a70
    if (v1 == (char **)2) {
        // 0x8049a9b
        int32_t v4; // 0x8049a70
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049aa1
        v2 = strcmp((char *)str, (char *)(v3 + 1234)) == 0;
    }
    // 0x8049ac1
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x259d), v3 + 1236, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25a1), v3 + 1240, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25a5), v3 + 1245, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x25a9), v3 + 1250, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25ad), v3 + 1255, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x25b1), v3 + 1260, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x25b3), v3 + 1265, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x25b5), v3 + 1270, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25b9), v3 + 1275, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x25bd), v3 + 1280, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2a1d), v3 + 1286, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x25bf), v3 + 1292, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x25c1), v3 + 1298, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25c5), v3 + 1304, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x25c9), v3 + 1310, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x25cb), v3 + 1316, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25cd), v3 + 1322, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25d1), v3 + 1328, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x25d5), v3 + 1334, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25d9), v3 + 1340, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25dd), v3 + 1346, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x25e1), v3 + 1352, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x25e2), v3 + 1358, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x25e3), v3 + 1364, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x25e5), v3 + 1370, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25e9), v3 + 1376, v2);
    transparent_crc(*(int32_t *)(v3 + 0x25ed), v3 + 1382, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2a21), v3 + 1388, v2);
    transparent_crc(-2, v3 + 1394, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2599), v2);
    return 0;
}

// Address range: 0x8049e6c - 0x8049e70
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049e6c
    return result;
}

// Address range: 0x8049e70 - 0x8049e74
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x8049e70
    int32_t result; // 0x8049e70
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12