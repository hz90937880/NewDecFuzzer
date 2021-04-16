
// WARNING: Variable defined which should be unmapped: var_2h
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_19h

undefined4 sym.func_1(void)
{
    uint32_t var_18h;
    uint32_t var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_2h;
    
    sym.__x86.get_pc_thunk.ax();
    sym.set_var(0xffffffff, 0xfc, 0x13);
    return 0x13;
}
