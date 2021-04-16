
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_5h
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint32_t uVar1;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0x2395e2de;
    var_10h = 0;
    for (var_4h = -0x16; 0x1b < var_4h; var_4h = var_4h + 5) {
        var_ch = 7;
        if ((int32_t)(uint32_t)(var_4h == 0) < var_4h == 0x4e1c2e93) {
            uVar1 = 0x2f;
        } else {
            uVar1 = 0x2e;
        }
        var_10h = var_10h ^ uVar1 / 1 + 0xffff;
    }
    sym.set_var(var_4h, 0, var_ch, var_10h);
    return 0x4e1c2e93;
}
