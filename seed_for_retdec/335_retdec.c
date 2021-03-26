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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x206e));
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
        *(int32_t *)(v2 + 0x3c0a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x3b99 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 3949));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804975c
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x39f0) = a1;
    *(int32_t *)(v2 + 0x3e50) = a2;
    *(int32_t *)(v2 + 0x39f4) = a3;
    *(int16_t *)(v2 + 0x3e54) = (int16_t)a4;
    *(int32_t *)(v2 + 0x39f8) = a5;
    *(char *)(v2 + 0x39fc) = (char)a6;
    *(int32_t *)(v2 + 0x3a00) = a7;
    *(int32_t *)(v2 + 0x3a04) = a8;
    *(int32_t *)(v2 + 0x3a08) = a9;
    *(char *)(v2 + 0x3e56) = (char)a10;
    *(char *)(v2 + 0x3a0c) = (char)a11;
    *(char *)(v2 + 0x3a0d) = (char)a12;
    *(int32_t *)(v2 + 0x3a10) = a13;
    *(int16_t *)(v2 + 0x3a14) = (int16_t)a14;
    *(char *)(v2 + 0x3a16) = (char)a15;
    *(int32_t *)(v2 + 0x3a18) = a16;
    *(int32_t *)(v2 + 0x3a1c) = a17;
    *(int32_t *)(v2 + 0x3a20) = a18;
    *(int32_t *)(v2 + 0x3a24) = a19;
    *(char *)(v2 + 0x3e57) = (char)a20;
    *(int32_t *)(v2 + 0x3a28) = a21;
    return 0;
}

// Address range: 0x804975c - 0x804a15b
int32_t func_1(void) {
    // 0x804975c
    int32_t v1; // 0x804975c
    __x86_get_pc_thunk_ax(v1);
    set_var(-10, 0, 0, 1, 0, 31, 2, 0x2c87, -9, 0, 111, -23, 0x72e106ed, 2995, 6, -1, -1, -1, 0x1ead67a6, 0, 0x568f5a85);
    return 0;
}

// Address range: 0x804a15b - 0x804a455
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a184
    int32_t v3; // 0x804a15b
    if (v1 == (char **)2) {
        // 0x804a186
        int32_t v4; // 0x804a15b
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a18c
        v2 = strcmp((char *)str, (char *)(v3 + 966)) == 0;
    }
    // 0x804a1ac
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2eb2), v3 + 968, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3312), v3 + 972, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2eb6), v3 + 976, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3316), v3 + 980, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2eba), v3 + 985, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ebe), v3 + 990, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ec2), v3 + 995, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ec6), v3 + 1000, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2eca), v3 + 1006, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3318), v3 + 1012, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ece), v3 + 1018, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ecf), v3 + 1024, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ed2), v3 + 1030, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2ed6), v3 + 1036, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ed8), v3 + 1042, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2eda), v3 + 1048, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ede), v3 + 1054, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ee2), v3 + 1060, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ee6), v3 + 1066, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3319), v3 + 1072, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2eea), v3 + 1078, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2eae), v2);
    return 0;
}

// Address range: 0x804a455 - 0x804a459
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a455
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11