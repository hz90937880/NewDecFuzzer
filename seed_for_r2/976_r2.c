
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x08049963)
// WARNING: Removing unreachable block (ram,0x080497ed)
// WARNING: Removing unreachable block (ram,0x080497df)
// WARNING: Removing unreachable block (ram,0x0804981a)
// WARNING: Removing unreachable block (ram,0x08049910)
// WARNING: Removing unreachable block (ram,0x08049979)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_2fh
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_4bh
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_53h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_52h

undefined4 sym.func_1(void)
{
    int32_t var_70h;
    uint32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_50h;
    uint32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_38h;
    int32_t var_2ch;
    uint32_t var_26h;
    uint8_t var_1dh;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    int32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_1ch = 0xffffffff;
    var_1dh = 8;
    var_18h = 0x10e6;
    var_dh._0_1_ = '\x01';
    for (var_14h = 0; 2 < var_14h; var_14h = var_14h + 1) {
        var_1ch = var_1ch - 1;
        var_18h = -1;
        var_1dh = 0xff;
        for (stack0xffffffd8 = 0x13; stack0xffffffd8 != 0x13; unique0x00000f40 = stack0xffffffd8 + 6) {
            var_dh._0_1_ = '\0';
        }
        if (var_1ch != 0) break;
    }
    sym.set_var(0x10e1, (int32_t)(char)var_dh, var_14h, -0x195c8ca5, 0xffff8047, var_18h, 0xca, 2, 0, var_1ch, 
                (uint32_t)var_1dh, 0xff, 1, -0x1133ea3c);
    return 0;
}
