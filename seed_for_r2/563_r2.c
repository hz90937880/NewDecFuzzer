
// WARNING: Variable defined which should be unmapped: var_1h
// WARNING: Removing unreachable block (ram,0x08049707)
// WARNING: Removing unreachable block (ram,0x0804971d)
// WARNING: Removing unreachable block (ram,0x0804972a)
// WARNING: Removing unreachable block (ram,0x08049761)
// WARNING: Removing unreachable block (ram,0x0804978c)
// WARNING: Removing unreachable block (ram,0x080497cf)
// WARNING: Removing unreachable block (ram,0x080497fb)
// WARNING: Removing unreachable block (ram,0x08049801)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    uint32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_18h;
    uint32_t var_14h;
    undefined4 var_10h;
    int32_t var_ah;
    int32_t var_1h;
    
    sym.__x86.get_pc_thunk.ax();
    var_1h._0_1_ = -6;
    for (stack0xfffffff4 = 0xc; 0x1b < stack0xfffffff4; unique0x00000f40 = stack0xfffffff4 + 1) {
        var_1h._0_1_ = -5;
    }
    sym.set_var(0xfffb, 1, (int32_t)(char)var_1h, -7, 0);
    return stack0xfffffff4;
}
