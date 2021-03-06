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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1ece));
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
        *(int32_t *)(v2 + 0x3c6a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x3bf9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 3533));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80498a9
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x39f0) = a1;
    *(int32_t *)(v5 + 0x3eb0) = a2;
    *(int32_t *)(v5 + 0x3eb4) = a3;
    *(int32_t *)(v5 + 0x39f4) = a4;
    *(char *)(v5 + 0x39f8) = (char)a5;
    *(int32_t *)(v5 + 0x39fc) = a6;
    *(int16_t *)(v5 + 0x3a00) = (int16_t)a7;
    *(int16_t *)(v5 + 0x3a02) = (int16_t)a8;
    *(int32_t *)(v5 + 0x3a04) = a9;
    *(int32_t *)(v5 + 0x3a08) = a10;
    *(int32_t *)(v5 + 0x3a0c) = a11;
    *(int32_t *)(v5 + 0x3a10) = a12;
    *(char *)(v5 + 0x3a14) = (char)a13;
    *(int32_t *)(v5 + 0x3eb8) = a14;
    *(int32_t *)(v5 + 0x3a18) = a15;
    *(int32_t *)(v5 + 0x3a1c) = a16;
    *(int32_t *)(v5 + 0x3a20) = a17;
    *(int16_t *)(v5 + 0x3a24) = (int16_t)a18;
    *(int32_t *)(v5 + 0x3a28) = a19;
    *(char *)(v5 + 0x3a2c) = (char)a20;
    *(int16_t *)(v5 + 0x3a2e) = (int16_t)a21;
    *(int16_t *)(v5 + 0x3a30) = (int16_t)a22;
    *(int32_t *)(v5 + 0x3a34) = a23;
    *(int32_t *)(v5 + 0x3a38) = a24;
    *(char *)(v5 + 0x3a3c) = (char)a25;
    *(int32_t *)(v5 + 0x3a40) = a26;
    *(char *)(v5 + 0x3a44) = (char)a27;
    *(int32_t *)(v5 + 0x3a48) = a28;
    *(int16_t *)(v5 + 0x3a4c) = (int16_t)a29;
    *(int32_t *)(v5 + 0x3a50) = a30;
    *(int32_t *)(v5 + 0x3ebc) = a31;
    *(int16_t *)(v5 + 0x3a54) = (int16_t)a32;
    *(int32_t *)(v5 + 0x3a58) = a33;
    *(char *)(v5 + 0x3ec0) = (char)a34;
    *(int32_t *)(v5 + 0x3a5c) = a35;
    *(int16_t *)(v5 + 0x3a60) = (int16_t)a36;
    *(int32_t *)(v5 + 0x3a64) = a37;
    *(char *)(v5 + 0x3a68) = (char)a38;
    *(char *)(v5 + 0x3a69) = (char)a39;
    *(int32_t *)(v5 + 0x3a6c) = a40;
    return 0;
}

// Address range: 0x80498a9 - 0x8049d58
int32_t func_1(void) {
    // 0x8049b39
    int32_t v1; // 0x80498a9
    __x86_get_pc_thunk_ax(v1);
    set_var(1, 0, 0, -5, 120, 0x4141eda7, 4, 1, 0, 1, 0x4fa1a2bb, 0, 83, 0, 0x516bf4f6, -1, 1, 0x6804, -1, 2, 1, 0xc80a, -0x727930fd, 0xa2b921b, 3, -4, 240, -1, 0x5f07, -9, 0, 0xffff, 0, 0, -3, -450, -0x3de265d5, 71, 1, 1);
    return 1;
}

// Address range: 0x8049d58 - 0x804a2ab
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049d81
    int32_t v3; // 0x8049d58
    if (v1 == (char **)2) {
        // 0x8049d83
        int32_t v4; // 0x8049d58
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049d89
        v2 = strcmp((char *)str, (char *)(v3 + 1581)) == 0;
    }
    // 0x8049da9
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x32b5), v3 + 1583, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3775), v3 + 1587, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3779), v3 + 1592, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32b9), v3 + 1597, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32bd), v3 + 1602, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32c1), v3 + 1607, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32c5), v3 + 1612, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32c7), v3 + 1617, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32c9), v3 + 1622, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32cd), v3 + 1628, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32d1), v3 + 1634, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32d5), v3 + 1640, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32d9), v3 + 1646, v2);
    transparent_crc(*(int32_t *)(v3 + 0x377d), v3 + 1652, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32dd), v3 + 1658, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32e1), v3 + 1664, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32e5), v3 + 1670, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32e9), v3 + 1676, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32ed), v3 + 1682, v2);
    transparent_crc(0, v3 + 1688, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32f1), v3 + 1694, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32f3), v3 + 1700, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32f5), v3 + 1706, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32f9), v3 + 1712, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32fd), v3 + 1718, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3301), v3 + 1724, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3305), v3 + 1730, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3309), v3 + 1736, v2);
    transparent_crc(*(int32_t *)(v3 + 0x330d), v3 + 1742, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3311), v3 + 1748, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3315), v3 + 1754, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3781), v3 + 1760, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3319), v3 + 1766, v2);
    transparent_crc(*(int32_t *)(v3 + 0x331d), v3 + 1772, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3785), v3 + 1778, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3321), v3 + 1784, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3325), v3 + 1790, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3329), v3 + 1796, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x332d), v3 + 1802, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x332e), v3 + 1808, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3331), v3 + 1814, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x32b1), v2);
    return 0;
}

// Address range: 0x804a2ab - 0x804a2af
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a2ab
    return result;
}

// Address range: 0x804a2af - 0x804a2b3
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804a2af
    int32_t result; // 0x804a2af
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
