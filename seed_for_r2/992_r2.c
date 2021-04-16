
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_2eh

undefined4 sym.func_1(void)
{
    int32_t var_2ch;
    int32_t var_28h;
    uint32_t var_24h;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_4h = -1;
    var_8h = 1;
    var_ch = -0x1e786aff;
    var_10h = 5;
    var_14h = 0x18;
    while (var_14h == 4) {
        for (var_10h = 0xffffffff; var_10h != 0; var_10h = var_10h + 1) {
            var_ch = 1;
        }
        var_4h = 9;
        var_8h = (int32_t)(int16_t)((uint16_t)var_ch ^ 1) << 0xc;
        var_14h = 0xfffffffe;
    }
    sym.set_var(9, var_4h, var_8h, (int32_t)(int16_t)((int16_t)var_10h + 1) >> ((uint8_t)var_10h & 0x1f), var_10h, -1, 
                (int32_t)(int16_t)var_8h);
    return 9;
}
