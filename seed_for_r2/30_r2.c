
// WARNING: Variable defined which should be unmapped: var_1h
// WARNING: Removing unreachable block (ram,0x080496de)
// WARNING: Removing unreachable block (ram,0x080496f3)
// WARNING: Removing unreachable block (ram,0x080496ec)
// WARNING: Removing unreachable block (ram,0x080496f8)
// WARNING: Removing unreachable block (ram,0x08049728)
// WARNING: Removing unreachable block (ram,0x0804972c)
// WARNING: Removing unreachable block (ram,0x080496c7)
// WARNING: [r2ghidra] Detected overlap for variable var_2h
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_25h

undefined sym.func_1(void)
{
    int32_t var_24h;
    int32_t var_1ch;
    uint32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    uint32_t var_1h;
    
    sym.__x86.get_pc_thunk.ax();
    sym.set_var(0x12, 0, 4, 0x33, 1);
    return 0x33;
}
