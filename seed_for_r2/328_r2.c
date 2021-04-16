
// WARNING: Variable defined which should be unmapped: var_1h
// WARNING: Removing unreachable block (ram,0x080496c7)
// WARNING: Removing unreachable block (ram,0x080496e6)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_10h

int32_t sym.func_1(void)
{
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_1h;
    
    sym.__x86.get_pc_thunk.ax();
    var_1h._0_1_ = 2;
    for (var_8h = 0x13; var_8h < -1; var_8h = var_8h + -1) {
        var_1h._0_1_ = (uint8_t)var_1h - 1;
    }
    sym.set_var(0x7d8e6e83, 0x6082, (uint32_t)(uint8_t)var_1h);
    return var_8h;
}
