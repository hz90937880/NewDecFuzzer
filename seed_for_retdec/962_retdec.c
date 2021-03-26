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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, char a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x27ee));
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
        chars_printed = printf((char *)(v1 + 0x16ed));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049654 - 0x8049851
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, char a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28) {
    // 0x8049654
    int32_t v1; // 0x8049654
    int32_t v2; // 0x8049654
    int32_t v3; // 0x8049654
    int32_t v4; // 0x8049654
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049654
    *(int16_t *)(v5 + 0x39c2) = (int16_t)a1;
    *(int32_t *)(v5 + 0x39c6) = a2;
    *(int16_t *)(v5 + 0x3e42) = (int16_t)a3;
    *(int16_t *)(v5 + 0x39ca) = (int16_t)a4;
    *(int32_t *)(v5 + 0x39ce) = a5;
    *(int16_t *)(v5 + 0x39d2) = (int16_t)a6;
    *(int32_t *)(v5 + 0x39d6) = a7;
    *(int16_t *)(v5 + 0x39da) = (int16_t)a8;
    *(int16_t *)(v5 + 0x39dc) = (int16_t)a9;
    *(int16_t *)(v5 + 0x3e44) = (int16_t)a10;
    *(int32_t *)(v5 + 0x3e46) = a11;
    *(int32_t *)(v5 + 0x39de) = a12;
    *(char *)(v5 + 0x39e2) = (char)a13;
    *(int16_t *)(v5 + 0x39e4) = (int16_t)a14;
    *(int16_t *)(v5 + 0x39e6) = (int16_t)a15;
    *(int32_t *)(v5 + 0x3e4a) = a16;
    *(int32_t *)(v5 + 0x39ea) = a17;
    *(char *)(v5 + 0x39ee) = a18;
    *(char *)(v5 + 0x3e4e) = (char)a19;
    *(char *)(v5 + 0x39ef) = (char)a20;
    *(int32_t *)(v5 + 0x39f2) = a21;
    *(char *)(v5 + 0x39f6) = (char)a22;
    *(int32_t *)(v5 + 0x39fa) = a23;
    *(int32_t *)(v5 + 0x39fe) = a24;
    *(char *)(v5 + 0x3a02) = (char)a25;
    *(int32_t *)(v5 + 0x3a06) = a26;
    *(int32_t *)(v5 + 0x3a0a) = a27;
    *(int16_t *)(v5 + 0x3a0e) = (int16_t)a28;
    return 0;
}

// Address range: 0x8049851 - 0x804a7e3
int32_t func_1(void) {
    // 0x8049851
    int32_t v1; // 0x8049851
    __x86_get_pc_thunk_ax(v1);
    int32_t v2 = 7; // 0x8049b83
    int32_t v3; // 0x8049851
    for (int32_t i = 3; i < 9; i++) {
        for (int32_t j = 0; j >= 0xffffffef; j--) {
            // 0x8049b1b
            v3 = v2;
            v2 = v3 & -0x3dfd;
        }
    }
    int32_t v4 = -0x62ffe6d1; // 0x8049e5c
    int32_t v5 = -0x5a10; // 0x8049e5c
    int32_t v6 = 0; // 0x8049e5c
    int32_t v7 = 0; // 0x8049e5c
    int32_t v8 = 4; // 0x8049e5c
    char v9 = -89; // 0x8049e5c
    int32_t v10 = 0; // 0x8049e5c
    int32_t v11 = 229; // 0x8049e5c
    int32_t v12 = 124; // 0x8049e5c
    int32_t v13 = -0x62ffe6d1; // 0x8049e5c
    if ((v2 & -((v3 & 0xc203))) == 0) {
        int32_t v14 = 22; // 0x804a147
        v6 |= 0x6e4d;
        v14 -= 3;
        int32_t v15 = v6; // 0x804a14f
        while (v14 > 14) {
            // 0x804a081
            v6 = v15 | 0x6e4d;
            v14 -= 3;
            v15 = v6;
        }
        // 0x804a3fb
        v4++;
        while (v4 != -0x62ffe6ca) {
            // 0x804a14b
            v14 = 22;
            v6 |= 0x6e4d;
            v14 -= 3;
            v15 = v6;
            while (v14 > 14) {
                // 0x804a081
                v6 = v15 | 0x6e4d;
                v14 -= 3;
                v15 = v6;
            }
            // 0x804a3fb
            v4++;
        }
        // 0x804a439
        v5 = -0x6a4a;
        v7 = 1;
        v8 = -0x77a1c83d;
        v9 = 1;
        v10 = v6 + 120 & 247;
        v11 = 195;
        v12 = 0;
        v13 = -0x62ffe6ca;
    }
    // 0x804a6cd
    set_var(-0x3dfd, 0xce3d978, 104, 107, -4, v5, v6, 0x516a, 277, v7, 0, v8, 2, 6, 4, 0, 0, v9, v10, v11, -1, v12, 0x1fdf78e1, 0x54d7d783, -70, 0x426b7b25, v13, -0x7207);
    return 0x1fdf78e1;
}

// Address range: 0x804a7e3 - 0x804abd0
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a80c
    int32_t v3; // 0x804a7e3
    if (v1 == (char **)2) {
        // 0x804a80e
        int32_t v4; // 0x804a7e3
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a814
        v2 = strcmp((char *)str, (char *)(v3 + 1222)) == 0;
    }
    // 0x804a834
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x282a), v3 + 1224, v2);
    transparent_crc(-0x1de9805b, v3 + 1228, v2);
    transparent_crc(*(int32_t *)(v3 + 0x282e), v3 + 1232, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2caa), v3 + 1237, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2832), v3 + 1242, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2836), v3 + 1247, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x283a), v3 + 1252, v2);
    transparent_crc(*(int32_t *)(v3 + 0x283e), v3 + 1257, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2842), v3 + 1262, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2844), v3 + 1267, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2cac), v3 + 1272, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cae), v3 + 1277, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2846), v3 + 1283, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x284a), v3 + 1289, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x284c), v3 + 1295, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x284e), v3 + 1301, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2cb2), v3 + 1307, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2852), v3 + 1313, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2856), v3 + 1319, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2cb6), v3 + 1325, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2857), v3 + 1331, v2);
    transparent_crc(*(int32_t *)(v3 + 0x285a), v3 + 1337, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x285e), v3 + 1343, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2862), v3 + 1349, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2866), v3 + 1355, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x286a), v3 + 1361, v2);
    transparent_crc(*(int32_t *)(v3 + 0x286e), v3 + 1367, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2872), v3 + 1373, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2876), v3 + 1379, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x2826), v2);
    return 0;
}

// Address range: 0x804abd0 - 0x804abd4
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804abd0
    return result;
}

// Address range: 0x804abd4 - 0x804abd8
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804abd4
    int32_t result; // 0x804abd4
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12