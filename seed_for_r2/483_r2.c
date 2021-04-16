
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x080496cd)
// WARNING: Removing unreachable block (ram,0x080496ec)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_1dh

undefined2 sym.func_1(void)
{
    int32_t var_24h;
    uint32_t var_1ch;
    uint32_t var_14h;
    uint32_t var_dh;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 4;
    for (stack0xfffffff0 = 0x12; -0x18 < (int32_t)stack0xfffffff0; unique0x00000f40 = stack0xfffffff0 + -1) {
        var_8h = 0xd9;
    }
    sym.set_var(7, 0xca, 0, -0x6e854928, var_8h);
    return 0xfffb;
}
