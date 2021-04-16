
// WARNING: Variable defined which should be unmapped: var_2h
// WARNING: Removing unreachable block (ram,0x080496cf)
// WARNING: Removing unreachable block (ram,0x080496dc)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_11h

undefined4 sym.func_1(void)
{
    int32_t var_24h;
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_2h;
    
    sym.__x86.get_pc_thunk.ax();
    var_2h._0_2_ = -1;
    var_8h = 4;
    for (var_ch = 0; 0x19 < var_ch; var_ch = var_ch + 1) {
        var_2h._0_2_ = (int16_t)var_ch;
        var_8h = var_8h + 1;
    }
    sym.set_var(0xfffffff9, 7, 0xb6bd0d4, (int32_t)(int16_t)var_2h, var_8h);
    return 0xffffffff;
}
