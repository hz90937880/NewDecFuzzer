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
int32_t crc32_8bytes(uint32_t a1);
int32_t crc32_byte(int32_t a1);
int32_t crc32_gentab(void);
int32_t func_1(void);
int32_t platform_main_begin(void);
int32_t platform_main_end(int32_t a1, int32_t a2);
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22);
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
    return printf((char *)(__x86_get_pc_thunk_ax(v1) + 0x1cee));
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
        *(int32_t *)(v2 + 0x3c0a + 4 * i) = v5;
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
    *v3 = *(int32_t *)(v2 + 0x3b99 + (4 * (v4 ^ a1) & 1020)) ^ v4 / 256;
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
        chars_printed = printf((char *)(v1 + 3053));
    }
    // 0x80495b8
    return chars_printed;
}

// Address range: 0x8049626 - 0x8049785
int32_t set_var(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22) {
    // 0x8049626
    int32_t v1; // 0x8049626
    int32_t v2 = __x86_get_pc_thunk_ax(v1); // 0x804962f
    *(int32_t *)(v2 + 0x39f0) = a1;
    *(int32_t *)(v2 + 0x39f4) = a2;
    *(int32_t *)(v2 + 0x39f8) = a3;
    *(int32_t *)(v2 + 0x39fc) = a4;
    *(char *)(v2 + 0x3a00) = (char)a5;
    *(int32_t *)(v2 + 0x3a04) = a6;
    *(int32_t *)(v2 + 0x3a08) = a7;
    *(int32_t *)(v2 + 0x3e50) = a8;
    *(int16_t *)(v2 + 0x3a0c) = (int16_t)a9;
    *(char *)(v2 + 0x3a0e) = (char)a10;
    *(int16_t *)(v2 + 0x3a10) = (int16_t)a11;
    *(int16_t *)(v2 + 0x3a12) = (int16_t)a12;
    *(char *)(v2 + 0x3a14) = (char)a13;
    *(char *)(v2 + 0x3a15) = (char)a14;
    *(char *)(v2 + 0x3a16) = (char)a15;
    *(int32_t *)(v2 + 0x3a18) = a16;
    *(int32_t *)(v2 + 0x3a1c) = a17;
    *(int32_t *)(v2 + 0x3a20) = a18;
    *(int32_t *)(v2 + 0x3a24) = a19;
    *(int32_t *)(v2 + 0x3a28) = a20;
    *(int16_t *)(v2 + 0x3e54) = (int16_t)a21;
    *(char *)(v2 + 0x3e56) = (char)a22;
    return 0;
}

// Address range: 0x8049785 - 0x8049db4
int32_t func_1(void) {
    // 0x8049cc8
    int32_t v1; // 0x8049785
    __x86_get_pc_thunk_ax(v1);
    set_var(-1, 88, -0x652a61a9, 0, -65, -0x22d23f69, -9, 0, 0x6df6, -8, 1, 1, -1, -1, 1, -0x6a5487fd, 8, 0x4a68e686, 0xba4df93, -0x31163899, 0, 0);
    return 0x6b0c78bb;
}

// Address range: 0x8049db4 - 0x804a0d2
int main(int argc, char ** argv) {
    char ** v1 = argv;
    __x86_get_pc_thunk_bx((int32_t)&v1);
    int32_t v2 = 0; // 0x8049ddd
    int32_t v3; // 0x8049db4
    if (v1 == (char **)2) {
        // 0x8049ddf
        int32_t v4; // 0x8049db4
        int32_t str = *(int32_t *)(v4 + 4); // 0x8049de5
        v2 = strcmp((char *)str, (char *)(v3 + 1005)) == 0;
    }
    // 0x8049e05
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(*(int32_t *)(v3 + 0x3259), v3 + 1007, v2);
    transparent_crc(*(int32_t *)(v3 + 0x325d), v3 + 1011, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3261), v3 + 1015, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3265), v3 + 1019, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3269), v3 + 1023, v2);
    transparent_crc(*(int32_t *)(v3 + 0x326d), v3 + 1028, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3271), v3 + 1033, v2);
    transparent_crc(*(int32_t *)(v3 + 0x36b9), v3 + 1038, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3275), v3 + 1043, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x3277), v3 + 1048, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x3279), v3 + 1054, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x327b), v3 + 1060, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x327d), v3 + 1066, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x327e), v3 + 1072, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x327f), v3 + 1078, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3281), v3 + 1084, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3285), v3 + 1090, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3289), v3 + 1096, v2);
    transparent_crc(*(int32_t *)(v3 + 0x328d), v3 + 1102, v2);
    transparent_crc(*(int32_t *)(v3 + 0x3291), v3 + 1108, v2);
    transparent_crc((int32_t)*(int16_t *)(v3 + 0x36bd), v3 + 1114, v2);
    transparent_crc((int32_t)*(char *)(v3 + 0x36bf), v3 + 1120, v2);
    platform_main_end(-1 - *(int32_t *)(v3 + 0x3255), v2);
    return 0;
}

// Address range: 0x804a0d2 - 0x804a0d6
int32_t __x86_get_pc_thunk_ax(int32_t result) {
    // 0x804a0d2
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (7.5.0)
// Detected functions: 11
