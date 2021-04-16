
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_1ch;
    int32_t var_14h;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0;
    var_ch = 0xfffffff6;
    for (var_4h = -0x13; var_4h < -0x17; var_4h = var_4h + -9) {
        var_ch = 0;
        while (var_ch == 0xffffffee) {
            var_8h = -0x6b2243c9;
            var_ch = 0xffffffed;
        }
    }
    sym.set_var((uint32_t)(1 % (uint64_t)(int64_t)(int32_t)(var_8h & 0xff)) & (uint32_t)(((char)var_ch < '\x02') < 0x1c)
                , var_8h, var_ch, 1);
    return 9;
}
