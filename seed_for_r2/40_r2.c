
// WARNING: [r2ghidra] Detected overlap for variable var_6h
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_1eh

undefined2 sym.func_1(void)
{
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    uint16_t var_8h;
    uint16_t var_6h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_6h = 0x59ba;
    var_8h = 3;
    for (var_4h = 0; var_4h != 0x12; var_4h = var_4h + 6) {
        var_6h = (uint16_t)(-2 < (int32_t)var_4h);
        var_8h = 0;
    }
    sym.set_var(0x4fc6a3f0, (int32_t)(int16_t)var_6h, (uint32_t)var_8h);
    return 1;
}
