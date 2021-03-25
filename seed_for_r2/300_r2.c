
// WARNING: Variable defined which should be unmapped: var_2h
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_15h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    undefined4 var_2h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0x6d21cd43;
    var_10h = 0;
    *(undefined4 *)0x0 = 1;
    for (var_2h._0_2_ = 0; -3 < (int16_t)var_2h; var_2h._0_2_ = (int16_t)var_2h + -1) {
        var_8h = var_8h | 0xffffea96;
        stack0xffffffe8 = 0;
        var_10h = (uint32_t)var_8h >> 6 & 3;
    }
    sym.set_var((int32_t)(int16_t)var_2h, 1, var_8h, 0, var_10h);
    return stack0xffffffe8;
}
