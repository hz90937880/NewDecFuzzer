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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x2cbe));
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
        chars_printed = printf((char *)(v1 + 0x1bbd));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80497bc
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(char *)(v5 + 0x49f0) = (char)a1;
    *(int16_t *)(v5 + 0x49f2) = (int16_t)a2;
    *(int32_t *)(v5 + 0x49f4) = a3;
    *(int16_t *)(v5 + 0x49f8) = (int16_t)a4;
    *(char *)(v5 + 0x49fa) = (char)a5;
    *(int16_t *)(v5 + 0x49fc) = (int16_t)a6;
    *(int32_t *)(v5 + 0x4a00) = a7;
    *(char *)(v5 + 0x4a04) = (char)a8;
    *(int32_t *)(v5 + 0x4a08) = a9;
    *(int16_t *)(v5 + 0x4a0c) = (int16_t)a10;
    *(int32_t *)(v5 + 0x4a10) = a11;
    *(int32_t *)(v5 + 0x4a14) = a12;
    *(int32_t *)(v5 + 0x4e70) = a13;
    *(int16_t *)(v5 + 0x4a18) = (int16_t)a14;
    *(int32_t *)(v5 + 0x4a1c) = a15;
    *(char *)(v5 + 0x4a20) = (char)a16;
    *(int32_t *)(v5 + 0x4a24) = a17;
    *(char *)(v5 + 0x4a28) = (char)a18;
    *(int32_t *)(v5 + 0x4a2c) = a19;
    *(int32_t *)(v5 + 0x4a30) = a20;
    *(int32_t *)(v5 + 0x4a34) = a21;
    *(int32_t *)(v5 + 0x4a38) = a22;
    *(int32_t *)(v5 + 0x4a3c) = a23;
    *(int32_t *)(v5 + 0x4a40) = a24;
    *(int32_t *)(v5 + 0x4a44) = a25;
    *(int16_t *)(v5 + 0x4a48) = (int16_t)a26;
    return 0;
}

// Address range: 0x80497bc - 0x804ad14
int32_t func_1(void) {
    // 0x8049b01
    int32_t v1; // 0x80497bc
    __x86_get_pc_thunk_ax(v1);
    set_var(109, 0, 0, 24, 23, 1, 56, 1, -0x51dc9e52, 0x22bb, -0x71f2f251, 3798, 0, 9, -0x3a75aba7, -1, -0x1488fe6f, 3, 6, 0x5a8c6fe1, -1, 1, -1, -6, -4, 0xecff);
    return 0x22bb;
}

// Address range: 0x804ad14 - 0x804b0a8
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804ad3d
    int32_t v3; // 0x804ad14
    if (v1 == (char **)2) {
        // 0x804ad3f
        int32_t v4; // 0x804ad14
        int32_t str = *(int32_t *)(v4 + 4); // 0x804ad45
        v2 = strcmp((char *)str, (char *)(v3 + 1117)) == 0;
    }
    // 0x804ad65
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(char *)(v3 + 0x32f9), v3 + 1119, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32fb), v3 + 1123, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32fd), v3 + 1127, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3301), v3 + 1132, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3303), v3 + 1137, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3305), v3 + 1142, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3309), v3 + 1147, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x330d), v3 + 1152, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3311), v3 + 1157, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3315), v3 + 1162, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3319), v3 + 1167, v2);
    transparent_crc(*(int32_t *)(v3 + 0x331d), v3 + 1173, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3779), v3 + 1179, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3321), v3 + 1185, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3325), v3 + 1191, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3329), v3 + 1197, v2);
    transparent_crc(*(int32_t *)(v3 + 0x332d), v3 + 1203, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3331), v3 + 1209, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3335), v3 + 1215, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3339), v3 + 1221, v2);
    transparent_crc(*(int32_t *)(v3 + 0x333d), v3 + 1227, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3341), v3 + 1233, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3345), v3 + 1239, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3349), v3 + 1245, v2);
    transparent_crc(*(int32_t *)(v3 + 0x334d), v3 + 1251, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3351), v3 + 1257, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x32f5), v2);
    return 0;
}

// Address range: 0x804b0a8 - 0x804b0ac
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b0a8
    return result;
}

// Address range: 0x804b0ac - 0x804b0b0
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804b0ac
    int32_t result; // 0x804b0ac
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12