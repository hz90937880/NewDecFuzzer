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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1f1e));
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
        *(int32_t *)(v2 + 0x3c4a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x3bd9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 3613));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049913
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36, int32_t a37, int32_t a38, int32_t a39, int32_t a40) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int16_t *)(v5 + 0x39ed) = (int16_t)a1;
    *(int16_t *)(v5 + 0x39ef) = (int16_t)a2;
    *(int16_t *)(v5 + 0x39f1) = (int16_t)a3;
    *(char *)(v5 + 0x39f3) = (char)a4;
    *(int32_t *)(v5 + 0x39f5) = a5;
    *(int16_t *)(v5 + 0x39f9) = (int16_t)a6;
    *(int16_t *)(v5 + 0x39fb) = (int16_t)a7;
    *(char *)(v5 + 0x39fd) = (char)a8;
    *(char *)(v5 + 0x39fe) = (char)a9;
    *(int32_t *)(v5 + 0x3a01) = a10;
    *(int32_t *)(v5 + 0x3a05) = a11;
    *(char *)(v5 + 0x3a09) = (char)a12;
    *(int32_t *)(v5 + 0x3a0d) = a13;
    *(char *)(v5 + 0x3a11) = (char)a14;
    *(char *)(v5 + 0x3a12) = (char)a15;
    *(int32_t *)(v5 + 0x3e8d) = a16;
    *(int32_t *)(v5 + 0x3a15) = a17;
    *(char *)(v5 + 0x3a19) = (char)a18;
    *(char *)(v5 + 0x3a1a) = (char)a19;
    *(int32_t *)(v5 + 0x3a1d) = a20;
    *(int32_t *)(v5 + 0x3e91) = a21;
    *(int32_t *)(v5 + 0x3e95) = a22;
    *(char *)(v5 + 0x3a21) = (char)a23;
    *(char *)(v5 + 0x3a22) = (char)a24;
    *(int32_t *)(v5 + 0x3a25) = a25;
    *(int32_t *)(v5 + 0x3a29) = a26;
    *(int32_t *)(v5 + 0x3a2d) = a27;
    *(int32_t *)(v5 + 0x3a31) = a28;
    *(int32_t *)(v5 + 0x3a35) = a29;
    *(int32_t *)(v5 + 0x3a39) = a30;
    *(char *)(v5 + 0x3a3d) = (char)a31;
    *(int16_t *)(v5 + 0x3a3f) = (int16_t)a32;
    *(int16_t *)(v5 + 0x3a41) = (int16_t)a33;
    *(int16_t *)(v5 + 0x3e99) = (int16_t)a34;
    *(int32_t *)(v5 + 0x3a45) = a35;
    *(int32_t *)(v5 + 0x3a49) = a36;
    *(int16_t *)(v5 + 0x3a4d) = (int16_t)a37;
    *(int32_t *)(v5 + 0x3a51) = a38;
    *(int32_t *)(v5 + 0x3a55) = a39;
    *(int32_t *)(v5 + 0x3e9d) = a40;
    return 0;
}

// Address range: 0x8049913 - 0x8049d9d
int32_t func_1(void) {
    // 0x8049913
    int32_t v1; // 0x8049913
    __x86_get_pc_thunk_ax(v1);
    set_var(0xfffb, 0xfff9, 0, 9, -0x32b6a676, -1, 0, 74, 0, 0x1ac28c4f, -0x597da27e, 2, -4, 9, -1, 0, 7, -109, 1, -0x6f828c08, 0, 0, 6, 90, -6, 0x70736f6a, 1, 0x37f39b1b, -0x2cdb4a8d, -0x64d4e24f, 95, 0xbc1a, 0x6f21, 0, -0x483e8b70, -1, 0x4375, 1, -1, 0);
    return 9;
}

// Address range: 0x8049d9d - 0x804a2fb
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049dc6
    int32_t v3; // 0x8049d9d
    if (v1 == (char **)2) {
        // 0x8049dc8
        int32_t v4; // 0x8049d9d
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049dce
        v2 = strcmp((char *)str, (char *)(v3 + 1590)) == 0;
    }
    // 0x8049dee
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3270), v3 + 1592, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3272), v3 + 1596, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3274), v3 + 1600, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3276), v3 + 1605, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3278), v3 + 1610, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x327c), v3 + 1615, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x327e), v3 + 1620, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3280), v3 + 1625, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3281), v3 + 1630, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3284), v3 + 1635, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3288), v3 + 1640, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x328c), v3 + 1645, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3290), v3 + 1651, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3294), v3 + 1657, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3295), v3 + 1663, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3710), v3 + 1669, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3298), v3 + 1675, v2);
    transparent_crc(-1, v3 + 1681, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x329c), v3 + 1687, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x329d), v3 + 1693, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32a0), v3 + 1699, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3714), v3 + 1705, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3718), v3 + 1711, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32a4), v3 + 1717, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32a5), v3 + 1723, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32a8), v3 + 1729, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32ac), v3 + 1735, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32b0), v3 + 1741, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32b4), v3 + 1747, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32b8), v3 + 1753, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32bc), v3 + 1759, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x32c0), v3 + 1765, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32c2), v3 + 1771, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32c4), v3 + 1777, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x371c), v3 + 1783, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32c8), v3 + 1789, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32cc), v3 + 1795, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x32d0), v3 + 1801, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32d4), v3 + 1807, v2);
    transparent_crc(*(int32_t *)(v3 + 0x32d8), v3 + 1813, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3720), v3 + 1819, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x326c), v2);
    return 0;
}

// Address range: 0x804a2fb - 0x804a2ff
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a2fb
    return result;
}

// Address range: 0x804a2ff - 0x804a303
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804a2ff
    int32_t result; // 0x804a2ff
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12