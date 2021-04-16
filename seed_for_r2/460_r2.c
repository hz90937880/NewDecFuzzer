
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804987e)
// WARNING: Removing unreachable block (ram,0x08049a3f)
// WARNING: Removing unreachable block (ram,0x08049a16)
// WARNING: Removing unreachable block (ram,0x08049bbb)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2bh
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_65h
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_71h
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_b2h
// WARNING: [r2ghidra] Detected overlap for variable var_b3h
// WARNING: [r2ghidra] Detected overlap for variable var_48h
// WARNING: [r2ghidra] Detected overlap for variable var_96h
// WARNING: [r2ghidra] Detected overlap for variable var_98h
// WARNING: [r2ghidra] Detected overlap for variable var_a4h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined sym.func_1(void)
{
    int32_t var_c0h;
    int32_t var_b0h;
    int32_t var_ach;
    uint32_t var_a6h;
    uint32_t var_a0h;
    uint32_t var_9ch;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_78h;
    uint32_t var_70h;
    int32_t var_6ch;
    uint32_t var_64h;
    uint32_t var_60h;
    uint32_t var_5ch;
    uint32_t var_58h;
    int32_t var_50h;
    int32_t var_4ah;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_38h;
    int32_t var_34h;
    int16_t var_2eh;
    int16_t var_2ah;
    uint32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    uint8_t var_19h;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0xfffffffe;
    var_18h = 0xfffffff9;
    var_19h = 0xfe;
    var_20h = 0x271dbca;
    var_58h = 8;
    var_5ch = 0xb856a759;
    var_28h = 6;
    var_2ah = -0x643;
    var_2eh = 1;
    for (var_14h = 0; var_14h != 0xffffffec; var_14h = var_14h - 5) {
        for (var_18h = 0; (int32_t)var_18h < -0x17; var_18h = var_18h - 1) {
            var_19h = var_19h & (uint8_t)var_18h;
            var_20h = var_20h | var_18h;
            if (0xcb >> ((uint8_t)var_14h & 0x1f) == 0) {
                var_19h = 0xff;
                var_5ch = 0xffffffff;
                var_28h = var_28h - 1;
                var_2ah = (int16_t)((var_28h & 0xff) << (0xfc38 < var_20h != 0xed0bd2f2));
            } else {
                var_58h = var_58h + 1;
            }
        }
        for (var_28h = 0; var_28h != 0x1c; var_28h = var_28h + 1) {
            for (var_2eh = -0xb; var_2eh != -0x1a; var_2eh = var_2eh + -1) {
                var_2ah = 0;
                var_18h = 1;
            }
        }
        var_18h = var_18h & 0x6f;
        var_10h = 0xa17331cc;
    }
    sym.set_var(var_10h, 0xffffffec, var_18h, (int32_t)(char)var_19h, 0xb0, var_58h, var_5ch, 0x122e7dfe, var_28h, 
                (int32_t)var_2ah, 1, 0xb0, 0xb0, (int32_t)var_2eh, 1, 0x2a, 
                ((var_28h <= ((0x95 < var_2eh) < 0x6f) ^ 0xb0) ^ 0xffff) << 9, 0xfffe, 0x95);
    return 0x2a;
}
