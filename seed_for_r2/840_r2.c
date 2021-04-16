
// WARNING: Variable defined which should be unmapped: var_2h
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_22h

undefined2 sym.func_1(void)
{
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_2h;
    
    sym.__x86.get_pc_thunk.ax();
    var_2h._0_2_ = 0xfa97;
    var_8h = 0;
    while (var_8h == 0xffffffef) {
        var_2h._0_2_ = (uint16_t)var_2h - 1;
        var_8h = 0xffffffee;
    }
    sym.set_var(1, 1, 2, (uint32_t)(uint16_t)var_2h);
    return 0xc65;
}
