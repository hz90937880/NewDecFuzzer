
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_6h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    uint16_t var_6h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_6h = 6;
    var_ch = -3;
    for (var_4h = -0xf; var_4h < -0x14; var_4h = var_4h + -9) {
        var_6h = 0xfff7;
        var_ch = 0;
    }
    sym.set_var(var_4h, (uint32_t)var_6h, var_ch);
    return 0xffffffff;
}
