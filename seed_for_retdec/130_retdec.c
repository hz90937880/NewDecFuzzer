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
    return __x86_get_pc_thunk_ax(v1) + 0x4ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x291e));
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
        chars_printed = printf((char *)(v1 + 0x181d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80497d8
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x39f0) = a1;
    *(int32_t *)(v5 + 0x39f4) = a2;
    *(char *)(v5 + 0x39f8) = (char)a3;
    *(int32_t *)(v5 + 0x39fc) = a4;
    *(int32_t *)(v5 + 0x3a00) = a5;
    *(int16_t *)(v5 + 0x3a04) = (int16_t)a6;
    *(int32_t *)(v5 + 0x3a08) = a7;
    *(int16_t *)(v5 + 0x3a0c) = (int16_t)a8;
    *(int32_t *)(v5 + 0x3a10) = a9;
    *(int32_t *)(v5 + 0x3a14) = a10;
    *(int32_t *)(v5 + 0x3a18) = a11;
    *(char *)(v5 + 0x3a1c) = (char)a12;
    *(char *)(v5 + 0x3a1d) = (char)a13;
    *(int32_t *)(v5 + 0x3e70) = a14;
    *(int32_t *)(v5 + 0x3e74) = a15;
    *(int16_t *)(v5 + 0x3a1e) = (int16_t)a16;
    *(int16_t *)(v5 + 0x3e78) = (int16_t)a17;
    *(int32_t *)(v5 + 0x3a20) = a18;
    *(int32_t *)(v5 + 0x3a24) = a19;
    *(char *)(v5 + 0x3a28) = (char)a20;
    *(int16_t *)(v5 + 0x3a2a) = (int16_t)a21;
    *(int16_t *)(v5 + 0x3a2c) = (int16_t)a22;
    *(char *)(v5 + 0x3a2e) = (char)a23;
    *(char *)(v5 + 0x3a2f) = (char)a24;
    *(char *)(v5 + 0x3a30) = (char)a25;
    *(int32_t *)(v5 + 0x3a34) = a26;
    return 0;
}

// Address range: 0x80497d8 - 0x804a969
int32_t func_1(void) {
    // 0x80497d8
    int32_t v1; // 0x80497d8
    __x86_get_pc_thunk_ax(v1);
    set_var(0x24cdb8fa, -4, 1, -9, 1, 0x8c84, 11, -5, -1, -0x635228d1, -1, -4, -101, 0, 0, 0x9a5c, 0, 0x350f6e7e, -0x1e65, 255, 3, 9, 53, 9, 1, 1);
    return 125;
}

// Address range: 0x804a969 - 0x804ad03
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a992
    int32_t v3; // 0x804a969
    if (v1 == (char **)2) {
        // 0x804a994
        int32_t v4; // 0x804a969
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a99a
        v2 = strcmp((char *)str, (char *)(v3 + 1128)) == 0;
    }
    // 0x804a9ba
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x26a4), v3 + 1130, v2);
    transparent_crc(*(int32_t *)(v3 + 0x26a8), v3 + 1134, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x26ac), v3 + 1138, v2);
    transparent_crc(*(int32_t *)(v3 + 0x26b0), v3 + 1143, v2);
    transparent_crc(*(int32_t *)(v3 + 0x26b4), v3 + 1148, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x26b8), v3 + 1153, v2);
    transparent_crc(*(int32_t *)(v3 + 0x26bc), v3 + 1158, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x26c0), v3 + 1163, v2);
    transparent_crc(*(int32_t *)(v3 + 0x26c4), v3 + 1168, v2);
    transparent_crc(*(int32_t *)(v3 + 0x26c8), v3 + 1173, v2);
    transparent_crc(*(int32_t *)(v3 + 0x26cc), v3 + 1179, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x26d0), v3 + 1185, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x26d1), v3 + 1191, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b24), v3 + 1197, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b28), v3 + 1203, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x26d2), v3 + 1209, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b2c), v3 + 1215, v2);
    transparent_crc(*(int32_t *)(v3 + 0x26d4), v3 + 1221, v2);
    transparent_crc(*(int32_t *)(v3 + 0x26d8), v3 + 1227, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x26dc), v3 + 1233, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x26de), v3 + 1239, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x26e0), v3 + 1245, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x26e2), v3 + 1251, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x26e3), v3 + 1257, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x26e4), v3 + 1263, v2);
    transparent_crc(*(int32_t *)(v3 + 0x26e8), v3 + 1269, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x26a0), v2);
    return 0;
}

// Address range: 0x804ad03 - 0x804ad07
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804ad03
    return result;
}

// Address range: 0x804ad07 - 0x804ad0b
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804ad07
    int32_t result; // 0x804ad07
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12