
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_6h
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_1ch;
    uint32_t var_14h;
    int32_t var_ch;
    uint16_t var_6h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_6h = 1;
    for (var_4h = 10; -0x18 < var_4h; var_4h = var_4h + -1) {
        var_6h = var_6h - 1;
    }
    sym.set_var(var_4h, (uint32_t)var_6h);
    return var_4h;
}
