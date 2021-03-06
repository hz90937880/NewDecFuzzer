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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39);
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
    return __x86_get_pc_thunk_ax(v1) + 0x6ba2;
}

// Address range: 0x8048466 - 0x8048494
int32_t platform_main_end(int32_t a1, int32_t a2) {
    // 0x8048466
    int32_t v1; // 0x8048466
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x43fe));
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
        *(int32_t *)(v2 + 0x5c4a + 4 * i) = v5;
    }
    // 0x80494d8
    return v2 + 0x5b8a;
}

// Address range: 0x80494db - 0x8049522
int32_t crc32_byte(int32_t a1) {
    // 0x80494db
    int32_t v1; // 0x80494db
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x80494e2
    int32_t * v3 = (int32_t *)(v2 + 0x5b39); // 0x80494f2
    uint32_t v4 = *v3; // 0x80494f2
    *v3 = *(int32_t *)(v2 + 0x5bd9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
    return v2 + 0x5b19;
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
        chars_printed = printf((char *)(v1 + 0x32fd));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x8049903
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2; // 0x8049654
    int32_t v3; // 0x8049654
    int32_t v4; // 0x8049654
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049654
    *(int16_t *)(v5 + 0x59c2) = (int16_t)a1;
    *(int32_t *)(v5 + 0x59c6) = a2;
    *(int32_t *)(v5 + 0x59ca) = a3;
    *(int16_t *)(v5 + 0x59ce) = (int16_t)a4;
    *(int32_t *)(v5 + 0x59d2) = a5;
    *(int32_t *)(v5 + 0x59d6) = a6;
    *(int16_t *)(v5 + 0x59da) = (int16_t)a7;
    *(int32_t *)(v5 + 0x59de) = a8;
    *(int32_t *)(v5 + 0x59e2) = a9;
    *(char *)(v5 + 0x59e6) = (char)a10;
    *(int16_t *)(v5 + 0x59e8) = (int16_t)a11;
    *(int16_t *)(v5 + 0x59ea) = (int16_t)a12;
    *(char *)(v5 + 0x59ec) = (char)a13;
    *(int32_t *)(v5 + 0x59ee) = a14;
    *(int16_t *)(v5 + 0x59f2) = (int16_t)a15;
    *(int16_t *)(v5 + 0x59f4) = (int16_t)a16;
    *(int32_t *)(v5 + 0x59f6) = a17;
    *(int32_t *)(v5 + 0x59fa) = a18;
    *(int32_t *)(v5 + 0x59fe) = a19;
    *(int16_t *)(v5 + 0x5a02) = (int16_t)a20;
    *(int16_t *)(v5 + 0x5e62) = (int16_t)a21;
    *(char *)(v5 + 0x5a04) = (char)a22;
    *(int32_t *)(v5 + 0x5e66) = a23;
    *(char *)(v5 + 0x5a05) = (char)a24;
    *(int32_t *)(v5 + 0x5a06) = a25;
    *(int32_t *)(v5 + 0x5a0a) = a26;
    *(int32_t *)(v5 + 0x5a0e) = a27;
    *(int32_t *)(v5 + 0x5a12) = a28;
    *(int32_t *)(v5 + 0x5a16) = a29;
    *(int16_t *)(v5 + 0x5a1a) = (int16_t)a30;
    *(int32_t *)(v5 + 0x5e6a) = a31;
    *(int32_t *)(v5 + 0x5a1e) = a32;
    *(int16_t *)(v5 + 0x5a22) = (int16_t)a33;
    *(int32_t *)(v5 + 0x5a26) = a34;
    *(int32_t *)(v5 + 0x5e6e) = a35;
    *(int16_t *)(v5 + 0x5a2a) = (int16_t)a36;
    *(int16_t *)(v5 + 0x5a2c) = (int16_t)a37;
    *(int32_t *)(v5 + 0x5a2e) = a38;
    *(char *)(v5 + 0x5a32) = (char)a39;
    return 0;
}

// Address range: 0x8049903 - 0x804c2c9
int32_t func_1(void) {
    // 0x804c17b
    int32_t v1; // 0x8049903
    __x86_get_pc_thunk_ax(v1);
    set_var(0xffe5, 5, -0x6c42a22, 6, -115, 0, 0xfffc, 0, -0xf2b5839, -30, -1085, -6, 100, -1, 0x7e5c, -0x781a, -0x5830203c, 6, 7, -1, 0, -1, 0, -5, -1, -0x337f1a79, -0x4b3499db, -1, 0x311d, 0x6cfa, 0, 1, 1, -0x5d23b861, 0, 0x7b76, 0x74fe, 9, 188);
    return -0x6c42a22;
}

// Address range: 0x804c2c9 - 0x804c7d9
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804c2f2
    int32_t v3; // 0x804c2c9
    if (v1 == (char **)2) {
        // 0x804c2f4
        int32_t v4; // 0x804c2c9
        int32_t str = *(int32_t *)(v4 + 4); // 0x804c2fa
        v2 = strcmp((char *)str, (char *)(v3 + 1516)) == 0;
    }
    // 0x804c31a
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d44), v3 + 1518, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d48), v3 + 1522, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d4c), v3 + 1527, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d50), v3 + 1532, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d54), v3 + 1537, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d58), v3 + 1542, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d5c), v3 + 1547, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d60), v3 + 1552, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d64), v3 + 1557, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d68), v3 + 1562, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d6a), v3 + 1567, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d6c), v3 + 1572, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d6e), v3 + 1577, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d70), v3 + 1583, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d74), v3 + 1589, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d76), v3 + 1595, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d78), v3 + 1601, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d7c), v3 + 1607, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d80), v3 + 1613, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d84), v3 + 1619, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x31e4), v3 + 1625, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d86), v3 + 1631, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31e8), v3 + 1637, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2d87), v3 + 1643, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d88), v3 + 1649, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d8c), v3 + 1655, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d90), v3 + 1661, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d94), v3 + 1667, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2d98), v3 + 1673, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2d9c), v3 + 1679, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31ec), v3 + 1685, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2da0), v3 + 1691, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2da4), v3 + 1697, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2da8), v3 + 1703, v2);
    transparent_crc(*(int32_t *)(v3 + 0x31f0), v3 + 1709, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2dac), v3 + 1715, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2dae), v3 + 1721, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2db0), v3 + 1727, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2db4), v3 + 1733, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2d40), v2);
    return 0;
}

// Address range: 0x804c7d9 - 0x804c7dd
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804c7d9
    return result;
}

// Address range: 0x804c7dd - 0x804c7e1
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804c7dd
    int32_t result; // 0x804c7dd
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
