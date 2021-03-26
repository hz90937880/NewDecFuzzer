
// WARNING: Removing unreachable block (ram,0x080496aa)
// WARNING: Removing unreachable block (ram,0x080496b0)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_6h
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_14h;
    uint32_t var_ch;
    uint16_t var_6h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_6h = 0x9ec1;
    for (var_4h = 0; var_4h < -0xb; var_4h = var_4h + -1) {
        var_6h = (uint16_t)(var_4h == 0) & (uint16_t)var_4h;
    }
    sym.set_var(var_4h, (int32_t)(int16_t)var_6h);
    return var_4h;
}
