
// WARNING: Variable defined which should be unmapped: var_3h
// WARNING: Removing unreachable block (ram,0x080496aa)
// WARNING: [r2ghidra] Detected overlap for variable var_2h
// WARNING: [r2ghidra] Detected overlap for variable var_4h
// WARNING: [r2ghidra] Detected overlap for variable var_5h

undefined4 sym.func_1(void)
{
    int32_t var_3h;
    int32_t var_10h;
    uint32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    sym.set_var(0x274, 0xffffffe0, 0x42);
    return 0xffffffe0;
}
