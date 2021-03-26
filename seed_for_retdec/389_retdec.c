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
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x2cbe));
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
        *(int32_t *)(v2 + 0x4c2a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x4bb9 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 0x1bbd));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x804988d
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26, int32_t a27, int32_t a28) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2; // 0x8049626
    int32_t v3; // 0x8049626
    int32_t v4; // 0x8049626
    __x86_get_pc_thunk_dx(v4, v2, v1, v3);
    int32_t v5; // 0x8049626
    *(char *)(v5 + 0x49ed) = (char)a1;
    *(int16_t *)(v5 + 0x49ef) = (int16_t)a2;
    *(int16_t *)(v5 + 0x49f1) = (int16_t)a3;
    *(char *)(v5 + 0x49f3) = (char)a4;
    *(int16_t *)(v5 + 0x49f5) = (int16_t)a5;
    *(char *)(v5 + 0x49f7) = (char)a6;
    *(int16_t *)(v5 + 0x49f9) = (int16_t)a7;
    *(int32_t *)(v5 + 0x49fd) = a8;
    *(int32_t *)(v5 + 0x4a01) = a9;
    *(char *)(v5 + 0x4e6d) = (char)a10;
    *(int32_t *)(v5 + 0x4a05) = a11;
    *(char *)(v5 + 0x4a09) = (char)a12;
    *(int32_t *)(v5 + 0x4a0d) = a13;
    *(char *)(v5 + 0x4a11) = (char)a14;
    *(char *)(v5 + 0x4a12) = (char)a15;
    *(int32_t *)(v5 + 0x4a15) = a16;
    *(int16_t *)(v5 + 0x4a19) = (int16_t)a17;
    *(int32_t *)(v5 + 0x4a1d) = a18;
    *(char *)(v5 + 0x4a21) = (char)a19;
    *(int16_t *)(v5 + 0x4e6f) = (int16_t)a20;
    *(int16_t *)(v5 + 0x4a23) = (int16_t)a21;
    *(int32_t *)(v5 + 0x4a25) = a22;
    *(int16_t *)(v5 + 0x4e71) = (int16_t)a23;
    *(int16_t *)(v5 + 0x4e73) = (int16_t)a24;
    *(int16_t *)(v5 + 0x4a29) = (int16_t)a25;
    *(int16_t *)(v5 + 0x4a2b) = (int16_t)a26;
    *(int32_t *)(v5 + 0x4a2d) = a27;
    *(char *)(v5 + 0x4a31) = (char)a28;
    return 0;
}

// Address range: 0x804988d - 0x804acbe
int32_t func_1(void) {
    // 0x804988d
    int32_t v1; // 0x804988d
    __x86_get_pc_thunk_ax(v1);
    set_var(84, -1, 1, -45, 8, 4, 0xfff6, 25, -0x3b08324e, 0, 0x3fac4532, 255, -0x31747ac5, 51, 110, 2, 1, -0x6caa877b, -58, 0, 3685, 0x4bbb4929, 0, 0, 2, 7, -5, 1);
    return 84;
}

// Address range: 0x804acbe - 0x804b09e
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x804ace7
    int32_t v3; // 0x804acbe
    if (v1 == (char **)2) {
        // 0x804ace9
        int32_t v4; // 0x804acbe
        int32_t str = *(int32_t *)(v4 + 4); // 0x804acef
        v2 = strcmp((char *)str, (char *)(v3 + 1203)) == 0;
    }
    // 0x804ad0f
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc((int32_t)*(char *)(v3 + 0x334f), v3 + 1205, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3351), v3 + 1210, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3353), v3 + 1215, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3355), v3 + 1220, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3357), v3 + 1225, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3359), v3 + 1230, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x335b), v3 + 1235, v2);
    transparent_crc(*(int32_t *)(v3 + 0x335f), v3 + 1240, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3363), v3 + 1245, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x37cf), v3 + 1250, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3367), v3 + 1255, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x336b), v3 + 1261, v2);
    transparent_crc(*(int32_t *)(v3 + 0x336f), v3 + 1267, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3373), v3 + 1273, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3374), v3 + 1279, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3377), v3 + 1285, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x337b), v3 + 1291, v2);
    transparent_crc(*(int32_t *)(v3 + 0x337f), v3 + 1297, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3383), v3 + 1303, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x37d1), v3 + 1309, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3385), v3 + 1315, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3387), v3 + 1321, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x37d3), v3 + 1327, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x37d5), v3 + 1333, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x338b), v3 + 1339, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x338d), v3 + 1345, v2);
    transparent_crc(*(int32_t *)(v3 + 0x338f), v3 + 1351, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3393), v3 + 1357, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x334b), v2);
    return 0;
}

// Address range: 0x804b09e - 0x804b0a2
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804b09e
    return result;
}

// Address range: 0x804b0a2 - 0x804b0a6
int32_t __x86_get_pc_thunk_dx(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x804b0a2
    int32_t result; // 0x804b0a2
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 12
