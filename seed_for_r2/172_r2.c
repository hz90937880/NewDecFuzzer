
// WARNING: Variable defined which should be unmapped: var_5h
// WARNING: Removing unreachable block (ram,0x080497a2)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_fh
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_4h

uint32_t sym.func_1(void)
{
    int32_t var_30h;
    uint32_t var_2ch;
    int32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    uint16_t var_eh;
    uint32_t var_ch;
    int16_t var_8h;
    uint32_t var_5h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0;
    var_eh = 0xffff;
    var_5h._0_1_ = 'L';
    for (var_ch = 0x1d; var_ch < 0x3d; var_ch = var_ch + 1) {
        var_8h = 1;
        var_5h._0_1_ = '\0';
        if ((var_ch == 1) && ('\0' < (char)((char)(1U % 0) + (0xe5741310 < (uint32_t)(1U % 0)) * -0x11))) {
            var_eh = 0;
        } else {
            var_eh = 1;
        }
    }
    sym.set_var((int32_t)(char)var_5h, (int32_t)var_8h, var_ch, (uint32_t)var_eh);
    return var_ch;
}
