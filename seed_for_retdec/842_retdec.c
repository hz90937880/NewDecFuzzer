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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1d7e));
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
        chars_printed = printf((char *)(v1 + 3197));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804978d
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(char *)(v5 + 0x39f0) = (char)a1;
    *(int16_t *)(v5 + 0x39f2) = (int16_t)a2;
    *(int16_t *)(v5 + 0x39f4) = (int16_t)a3;
    *(int16_t *)(v5 + 0x39f6) = (int16_t)a4;
    *(int32_t *)(v5 + 0x39f8) = a5;
    *(char *)(v5 + 0x39fc) = (char)a6;
    *(int16_t *)(v5 + 0x39fe) = (int16_t)a7;
    *(int32_t *)(v5 + 0x3a00) = a8;
    *(char *)(v5 + 0x3a04) = (char)a9;
    *(int32_t *)(v5 + 0x3a08) = a10;
    *(int32_t *)(v5 + 0x3a0c) = a11;
    *(int32_t *)(v5 + 0x3a10) = a12;
    *(int32_t *)(v5 + 0x3a14) = a13;
    *(char *)(v5 + 0x3e70) = (char)a14;
    *(char *)(v5 + 0x3a18) = (char)a15;
    *(int32_t *)(v5 + 0x3a1c) = a16;
    *(int16_t *)(v5 + 0x3a20) = (int16_t)a17;
    *(int32_t *)(v5 + 0x3a24) = a18;
    *(int32_t *)(v5 + 0x3a28) = a19;
    *(int32_t *)(v5 + 0x3a2c) = a20;
    *(char *)(v5 + 0x3a30) = (char)a21;
    return 0;
}

// Address range: 0x804978d - 0x8049e5e
int32_t func_1(void) {
    // 0x804978d
    int32_t v1; // 0x804978d
    __x86_get_pc_thunk_ax(v1);
    set_var(84, -0x6799, 0, 0xfff4, -0x2fae66dc, -15, -1, 0x38b1aae8, 1, 84, 0x77fa4877, -1, 0x19e39778, 0, -1, 0x6f85e4ff, 3, 0xfea248f, -1, -0x184fefe6, 38);
    return 84;
}

// Address range: 0x8049e5e - 0x804a160
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049e87
    int32_t v3; // 0x8049e5e
    if (v1 == (char **)2) {
        // 0x8049e89
        int32_t v4; // 0x8049e5e
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049e8f
        v2 = strcmp((char *)str, (char *)(v3 + 979)) == 0;
    }
    // 0x8049eaf
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(char *)(v3 + 0x31af), v3 + 981, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31b1), v3 + 985, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31b3), v3 + 990, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31b5), v3 + 995, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31b7), v3 + 1000, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31bb), v3 + 1005, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31bd), v3 + 1010, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31bf), v3 + 1015, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31c3), v3 + 1020, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31c7), v3 + 1026, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31cb), v3 + 1032, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31cf), v3 + 1038, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31d3), v3 + 1044, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x362f), v3 + 1050, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31d7), v3 + 1056, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31db), v3 + 1062, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31df), v3 + 1068, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31e3), v3 + 1074, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31e7), v3 + 1080, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31eb), v3 + 1086, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31ef), v3 + 1092, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x31ab), v2);
    return 0;
}

// Address range: 0x804a160 - 0x804a164
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a160
    return result;
}

// Address range: 0x804a164 - 0x804a168
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804a164
    int32_t result; // 0x804a164
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
