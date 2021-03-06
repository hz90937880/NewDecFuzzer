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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x398e));
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
        *(int32_t *)(v2 + 0x4c2a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x4bb9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 0x288d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804986b
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int16_t *)(v5 + 0x49f4) = (int16_t)a1;
    *(int16_t *)(v5 + 0x49f6) = (int16_t)a2;
    *(char *)(v5 + 0x49f8) = (char)a3;
    *(int16_t *)(v5 + 0x49fa) = (int16_t)a4;
    *(int16_t *)(v5 + 0x4e70) = (int16_t)a5;
    *(char *)(v5 + 0x4e72) = (char)a6;
    *(int32_t *)(v5 + 0x49fc) = a7;
    *(int32_t *)(v5 + 0x4a00) = a8;
    *(int32_t *)(v5 + 0x4a04) = a9;
    *(int16_t *)(v5 + 0x4a08) = (int16_t)a10;
    *(char *)(v5 + 0x4a0a) = (char)a11;
    *(int32_t *)(v5 + 0x4a0c) = a12;
    *(int32_t *)(v5 + 0x4e74) = a13;
    *(int32_t *)(v5 + 0x4a10) = a14;
    *(int32_t *)(v5 + 0x4a14) = a15;
    *(int16_t *)(v5 + 0x4a18) = (int16_t)a16;
    *(int16_t *)(v5 + 0x4a1a) = (int16_t)a17;
    *(int32_t *)(v5 + 0x4a1c) = a18;
    *(int32_t *)(v5 + 0x4e78) = a19;
    *(int32_t *)(v5 + 0x4e7c) = a20;
    *(char *)(v5 + 0x4a20) = (char)a21;
    *(int32_t *)(v5 + 0x4a24) = a22;
    *(char *)(v5 + 0x4a28) = (char)a23;
    *(int32_t *)(v5 + 0x4a2c) = a24;
    *(int32_t *)(v5 + 0x4e80) = a25;
    *(int16_t *)(v5 + 0x4a30) = (int16_t)a26;
    *(int16_t *)(v5 + 0x4a32) = (int16_t)a27;
    *(char *)(v5 + 0x4a34) = (char)a28;
    *(int32_t *)(v5 + 0x4a38) = a29;
    *(char *)(v5 + 0x4a3c) = (char)a30;
    *(int32_t *)(v5 + 0x4a40) = a31;
    *(int32_t *)(v5 + 0x4a44) = a32;
    *(char *)(v5 + 0x4a48) = (char)a33;
    return 0;
}

// Address range: 0x804986b - 0x804b8df
int32_t func_1(void) {
    // 0x804986b
    int32_t v1; // 0x804986b
    __x86_get_pc_thunk_ax(v1);
    set_var(0x52aa, 0, -25, 0xfffa, 1, 0, -3, -0x13a3, -9, 1, -74, -0x3028, 0, 0x6e36, -0x52b6b51a, -0x3028, 0xf8cd, -1, 0, 0, -74, -1, -82, 6, 0, 0x314c, 0xd8f6, 7, -1, 1, 0xcef8057, 1, 8);
    return 0xbd672b7;
}

// Address range: 0x804b8df - 0x804bd6d
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804b908
    int32_t v3; // 0x804b8df
    if (v1 == (char **)2) {
        // 0x804b90a
        int32_t v4; // 0x804b8df
        int32_t str = *(int32_t *)(v4 + 4); // 0x804b910
        v2 = strcmp((char *)str, (char *)(v3 + 1378)) == 0;
    }
    // 0x804b930
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x272e), v3 + 1380, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2732), v3 + 1384, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2734), v3 + 1389, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2736), v3 + 1394, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2738), v3 + 1399, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2bae), v3 + 1404, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2bb0), v3 + 1409, v2);
    transparent_crc(*(int32_t *)(v3 + 0x273a), v3 + 1414, v2);
    transparent_crc(*(int32_t *)(v3 + 0x273e), v3 + 1419, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2742), v3 + 1424, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2746), v3 + 1429, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2748), v3 + 1434, v2);
    transparent_crc(*(int32_t *)(v3 + 0x274a), v3 + 1440, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bb2), v3 + 1446, v2);
    transparent_crc(*(int32_t *)(v3 + 0x274e), v3 + 1452, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2752), v3 + 1458, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2756), v3 + 1464, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2758), v3 + 1470, v2);
    transparent_crc(*(int32_t *)(v3 + 0x275a), v3 + 1476, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bb6), v3 + 1482, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bba), v3 + 1488, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x275e), v3 + 1494, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2762), v3 + 1500, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2766), v3 + 1506, v2);
    transparent_crc(*(int32_t *)(v3 + 0x276a), v3 + 1512, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2bbe), v3 + 1518, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x276e), v3 + 1524, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2770), v3 + 1530, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2772), v3 + 1536, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2776), v3 + 1542, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x277a), v3 + 1548, v2);
    transparent_crc(*(int32_t *)(v3 + 0x277e), v3 + 1554, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2782), v3 + 1560, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2786), v3 + 1566, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x272a), v2);
    return 0;
}

// Address range: 0x804bd6d - 0x804bd71
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804bd6d
    return result;
}

// Address range: 0x804bd71 - 0x804bd75
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804bd71
    int32_t result; // 0x804bd71
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
