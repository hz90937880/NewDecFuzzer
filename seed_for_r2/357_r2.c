
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_28h;
    uint32_t var_24h;
    uint16_t var_1eh;
    int32_t var_1ch;
    int32_t var_14h;
    uint8_t var_eh;
    uint8_t var_dh;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0;
    var_dh = 1;
    var_eh = 0;
    var_14h = 0x77e815f8;
    var_1ch = -0x420874eb;
    var_1eh = 0xc167;
    for (var_8h = 0; -0x13 < (int32_t)var_8h; var_8h = var_8h - 9) {
        var_eh = var_eh ^ 0xff;
        var_14h = var_14h | 9 - (var_8h & 0xff);
        var_ch = -1;
        var_dh = 0xff;
        var_1ch = var_1ch + -1;
        var_1eh = var_1eh - 1;
    }
    sym.set_var(1, var_ch, (uint32_t)var_dh, (int32_t)(char)var_eh, var_14h, 1, var_1ch, (uint32_t)var_1eh);
    return var_14h;
}
