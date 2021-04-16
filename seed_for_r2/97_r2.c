
// WARNING: Variable defined which should be unmapped: var_5h
// WARNING: [r2ghidra] Detected overlap for variable var_6h
// WARNING: [r2ghidra] Detected overlap for variable var_7h
// WARNING: [r2ghidra] Detected overlap for variable var_4h

undefined sym.func_1(void)
{
    int32_t var_ch;
    int32_t var_5h;
    
    sym.__x86.get_pc_thunk.ax();
    sym.set_var(0x2f, (uint32_t)(1 / 0));
    return 0;
}
