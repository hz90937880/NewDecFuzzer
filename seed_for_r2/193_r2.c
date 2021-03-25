
// WARNING: Variable defined which should be unmapped: var_2h
// WARNING: Removing unreachable block (ram,0x080496c6)
// WARNING: [r2ghidra] Detected overlap for variable var_4h
// WARNING: [r2ghidra] Detected overlap for variable var_ah

undefined2 sym.func_1(void)
{
    int32_t var_8h;
    int32_t var_2h;
    
    sym.__x86.get_pc_thunk.ax();
    sym.set_var(-8, 0xfff1, 1);
    return 0xc203;
}
