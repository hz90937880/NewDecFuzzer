
// WARNING: Variable defined which should be unmapped: var_ah
// WARNING: Removing unreachable block (ram,0x0804978d)
// WARNING: Removing unreachable block (ram,0x08049780)
// WARNING: Removing unreachable block (ram,0x080497c5)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_8h

undefined4 sym.func_1(void)
{
    int32_t var_44h;
    int32_t var_40h;
    uint32_t var_3ch;
    uint32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int16_t var_ch;
    int32_t var_ah;
    
    sym.__x86.get_pc_thunk.ax();
    var_ah._0_2_ = 0xaafd;
    var_10h = 0;
    for (var_ch = 0x1d; var_ch < 10; var_ch = var_ch + -1) {
        var_10h = var_10h ^ 0x231fbf68;
        var_ah._0_2_ = (uint16_t)var_ah ^ (uint16_t)var_10h;
    }
    sym.set_var(0x231fbf68, 1, -0x4097, (uint32_t)(uint16_t)var_ah, -0x304a, 0x1e, 8, 0xd1f2830, 0, -2);
    return 8;
}
