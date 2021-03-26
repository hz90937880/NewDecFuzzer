
// WARNING: Variable defined which should be unmapped: var_1h
// WARNING: Removing unreachable block (ram,0x080496f1)
// WARNING: Removing unreachable block (ram,0x08049723)
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh

undefined4 sym.func_1(void)
{
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_1h;
    
    sym.__x86.get_pc_thunk.ax();
    sym.set_var(0xffffffff, 0xfffffffc, 1, 0, 0);
    return 0xfffffffc;
}
