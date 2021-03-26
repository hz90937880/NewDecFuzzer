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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1b4e));
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
        chars_printed = printf((char *)(v1 + 2637));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804973e
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x29f0) = a1;
    *(int32_t *)(v2 + 0x29f4) = a2;
    *(int32_t *)(v2 + 0x29f8) = a3;
    *(char *)(v2 + 0x29fc) = (char)a4;
    *(int32_t *)(v2 + 0x2a00) = a5;
    *(int32_t *)(v2 + 0x2a04) = a6;
    *(int32_t *)(v2 + 0x2a08) = a7;
    *(int32_t *)(v2 + 0x2a0c) = a8;
    *(int32_t *)(v2 + 0x2a10) = a9;
    *(int16_t *)(v2 + 0x2a14) = (int16_t)a10;
    *(int32_t *)(v2 + 0x2a18) = a11;
    *(char *)(v2 + 0x2a1c) = (char)a12;
    *(int32_t *)(v2 + 0x2a20) = a13;
    *(int16_t *)(v2 + 0x2a24) = (int16_t)a14;
    *(int32_t *)(v2 + 0x2a28) = a15;
    *(char *)(v2 + 0x2a2c) = (char)a16;
    *(int32_t *)(v2 + 0x2a30) = a17;
    *(int16_t *)(v2 + 0x2a34) = (int16_t)a18;
    *(char *)(v2 + 0x2a36) = (char)a19;
    return 0;
}

// Address range: 0x804973e - 0x8049c72
int32_t func_1(void) {
    // 0x804973e
    int32_t v1; // 0x804973e
    __x86_get_pc_thunk_ax(v1);
    int16_t v2 = -1603;
    char v3; // 0x804973e
    for (int32_t i = 0; i > -20; i -= 5) {
        int32_t v4 = 0; // 0x8049b09
        int16_t v5 = -11;
        v3 = 0;
        int16_t v6 = v5 - 1; // 0x8049b03
        while (v5 != -26) {
            // 0x8049afe
            v5 = v6;
            v2 = 0;
            v3 = 1;
            v6 = v5 - 1;
        }
        // 0x8049b09
        v4++;
        char v7 = v3; // 0x8049b11
        while (v4 != 28) {
            // 0x8049afe
            v5 = -11;
            v3 = v7;
            v6 = v5 - 1;
            while (v5 != -26) {
                // 0x8049afe
                v5 = v6;
                v2 = 0;
                v3 = 1;
                v6 = v5 - 1;
            }
            // 0x8049b09
            v4++;
            v7 = v3;
        }
    }
    // 0x8049b88
    set_var(-52, -20, (int32_t)(v3 & 111), -2, -80, 8, -0x47a958a7, 0x122e7dfe, 28, (int32_t)v2, 1, 176, 176, -26, 1, 42, 0x1fe9e00, 0xfffe, 149);
    return 42;
}

// Address range: 0x8049c72 - 0x8049f2e
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049c9b
    int32_t v3; // 0x8049c72
    if (v1 == (char **)2) {
        // 0x8049c9d
        int32_t v4; // 0x8049c72
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049ca3
        v2 = strcmp((char *)str, (char *)(v3 + 911)) == 0;
    }
    // 0x8049cc3
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x239b), v3 + 913, v2);
    transparent_crc(*(int32_t *)(v3 + 0x239f), v3 + 917, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23a3), v3 + 921, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x23a7), v3 + 925, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23ab), v3 + 930, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23af), v3 + 935, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23b3), v3 + 940, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23b7), v3 + 945, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23bb), v3 + 950, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x23bf), v3 + 955, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23c3), v3 + 960, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x23c7), v3 + 965, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23cb), v3 + 970, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x23cf), v3 + 975, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23d3), v3 + 981, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x23d7), v3 + 987, v2);
    transparent_crc(*(int32_t *)(v3 + 0x23db), v3 + 993, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x23df), v3 + 999, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x23e1), v3 + 1005, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2397), v2);
    return 0;
}

// Address range: 0x8049f2e - 0x8049f32
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049f2e
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
