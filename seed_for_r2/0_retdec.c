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
    return __x86_get_pc_thunk_ax(v1) + 0x4ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x286e));
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
        *(int32_t *)(v2 + 0x3c4a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x3bd9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 0x176d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80497ab
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int16_t *)(v2 + 0x39f0) = (int16_t)a1;
    *(int32_t *)(v2 + 0x39f4) = a2;
    *(int32_t *)(v2 + 0x39f8) = a3;
    *(int32_t *)(v2 + 0x39fc) = a4;
    *(int32_t *)(v2 + 0x3a00) = a5;
    *(char *)(v2 + 0x3e90) = (char)a6;
    *(int32_t *)(v2 + 0x3e94) = a7;
    *(int32_t *)(v2 + 0x3a04) = a8;
    *(int16_t *)(v2 + 0x3a08) = (int16_t)a9;
    *(int32_t *)(v2 + 0x3a0c) = a10;
    *(int32_t *)(v2 + 0x3a10) = a11;
    *(char *)(v2 + 0x3a14) = (char)a12;
    *(int32_t *)(v2 + 0x3a18) = a13;
    *(char *)(v2 + 0x3a1c) = (char)a14;
    *(int32_t *)(v2 + 0x3e98) = a15;
    *(int32_t *)(v2 + 0x3a20) = a16;
    *(int32_t *)(v2 + 0x3a24) = a17;
    *(int32_t *)(v2 + 0x3a28) = a18;
    *(int32_t *)(v2 + 0x3a2c) = a19;
    *(int32_t *)(v2 + 0x3a30) = a20;
    *(int32_t *)(v2 + 0x3a34) = a21;
    *(int32_t *)(v2 + 0x3a38) = a22;
    *(char *)(v2 + 0x3a3c) = (char)a23;
    *(int32_t *)(v2 + 0x3a40) = a24;
    *(int16_t *)(v2 + 0x3a44) = (int16_t)a25;
    *(char *)(v2 + 0x3a46) = (char)a26;
    *(int32_t *)(v2 + 0x3a48) = a27;
    *(char *)(v2 + 0x3a4c) = (char)a28;
    return 0;
}

// Address range: 0x80497ab - 0x804a885
int32_t func_1(void) {
    // 0x80497ab
    int32_t v1; // 0x80497ab
    __x86_get_pc_thunk_ax(v1);
    set_var(133, 0x5f70, -0x757ca5d9, -0x6a5e, -0x315b, 0, 45, 1, 0x7962, 1, 9, 247, 0x617cc220, 1, 0, 0x340ca8d4, 0x2000, -1, -25, 0x67052121, -1, 0x6eeb3931, 255, 5, 1, 9, 2, 82);
    return 2;
}

// Address range: 0x804a885 - 0x804ac51
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a8ae
    int32_t v3; // 0x804a885
    if (v1 == (char **)2) {
        // 0x804a8b0
        int32_t v4; // 0x804a885
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a8b6
        v2 = strcmp((char *)str, (char *)(v3 + 1180)) == 0;
    }
    // 0x804a8d6
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2788), v3 + 1182, v2);
    transparent_crc(*(int32_t *)(v3 + 0x278c), v3 + 1186, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2790), v3 + 1190, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2794), v3 + 1195, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2798), v3 + 1200, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2c28), v3 + 1205, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2c2c), v3 + 1210, v2);
    transparent_crc(*(int32_t *)(v3 + 0x279c), v3 + 1215, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x27a0), v3 + 1220, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27a4), v3 + 1226, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27a8), v3 + 1232, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27ac), v3 + 1238, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27b0), v3 + 1244, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27b4), v3 + 1250, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2c30), v3 + 1256, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27b8), v3 + 1262, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27bc), v3 + 1268, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27c0), v3 + 1274, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27c4), v3 + 1280, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27c8), v3 + 1286, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27cc), v3 + 1292, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27d0), v3 + 1298, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27d4), v3 + 1304, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27d8), v3 + 1310, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x27dc), v3 + 1316, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27de), v3 + 1322, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27e0), v3 + 1328, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27e4), v3 + 1334, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2784), v2);
    return 0;
}

// Address range: 0x804ac51 - 0x804ac55
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804ac51
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
