
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_2h
// WARNING: [r2ghidra] Detected overlap for variable var_ah

undefined4 sym.func_1(void)
{
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_4h._2_2_ = 3;
    do {
        var_4h._2_2_ = var_4h._2_2_ | 1;
    } while (var_4h._2_2_ != 0);
    sym.set_var(0xffffb950, 0, 0x3817d1dc);
    return 0xec80f219;
}
