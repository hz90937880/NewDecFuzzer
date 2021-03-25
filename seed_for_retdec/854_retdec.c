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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x2ede));
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
        chars_printed = printf((char *)(v1 + 0x1ddd));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80498c7
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30, int32_t a31, int32_t a32, int32_t a33, int32_t a34, int32_t a35, int32_t a36) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x49ed) = a1;
    *(int16_t *)(v5 + 0x49f1) = (int16_t)a2;
    *(char *)(v5 + 0x49f3) = (char)a3;
    *(int32_t *)(v5 + 0x49f5) = a4;
    *(int16_t *)(v5 + 0x49f9) = (int16_t)a5;
    *(int32_t *)(v5 + 0x49fd) = a6;
    *(int32_t *)(v5 + 0x4a01) = a7;
    *(int32_t *)(v5 + 0x4a05) = a8;
    *(int32_t *)(v5 + 0x4a09) = a9;
    *(int16_t *)(v5 + 0x4a0d) = (int16_t)a10;
    *(char *)(v5 + 0x4a0f) = (char)a11;
    *(char *)(v5 + 0x4a10) = (char)a12;
    *(int16_t *)(v5 + 0x4a11) = (int16_t)a13;
    *(int32_t *)(v5 + 0x4a15) = a14;
    *(int16_t *)(v5 + 0x4a19) = (int16_t)a15;
    *(int32_t *)(v5 + 0x4a1d) = a16;
    *(int32_t *)(v5 + 0x4a21) = a17;
    *(int32_t *)(v5 + 0x4a25) = a18;
    *(int32_t *)(v5 + 0x4a29) = a19;
    *(char *)(v5 + 0x4a2d) = (char)a20;
    *(int16_t *)(v5 + 0x4a2f) = (int16_t)a21;
    *(char *)(v5 + 0x4a31) = (char)a22;
    *(int32_t *)(v5 + 0x4a35) = a23;
    *(int32_t *)(v5 + 0x4a39) = a24;
    *(int16_t *)(v5 + 0x4a3d) = (int16_t)a25;
    *(int16_t *)(v5 + 0x4a3f) = (int16_t)a26;
    *(char *)(v5 + 0x4a41) = (char)a27;
    *(char *)(v5 + 0x4a42) = (char)a28;
    *(char *)(v5 + 0x4a43) = (char)a29;
    *(int32_t *)(v5 + 0x4a45) = a30;
    *(int32_t *)(v5 + 0x4a49) = a31;
    *(int32_t *)(v5 + 0x4a4d) = a32;
    *(char *)(v5 + 0x4a51) = (char)a33;
    *(char *)(v5 + 0x4a52) = (char)a34;
    *(char *)(v5 + 0x4a53) = (char)a35;
    *(int32_t *)(v5 + 0x4e8d) = a36;
    return 0;
}

// Address range: 0x80498c7 - 0x804adf3
int32_t func_1(void) {
    // 0x804adeb
    int32_t v1; // 0x80498c7
    __x86_get_pc_thunk_ax(v1);
    set_var(1, 0, 0, -20, 0x7c39, -0x3680, 0x569d98e8, -1, -5, 0x740d, 5, 85, -0x2099, 0x5c80b88c, 0x7798, 0x78458067, 0x2d299328, 6, 5, 4, 7, -72, 9, 1, -0x47ec, 0xcae3, -72, 179, 250, 1, 6, -6, -1, 1, 217, 0);
    return -20;
}

// Address range: 0x804adf3 - 0x804b2bf
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804ae1c
    int32_t v3; // 0x804adf3
    if (v1 == (char **)2) {
        // 0x804ae1e
        int32_t v4; // 0x804adf3
        int32_t str = *(int32_t *)(v4 + 4); // 0x804ae24
        v2 = strcmp((char *)str, (char *)(v3 + 1438)) == 0;
    }
    // 0x804ae44
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x321a), v3 + 1440, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x321e), v3 + 1445, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3220), v3 + 1450, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3222), v3 + 1455, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3226), v3 + 1460, v2);
    transparent_crc(*(int32_t *)(v3 + 0x322a), v3 + 1465, v2);
    transparent_crc(*(int32_t *)(v3 + 0x322e), v3 + 1470, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3232), v3 + 1475, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3236), v3 + 1480, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x323a), v3 + 1485, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x323c), v3 + 1490, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x323d), v3 + 1495, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x323e), v3 + 1501, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3242), v3 + 1507, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3246), v3 + 1513, v2);
    transparent_crc(*(int32_t *)(v3 + 0x324a), v3 + 1519, v2);
    transparent_crc(*(int32_t *)(v3 + 0x324e), v3 + 1525, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3252), v3 + 1531, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3256), v3 + 1537, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x325a), v3 + 1543, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x325c), v3 + 1549, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x325e), v3 + 1555, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3262), v3 + 1561, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3266), v3 + 1567, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x326a), v3 + 1573, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x326c), v3 + 1579, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x326e), v3 + 1585, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x326f), v3 + 1591, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3270), v3 + 1597, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3272), v3 + 1603, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3276), v3 + 1609, v2);
    transparent_crc(*(int32_t *)(v3 + 0x327a), v3 + 1615, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x327e), v3 + 1621, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x327f), v3 + 1627, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3280), v3 + 1633, v2);
    transparent_crc(*(int32_t *)(v3 + 0x36ba), v3 + 1639, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x3216), v2);
    return 0;
}

// Address range: 0x804b2bf - 0x804b2c3
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b2bf
    return result;
}

// Address range: 0x804b2c3 - 0x804b2c7
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804b2c3
    int32_t result; // 0x804b2c3
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
