
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_25h

undefined2 sym.func_1(void)
{
    int32_t var_2ch;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_eh;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_4h = 8;
    var_8h = -0x347e135a;
    for (stack0xfffffff0 = 0; (uint32_t)stack0xfffffff0 < 0x10; unique0x00000f40 = stack0xfffffff0 + 1) {
        var_4h = 0;
        var_8h = 0;
    }
    sym.set_var(0xf880, var_4h, var_8h, 1, 7);
    return 0xf880;
}
