//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x2bfe));
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
        *(int32_t *)(v2 + 0x4c0a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x4b99 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 0x1afd));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049772
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(char *)(v5 + 0x49f0) = (char)a1;
    *(int16_t *)(v5 + 0x49f2) = (int16_t)a2;
    *(int16_t *)(v5 + 0x49f4) = (int16_t)a3;
    *(int32_t *)(v5 + 0x49f8) = a4;
    *(int32_t *)(v5 + 0x49fc) = a5;
    *(int32_t *)(v5 + 0x4a00) = a6;
    *(int32_t *)(v5 + 0x4a04) = a7;
    *(char *)(v5 + 0x4a08) = (char)a8;
    *(int32_t *)(v5 + 0x4e50) = a9;
    *(int32_t *)(v5 + 0x4a0c) = a10;
    *(int32_t *)(v5 + 0x4a10) = a11;
    *(char *)(v5 + 0x4a14) = (char)a12;
    *(char *)(v5 + 0x4a15) = (char)a13;
    *(char *)(v5 + 0x4a16) = (char)a14;
    *(int32_t *)(v5 + 0x4a18) = a15;
    *(int16_t *)(v5 + 0x4a1c) = (int16_t)a16;
    *(int32_t *)(v5 + 0x4a20) = a17;
    *(char *)(v5 + 0x4a24) = (char)a18;
    *(char *)(v5 + 0x4a25) = (char)a19;
    *(int32_t *)(v5 + 0x4a28) = a20;
    return 0;
}

// Address range: 0x8049772 - 0x804acf6
int32_t func_1(void) {
    // 0x8049772
    int32_t v1; // 0x8049772
    __x86_get_pc_thunk_ax(v1);
    while (true) {
        // continue -> 0x804a714
    }
}

// Address range: 0x804acf6 - 0x804afe0
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804ad1f
    int32_t v3; // 0x804acf6
    if (v1 == (char **)2) {
        // 0x804ad21
        int32_t v4; // 0x804acf6
        int32_t str = *(int32_t *)(v4 + 4); // 0x804ad27
        v2 = strcmp((char *)str, (char *)(v3 + 955)) == 0;
    }
    // 0x804ad47
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(char *)(v3 + 0x3317), v3 + 957, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3319), v3 + 962, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x331b), v3 + 967, v2);
    transparent_crc(*(int32_t *)(v3 + 0x331f), v3 + 972, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3323), v3 + 977, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3327), v3 + 982, v2);
    transparent_crc(*(int32_t *)(v3 + 0x332b), v3 + 987, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x332f), v3 + 992, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3777), v3 + 998, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3333), v3 + 1004, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3337), v3 + 1010, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x333b), v3 + 1016, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x333c), v3 + 1022, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x333d), v3 + 1028, v2);
    transparent_crc(*(int32_t *)(v3 + 0x333f), v3 + 1034, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3343), v3 + 1040, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3347), v3 + 1046, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x334b), v3 + 1052, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x334c), v3 + 1058, v2);
    transparent_crc(*(int32_t *)(v3 + 0x334f), v3 + 1064, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x3313), v2);
    return 0;
}

// Address range: 0x804afe0 - 0x804afe4
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804afe0
    return result;
}

// Address range: 0x804afe4 - 0x804afe8
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804afe4
    int32_t result; // 0x804afe4
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12