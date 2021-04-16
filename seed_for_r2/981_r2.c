
// WARNING: Variable defined which should be unmapped: var_9h
// WARNING: Removing unreachable block (ram,0x0804987d)
// WARNING: Removing unreachable block (ram,0x0804988e)
// WARNING: Removing unreachable block (ram,0x080497eb)
// WARNING: Removing unreachable block (ram,0x080498c4)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_52h

undefined4 sym.func_1(void)
{
    uint32_t var_58h;
    uint32_t var_50h;
    int32_t var_4ch;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    int32_t var_28h;
    uint32_t var_24h;
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_9h;
    
    sym.__x86.get_pc_thunk.ax();
    var_9h._0_1_ = 0xfc;
    var_10h = 6;
    for (var_18h = 0; var_18h < -0x17; var_18h = var_18h + -1) {
        var_9h._0_1_ = (uint8_t)var_10h;
        var_10h = 0xffffffff;
    }
    sym.set_var(0xffffffff, 1, 1, (uint32_t)(uint8_t)var_9h, var_10h, (uint32_t)(1 < (uint8_t)var_9h), -1);
    return 6;
}
