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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x30de));
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
        chars_printed = printf((char *)(v1 + 0x1fdd));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804986d
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x49f0) = a1;
    *(char *)(v5 + 0x49f4) = (char)a2;
    *(int16_t *)(v5 + 0x49f6) = (int16_t)a3;
    *(int32_t *)(v5 + 0x49f8) = a4;
    *(int32_t *)(v5 + 0x49fc) = a5;
    *(int32_t *)(v5 + 0x4a00) = a6;
    *(char *)(v5 + 0x4a04) = (char)a7;
    *(int32_t *)(v5 + 0x4a08) = a8;
    *(int16_t *)(v5 + 0x4e90) = (int16_t)a9;
    *(char *)(v5 + 0x4a0c) = (char)a10;
    *(int32_t *)(v5 + 0x4a10) = a11;
    *(int32_t *)(v5 + 0x4a14) = a12;
    *(int16_t *)(v5 + 0x4a18) = (int16_t)a13;
    *(int32_t *)(v5 + 0x4a1c) = a14;
    *(int32_t *)(v5 + 0x4a20) = a15;
    *(int32_t *)(v5 + 0x4a24) = a16;
    *(int16_t *)(v5 + 0x4a28) = (int16_t)a17;
    *(int16_t *)(v5 + 0x4e92) = (int16_t)a18;
    *(int32_t *)(v5 + 0x4a2c) = a19;
    *(char *)(v5 + 0x4a30) = (char)a20;
    *(int32_t *)(v5 + 0x4a34) = a21;
    *(int32_t *)(v5 + 0x4e94) = a22;
    *(char *)(v5 + 0x4a38) = (char)a23;
    *(char *)(v5 + 0x4a39) = (char)a24;
    *(int16_t *)(v5 + 0x4a3a) = (int16_t)a25;
    *(int16_t *)(v5 + 0x4a3c) = (int16_t)a26;
    *(char *)(v5 + 0x4e98) = (char)a27;
    *(int32_t *)(v5 + 0x4a40) = a28;
    *(int16_t *)(v5 + 0x4a44) = (int16_t)a29;
    *(int16_t *)(v5 + 0x4a46) = (int16_t)a30;
    *(int32_t *)(v5 + 0x4a48) = a31;
    *(int32_t *)(v5 + 0x4e9c) = a32;
    *(int16_t *)(v5 + 0x4a4c) = (int16_t)a33;
    return 0;
}

// Address range: 0x804986d - 0x804b055
int32_t func_1(void) {
    // 0x804af1d
    int32_t v1; // 0x804986d
    __x86_get_pc_thunk_ax(v1);
    set_var(-3, 1, 0, 1, 0x6b43d271, -66, 247, 1, 0, 0, 2, -1, 0x70fe, -0xa797212, 9, 3, 0xffff, 0, -7, 1, 1, 0, -102, -71, -1, 0x79d2, 247, -1, 3, 0x56bf, 0, 0, 9);
    return -9;
}

// Address range: 0x804b055 - 0x804b4c3
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804b07e
    int32_t v3; // 0x804b055
    if (v1 == (char **)2) {
        // 0x804b080
        int32_t v4; // 0x804b055
        int32_t str = *(int32_t *)(v4 + 4); // 0x804b086
        v2 = strcmp((char *)str, (char *)(v3 + 1340)) == 0;
    }
    // 0x804b0a6
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2fb8), v3 + 1342, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2fbc), v3 + 1346, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2fbe), v3 + 1351, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fc0), v3 + 1356, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fc4), v3 + 1361, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fc8), v3 + 1366, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2fcc), v3 + 1371, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fd0), v3 + 1376, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3458), v3 + 1381, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2fd4), v3 + 1386, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fd8), v3 + 1391, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fdc), v3 + 1396, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2fe0), v3 + 1402, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fe4), v3 + 1408, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fe8), v3 + 1414, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2fec), v3 + 1420, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2ff0), v3 + 1426, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x345a), v3 + 1432, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ff4), v3 + 1438, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ff8), v3 + 1444, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2ffc), v3 + 1450, v2);
    transparent_crc(*(int32_t *)(v3 + 0x345c), v3 + 1456, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3000), v3 + 1462, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3001), v3 + 1468, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3002), v3 + 1474, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3004), v3 + 1480, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3460), v3 + 1486, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3008), v3 + 1492, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x300c), v3 + 1498, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x300e), v3 + 1504, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3010), v3 + 1510, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3464), v3 + 1516, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3014), v3 + 1522, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2fb4), v2);
    return 0;
}

// Address range: 0x804b4c3 - 0x804b4c7
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b4c3
    return result;
}

// Address range: 0x804b4c7 - 0x804b4cb
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804b4c7
    int32_t result; // 0x804b4c7
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
