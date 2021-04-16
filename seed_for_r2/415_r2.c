
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x080498ac)
// WARNING: Removing unreachable block (ram,0x08049830)
// WARNING: Removing unreachable block (ram,0x0804985d)
// WARNING: Removing unreachable block (ram,0x0804986a)
// WARNING: Removing unreachable block (ram,0x080498ba)
// WARNING: Removing unreachable block (ram,0x0804988d)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_20h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_59h

undefined sym.func_1(void)
{
    uint32_t var_74h;
    int32_t var_70h;
    int32_t var_64h;
    uint32_t var_60h;
    uint32_t var_58h;
    int32_t var_50h;
    uint32_t var_48h;
    int32_t var_40h;
    int32_t var_38h;
    int32_t var_34h;
    uint32_t var_2ch;
    uint32_t var_22h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0;
    for (var_22h._2_2_ = -0x16; var_22h._2_2_ < 10; var_22h._2_2_ = var_22h._2_2_ + 1) {
        var_10h = var_10h + 1;
    }
    sym.set_var(0x39ed, 0x6565, 0xfff8, var_10h, (uint32_t)(0xfff7 < var_22h._2_2_), 0, 0x9d, 0x6565, 0, -5, -0x8c176ce
                , 1, 0x30cfef66, 0);
    return 0;
}
