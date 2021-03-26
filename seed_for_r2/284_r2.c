
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x08049780)
// WARNING: Removing unreachable block (ram,0x080498d1)
// WARNING: Removing unreachable block (ram,0x08049991)
// WARNING: Removing unreachable block (ram,0x08049940)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_28h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_2bh
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_37h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined2 sym.func_1(void)
{
    int32_t var_70h;
    int32_t var_5ch;
    int32_t var_56h;
    int32_t var_50h;
    int32_t var_4ch;
    uint32_t var_48h;
    int32_t var_44h;
    uint32_t var_3ch;
    int32_t var_34h;
    int32_t var_30h;
    undefined4 var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_19h;
    uint32_t var_14h;
    uint16_t var_10h;
    uint8_t var_eh;
    int32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_dh._0_1_ = '\x04';
    var_eh = 0xf0;
    var_10h = 5;
    var_20h = 0;
    for (stack0xffffffe4 = 0; stack0xffffffe4 != -0xb; unique0x00000f40 = stack0xffffffe4 + -1) {
        var_dh._0_1_ = (char)var_20h;
        var_eh = stack0xffffffe4 != 0;
        var_10h = 8;
        var_20h = (uint32_t)(stack0xffffffe4 != 0);
    }
    sym.set_var(0xdf, 7, 0x1e, (int32_t)(char)var_dh, (uint32_t)var_eh, 0x592a, (uint32_t)var_10h, -0x3a, 0x5621383e, 0
                , 0);
    return 0xfa41;
}
