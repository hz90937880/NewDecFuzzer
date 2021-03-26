
// WARNING: Variable defined which should be unmapped: var_1h
// WARNING: [r2ghidra] Detected overlap for variable var_2h
// WARNING: [r2ghidra] Detected overlap for variable var_4h
// WARNING: [r2ghidra] Detected overlap for variable var_dh

undefined2 sym.func_1(void)
{
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_1h;
    
    sym.__x86.get_pc_thunk.ax();
    sym.set_var(0xf8, 0, -1, -0x76f3abbf);
    return 0xffff;
}
