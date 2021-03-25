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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x358e));
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
        chars_printed = printf((char *)(v1 + 0x248d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804986f
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x49f0) = a1;
    *(int16_t *)(v5 + 0x4e90) = (int16_t)a2;
    *(int32_t *)(v5 + 0x49f4) = a3;
    *(char *)(v5 + 0x49f8) = (char)a4;
    *(char *)(v5 + 0x49f9) = (char)a5;
    *(int32_t *)(v5 + 0x49fc) = a6;
    *(int32_t *)(v5 + 0x4a00) = a7;
    *(int32_t *)(v5 + 0x4a04) = a8;
    *(int16_t *)(v5 + 0x4a08) = (int16_t)a9;
    *(int16_t *)(v5 + 0x4a0a) = (int16_t)a10;
    *(int16_t *)(v5 + 0x4e92) = (int16_t)a11;
    *(int32_t *)(v5 + 0x4a0c) = a12;
    *(int32_t *)(v5 + 0x4a10) = a13;
    *(char *)(v5 + 0x4a14) = (char)a14;
    *(int32_t *)(v5 + 0x4e94) = a15;
    *(int32_t *)(v5 + 0x4e98) = a16;
    *(int32_t *)(v5 + 0x4e9c) = a17;
    *(int32_t *)(v5 + 0x4a18) = a18;
    *(int32_t *)(v5 + 0x4a1c) = a19;
    *(int32_t *)(v5 + 0x4a20) = a20;
    *(int32_t *)(v5 + 0x4a24) = a21;
    *(char *)(v5 + 0x4ea0) = (char)a22;
    *(int16_t *)(v5 + 0x4a28) = (int16_t)a23;
    *(int32_t *)(v5 + 0x4a2c) = a24;
    *(int32_t *)(v5 + 0x4a30) = a25;
    *(char *)(v5 + 0x4a34) = (char)a26;
    *(int16_t *)(v5 + 0x4a36) = (int16_t)a27;
    *(int16_t *)(v5 + 0x4a38) = (int16_t)a28;
    *(int32_t *)(v5 + 0x4a3c) = a29;
    *(int16_t *)(v5 + 0x4a40) = (int16_t)a30;
    *(char *)(v5 + 0x4a42) = (char)a31;
    *(int16_t *)(v5 + 0x4a44) = (int16_t)a32;
    *(int32_t *)(v5 + 0x4a48) = a33;
    *(char *)(v5 + 0x4a4c) = (char)a34;
    *(int32_t *)(v5 + 0x4ea4) = a35;
    return 0;
}

// Address range: 0x804986f - 0x804b4ce
int32_t func_1(void) {
    // 0x804a1e3
    int32_t v1; // 0x804986f
    __x86_get_pc_thunk_ax(v1);
    set_var(-8, 0, 0x4f6c, 11, 1, 1, -1, -8, 3, 0x56c6, 0, 1, 0x6e56265d, 51, 0, 0, 0, -1, 0, -1, -2, 0, -3, -166, 3, 1, -0x1313, 0xfffe, 0x4061b3a2, -9, 214, 0x62ad, -1, 1, 0);
    return 0;
}

// Address range: 0x804b4ce - 0x804b970
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804b4f7
    int32_t v3; // 0x804b4ce
    if (v1 == (char **)2) {
        // 0x804b4f9
        int32_t v4; // 0x804b4ce
        int32_t str = *(int32_t *)(v4 + 4); // 0x804b4ff
        v2 = strcmp((char *)str, (char *)(v3 + 1395)) == 0;
    }
    // 0x804b51f
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2b3f), v3 + 1397, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2fdf), v3 + 1401, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b43), v3 + 1406, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b47), v3 + 1411, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b48), v3 + 1416, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b4b), v3 + 1421, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b4f), v3 + 1426, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b53), v3 + 1431, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b57), v3 + 1436, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b59), v3 + 1441, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2fe1), v3 + 1446, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b5b), v3 + 1451, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b5f), v3 + 1456, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b63), v3 + 1461, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fe3), v3 + 1466, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fe7), v3 + 1472, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2feb), v3 + 1478, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b67), v3 + 1484, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b6b), v3 + 1490, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b6f), v3 + 1496, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b73), v3 + 1502, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2fef), v3 + 1508, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b77), v3 + 1514, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b7b), v3 + 1520, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b7f), v3 + 1526, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b83), v3 + 1532, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b85), v3 + 1538, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b87), v3 + 1544, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b8b), v3 + 1550, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b8f), v3 + 1556, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b91), v3 + 1562, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b93), v3 + 1568, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b97), v3 + 1574, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2b9b), v3 + 1580, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ff3), v3 + 1586, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2b3b), v2);
    return 0;
}

// Address range: 0x804b970 - 0x804b974
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b970
    return result;
}

// Address range: 0x804b974 - 0x804b978
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804b974
    int32_t result; // 0x804b974
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12