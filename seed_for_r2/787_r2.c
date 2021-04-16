
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 1;
    for (var_8h = 5; -10 < var_8h; var_8h = var_8h + -1) {
        var_ch = var_ch + -1;
    }
    sym.set_var(var_8h);
    return var_ch;
}
