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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x275e));
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
        chars_printed = printf((char *)(v1 + 0x165d));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x80497b4
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(char *)(v5 + 0x39f0) = (char)a1;
    *(int32_t *)(v5 + 0x39f4) = a2;
    *(int32_t *)(v5 + 0x39f8) = a3;
    *(char *)(v5 + 0x39fc) = (char)a4;
    *(char *)(v5 + 0x3e70) = (char)a5;
    *(int16_t *)(v5 + 0x39fe) = (int16_t)a6;
    *(char *)(v5 + 0x3a00) = (char)a7;
    *(char *)(v5 + 0x3a01) = (char)a8;
    *(int32_t *)(v5 + 0x3a04) = a9;
    *(int32_t *)(v5 + 0x3a08) = a10;
    *(char *)(v5 + 0x3a0c) = (char)a11;
    *(int32_t *)(v5 + 0x3a10) = a12;
    *(int32_t *)(v5 + 0x3a14) = a13;
    *(int16_t *)(v5 + 0x3a18) = (int16_t)a14;
    *(int32_t *)(v5 + 0x3a1c) = a15;
    *(int32_t *)(v5 + 0x3a20) = a16;
    *(char *)(v5 + 0x3a24) = (char)a17;
    *(int32_t *)(v5 + 0x3a28) = a18;
    *(char *)(v5 + 0x3a2c) = (char)a19;
    *(int16_t *)(v5 + 0x3a2e) = (int16_t)a20;
    *(int16_t *)(v5 + 0x3a30) = (int16_t)a21;
    *(int32_t *)(v5 + 0x3a34) = a22;
    *(int32_t *)(v5 + 0x3a38) = a23;
    *(int32_t *)(v5 + 0x3a3c) = a24;
    return 0;
}

// Address range: 0x80497b4 - 0x804a7ab
int32_t func_1(void) {
    // 0x80497b4
    int32_t v1; // 0x80497b4
    __x86_get_pc_thunk_ax(v1);
    int32_t v2 = 0;
    int32_t v3 = 5;
    int32_t v4 = -0x614d08e0;
    int16_t v5 = -0x525e;
    int32_t v6 = -0x7ca50da8;
    v2++;
    uint32_t v7 = v3 + (int32_t)(v3 == 0);
    int32_t v8 = 4 * v2; // 0x8049946
    int32_t v9 = 1; // 0x80499df
    int32_t v10 = -0x347f & (int32_t)((0x7ffffff9 - v8 & -v8) >= 0); // 0x80499df
    int16_t v11 = 102; // 0x80499df
    int32_t v12 = 0x46704bc7; // 0x80499df
    int32_t v13 = v4; // 0x80499df
    int16_t v14 = v5; // 0x80499df
    int32_t v15 = -0x525e; // 0x80499df
    int32_t v16 = v6; // 0x80499df
    if ((v7 & (int32_t)(v7 <= -1 - (0x1000000 * v7 / 0x400000 & 0x7fff8))) == 0) {
        // 0x8049b01
        v14 = v5 + 1;
        v9 = v7 + 1;
        v10 = 2058;
        v11 = -87;
        v12 = 0;
        v13 = v4 + 1;
        v15 = v14;
        v16 = v6 - 1;
    }
    int32_t v17 = v16;
    int32_t v18 = v15;
    int32_t v19 = v13;
    int32_t v20 = v12;
    int16_t v21 = v11;
    int32_t v22 = v10;
    int32_t result = v9;
    while (v2 != 6) {
        // 0x80498d4
        v3 = result;
        v4 = v19;
        v5 = v14;
        v6 = v17;
        v2++;
        v7 = v3 + (int32_t)(v3 == 0);
        v8 = 4 * v2;
        v9 = 1;
        v10 = v22 & (int32_t)((0x7ffffff9 - v8 & -v8) >= 0);
        v11 = v21;
        v12 = v20;
        v13 = v4;
        v14 = v5;
        v15 = v18;
        v16 = v6;
        if ((v7 & (int32_t)(v7 <= -1 - (0x1000000 * v7 / 0x400000 & 0x7fff8))) == 0) {
            // 0x8049b01
            v14 = v5 + 1;
            v9 = v7 + 1;
            v10 = 2058;
            v11 = -87;
            v12 = 0;
            v13 = v4 + 1;
            v15 = v14;
            v16 = v6 - 1;
        }
        // 0x804a66b
        v17 = v16;
        v18 = v15;
        v19 = v13;
        v20 = v12;
        v21 = v11;
        v22 = v10;
        result = v9;
    }
    // 0x804a685
    set_var(6, result, -0x260b87fb, 21, 6, v22 % 0x10000, (int32_t)(v21 % 256), 255, v20, 1, 86, v19, 5, v18 % 0x10000, -0x20fc9b, v17, 1, -0x4a444511, -1, 0x3830, -707, 3, -7, 0x76849d5b);
    return result;
}

// Address range: 0x804a7ab - 0x804ab3b
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804a7d4
    int32_t v3; // 0x804a7ab
    if (v1 == (char **)2) {
        // 0x804a7d6
        int32_t v4; // 0x804a7ab
        int32_t str = *(int32_t *)(v4 + 4); // 0x804a7dc
        v2 = strcmp((char *)str, (char *)(v3 + 1134)) == 0;
    }
    // 0x804a7fc
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(char *)(v3 + 0x2862), v3 + 1136, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2866), v3 + 1140, v2);
    transparent_crc(*(int32_t *)(v3 + 0x286a), v3 + 1144, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x286e), v3 + 1148, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2ce2), v3 + 1153, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x2870), v3 + 1158, v2);
    transparent_crc(0, v3 + 1163, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2872), v3 + 1168, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2873), v3 + 1173, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2876), v3 + 1178, v2);
    transparent_crc(*(int32_t *)(v3 + 0x287a), v3 + 1183, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x287e), v3 + 1189, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2882), v3 + 1195, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2886), v3 + 1201, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x288a), v3 + 1207, v2);
    transparent_crc(*(int32_t *)(v3 + 0x288e), v3 + 1213, v2);
    transparent_crc(-8, v3 + 1219, v2);
    transparent_crc(*(int32_t *)(v3 + 0x2892), v3 + 1225, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x2896), v3 + 1231, v2);
    transparent_crc(*(int32_t *)(v3 + 0x289a), v3 + 1237, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x289e), v3 + 1243, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x28a0), v3 + 1249, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x28a2), v3 + 1255, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28a6), v3 + 1261, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28aa), v3 + 1267, v2);
    transparent_crc(*(int32_t *)(v3 + 0x28ae), v3 + 1273, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x285e), v2);
    return 0;
}

// Address range: 0x804ab3b - 0x804ab3f
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804ab3b
    return result;
}

// Address range: 0x804ab3f - 0x804ab43
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804ab3f
    int32_t result; // 0x804ab3f
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
