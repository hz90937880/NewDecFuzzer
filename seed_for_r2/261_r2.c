
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_15h

undefined4 sym.func_1(void)
{
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = -0x3234c9c1;
    var_4h = 0;
    while (var_4h == 0xffffffea) {
        for (var_8h = 0x10; var_8h < 0xf; var_8h = var_8h + -1) {
        }
        var_4h = 0xffffffe9;
    }
    sym.set_var(var_4h, 0, 0x1dbeccce, -0x3f2c852c, var_8h);
    return 0;
}
