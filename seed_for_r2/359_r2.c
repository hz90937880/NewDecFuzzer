
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0x2edc7555;
    for (var_4h = 0; -4 < var_4h; var_4h = var_4h + -1) {
        var_8h = var_8h + -1;
    }
    sym.set_var(var_4h, var_8h);
    return var_8h;
}
