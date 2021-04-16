
// WARNING: Variable defined which should be unmapped: var_5h
// WARNING: Removing unreachable block (ram,0x08049735)
// WARNING: Removing unreachable block (ram,0x08049742)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_4h

undefined2 sym.func_1(void)
{
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_ch;
    int16_t var_8h;
    int32_t var_5h;
    
    sym.__x86.get_pc_thunk.ax();
    var_5h._0_1_ = 0;
    for (var_8h = -10; 0xe < var_8h; var_8h = var_8h + 6) {
        var_5h._0_1_ = (uint8_t)var_5h ^ 0x24;
    }
    sym.set_var(0, 0, 0xfff8, (int32_t)(char)(uint8_t)var_5h);
    return 0xfff8;
}
