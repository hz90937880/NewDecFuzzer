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
    return __x86_get_pc_thunk_ax(v1) + 0x4ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x24ae));
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
        chars_printed = printf((char *)(v1 + 0x13ad));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x80497cb
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2; // 0x8049654
    int32_t v3; // 0x8049654
    int32_t v4; // 0x8049654
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049654
    *(char *)(v5 + 0x39c2) = (char)a1;
    *(int32_t *)(v5 + 0x39c6) = a2;
    *(int16_t *)(v5 + 0x39ca) = (int16_t)a3;
    *(int32_t *)(v5 + 0x39ce) = a4;
    *(char *)(v5 + 0x3e42) = (char)a5;
    *(int32_t *)(v5 + 0x39d2) = a6;
    *(int32_t *)(v5 + 0x39d6) = a7;
    *(char *)(v5 + 0x39da) = (char)a8;
    *(int32_t *)(v5 + 0x39de) = a9;
    *(char *)(v5 + 0x39e2) = (char)a10;
    *(char *)(v5 + 0x3e43) = (char)a11;
    *(int32_t *)(v5 + 0x39e6) = a12;
    *(int16_t *)(v5 + 0x3e44) = (int16_t)a13;
    *(int32_t *)(v5 + 0x39ea) = a14;
    *(char *)(v5 + 0x39ee) = (char)a15;
    *(int32_t *)(v5 + 0x39f2) = a16;
    *(int32_t *)(v5 + 0x39f6) = a17;
    *(int32_t *)(v5 + 0x39fa) = a18;
    *(int16_t *)(v5 + 0x39fe) = (int16_t)a19;
    *(int32_t *)(v5 + 0x3a02) = a20;
    *(int32_t *)(v5 + 0x3a06) = a21;
    *(char *)(v5 + 0x3a0a) = (char)a22;
    *(int16_t *)(v5 + 0x3a0c) = (int16_t)a23;
    return 0;
}

// Address range: 0x80497cb - 0x804a53b
int32_t func_1(void) {
    // 0x80497cb
    int32_t v1; // 0x80497cb
    __x86_get_pc_thunk_ax(v1);
    set_var(0, -0x4205209e, 0, -0x19e8f6e, 0, 1, -0x38a7fe63, -3, 0x7422e233, 86, 0, -1, 0, -0x36fcd91d, 253, 0x772bc216, -0x30e7a9d7, 1, 7, 5, 0xc6443e6, 255, 0xd274);
    return 7;
}

// Address range: 0x804a53b - 0x804a897
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a564
    int32_t v3; // 0x804a53b
    if (v1 == (char **)2) {
        // 0x804a566
        int32_t v4; // 0x804a53b
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a56c
        v2 = strcmp((char *)str, (char *)(v3 + 1066)) == 0;
    }
    // 0x804a58c
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(char *)(v3 + 0x2ad2), v3 + 1068, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ad6), v3 + 1072, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2ada), v3 + 1077, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ade), v3 + 1082, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2f52), v3 + 1087, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ae2), v3 + 1092, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ae6), v3 + 1097, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2aea), v3 + 1102, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2aee), v3 + 1107, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2af2), v3 + 1112, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2f53), v3 + 1117, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2af6), v3 + 1122, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2f54), v3 + 1127, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2afa), v3 + 1133, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2afe), v3 + 1139, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b02), v3 + 1145, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b06), v3 + 1151, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b0a), v3 + 1157, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b0e), v3 + 1163, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b10), v3 + 1169, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b12), v3 + 1175, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b16), v3 + 1181, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b1a), v3 + 1187, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b1c), v3 + 1193, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2ace), v2);
    return 0;
}

// Address range: 0x804a897 - 0x804a89b
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a897
    return result;
}

// Address range: 0x804a89b - 0x804a89f
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804a89b
    int32_t result; // 0x804a89b
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
