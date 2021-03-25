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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x2c8e));
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
        chars_printed = printf((char *)(v1 + 0x1b8d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80498bf
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int16_t *)(v5 + 0x49ed) = (int16_t)a1;
    *(int32_t *)(v5 + 0x49f1) = a2;
    *(int32_t *)(v5 + 0x49f5) = a3;
    *(char *)(v5 + 0x49f9) = (char)a4;
    *(char *)(v5 + 0x49fa) = (char)a5;
    *(int32_t *)(v5 + 0x49fd) = a6;
    *(int32_t *)(v5 + 0x4a01) = a7;
    *(char *)(v5 + 0x4a05) = (char)a8;
    *(char *)(v5 + 0x4a06) = (char)a9;
    *(int16_t *)(v5 + 0x4a07) = (int16_t)a10;
    *(int32_t *)(v5 + 0x4a09) = a11;
    *(char *)(v5 + 0x4a0d) = (char)a12;
    *(int32_t *)(v5 + 0x4a11) = a13;
    *(int16_t *)(v5 + 0x4a15) = (int16_t)a14;
    *(int32_t *)(v5 + 0x4a19) = a15;
    *(int16_t *)(v5 + 0x4a1d) = (int16_t)a16;
    *(int16_t *)(v5 + 0x4a1f) = (int16_t)a17;
    *(char *)(v5 + 0x4a21) = (char)a18;
    *(char *)(v5 + 0x4a22) = (char)a19;
    *(int32_t *)(v5 + 0x4a25) = a20;
    *(char *)(v5 + 0x4a29) = (char)a21;
    *(int32_t *)(v5 + 0x4a2d) = a22;
    *(int32_t *)(v5 + 0x4a31) = a23;
    *(char *)(v5 + 0x4a35) = (char)a24;
    *(int32_t *)(v5 + 0x4a39) = a25;
    *(int32_t *)(v5 + 0x4a3d) = a26;
    *(int32_t *)(v5 + 0x4a41) = a27;
    *(int16_t *)(v5 + 0x4a45) = (int16_t)a28;
    *(char *)(v5 + 0x4a47) = (char)a29;
    *(int16_t *)(v5 + 0x4a49) = (int16_t)a30;
    *(char *)(v5 + 0x4a4b) = (char)a31;
    *(int16_t *)(v5 + 0x4a4d) = (int16_t)a32;
    *(int16_t *)(v5 + 0x4a4f) = (int16_t)a33;
    return 0;
}

// Address range: 0x80498bf - 0x804abee
int32_t func_1(void) {
    // 0x80498bf
    int32_t v1; // 0x80498bf
    __x86_get_pc_thunk_ax(v1);
    set_var(2880, -2, 0, 1, 204, -0x37ac2c3c, -1, 0, -1, 0x2c8c, 0x47fffb5c, 103, -3, 0x4172, -2, 0x26f6, 0xaa99, -10, 201, -1, 0, 108, 2, 63, 172, 0x3dd9bafb, 0x440db710, 49, 7, 0x5ce5, 2, 0xbd03, 0xfffd);
    return -1;
}

// Address range: 0x804abee - 0x804b06a
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804ac17
    int32_t v3; // 0x804abee
    if (v1 == (char **)2) {
        // 0x804ac19
        int32_t v4; // 0x804abee
        int32_t str = *(int32_t *)(v4 + 4); // 0x804ac1f
        v2 = strcmp((char *)str, (char *)(v3 + 1363)) == 0;
    }
    // 0x804ac3f
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x341f), v3 + 1365, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3423), v3 + 1369, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3427), v3 + 1374, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x342b), v3 + 1379, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x342c), v3 + 1384, v2);
    transparent_crc(*(int32_t *)(v3 + 0x342f), v3 + 1389, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3433), v3 + 1394, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3437), v3 + 1399, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3438), v3 + 1404, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3439), v3 + 1409, v2);
    transparent_crc(*(int32_t *)(v3 + 0x343b), v3 + 1414, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x343f), v3 + 1420, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3443), v3 + 1426, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3447), v3 + 1432, v2);
    transparent_crc(*(int32_t *)(v3 + 0x344b), v3 + 1438, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x344f), v3 + 1444, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3451), v3 + 1450, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3453), v3 + 1456, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3454), v3 + 1462, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3457), v3 + 1468, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x345b), v3 + 1474, v2);
    transparent_crc(*(int32_t *)(v3 + 0x345f), v3 + 1480, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3463), v3 + 1486, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3467), v3 + 1492, v2);
    transparent_crc(*(int32_t *)(v3 + 0x346b), v3 + 1498, v2);
    transparent_crc(*(int32_t *)(v3 + 0x346f), v3 + 1504, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3473), v3 + 1510, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3477), v3 + 1516, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3479), v3 + 1522, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x347b), v3 + 1528, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x347d), v3 + 1534, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x347f), v3 + 1540, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3481), v3 + 1546, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x341b), v2);
    return 0;
}

// Address range: 0x804b06a - 0x804b06e
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b06a
    return result;
}

// Address range: 0x804b06e - 0x804b072
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804b06e
    int32_t result; // 0x804b06e
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
