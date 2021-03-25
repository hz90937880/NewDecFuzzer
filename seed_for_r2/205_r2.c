
// WARNING: Variable defined which should be unmapped: var_1h
// WARNING: [r2ghidra] Detected overlap for variable var_2h
// WARNING: [r2ghidra] Detected overlap for variable var_4h

undefined sym.func_1(void)
{
    int32_t var_1h;
    
    sym.__x86.get_pc_thunk.ax();
    sym.set_var(0, 0);
    return 0;
}
