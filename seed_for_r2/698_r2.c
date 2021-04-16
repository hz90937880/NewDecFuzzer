
// WARNING: Variable defined which should be unmapped: var_6h
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_4h

undefined sym.func_1(void)
{
    int32_t var_18h;
    int32_t var_10h;
    uint32_t var_ah;
    uint32_t var_6h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ah._2_2_ = 0xffff;
    for (var_6h._0_2_ = 0xf; (int16_t)var_6h != -9; var_6h._0_2_ = (int16_t)var_6h + -8) {
        var_ah._2_2_ = var_ah._2_2_ - 1;
    }
    sym.set_var(0x99d9, 0x5c, 0xfffffff7, 0, (uint32_t)var_ah._2_2_);
    return 0xde;
}
