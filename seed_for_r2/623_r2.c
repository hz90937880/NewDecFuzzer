
// WARNING: Variable defined which should be unmapped: var_2h
// WARNING: Removing unreachable block (ram,0x0804972e)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah

undefined4 sym.func_1(void)
{
    uint32_t var_34h;
    int32_t var_30h;
    int32_t var_28h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_2h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0x9864ba8b;
    var_ch = -8;
    var_10h = 0xfffffff7;
    for (var_2h._0_2_ = 0xfff1; (uint16_t)var_2h != 0x15; var_2h._0_2_ = (uint16_t)var_2h + 9) {
        var_ch = var_ch - 1;
        var_10h = var_10h & (var_ch & 0xffU) + 0xff;
        var_8h = (uint32_t)(uint16_t)var_2h;
    }
    sym.set_var(0x15, var_8h, var_ch, var_10h, 0x3988f15d);
    return 0xffffffff;
}
