
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049ad1)
// WARNING: Removing unreachable block (ram,0x08049930)
// WARNING: Removing unreachable block (ram,0x080499b4)
// WARNING: Removing unreachable block (ram,0x080499cf)
// WARNING: Removing unreachable block (ram,0x080499dc)
// WARNING: Removing unreachable block (ram,0x08049b92)
// WARNING: Removing unreachable block (ram,0x08049a84)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_40h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_4bh
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_59h
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_79h
// WARNING: [r2ghidra] Detected overlap for variable var_8ah
// WARNING: [r2ghidra] Detected overlap for variable var_8ch
// WARNING: [r2ghidra] Detected overlap for variable var_48h
// WARNING: [r2ghidra] Detected overlap for variable var_99h
// WARNING: [r2ghidra] Detected overlap for variable var_9ah
// WARNING: [r2ghidra] Detected overlap for variable var_b5h

int32_t sym.func_1(void)
{
    uint32_t var_cch;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_c0h;
    int32_t var_bch;
    int32_t var_b4h;
    int32_t var_b0h;
    int32_t var_ach;
    int32_t var_a8h;
    int32_t var_a4h;
    uint32_t var_a0h;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_88h;
    uint32_t var_84h;
    uint32_t var_80h;
    int32_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    uint32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    uint32_t var_58h;
    int32_t var_50h;
    uint32_t var_49h;
    int32_t var_44h;
    uint32_t var_40h;
    uint32_t var_3ch;
    uint8_t var_35h;
    int32_t var_34h;
    uint16_t var_30h;
    uint8_t var_2dh;
    int32_t var_2ch;
    uint8_t var_25h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    uint8_t var_15h;
    uint16_t var_14h;
    uint8_t var_11h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_14h = 0x2b46;
    var_15h = 0xad;
    var_20h = 0x58f5970f;
    var_24h = -0x4a4a6f48;
    var_25h = 0x2f;
    var_30h = 0xe681;
    var_11h = 0xc0;
    var_40h = 0x86e60e45;
    for (var_35h = 0; var_35h < 0x1e; var_35h = var_35h + 1) {
        var_14h = 0;
        var_40h = 0;
    }
    if ((int32_t)(var_40h ^ 1) < 0x100) {
        var_2dh = (uint8_t)(var_14h >> 4);
        var_11h = var_2dh & 0xf9 | 1;
        var_20h = (int32_t)(char)var_11h ^ 0xff;
        var_30h = 0xe682;
        var_10h = var_20h;
    } else {
        if (1U / (uint32_t)(int32_t)(int16_t)var_14h == 0) {
            var_24h = -0x4a4a6f49;
            stack0xffffffb4 = -0xb;
            while (stack0xffffffb4 == 0x31) {
                unique0x00000f40 = 0x32;
            }
            var_25h = 0x2e;
            var_14h = 99;
        } else {
            for (var_35h = 0xe7; 3 < var_35h; var_35h = var_35h + 9) {
                var_15h = var_15h | 1;
            }
        }
        var_10h = 0xffffff00;
        var_2dh = 0x8b;
    }
    sym.set_var(0xff, var_10h, 0xff, (int32_t)(char)var_11h, (int32_t)(int16_t)var_14h, (uint32_t)var_15h, -0x2350f62, 
                -0x16, var_20h, var_24h, (uint32_t)var_25h, -1, (uint32_t)var_2dh, -0x6852350f, (uint32_t)var_30h, -0x6d
                , 4);
    return var_20h;
}
