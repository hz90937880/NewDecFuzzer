
// WARNING: Variable defined which should be unmapped: var_2h
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_28h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_30h;
    uint32_t var_2ch;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_14h;
    undefined4 var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_2h;
    
    sym.__x86.get_pc_thunk.ax();
    var_2h._0_2_ = 1;
    var_8h = -1;
    for (var_ch = 0; -8 < var_ch; var_ch = var_ch + -1) {
        var_2h._0_2_ = (uint16_t)var_2h | 0xb9da;
        var_8h = var_8h ^ ~(int32_t)(int16_t)(uint16_t)var_2h;
    }
    sym.set_var((int32_t)(int16_t)(uint16_t)var_2h, 1, 9, var_8h, 0x5d);
    return 0xfffffffc;
}
