
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_6h
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_ch;
    int16_t var_6h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_6h = -1;
    for (var_4h = 0xc; -4 < var_4h; var_4h = var_4h + -1) {
        var_6h = 0;
        var_ch = 0;
        while (var_ch == 0x36) {
            var_ch = 0x37;
        }
    }
    sym.set_var(var_4h, 0, (int32_t)var_6h);
    return 0x7d02268f;
}
