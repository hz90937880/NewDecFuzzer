
// WARNING: [r2ghidra] Detected overlap for variable var_12h

undefined4 sym.func_1(void)
{
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = -0x840b73c;
    for (var_4h = 0; var_4h != 0x12; var_4h = var_4h + 6) {
        var_8h = var_8h + 1;
    }
    sym.set_var(-0x24c51cab, 0x4504cd45, 0x12, var_8h);
    return 0x12;
}
