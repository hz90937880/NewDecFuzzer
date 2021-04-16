
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x0804972a)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Detected overlap for variable var_bh
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

uint8_t sym.func_1(void)
{
    int32_t var_34h;
    int32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_16h;
    int32_t var_10h;
    uint8_t var_bh;
    uint16_t var_ah;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ah = 0x231;
    var_bh = 0x91;
    var_10h = 0x35a60c43;
    for (var_8h = 0; var_8h < -0x1c; var_8h = var_8h + -1) {
        var_ah = 8;
        var_bh = var_bh + 1;
        var_10h = 0;
    }
    sym.set_var(var_8h, (uint32_t)var_ah, (uint32_t)var_bh, var_10h);
    return var_bh;
}
