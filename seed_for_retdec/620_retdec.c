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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x2e1e));
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
        chars_printed = printf((char *)(v1 + 0x1d1d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049833
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28, int32_t a29, int32_t a30) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x49f0) = a1;
    *(char *)(v5 + 0x49f4) = (char)a2;
    *(int32_t *)(v5 + 0x49f8) = a3;
    *(char *)(v5 + 0x49fc) = (char)a4;
    *(int32_t *)(v5 + 0x4a00) = a5;
    *(char *)(v5 + 0x4a04) = (char)a6;
    *(int16_t *)(v5 + 0x4a06) = (int16_t)a7;
    *(int32_t *)(v5 + 0x4a08) = a8;
    *(int32_t *)(v5 + 0x4a0c) = a9;
    *(int32_t *)(v5 + 0x4a10) = a10;
    *(int32_t *)(v5 + 0x4a14) = a11;
    *(int16_t *)(v5 + 0x4a18) = (int16_t)a12;
    *(int32_t *)(v5 + 0x4a1c) = a13;
    *(int32_t *)(v5 + 0x4a20) = a14;
    *(int32_t *)(v5 + 0x4a24) = a15;
    *(int32_t *)(v5 + 0x4a28) = a16;
    *(int16_t *)(v5 + 0x4a2c) = (int16_t)a17;
    *(int16_t *)(v5 + 0x4a2e) = (int16_t)a18;
    *(char *)(v5 + 0x4a30) = (char)a19;
    *(int16_t *)(v5 + 0x4a32) = (int16_t)a20;
    *(int32_t *)(v5 + 0x4a34) = a21;
    *(int16_t *)(v5 + 0x4a38) = (int16_t)a22;
    *(char *)(v5 + 0x4a3a) = (char)a23;
    *(int16_t *)(v5 + 0x4a3c) = (int16_t)a24;
    *(int32_t *)(v5 + 0x4a40) = a25;
    *(char *)(v5 + 0x4a44) = (char)a26;
    *(int32_t *)(v5 + 0x4a48) = a27;
    *(char *)(v5 + 0x4e90) = (char)a28;
    *(int16_t *)(v5 + 0x4a4c) = (int16_t)a29;
    *(int16_t *)(v5 + 0x4a4e) = (int16_t)a30;
    return 0;
}

// Address range: 0x8049833 - 0x804adeb
int32_t func_1(void) {
    // 0x8049833
    int32_t v1; // 0x8049833
    __x86_get_pc_thunk_ax(v1);
    set_var(0x70ad6f2e, 2, 148, 253, 3, 254, 0x2cbe, 0x2c4540e5, 0x7b03f2b, 1, 7, 3018, 0x2bc21653, -0x46d665f9, 1, -1, 0x7db4, 0x18be, 0, 0x71d1, 0x66ea20a0, 3, 110, 0xfffe, -0x12aecb15, 242, 0x6289f042, 0, 3, 0xfffe);
    return 0xfff8;
}

// Address range: 0x804adeb - 0x804b201
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804ae14
    int32_t v3; // 0x804adeb
    if (v1 == (char **)2) {
        // 0x804ae16
        int32_t v4; // 0x804adeb
        int32_t str = *(int32_t *)(v4 + 4); // 0x804ae1c
        v2 = strcmp((char *)str, (char *)(v3 + 1254)) == 0;
    }
    // 0x804ae3c
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x3222), v3 + 1256, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3226), v3 + 1260, v2);
    transparent_crc(*(int32_t *)(v3 + 0x322a), v3 + 1265, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x322e), v3 + 1270, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3232), v3 + 1275, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3236), v3 + 1280, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3238), v3 + 1285, v2);
    transparent_crc(*(int32_t *)(v3 + 0x323a), v3 + 1290, v2);
    transparent_crc(*(int32_t *)(v3 + 0x323e), v3 + 1295, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3242), v3 + 1300, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3246), v3 + 1305, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x324a), v3 + 1310, v2);
    transparent_crc(*(int32_t *)(v3 + 0x324e), v3 + 1316, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3252), v3 + 1322, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3256), v3 + 1328, v2);
    transparent_crc(*(int32_t *)(v3 + 0x325a), v3 + 1334, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x325e), v3 + 1340, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3260), v3 + 1346, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3262), v3 + 1352, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3264), v3 + 1358, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3266), v3 + 1364, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x326a), v3 + 1370, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x326c), v3 + 1376, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x326e), v3 + 1382, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3272), v3 + 1388, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3276), v3 + 1394, v2);
    transparent_crc(*(int32_t *)(v3 + 0x327a), v3 + 1400, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x36c2), v3 + 1406, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x327e), v3 + 1412, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3280), v3 + 1418, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x321e), v2);
    return 0;
}

// Address range: 0x804b201 - 0x804b205
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b201
    return result;
}

// Address range: 0x804b205 - 0x804b209
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804b205
    int32_t result; // 0x804b205
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
