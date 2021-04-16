
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_12h

undefined2 sym.func_1(void)
{
    undefined2 var_12h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_12h = 0xfffd;
    for (var_4h = 0; var_4h < -8; var_4h = var_4h + -8) {
        var_12h = 0xffff;
    }
    sym.set_var(1, -1, 0, var_4h);
    return var_12h;
}
