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
    return __x86_get_pc_thunk_ax(v1) + 0x4ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1ece));
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
        chars_printed = printf((char *)(v1 + 3533));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049786
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x39f0) = a1;
    *(int32_t *)(v2 + 0x39f4) = a2;
    *(int32_t *)(v2 + 0x39f8) = a3;
    *(int16_t *)(v2 + 0x39fc) = (int16_t)a4;
    *(int32_t *)(v2 + 0x3a00) = a5;
    *(int16_t *)(v2 + 0x3e70) = (int16_t)a6;
    *(int32_t *)(v2 + 0x3a04) = a7;
    *(char *)(v2 + 0x3a08) = (char)a8;
    *(int32_t *)(v2 + 0x3a0c) = a9;
    *(int16_t *)(v2 + 0x3a10) = (int16_t)a10;
    *(int32_t *)(v2 + 0x3a14) = a11;
    *(int16_t *)(v2 + 0x3a18) = (int16_t)a12;
    *(int32_t *)(v2 + 0x3a1c) = a13;
    *(int32_t *)(v2 + 0x3a20) = a14;
    *(int16_t *)(v2 + 0x3a24) = (int16_t)a15;
    *(char *)(v2 + 0x3e72) = (char)a16;
    *(int32_t *)(v2 + 0x3a28) = a17;
    *(int16_t *)(v2 + 0x3a2c) = (int16_t)a18;
    *(int32_t *)(v2 + 0x3a30) = a19;
    *(int32_t *)(v2 + 0x3a34) = a20;
    *(int32_t *)(v2 + 0x3a38) = a21;
    *(int32_t *)(v2 + 0x3a3c) = a22;
    *(int16_t *)(v2 + 0x3a40) = (int16_t)a23;
    return 0;
}

// Address range: 0x8049786 - 0x8049f78
int32_t func_1(void) {
    // 0x8049ec6
    int32_t v1; // 0x8049786
    __x86_get_pc_thunk_ax(v1);
    set_var(-0x2415addd, -0x1c21, -125, 1, -2, 0, 0x46159332, 1, 1, 0xfff7, 3, 0x60fc, 1, -0x36a55651, 0x4d99, 0, 1, 9, -1, 0x24fe5f2f, 0x69208027, 0x747af82b, 0x1904);
    return 1;
}

// Address range: 0x8049f78 - 0x804a2b8
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049fa1
    int32_t v3; // 0x8049f78
    if (v1 == (char **)2) {
        // 0x8049fa3
        int32_t v4; // 0x8049f78
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049fa9
        v2 = strcmp((char *)str, (char *)(v3 + 1033)) == 0;
    }
    // 0x8049fc9
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x3095), v3 + 1035, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3099), v3 + 1040, v2);
    transparent_crc(*(int32_t *)(v3 + 0x309d), v3 + 1045, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30a1), v3 + 1050, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30a5), v3 + 1055, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3515), v3 + 1060, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30a9), v3 + 1065, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30ad), v3 + 1070, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30b1), v3 + 1075, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30b5), v3 + 1080, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30b9), v3 + 1086, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30bd), v3 + 1092, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30c1), v3 + 1098, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30c5), v3 + 1104, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30c9), v3 + 1110, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3517), v3 + 1116, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30cd), v3 + 1122, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30d1), v3 + 1128, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30d5), v3 + 1134, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30d9), v3 + 1140, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30dd), v3 + 1146, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30e1), v3 + 1152, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30e5), v3 + 1158, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x3091), v2);
    return 0;
}

// Address range: 0x804a2b8 - 0x804a2bc
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a2b8
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
