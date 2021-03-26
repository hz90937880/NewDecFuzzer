
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_eh

undefined2 sym.func_1(void)
{
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int16_t var_ah;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ah = -0x5cca;
    var_8h = 0;
    while (var_8h == 0x1d) {
        var_ah = 0x14;
        var_8h = 0x1e;
    }
    sym.set_var(var_8h, (int32_t)var_ah, 1, 0xefce);
    return 0xefce;
}
