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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x2eae));
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
        *(int32_t *)(v2 + 0x4c4a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x4bd9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 0x1dad));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x804982b
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804965d
    *(int32_t *)(v2 + 0x49c2) = a1;
    *(int32_t *)(v2 + 0x49c6) = a2;
    *(int32_t *)(v2 + 0x4e62) = a3;
    *(int32_t *)(v2 + 0x49ca) = a4;
    *(int32_t *)(v2 + 0x49ce) = a5;
    *(int32_t *)(v2 + 0x49d2) = a6;
    *(int32_t *)(v2 + 0x49d6) = a7;
    *(int16_t *)(v2 + 0x49da) = (int16_t)a8;
    *(int32_t *)(v2 + 0x49de) = a9;
    *(int32_t *)(v2 + 0x49e2) = a10;
    *(int16_t *)(v2 + 0x49e6) = (int16_t)a11;
    *(int32_t *)(v2 + 0x49ea) = a12;
    *(int32_t *)(v2 + 0x49ee) = a13;
    *(int16_t *)(v2 + 0x49f2) = (int16_t)a14;
    *(int16_t *)(v2 + 0x49f4) = (int16_t)a15;
    *(char *)(v2 + 0x49f6) = (char)a16;
    *(int32_t *)(v2 + 0x49fa) = a17;
    *(int32_t *)(v2 + 0x49fe) = a18;
    *(int32_t *)(v2 + 0x4a02) = a19;
    *(int32_t *)(v2 + 0x4a06) = a20;
    *(int32_t *)(v2 + 0x4a0a) = a21;
    *(int32_t *)(v2 + 0x4a0e) = a22;
    *(int32_t *)(v2 + 0x4e66) = a23;
    *(char *)(v2 + 0x4a12) = (char)a24;
    *(int32_t *)(v2 + 0x4a16) = a25;
    *(char *)(v2 + 0x4a1a) = (char)a26;
    *(int16_t *)(v2 + 0x4a1c) = (int16_t)a27;
    *(int16_t *)(v2 + 0x4a1e) = (int16_t)a28;
    *(int16_t *)(v2 + 0x4a20) = (int16_t)a29;
    *(int16_t *)(v2 + 0x4a22) = (int16_t)a30;
    *(char *)(v2 + 0x4a24) = (char)a31;
    return 0;
}

// Address range: 0x804982b - 0x804ae4e
int32_t func_1(void) {
    // 0x804982b
    int32_t v1; // 0x804982b
    __x86_get_pc_thunk_ax(v1);
    set_var(-10, -3, 0, -9, 1, -1, -0x484c0579, 0x4984, 4, -7, 1, 0x26427e37, -6, 0xffff, 0x7f16, 9, -0x608f4e43, 4, -0x702e17d0, -1, 0x5795b121, 0x23d9d43d, 0x7b0e11a9, 255, 0x54541c65, 255, 0xffff, 0xffff, 3, -1, -1);
    return 0x11d9242;
}

// Address range: 0x804ae4e - 0x804b298
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804ae77
    int32_t v3; // 0x804ae4e
    if (v1 == (char **)2) {
        // 0x804ae79
        int32_t v4; // 0x804ae4e
        int32_t str = *(int32_t *)(v4 + 4); // 0x804ae7f
        v2 = strcmp((char *)str, (char *)(v3 + 1304)) == 0;
    }
    // 0x804ae9f
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x31bf), v3 + 1306, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31c3), v3 + 1310, v2);
    transparent_crc(*(int32_t *)(v3 + 0x365f), v3 + 1315, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31c7), v3 + 1320, v2);
    transparent_crc(1, v3 + 1325, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31cb), v3 + 1330, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31cf), v3 + 1335, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31d3), v3 + 1340, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31d7), v3 + 1345, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31db), v3 + 1350, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31df), v3 + 1355, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31e3), v3 + 1360, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31e7), v3 + 1365, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31eb), v3 + 1371, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31ef), v3 + 1377, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31f1), v3 + 1383, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x31f3), v3 + 1389, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31f7), v3 + 1395, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31fb), v3 + 1401, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31ff), v3 + 1407, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3203), v3 + 1413, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3207), v3 + 1419, v2);
    transparent_crc(*(int32_t *)(v3 + 0x320b), v3 + 1425, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3663), v3 + 1431, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x320f), v3 + 1437, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3213), v3 + 1443, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3217), v3 + 1449, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3219), v3 + 1455, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x321b), v3 + 1461, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x321d), v3 + 1467, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x321f), v3 + 1473, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3221), v3 + 1479, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x31bb), v2);
    return 0;
}

// Address range: 0x804b298 - 0x804b29c
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b298
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
