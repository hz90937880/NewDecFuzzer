
// WARNING: Variable defined which should be unmapped: var_2h
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_28h;
    int32_t var_20h;
    uint32_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_2h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = -0x7ea704a4;
    for (var_8h = 0; -0xb < var_8h; var_8h = var_8h + -1) {
        var_ch = 3;
    }
    sym.set_var(5, 1, var_8h, 5, var_ch);
    return var_ch;
}
