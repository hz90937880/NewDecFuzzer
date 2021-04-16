
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x080499dd)
// WARNING: Removing unreachable block (ram,0x080499ed)
// WARNING: Removing unreachable block (ram,0x08049a21)
// WARNING: Removing unreachable block (ram,0x08049cce)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_50h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_58h
// WARNING: [r2ghidra] Detected overlap for variable var_5eh
// WARNING: [r2ghidra] Detected overlap for variable var_60h
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_38h
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_3dh
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_9dh
// WARNING: [r2ghidra] Detected overlap for variable var_63h
// WARNING: [r2ghidra] Detected overlap for variable var_a5h
// WARNING: [r2ghidra] Detected overlap for variable var_adh
// WARNING: [r2ghidra] Detected overlap for variable var_8eh
// WARNING: [r2ghidra] Detected overlap for variable var_8ch
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_88h
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_74h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

uint16_t sym.func_1(void)
{
    int32_t var_f8h;
    uint32_t var_f4h;
    int32_t var_f0h;
    int32_t var_ech;
    int32_t var_e8h;
    int32_t var_e4h;
    int32_t var_e0h;
    int32_t var_dch;
    int32_t var_d8h;
    int32_t var_d4h;
    int32_t var_d0h;
    uint32_t var_c0h;
    int32_t var_bch;
    int32_t var_b8h;
    uint32_t var_b4h;
    int32_t var_ach;
    int32_t var_a4h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_8fh;
    uint32_t var_84h;
    int32_t var_80h;
    uint32_t var_7ch;
    int32_t var_78h;
    int32_t var_70h;
    int32_t var_68h;
    uint8_t var_63h;
    int32_t var_5ch;
    uint16_t var_58h;
    uint8_t var_56h;
    uint8_t var_55h;
    uint32_t var_54h;
    undefined4 var_50h;
    uint32_t var_4ch;
    uint32_t var_48h;
    int32_t var_44h;
    int32_t var_34h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    uint8_t var_1dh;
    int32_t var_1ch;
    uint16_t var_12h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0xfffffffd;
    var_55h = 1;
    var_56h = 0xb9;
    var_58h = 0x767;
    var_4ch = 0x275a8055;
    var_12h = 0xffff;
    var_1ch = -1;
    var_1dh = 0xff;
    var_24h = 0x3271fe85;
    for (var_63h = 0; var_63h < 9; var_63h = var_63h + 3) {
        var_55h = var_55h - 1;
        var_56h = 0;
        var_10h = 1;
        var_12h = var_12h + 1;
        if (var_58h == 0) {
            var_58h = (uint16_t)(var_55h != 5);
            var_4ch = SEXT24((int16_t)var_58h);
            var_1ch = var_1ch + 1;
        } else {
            var_10h = 2;
            var_4ch = (uint32_t)var_12h;
            for (var_55h = 0xef; var_55h < 5; var_55h = var_55h + 1) {
                var_56h = 0x95;
                var_1dh = 0xa2d34cab < var_12h;
                var_4ch = (uint32_t)(var_12h != 0xffffffff);
            }
            var_24h = var_24h + 1;
        }
    }
    sym.set_var(0, var_10h, 0, (uint32_t)var_55h, (uint32_t)var_56h, (int32_t)(int16_t)var_58h, var_4ch, -1, 0x352b, 
                0x2630, -1, (uint32_t)var_12h, 0, -2, var_1ch, (uint32_t)var_1dh, var_24h, 0x21247b8c, 1, 1, -7, -7, -3
                , -0x11, -0x2a33, 0xfb, 5);
    return var_12h;
}
