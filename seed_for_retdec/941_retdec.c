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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x327e));
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
        chars_printed = printf((char *)(v1 + 0x217d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x80497f2
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804965d
    *(int32_t *)(v2 + 0x49c2) = a1;
    *(int32_t *)(v2 + 0x49c6) = a2;
    *(int32_t *)(v2 + 0x49ca) = a3;
    *(int32_t *)(v2 + 0x49ce) = a4;
    *(int32_t *)(v2 + 0x49d2) = a5;
    *(int32_t *)(v2 + 0x49d6) = a6;
    *(int32_t *)(v2 + 0x49da) = a7;
    *(char *)(v2 + 0x49de) = (char)a8;
    *(int32_t *)(v2 + 0x49e2) = a9;
    *(int16_t *)(v2 + 0x49e6) = (int16_t)a10;
    *(int16_t *)(v2 + 0x49e8) = (int16_t)a11;
    *(int32_t *)(v2 + 0x49ea) = a12;
    *(char *)(v2 + 0x49ee) = (char)a13;
    *(int32_t *)(v2 + 0x4e62) = a14;
    *(int16_t *)(v2 + 0x49f0) = (int16_t)a15;
    *(char *)(v2 + 0x49f2) = (char)a16;
    *(int32_t *)(v2 + 0x49f6) = a17;
    *(int32_t *)(v2 + 0x49fa) = a18;
    *(int16_t *)(v2 + 0x49fe) = (int16_t)a19;
    *(int32_t *)(v2 + 0x4a02) = a20;
    *(int32_t *)(v2 + 0x4a06) = a21;
    *(char *)(v2 + 0x4a0a) = (char)a22;
    *(int32_t *)(v2 + 0x4a0e) = a23;
    *(int32_t *)(v2 + 0x4a12) = a24;
    *(int32_t *)(v2 + 0x4a16) = a25;
    *(char *)(v2 + 0x4a1a) = (char)a26;
    *(char *)(v2 + 0x4a1b) = (char)a27;
    *(int32_t *)(v2 + 0x4e66) = a28;
    *(int32_t *)(v2 + 0x4a1e) = a29;
    return 0;
}

// Address range: 0x80497f2 - 0x804b257
int32_t func_1(void) {
    // 0x804b24f
    int32_t v1; // 0x80497f2
    __x86_get_pc_thunk_ax(v1);
    set_var(-0x2b1f9b7e, -2, 0, -9, 0x7e4fc228, 1, -98, 34, -28, 0x6bc8, 3007, -1, -68, 0, 0xdcb6, 247, 0x4900, 2, 0xffff, 1, 118, 88, 0x2b8542a9, 0x16aafb0f, -31, 248, -61, 0, 0x49d58658);
    return 248;
}

// Address range: 0x804b257 - 0x804b662
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804b280
    int32_t v3; // 0x804b257
    if (v1 == (char **)2) {
        // 0x804b282
        int32_t v4; // 0x804b257
        int32_t str = *(int32_t *)(v4 + 4); // 0x804b288
        v2 = strcmp((char *)str, (char *)(v3 + 1250)) == 0;
    }
    // 0x804b2a8
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2db6), v3 + 1252, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dba), v3 + 1256, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dbe), v3 + 1260, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dc2), v3 + 1264, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dc6), v3 + 1269, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dca), v3 + 1274, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dce), v3 + 1279, v2);
    transparent_crc(-1, v3 + 1284, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2dd2), v3 + 1289, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dd6), v3 + 1294, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2dda), v3 + 1299, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2ddc), v3 + 1304, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dde), v3 + 1309, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2de2), v3 + 1315, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3256), v3 + 1321, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2de4), v3 + 1327, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2de6), v3 + 1333, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dea), v3 + 1339, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dee), v3 + 1345, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2df2), v3 + 1351, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2df6), v3 + 1357, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2dfa), v3 + 1363, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2dfe), v3 + 1369, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e02), v3 + 1375, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e06), v3 + 1381, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e0a), v3 + 1387, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2e0e), v3 + 1393, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2e0f), v3 + 1399, v2);
    transparent_crc(*(int32_t *)(v3 + 0x325a), v3 + 1405, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2e12), v3 + 1411, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2db2), v2);
    return 0;
}

// Address range: 0x804b662 - 0x804b666
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b662
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
