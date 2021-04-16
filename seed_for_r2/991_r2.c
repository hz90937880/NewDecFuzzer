
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    undefined4 var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = -0x5e3e8389;
    for (var_8h = -8; 0xb < var_8h; var_8h = var_8h + 1) {
        var_ch = ZEXT14(0 < var_8h);
    }
    sym.set_var(var_8h, 0, var_ch);
    return var_8h;
}
