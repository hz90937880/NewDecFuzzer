
// WARNING: Removing unreachable block (ram,0x080496e8)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_5h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    uint8_t var_5h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_5h = 0x33;
    var_10h = 1;
    for (var_4h = -0xf; var_4h < 7; var_4h = var_4h + 1) {
        var_ch = 0;
        while ((-10 < var_ch && (var_5h = var_5h + 1, var_10h == 0))) {
            var_ch = var_ch + -7;
            var_10h = (uint32_t)var_5h;
        }
    }
    sym.set_var(0x7d65121a, var_4h, 5, (uint32_t)var_5h);
    return var_4h;
}
