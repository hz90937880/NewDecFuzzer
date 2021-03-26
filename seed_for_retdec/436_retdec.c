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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x285e));
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
        *(int32_t *)(v2 + 0x3c2a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x3bb9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 0x175d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804979f
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int32_t *)(v5 + 0x39f0) = a1;
    *(int16_t *)(v5 + 0x3e70) = (int16_t)a2;
    *(int32_t *)(v5 + 0x39f4) = a3;
    *(char *)(v5 + 0x39f8) = (char)a4;
    *(char *)(v5 + 0x39f9) = (char)a5;
    *(int32_t *)(v5 + 0x39fc) = a6;
    *(int32_t *)(v5 + 0x3e74) = a7;
    *(int16_t *)(v5 + 0x3a00) = (int16_t)a8;
    *(char *)(v5 + 0x3a02) = (char)a9;
    *(char *)(v5 + 0x3a03) = (char)a10;
    *(char *)(v5 + 0x3a04) = (char)a11;
    *(int32_t *)(v5 + 0x3a08) = a12;
    *(int32_t *)(v5 + 0x3a0c) = a13;
    *(int32_t *)(v5 + 0x3a10) = a14;
    *(int16_t *)(v5 + 0x3a14) = (int16_t)a15;
    *(int16_t *)(v5 + 0x3a16) = (int16_t)a16;
    *(int32_t *)(v5 + 0x3a18) = a17;
    *(int32_t *)(v5 + 0x3a1c) = a18;
    *(int16_t *)(v5 + 0x3e78) = (int16_t)a19;
    *(int32_t *)(v5 + 0x3a20) = a20;
    *(int32_t *)(v5 + 0x3a24) = a21;
    *(int32_t *)(v5 + 0x3a28) = a22;
    *(char *)(v5 + 0x3a2c) = (char)a23;
    return 0;
}

// Address range: 0x804979f - 0x804a907
int32_t func_1(void) {
    // 0x8049f30
    int32_t v1; // 0x804979f
    __x86_get_pc_thunk_ax(v1);
    set_var(-0x3dac2a01, 0, 0x46df37d5, 244, 26, -0x3dac2a55, 0, -10, 3, 91, 1, 5, 0xacd80c3, 7, -0x7623, 5, 5, -1, 0, -0x638e8b53, 0x564c8a04, 1, -1);
    return 1;
}

// Address range: 0x804a907 - 0x804ac43
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a930
    int32_t v3; // 0x804a907
    if (v1 == (char **)2) {
        // 0x804a932
        int32_t v4; // 0x804a907
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a938
        v2 = strcmp((char *)str, (char *)(v3 + 1034)) == 0;
    }
    // 0x804a958
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x2706), v3 + 1036, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b86), v3 + 1040, v2);
    transparent_crc(*(int32_t *)(v3 + 0x270a), v3 + 1044, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x270e), v3 + 1048, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x270f), v3 + 1053, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2712), v3 + 1058, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2b8a), v3 + 1063, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2716), v3 + 1068, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2718), v3 + 1073, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2719), v3 + 1078, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x271a), v3 + 1084, v2);
    transparent_crc(*(int32_t *)(v3 + 0x271e), v3 + 1090, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2722), v3 + 1096, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2726), v3 + 1102, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x272a), v3 + 1108, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x272c), v3 + 1114, v2);
    transparent_crc(*(int32_t *)(v3 + 0x272e), v3 + 1120, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2732), v3 + 1126, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2b8e), v3 + 1132, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2736), v3 + 1138, v2);
    transparent_crc(*(int32_t *)(v3 + 0x273a), v3 + 1144, v2);
    transparent_crc(*(int32_t *)(v3 + 0x273e), v3 + 1150, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2742), v3 + 1156, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2702), v2);
    return 0;
}

// Address range: 0x804ac43 - 0x804ac47
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804ac43
    return result;
}

// Address range: 0x804ac47 - 0x804ac4b
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804ac47
    int32_t result; // 0x804ac47
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
