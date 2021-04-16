
// WARNING: Variable defined which should be unmapped: var_5h
// WARNING: Removing unreachable block (ram,0x0804976e)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_13h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_4h

undefined4 sym.func_1(void)
{
    uint32_t var_11h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_ch;
    uint32_t var_5h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0x319b885b;
    stack0xffffffec = 0x6158f876;
    var_5h._0_1_ = 0;
    while ((uint8_t)var_5h < 0x39) {
        var_ch = var_ch ^ 1;
        unique0x00000f40 = stack0xffffffec + 1;
        if ((uint8_t)var_5h != 0) break;
        var_ch = 1;
        var_5h._0_1_ = 1;
    }
    sym.set_var(0xaa, 1, (uint32_t)(uint8_t)var_5h, var_ch, stack0xffffffec, 5, 0x632cac24, 3, -0x57b2dc89);
    return 0x632cac24;
}
