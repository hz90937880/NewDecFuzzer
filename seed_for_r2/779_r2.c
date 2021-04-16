
// WARNING: Variable defined which should be unmapped: var_1h
// WARNING: Removing unreachable block (ram,0x08049737)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_9h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah

undefined4 sym.func_1(void)
{
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    uint32_t var_8h;
    uint32_t var_1h;
    
    sym.__x86.get_pc_thunk.ax();
    for (var_1h._0_1_ = 0; (uint8_t)var_1h < 0x17; var_1h._0_1_ = (uint8_t)var_1h + 8) {
    }
    sym.set_var(0xf1adb2bc, 0x62, 0, 0x540f);
    return 0x540f;
}
