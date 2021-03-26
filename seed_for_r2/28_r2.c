
// WARNING: Variable defined which should be unmapped: var_1h
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_4h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2ch

int32_t sym.func_1(void)
{
    int32_t var_28h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    uint16_t var_4h;
    int32_t var_1h;
    
    sym.__x86.get_pc_thunk.ax();
    var_1h._0_1_ = -0xc;
    var_4h = 0xe04a;
    var_8h = 0;
    while( true ) {
        if (-0x1d < var_8h) {
            sym.set_var(0, (int32_t)(char)var_1h, (uint32_t)var_4h, 0x31af6658, 0, 0x2088);
            return 0x31af6658;
        }
        var_1h._0_1_ = '\0';
        if ((int32_t)(int16_t)((var_8h < 0) + 0x46c2) / (int32_t)(int16_t)var_8h == 0) break;
        var_4h = 0;
        var_8h = var_8h + -1;
    }
    sym.set_var(0, 0, (uint32_t)var_4h, 0x7d8169b4, 0, 0x2089);
    return var_8h;
}
