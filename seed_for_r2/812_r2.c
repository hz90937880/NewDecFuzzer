
// WARNING: [r2ghidra] Detected overlap for variable var_5h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_13h

undefined sym.func_1(void)
{
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    uint8_t var_5h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_5h = 0xfe;
    var_4h = 0x17;
    while (var_4h == 10) {
        var_5h = var_5h & 8;
        var_4h = 9;
    }
    sym.set_var(var_4h, 1, (int32_t)(char)var_5h, -0x48ad40c7, -0x6ec7);
    return 8;
}
