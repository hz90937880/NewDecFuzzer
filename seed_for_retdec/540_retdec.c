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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40, int32_t a41, int32_t a42);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x49ee));
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
        chars_printed = printf((char *)(v1 + 0x38ed));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80499d1
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40, int32_t a41, int32_t a42) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x59ed) = a1;
    *(int32_t *)(v5 + 0x59f1) = a2;
    *(int16_t *)(v5 + 0x59f5) = (int16_t)a3;
    *(int32_t *)(v5 + 0x59f9) = a4;
    *(int16_t *)(v5 + 0x5e8d) = (int16_t)a5;
    *(char *)(v5 + 0x59fd) = (char)a6;
    *(char *)(v5 + 0x59fe) = (char)a7;
    *(char *)(v5 + 0x59ff) = (char)a8;
    *(char *)(v5 + 0x5a00) = (char)a9;
    *(int32_t *)(v5 + 0x5a01) = a10;
    *(int32_t *)(v5 + 0x5a05) = a11;
    *(int32_t *)(v5 + 0x5a09) = a12;
    *(int32_t *)(v5 + 0x5a0d) = a13;
    *(int16_t *)(v5 + 0x5a11) = (int16_t)a14;
    *(char *)(v5 + 0x5a13) = (char)a15;
    *(int32_t *)(v5 + 0x5a15) = a16;
    *(int32_t *)(v5 + 0x5a19) = a17;
    *(char *)(v5 + 0x5a1d) = (char)a18;
    *(char *)(v5 + 0x5a1e) = (char)a19;
    *(char *)(v5 + 0x5a1f) = (char)a20;
    *(int16_t *)(v5 + 0x5a21) = (int16_t)a21;
    *(char *)(v5 + 0x5a23) = (char)a22;
    *(int32_t *)(v5 + 0x5a25) = a23;
    *(int16_t *)(v5 + 0x5a29) = (int16_t)a24;
    *(int32_t *)(v5 + 0x5a2d) = a25;
    *(int32_t *)(v5 + 0x5a31) = a26;
    *(int16_t *)(v5 + 0x5a35) = (int16_t)a27;
    *(int16_t *)(v5 + 0x5a37) = (int16_t)a28;
    *(int32_t *)(v5 + 0x5e91) = a29;
    *(int32_t *)(v5 + 0x5a39) = a30;
    *(int16_t *)(v5 + 0x5a3d) = (int16_t)a31;
    *(int16_t *)(v5 + 0x5a3f) = (int16_t)a32;
    *(int16_t *)(v5 + 0x5e95) = (int16_t)a33;
    *(int16_t *)(v5 + 0x5a41) = (int16_t)a34;
    *(int16_t *)(v5 + 0x5a43) = (int16_t)a35;
    *(int16_t *)(v5 + 0x5a45) = (int16_t)a36;
    *(char *)(v5 + 0x5a47) = (char)a37;
    *(char *)(v5 + 0x5a48) = (char)a38;
    *(int32_t *)(v5 + 0x5a49) = a39;
    *(char *)(v5 + 0x5e97) = (char)a40;
    *(int32_t *)(v5 + 0x5a4d) = a41;
    *(int16_t *)(v5 + 0x5a51) = (int16_t)a42;
    return 0;
}

// Address range: 0x80499d1 - 0x804c848
int32_t func_1(void) {
    // 0x80499d1
    int32_t v1; // 0x80499d1
    __x86_get_pc_thunk_ax(v1);
    set_var(-27, 29, -0x4bd5, -0x49ae, 0xffff, 246, -126, 146, 6, -6, 5, -1, -0x25b36b08, 0xffff, 159, -0x2782a027, -0x5063, 121, 52, 255, -1770, -1, -1, -0x676d, -0x622d74e4, -0x4d11, 6, -6, 0, -0x14c92712, 0xd22a, 0xc670, 0, 0xffff, -8, 0xbe1c, 1, 248, -0x3add8012, 0, -0x62cfe113, 2398);
    return 45;
}

// Address range: 0x804c848 - 0x804cdd2
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804c871
    int32_t v3; // 0x804c848
    if (v1 == (char **)2) {
        // 0x804c873
        int32_t v4; // 0x804c848
        int32_t str = *(int32_t *)(v4 + 4); // 0x804c879
        v2 = strcmp((char *)str, (char *)(v3 + 1625)) == 0;
    }
    // 0x804c899
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x27c5), v3 + 1627, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27c9), v3 + 1631, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x27cd), v3 + 1636, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27d1), v3 + 1641, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2c65), v3 + 1646, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27d5), v3 + 1651, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27d6), v3 + 1656, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27d7), v3 + 1661, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27d8), v3 + 1667, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27d9), v3 + 1673, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27dd), v3 + 1679, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27e1), v3 + 1685, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27e5), v3 + 1691, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x27e9), v3 + 1697, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27eb), v3 + 1703, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27ed), v3 + 1709, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27f1), v3 + 1715, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27f5), v3 + 1721, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27f6), v3 + 1727, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27f7), v3 + 1733, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x27f9), v3 + 1739, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x27fb), v3 + 1745, v2);
    transparent_crc(*(int32_t *)(v3 + 0x27fd), v3 + 1751, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2801), v3 + 1757, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2805), v3 + 1763, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2809), v3 + 1769, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x280d), v3 + 1775, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x280f), v3 + 1781, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2c69), v3 + 1787, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2811), v3 + 1793, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2815), v3 + 1799, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2817), v3 + 1805, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2c6d), v3 + 1811, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2819), v3 + 1817, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x281b), v3 + 1823, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x281d), v3 + 1829, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x281f), v3 + 1835, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2820), v3 + 1841, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2821), v3 + 1847, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2c6f), v3 + 1853, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2825), v3 + 1859, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2829), v3 + 1865, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x27c1), v2);
    return 0;
}

// Address range: 0x804cdd2 - 0x804cdd6
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804cdd2
    return result;
}

// Address range: 0x804cdd6 - 0x804cdda
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804cdd6
    int32_t result; // 0x804cdd6
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
