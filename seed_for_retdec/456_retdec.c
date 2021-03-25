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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x199e));
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
        *(int32_t *)(v2 + 0x2c0a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x2b99 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 2205));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804972b
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(char *)(v5 + 0x29f0) = (char)a1;
    *(int16_t *)(v5 + 0x29f2) = (int16_t)a2;
    *(char *)(v5 + 0x29f4) = (char)a3;
    *(char *)(v5 + 0x29f5) = (char)a4;
    *(int16_t *)(v5 + 0x29f6) = (int16_t)a5;
    *(int16_t *)(v5 + 0x29f8) = (int16_t)a6;
    *(int16_t *)(v5 + 0x29fa) = (int16_t)a7;
    *(int32_t *)(v5 + 0x29fc) = a8;
    *(int16_t *)(v5 + 0x2a00) = (int16_t)a9;
    *(int32_t *)(v5 + 0x2a04) = a10;
    *(int32_t *)(v5 + 0x2a08) = a11;
    *(int32_t *)(v5 + 0x2a0c) = a12;
    *(int16_t *)(v5 + 0x2a10) = (int16_t)a13;
    return 0;
}

// Address range: 0x804972b - 0x8049b6a
int32_t func_1(void) {
    // 0x804972b
    int32_t v1; // 0x804972b
    __x86_get_pc_thunk_ax(v1);
    set_var(101, 101, -3, 249, -0x31fe, 2, 2, -0x67afe35c, -7, 6, -0x3371a376, 0x3b2d9701, 0xaf0a);
    return 0xaf0a;
}

// Address range: 0x8049b6a - 0x8049d7e
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049b93
    int32_t v3; // 0x8049b6a
    if (v1 == (char **)2) {
        // 0x8049b95
        int32_t v4; // 0x8049b6a
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049b9b
        v2 = strcmp((char *)str, (char *)(v3 + 743)) == 0;
    }
    // 0x8049bbb
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(char *)(v3 + 0x24a3), v3 + 745, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x24a5), v3 + 749, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x24a7), v3 + 753, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x24a8), v3 + 757, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x24a9), v3 + 762, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x24ab), v3 + 767, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x24ad), v3 + 772, v2);
    transparent_crc(*(int32_t *)(v3 + 0x24af), v3 + 777, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x24b3), v3 + 782, v2);
    transparent_crc(*(int32_t *)(v3 + 0x24b7), v3 + 787, v2);
    transparent_crc(*(int32_t *)(v3 + 0x24bb), v3 + 792, v2);
    transparent_crc(*(int32_t *)(v3 + 0x24bf), v3 + 797, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x24c3), v3 + 802, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x249f), v2);
    return 0;
}

// Address range: 0x8049d7e - 0x8049d82
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x8049d7e
    return result;
}

// Address range: 0x8049d82 - 0x8049d86
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x8049d82
    int32_t result; // 0x8049d82
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12