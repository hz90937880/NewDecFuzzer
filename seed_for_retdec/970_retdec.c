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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x33ce));
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
        chars_printed = printf((char *)(v1 + 0x22cd));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x80498a5
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2; // 0x8049654
    int32_t v3; // 0x8049654
    int32_t v4; // 0x8049654
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049654
    *(int16_t *)(v5 + 0x49c2) = (int16_t)a1;
    *(int32_t *)(v5 + 0x49c6) = a2;
    *(char *)(v5 + 0x49ca) = (char)a3;
    *(char *)(v5 + 0x49cb) = (char)a4;
    *(int32_t *)(v5 + 0x49ce) = a5;
    *(int32_t *)(v5 + 0x49d2) = a6;
    *(int16_t *)(v5 + 0x49d6) = (int16_t)a7;
    *(int32_t *)(v5 + 0x49da) = a8;
    *(int32_t *)(v5 + 0x49de) = a9;
    *(char *)(v5 + 0x49e2) = (char)a10;
    *(char *)(v5 + 0x49e3) = (char)a11;
    *(int32_t *)(v5 + 0x49e6) = a12;
    *(int16_t *)(v5 + 0x49ea) = (int16_t)a13;
    *(int32_t *)(v5 + 0x49ee) = a14;
    *(int32_t *)(v5 + 0x49f2) = a15;
    *(int32_t *)(v5 + 0x49f6) = a16;
    *(int16_t *)(v5 + 0x49fa) = (int16_t)a17;
    *(int32_t *)(v5 + 0x49fe) = a18;
    *(int32_t *)(v5 + 0x4a02) = a19;
    *(char *)(v5 + 0x4e62) = (char)a20;
    *(int16_t *)(v5 + 0x4a06) = (int16_t)a21;
    *(char *)(v5 + 0x4a08) = (char)a22;
    *(int32_t *)(v5 + 0x4a0a) = a23;
    *(char *)(v5 + 0x4a0e) = (char)a24;
    *(int32_t *)(v5 + 0x4a12) = a25;
    *(int16_t *)(v5 + 0x4a16) = (int16_t)a26;
    *(int32_t *)(v5 + 0x4a1a) = a27;
    *(int32_t *)(v5 + 0x4a1e) = a28;
    *(int32_t *)(v5 + 0x4a22) = a29;
    *(int32_t *)(v5 + 0x4a26) = a30;
    *(int16_t *)(v5 + 0x4a2a) = (int16_t)a31;
    *(char *)(v5 + 0x4a2c) = (char)a32;
    *(int16_t *)(v5 + 0x4a2e) = (int16_t)a33;
    *(int16_t *)(v5 + 0x4a30) = (int16_t)a34;
    return 0;
}

// Address range: 0x80498a5 - 0x804b32a
int32_t func_1(void) {
    // 0x80498a5
    int32_t v1; // 0x80498a5
    __x86_get_pc_thunk_ax(v1);
    set_var(2394, 161, 108, -7, 0, -3, -0x2f5f, -6, 1, -2, 69, -0x3a7a, 7, 0x314dbe92, -0x351b, -0x6848d8fa, 0xb4cf, -8, -1, 0, 2515, 122, 0x363f8675, -6, 0x3788be3f, 0x20f0, 1, -0x24a1b1a3, 5, 0x76b064c7, -8, -73, 1, 0xec60);
    return 5;
}

// Address range: 0x804b32a - 0x804b7b0
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804b353
    int32_t v3; // 0x804b32a
    if (v1 == (char **)2) {
        // 0x804b355
        int32_t v4; // 0x804b32a
        int32_t str = *(int32_t *)(v4 + 4); // 0x804b35b
        v2 = strcmp((char *)str, (char *)(v3 + 1371)) == 0;
    }
    // 0x804b37b
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2ce3), v3 + 1373, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ce7), v3 + 1378, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ceb), v3 + 1383, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2cec), v3 + 1388, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cef), v3 + 1393, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cf3), v3 + 1398, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2cf7), v3 + 1403, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cfb), v3 + 1408, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cff), v3 + 1413, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d03), v3 + 1418, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d04), v3 + 1423, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d07), v3 + 1429, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d0b), v3 + 1435, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d0f), v3 + 1441, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d13), v3 + 1447, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d17), v3 + 1453, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d1b), v3 + 1459, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d1f), v3 + 1465, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d23), v3 + 1471, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3183), v3 + 1477, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d27), v3 + 1483, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d29), v3 + 1489, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d2b), v3 + 1495, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d2f), v3 + 1501, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d33), v3 + 1507, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d37), v3 + 1513, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d3b), v3 + 1519, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d3f), v3 + 1525, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d43), v3 + 1531, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d47), v3 + 1537, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d4b), v3 + 1543, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d4d), v3 + 1549, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d4f), v3 + 1555, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d51), v3 + 1561, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2cdf), v2);
    return 0;
}

// Address range: 0x804b7b0 - 0x804b7b4
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b7b0
    return result;
}

// Address range: 0x804b7b4 - 0x804b7b8
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804b7b4
    int32_t result; // 0x804b7b4
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12