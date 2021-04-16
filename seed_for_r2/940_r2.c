
// WARNING: Removing unreachable block (ram,0x0804977f)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    undefined2 extraout_var;
    int32_t var_15h;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    uint8_t var_dh;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 1;
    var_ch = 1;
    var_dh = 0x73;
    stack0xffffffe8 = 0x24891023;
    for (var_4h = 0x10; var_4h < 0x19; var_4h = var_4h + 3) {
        var_8h = var_8h - 1;
        if (var_8h == 0) {
            var_ch = -9;
        }
        var_dh = var_dh + 1;
        *(int32_t *)0x0 = 0;
    }
    sym.set_var(var_4h, 0x58, var_8h, var_ch, (uint32_t)var_dh, stack0xffffffe8);
    return CONCAT22(extraout_var, 0x58);
}
