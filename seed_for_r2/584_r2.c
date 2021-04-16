
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x080497d1)
// WARNING: Removing unreachable block (ram,0x080497fc)
// WARNING: Removing unreachable block (ram,0x08049735)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_28h;
    uint32_t var_20h;
    int32_t var_18h;
    char var_11h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = -0x138ae95e;
    var_10h = 0x4b7b8319;
    var_11h = -3;
    for (var_8h = 0; var_8h < -2; var_8h = var_8h + -4) {
        var_ch = var_8h;
        var_10h = ZEXT14(1 < var_8h);
        var_11h = '\x01';
    }
    sym.set_var(var_8h, var_ch, var_10h, (int32_t)var_11h, -0x2e2629a0);
    return var_10h;
}
