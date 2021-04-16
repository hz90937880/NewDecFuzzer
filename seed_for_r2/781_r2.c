
// WARNING: Removing unreachable block (ram,0x080496bd)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_dh;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0;
    while( true ) {
        if (0x12 < var_8h) {
            sym.set_var(0xf, 0, var_8h);
            return 0xfffffffc;
        }
        if (var_8h == 0) break;
        var_8h = var_8h + 9;
    }
    sym.set_var(0xf, 0, 0);
    return 1;
}
