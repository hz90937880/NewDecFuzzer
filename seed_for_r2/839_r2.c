
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x080497f6)
// WARNING: Removing unreachable block (ram,0x080497e9)
// WARNING: Removing unreachable block (ram,0x08049906)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_fh
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_27h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_59h

undefined4 sym.func_1(void)
{
    int32_t var_70h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    uint32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_14h;
    char var_10h;
    char var_fh;
    int32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_eh._0_2_ = 0xedf2;
    var_fh = -0x76;
    for (var_10h = '\0'; -6 < var_10h; var_10h = var_10h + -1) {
        var_eh._0_2_ = (uint16_t)var_eh ^ 0x16;
        var_fh = '\x05';
    }
    sym.set_var(0x12, 4, (int32_t)(int16_t)(uint16_t)var_eh, (int32_t)var_fh, 1, -2, 0, 0xc2, 2, 1);
    return 9;
}
