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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38);
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
    return __x86_get_pc_thunk_ax(v1) + 0x7ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x546e));
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
        *(int32_t *)(v2 + 0x6c4a + 4 * i) = v5;
    }
    // 0x80494d8
    return v2 + 0x6b8a;
}

// Address range: 0x80494db - 0x8049522
int32_t crc32_byte(int32_t a1) {
    // 0x80494db
    int32_t v1; // 0x80494db
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x80494e2
    int32_t * v3 = (int32_t *)(v2 + 0x6b39); // 0x80494f2
    uint32_t v4 = *v3; // 0x80494f2
    *v3 = *(int32_t *)(v2 + 0x6bd9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
    return v2 + 0x6b19;
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
        chars_printed = printf((char *)(v1 + 0x436d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x8049921
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2; // 0x8049654
    int32_t v3; // 0x8049654
    int32_t v4; // 0x8049654
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049654
    *(int16_t *)(v5 + 0x69bf) = (int16_t)a1;
    *(int16_t *)(v5 + 0x69c1) = (int16_t)a2;
    *(int32_t *)(v5 + 0x6e5f) = a3;
    *(char *)(v5 + 0x69c3) = (char)a4;
    *(char *)(v5 + 0x69c4) = (char)a5;
    *(char *)(v5 + 0x69c5) = (char)a6;
    *(int32_t *)(v5 + 0x6e63) = a7;
    *(char *)(v5 + 0x69c6) = (char)a8;
    *(char *)(v5 + 0x6e67) = (char)a9;
    *(int16_t *)(v5 + 0x69c7) = (int16_t)a10;
    *(int32_t *)(v5 + 0x69cb) = a11;
    *(int32_t *)(v5 + 0x69cf) = a12;
    *(char *)(v5 + 0x69d3) = (char)a13;
    *(int32_t *)(v5 + 0x69d7) = a14;
    *(int32_t *)(v5 + 0x69db) = a15;
    *(char *)(v5 + 0x69df) = (char)a16;
    *(int32_t *)(v5 + 0x69e3) = a17;
    *(char *)(v5 + 0x69e7) = (char)a18;
    *(char *)(v5 + 0x69e8) = (char)a19;
    *(int32_t *)(v5 + 0x69eb) = a20;
    *(int32_t *)(v5 + 0x69ef) = a21;
    *(int16_t *)(v5 + 0x69f3) = (int16_t)a22;
    *(char *)(v5 + 0x69f5) = (char)a23;
    *(int32_t *)(v5 + 0x69f7) = a24;
    *(int32_t *)(v5 + 0x69fb) = a25;
    *(int32_t *)(v5 + 0x69ff) = a26;
    *(int32_t *)(v5 + 0x6a03) = a27;
    *(int32_t *)(v5 + 0x6a07) = a28;
    *(char *)(v5 + 0x6a0b) = (char)a29;
    *(char *)(v5 + 0x6a0c) = (char)a30;
    *(int32_t *)(v5 + 0x6a0f) = a31;
    *(char *)(v5 + 0x6a13) = (char)a32;
    *(int32_t *)(v5 + 0x6e6b) = a33;
    *(char *)(v5 + 0x6a14) = (char)a34;
    *(char *)(v5 + 0x6a15) = (char)a35;
    *(int32_t *)(v5 + 0x6a17) = a36;
    *(int16_t *)(v5 + 0x6a1b) = (int16_t)a37;
    *(int32_t *)(v5 + 0x6a1f) = a38;
    return 0;
}

// Address range: 0x8049921 - 0x804d34c
int32_t func_1(void) {
    // 0x804d344
    int32_t v1; // 0x8049921
    __x86_get_pc_thunk_ax(v1);
    set_var(-10, -10, 86, 1, 2, 127, 0, 112, 0, 0x1b1c, -1, 0, 95, -1, 0x3e45e3b4, -3, -1, 151, 254, -0x3b089ab1, 0x5c710d65, 4, -48, 1, -0x139de, 0x5fdd7afa, -1, 0, -1, 5, -1, 63, 0, -30, 4, -7, -1, -8);
    return 8;
}

// Address range: 0x804d34c - 0x804d850
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804d375
    int32_t v3; // 0x804d34c
    if (v1 == (char **)2) {
        // 0x804d377
        int32_t v4; // 0x804d34c
        int32_t str = *(int32_t *)(v4 + 4); // 0x804d37d
        v2 = strcmp((char *)str, (char *)(v3 + 1497)) == 0;
    }
    // 0x804d39d
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2cc1), v3 + 1499, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2cc3), v3 + 1503, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3161), v3 + 1507, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2cc5), v3 + 1512, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2cc6), v3 + 1517, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2cc7), v3 + 1522, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3165), v3 + 1527, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2cc8), v3 + 1532, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3169), v3 + 1537, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2cc9), v3 + 1542, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ccd), v3 + 1547, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cd1), v3 + 1553, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2cd5), v3 + 1559, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cd9), v3 + 1565, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cdd), v3 + 1571, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ce1), v3 + 1577, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ce5), v3 + 1583, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ce9), v3 + 1589, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2cea), v3 + 1595, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ced), v3 + 1601, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cf1), v3 + 1607, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2cf5), v3 + 1613, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2cf7), v3 + 1619, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cf9), v3 + 1625, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cfd), v3 + 1631, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d01), v3 + 1637, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d05), v3 + 1643, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d09), v3 + 1649, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d0d), v3 + 1655, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d0e), v3 + 1661, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d11), v3 + 1667, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d15), v3 + 1673, v2);
    transparent_crc(*(int32_t *)(v3 + 0x316d), v3 + 1679, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d16), v3 + 1685, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d17), v3 + 1691, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d19), v3 + 1698, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d1d), v3 + 1705, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d21), v3 + 1712, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2cbd), v2);
    return 0;
}

// Address range: 0x804d850 - 0x804d854
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804d850
    return result;
}

// Address range: 0x804d854 - 0x804d858
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804d854
    int32_t result; // 0x804d854
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
