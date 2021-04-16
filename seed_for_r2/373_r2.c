
// WARNING: Variable defined which should be unmapped: var_5h
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_4h

int32_t sym.func_1(void)
{
    int32_t var_2ch;
    int32_t var_28h;
    uint32_t var_20h;
    int32_t var_18h;
    uint32_t var_11h;
    uint16_t var_8h;
    uint32_t var_5h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 3;
    var_5h._0_1_ = '\x19';
    while ((-0xd < (char)var_5h && (var_8h = 0, (char)var_5h == '\0'))) {
        var_5h._0_1_ = -1;
    }
    sym.set_var((int32_t)(char)var_5h, 0xcc, (uint32_t)var_8h, 1, (uint32_t)(1 < var_8h));
    return (int32_t)(char)var_5h;
}
