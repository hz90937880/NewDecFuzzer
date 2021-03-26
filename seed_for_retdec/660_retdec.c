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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x2c5e));
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
        chars_printed = printf((char *)(v1 + 0x1b5d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80497fe
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x4e90) = a1;
    *(int32_t *)(v5 + 0x49f0) = a2;
    *(char *)(v5 + 0x49f4) = (char)a3;
    *(int16_t *)(v5 + 0x49f6) = (int16_t)a4;
    *(char *)(v5 + 0x49f8) = (char)a5;
    *(int16_t *)(v5 + 0x49fa) = (int16_t)a6;
    *(int32_t *)(v5 + 0x49fc) = a7;
    *(int32_t *)(v5 + 0x4a00) = a8;
    *(int32_t *)(v5 + 0x4a04) = a9;
    *(int16_t *)(v5 + 0x4a08) = (int16_t)a10;
    *(int32_t *)(v5 + 0x4a0c) = a11;
    *(char *)(v5 + 0x4a10) = (char)a12;
    *(int32_t *)(v5 + 0x4a14) = a13;
    *(int16_t *)(v5 + 0x4a18) = (int16_t)a14;
    *(int32_t *)(v5 + 0x4a1c) = a15;
    *(int32_t *)(v5 + 0x4a20) = a16;
    *(int32_t *)(v5 + 0x4a24) = a17;
    *(char *)(v5 + 0x4a28) = (char)a18;
    *(int32_t *)(v5 + 0x4a2c) = a19;
    *(int32_t *)(v5 + 0x4e94) = a20;
    *(char *)(v5 + 0x4a30) = (char)a21;
    *(int32_t *)(v5 + 0x4a34) = a22;
    *(int16_t *)(v5 + 0x4a38) = (int16_t)a23;
    *(char *)(v5 + 0x4a3a) = (char)a24;
    *(int16_t *)(v5 + 0x4a3c) = (int16_t)a25;
    *(int32_t *)(v5 + 0x4a40) = a26;
    *(int16_t *)(v5 + 0x4a44) = (int16_t)a27;
    *(int32_t *)(v5 + 0x4a48) = a28;
    *(int32_t *)(v5 + 0x4a4c) = a29;
    *(int32_t *)(v5 + 0x4a50) = a30;
    return 0;
}

// Address range: 0x80497fe - 0x804ac33
int32_t func_1(void) {
    // 0x80497fe
    int32_t v1; // 0x80497fe
    __x86_get_pc_thunk_ax(v1);
    set_var(1, 0, 9, 1, 0, -0x2f7b, 1, 1, 0x7c9b672, 1, -1, -80, 0x2afa6f61, 0xfffa, 6, -1, 1, 254, 1, 0, 167, -3, -1, -18, -4, -1, -0x720f, -0x58949996, 1, -0x18d0618);
    return 5;
}

// Address range: 0x804ac33 - 0x804b03b
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804ac5c
    int32_t v3; // 0x804ac33
    if (v1 == (char **)2) {
        // 0x804ac5e
        int32_t v4; // 0x804ac33
        int32_t str = *(int32_t *)(v4 + 4); // 0x804ac64
        v2 = strcmp((char *)str, (char *)(v3 + 1246)) == 0;
    }
    // 0x804ac84
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x387a), v3 + 1248, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33da), v3 + 1252, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x33de), v3 + 1257, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33e0), v3 + 1262, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x33e2), v3 + 1267, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33e4), v3 + 1272, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33e6), v3 + 1277, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33ea), v3 + 1283, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33ee), v3 + 1289, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x33f2), v3 + 1295, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33f6), v3 + 1301, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x33fa), v3 + 1307, v2);
    transparent_crc(*(int32_t *)(v3 + 0x33fe), v3 + 1313, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3402), v3 + 1319, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3406), v3 + 1325, v2);
    transparent_crc(*(int32_t *)(v3 + 0x340a), v3 + 1331, v2);
    transparent_crc(*(int32_t *)(v3 + 0x340e), v3 + 1337, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3412), v3 + 1343, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3416), v3 + 1349, v2);
    transparent_crc(*(int32_t *)(v3 + 0x387e), v3 + 1355, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x341a), v3 + 1361, v2);
    transparent_crc(*(int32_t *)(v3 + 0x341e), v3 + 1367, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3422), v3 + 1373, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3424), v3 + 1379, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3426), v3 + 1385, v2);
    transparent_crc(*(int32_t *)(v3 + 0x342a), v3 + 1391, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x342e), v3 + 1397, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3432), v3 + 1403, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3436), v3 + 1409, v2);
    transparent_crc(*(int32_t *)(v3 + 0x343a), v3 + 1415, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x33d6), v2);
    return 0;
}

// Address range: 0x804b03b - 0x804b03f
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b03b
    return result;
}

// Address range: 0x804b03f - 0x804b043
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804b03f
    int32_t result; // 0x804b03f
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12