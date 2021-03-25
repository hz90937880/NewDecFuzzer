
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_5h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_10h;
    int32_t var_ch;
    uint8_t var_5h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_5h = 0x1d;
    for (var_4h = 0x1d; 0x10 < var_4h; var_4h = var_4h + -1) {
        var_5h = var_5h - 1;
    }
    sym.set_var(1, var_4h, -10, (uint32_t)var_5h);
    return 0xffffb5a5;
}
