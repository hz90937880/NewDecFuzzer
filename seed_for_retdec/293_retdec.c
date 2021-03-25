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
    return __x86_get_pc_thunk_ax(v1) + 0x5ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x2c9e));
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
        chars_printed = printf((char *)(v1 + 0x1b9d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80497bd
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x49f0) = a1;
    *(int16_t *)(v5 + 0x49f4) = (int16_t)a2;
    *(int32_t *)(v5 + 0x49f8) = a3;
    *(char *)(v5 + 0x49fc) = (char)a4;
    *(int32_t *)(v5 + 0x4a00) = a5;
    *(int16_t *)(v5 + 0x4a04) = (int16_t)a6;
    *(int16_t *)(v5 + 0x4a06) = (int16_t)a7;
    *(int32_t *)(v5 + 0x4a08) = a8;
    *(int32_t *)(v5 + 0x4a0c) = a9;
    *(int32_t *)(v5 + 0x4a10) = a10;
    *(int32_t *)(v5 + 0x4a14) = a11;
    *(char *)(v5 + 0x4a18) = (char)a12;
    *(char *)(v5 + 0x4a19) = (char)a13;
    *(int32_t *)(v5 + 0x4a1c) = a14;
    *(char *)(v5 + 0x4a20) = (char)a15;
    *(char *)(v5 + 0x4e70) = (char)a16;
    *(int16_t *)(v5 + 0x4a22) = (int16_t)a17;
    *(int16_t *)(v5 + 0x4a24) = (int16_t)a18;
    *(int32_t *)(v5 + 0x4a28) = a19;
    *(char *)(v5 + 0x4a2c) = (char)a20;
    *(char *)(v5 + 0x4a2d) = (char)a21;
    *(int32_t *)(v5 + 0x4a30) = a22;
    *(int16_t *)(v5 + 0x4a34) = (int16_t)a23;
    return 0;
}

// Address range: 0x80497bd - 0x804ad40
int32_t func_1(void) {
    // 0x80497bd
    int32_t v1; // 0x80497bd
    __x86_get_pc_thunk_ax(v1);
    set_var(0xe834ab4, -2157, -28, 0, 29, 0x3a2e, -1, -19, 0x133e8a83, 0x27ce1fa2, -19, -19, -61, 8, 229, 0, 0x6dae, -0x10f8, 0x6cde, 108, 202, 0x7cba8ab6, 0xaf00);
    return 0xe834ab4;
}

// Address range: 0x804ad40 - 0x804b080
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804ad69
    int32_t v3; // 0x804ad40
    if (v1 == (char **)2) {
        // 0x804ad6b
        int32_t v4; // 0x804ad40
        int32_t str = *(int32_t *)(v4 + 4); // 0x804ad71
        v2 = strcmp((char *)str, (char *)(v3 + 1041)) == 0;
    }
    // 0x804ad91
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x32cd), v3 + 1043, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32d1), v3 + 1048, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32d5), v3 + 1053, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32d9), v3 + 1058, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32dd), v3 + 1063, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32e1), v3 + 1068, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32e3), v3 + 1073, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32e5), v3 + 1078, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32e9), v3 + 1083, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32ed), v3 + 1089, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32f1), v3 + 1095, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32f5), v3 + 1101, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32f6), v3 + 1107, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32f9), v3 + 1113, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32fd), v3 + 1119, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x374d), v3 + 1125, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32ff), v3 + 1131, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3301), v3 + 1137, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3305), v3 + 1143, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3309), v3 + 1149, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x330a), v3 + 1155, v2);
    transparent_crc(*(int32_t *)(v3 + 0x330d), v3 + 1161, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3311), v3 + 1167, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x32c9), v2);
    return 0;
}

// Address range: 0x804b080 - 0x804b084
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b080
    return result;
}

// Address range: 0x804b084 - 0x804b088
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804b084
    int32_t result; // 0x804b084
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12