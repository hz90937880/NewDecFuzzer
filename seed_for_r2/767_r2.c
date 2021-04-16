
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x080497f8)
// WARNING: Removing unreachable block (ram,0x0804980d)
// WARNING: Removing unreachable block (ram,0x080497ec)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_fh
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_30h

int32_t sym.func_1(void)
{
    int32_t var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    uint32_t var_2ch;
    int32_t var_28h;
    int32_t var_20h;
    int32_t var_1ch;
    uint32_t var_18h;
    int32_t var_14h;
    uint8_t var_fh;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0;
    var_fh = 0xff;
    var_14h = 8;
    for (var_ch = 0x1a; var_ch < -4; var_ch = var_ch + -6) {
        var_14h = var_14h + 1;
        var_8h = -2;
        var_fh = var_fh + 1;
    }
    sym.set_var(-0x4eef36c5, -7, var_8h, var_ch, -0x1a, -0x7a, 9, -1, 0, (uint32_t)var_fh);
    return var_14h;
}
