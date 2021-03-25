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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x2a4e));
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
        chars_printed = printf((char *)(v1 + 0x194d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80497e6
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(int16_t *)(v5 + 0x39f0) = (int16_t)a1;
    *(int16_t *)(v5 + 0x39f2) = (int16_t)a2;
    *(int32_t *)(v5 + 0x39f4) = a3;
    *(int32_t *)(v5 + 0x39f8) = a4;
    *(int32_t *)(v5 + 0x39fc) = a5;
    *(int32_t *)(v5 + 0x3a00) = a6;
    *(char *)(v5 + 0x3a04) = (char)a7;
    *(int16_t *)(v5 + 0x3a06) = (int16_t)a8;
    *(char *)(v5 + 0x3a08) = (char)a9;
    *(int32_t *)(v5 + 0x3a0c) = a10;
    *(int32_t *)(v5 + 0x3a10) = a11;
    *(int16_t *)(v5 + 0x3a14) = (int16_t)a12;
    *(int16_t *)(v5 + 0x3a16) = (int16_t)a13;
    *(int32_t *)(v5 + 0x3e70) = a14;
    *(char *)(v5 + 0x3e74) = (char)a15;
    *(char *)(v5 + 0x3a18) = (char)a16;
    *(int16_t *)(v5 + 0x3a1a) = (int16_t)a17;
    *(int32_t *)(v5 + 0x3a1c) = a18;
    *(char *)(v5 + 0x3e75) = (char)a19;
    *(char *)(v5 + 0x3e76) = (char)a20;
    *(int32_t *)(v5 + 0x3a20) = a21;
    *(int32_t *)(v5 + 0x3a24) = a22;
    *(int32_t *)(v5 + 0x3a28) = a23;
    *(char *)(v5 + 0x3a2c) = (char)a24;
    *(int16_t *)(v5 + 0x3a2e) = (int16_t)a25;
    return 0;
}

// Address range: 0x80497e6 - 0x804aab1
int32_t func_1(void) {
    // 0x80497e6
    int32_t v1; // 0x80497e6
    __x86_get_pc_thunk_ax(v1);
    set_var(-1, 0, -4, 0, -18, 1, -71, -0x285e, 255, 1, -0x642b, 0x18c2, -0x1e72, 0, 0, 247, 0xffff, 0, 0, 0, 1, -0x3374de18, 0x734b3017, 169, 0x6538);
    return 0;
}

// Address range: 0x804aab1 - 0x804ae2f
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804aada
    int32_t v3; // 0x804aab1
    if (v1 == (char **)2) {
        // 0x804aadc
        int32_t v4; // 0x804aab1
        int32_t str = *(int32_t *)(v4 + 4); // 0x804aae2
        v2 = strcmp((char *)str, (char *)(v3 + 1104)) == 0;
    }
    // 0x804ab02
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x255c), v3 + 1106, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x255e), v3 + 1111, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2560), v3 + 1116, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2564), v3 + 1121, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2568), v3 + 1126, v2);
    transparent_crc(*(int32_t *)(v3 + 0x256c), v3 + 1131, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2570), v3 + 1136, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2572), v3 + 1141, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2574), v3 + 1146, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2578), v3 + 1151, v2);
    transparent_crc(*(int32_t *)(v3 + 0x257c), v3 + 1157, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2580), v3 + 1163, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2582), v3 + 1169, v2);
    transparent_crc(*(int32_t *)(v3 + 0x29dc), v3 + 1175, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29e0), v3 + 1181, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2584), v3 + 1187, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2586), v3 + 1193, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2588), v3 + 1199, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29e1), v3 + 1205, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x29e2), v3 + 1211, v2);
    transparent_crc(*(int32_t *)(v3 + 0x258c), v3 + 1217, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2590), v3 + 1223, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2594), v3 + 1229, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2598), v3 + 1235, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x259a), v3 + 1241, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2558), v2);
    return 0;
}

// Address range: 0x804ae2f - 0x804ae33
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804ae2f
    return result;
}

// Address range: 0x804ae33 - 0x804ae37
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804ae33
    int32_t result; // 0x804ae33
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
