
// WARNING: Removing unreachable block (ram,0x08049690)
// WARNING: Removing unreachable block (ram,0x080496e4)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

uint32_t sym.func_1(void)
{
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    for (var_4h = 0xffffffec; (int32_t)var_4h < -0x19; var_4h = var_4h - 1) {
    }
    sym.set_var(var_4h | 1);
    return var_4h | 1;
}
