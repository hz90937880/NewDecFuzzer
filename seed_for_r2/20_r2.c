
// WARNING: Variable defined which should be unmapped: var_5h
// WARNING: Removing unreachable block (ram,0x08049715)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_fh
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_4h

undefined sym.func_1(void)
{
    uint8_t uVar1;
    int32_t var_18h;
    uint32_t var_dh;
    uint32_t var_5h;
    
    sym.__x86.get_pc_thunk.ax();
    uVar1 = 0xff;
    for (var_5h._0_1_ = '\x0e'; (char)var_5h != '.'; var_5h._0_1_ = (char)var_5h + '\x01') {
        uVar1 = 0;
    }
    sym.set_var(1, 0, (int32_t)(char)(uVar1 & 0xf8), 7);
    return 1;
}
