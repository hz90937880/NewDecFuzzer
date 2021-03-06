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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1f6e));
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
        chars_printed = printf((char *)(v1 + 3693));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049825
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x39f0) = a1;
    *(int32_t *)(v5 + 0x39f4) = a2;
    *(int32_t *)(v5 + 0x39f8) = a3;
    *(int16_t *)(v5 + 0x39fc) = (int16_t)a4;
    *(int16_t *)(v5 + 0x39fe) = (int16_t)a5;
    *(int32_t *)(v5 + 0x3a00) = a6;
    *(char *)(v5 + 0x3a04) = (char)a7;
    *(int16_t *)(v5 + 0x3a06) = (int16_t)a8;
    *(int32_t *)(v5 + 0x3a08) = a9;
    *(int16_t *)(v5 + 0x3a0c) = (int16_t)a10;
    *(int32_t *)(v5 + 0x3a10) = a11;
    *(int32_t *)(v5 + 0x3a14) = a12;
    *(int32_t *)(v5 + 0x3a18) = a13;
    *(int16_t *)(v5 + 0x3a1c) = (int16_t)a14;
    *(int16_t *)(v5 + 0x3a1e) = (int16_t)a15;
    *(char *)(v5 + 0x3a20) = (char)a16;
    *(int16_t *)(v5 + 0x3a22) = (int16_t)a17;
    *(char *)(v5 + 0x3a24) = (char)a18;
    *(char *)(v5 + 0x3a25) = (char)a19;
    *(int32_t *)(v5 + 0x3a28) = a20;
    *(char *)(v5 + 0x3a2c) = (char)a21;
    *(int16_t *)(v5 + 0x3a2e) = (int16_t)a22;
    *(int16_t *)(v5 + 0x3a30) = (int16_t)a23;
    *(int32_t *)(v5 + 0x3a34) = a24;
    *(int16_t *)(v5 + 0x3a38) = (int16_t)a25;
    *(int32_t *)(v5 + 0x3a3c) = a26;
    *(int32_t *)(v5 + 0x3a40) = a27;
    *(int16_t *)(v5 + 0x3a44) = (int16_t)a28;
    return 0;
}

// Address range: 0x8049825 - 0x8049f4f
int32_t func_1(void) {
    // 0x8049825
    int32_t v1; // 0x8049825
    __x86_get_pc_thunk_ax(v1);
    set_var(-8, -0x468e, 0x7a5eafb6, 0xffff, 5, 0x3668f781, 1, 4, 0x30c202ea, 1, -0x1570bbc7, 0x44b8798e, 1, 2135, 7, 6, 0x186b, -3, 33, -42, 51, 0x3923, 3486, -0x26083284, 0xffff, 1, 0x6cf2371a, 0xfff6);
    return 0x3668f781;
}

// Address range: 0x8049f4f - 0x804a349
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049f78
    int32_t v3; // 0x8049f4f
    if (v1 == (char **)2) {
        // 0x8049f7a
        int32_t v4; // 0x8049f4f
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049f80
        v2 = strcmp((char *)str, (char *)(v3 + 1236)) == 0;
    }
    // 0x8049fa0
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x30be), v3 + 1238, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30c2), v3 + 1242, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30c6), v3 + 1247, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30ca), v3 + 1252, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30cc), v3 + 1257, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30ce), v3 + 1262, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30d2), v3 + 1267, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30d4), v3 + 1272, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30d6), v3 + 1277, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30da), v3 + 1282, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30de), v3 + 1287, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30e2), v3 + 1292, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30e6), v3 + 1297, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30ea), v3 + 1302, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30ec), v3 + 1307, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30ee), v3 + 1312, v2);
    transparent_crc(-0x69c7, v3 + 1318, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30f0), v3 + 1324, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30f2), v3 + 1330, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30f3), v3 + 1336, v2);
    transparent_crc(*(int32_t *)(v3 + 0x30f6), v3 + 1342, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x30fa), v3 + 1348, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30fc), v3 + 1354, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x30fe), v3 + 1360, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3102), v3 + 1366, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3106), v3 + 1372, v2);
    transparent_crc(*(int32_t *)(v3 + 0x310a), v3 + 1378, v2);
    transparent_crc(*(int32_t *)(v3 + 0x310e), v3 + 1384, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3112), v3 + 1390, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x30ba), v2);
    return 0;
}

// Address range: 0x804a349 - 0x804a34d
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a349
    return result;
}

// Address range: 0x804a34d - 0x804a351
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804a34d
    int32_t result; // 0x804a34d
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
