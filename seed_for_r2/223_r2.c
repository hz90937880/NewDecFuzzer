
// WARNING: Removing unreachable block (ram,0x080496e7)
// WARNING: Removing unreachable block (ram,0x080496ee)
// WARNING: Removing unreachable block (ram,0x08049711)
// WARNING: Removing unreachable block (ram,0x08049717)
// WARNING: Removing unreachable block (ram,0x0804973d)
// WARNING: Removing unreachable block (ram,0x08049736)
// WARNING: Removing unreachable block (ram,0x08049742)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_5h
// WARNING: [r2ghidra] Detected overlap for variable var_1bh
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

uint32_t sym.func_1(void)
{
    int32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ah;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    uint8_t var_5h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_5h = 100;
    var_ch = -0x2ee18a79;
    var_14h = 0xffffffff;
    for (var_4h = -2; var_4h < 0x1c; var_4h = var_4h + 1) {
        var_5h = 0;
        var_14h = var_14h ^ 0xf8;
        var_ch = 3;
    }
    sym.set_var(var_4h, (uint32_t)var_5h, var_ch, 3, var_14h);
    return var_14h;
}
