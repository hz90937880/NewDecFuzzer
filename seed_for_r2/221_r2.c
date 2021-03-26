
// WARNING: Variable defined which should be unmapped: var_1h
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_8h

int32_t sym.func_1(void)
{
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_9h;
    int32_t var_1h;
    
    sym.__x86.get_pc_thunk.ax();
    var_1h._0_1_ = 'S';
    for (stack0xfffffff4 = -0x12; stack0xfffffff4 < -10; unique0x00000f40 = stack0xfffffff4 + 6) {
        var_1h._0_1_ = '\x01';
    }
    sym.set_var(-8, -0x21f4bf8d, (int32_t)(char)var_1h, 0x5cf1c946, 0x17f4039d);
    return stack0xfffffff4;
}
