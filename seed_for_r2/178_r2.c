
// WARNING: Variable defined which should be unmapped: var_5h
// WARNING: Removing unreachable block (ram,0x08049770)
// WARNING: Removing unreachable block (ram,0x08049806)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_4h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_24h;
    int32_t var_20h;
    int32_t var_18h;
    int32_t var_14h;
    uint16_t var_eh;
    uint32_t var_ch;
    int16_t var_8h;
    uint32_t var_5h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = -9;
    var_ch = 0x2ef703c5;
    var_eh = 0x3b0a;
    var_14h = 0x5db5a26c;
    for (var_5h._0_1_ = '\n'; -6 < (char)var_5h; var_5h._0_1_ = (char)var_5h + -3) {
        var_8h = (-(int32_t)(int16_t)((int16_t)(char)var_5h ^ 0x59e5) - 0x2046U < 2) - 1;
        var_ch = 0xf922e000;
        var_eh = var_eh + 1;
        var_14h = 0;
    }
    sym.set_var((int32_t)(char)var_5h, (int32_t)var_8h, var_ch, (uint32_t)var_eh, var_14h, var_ch & 0xbab1f356, 
                var_ch & 0x56, -0x752c7a1e);
    return 0xfffffff7;
}
