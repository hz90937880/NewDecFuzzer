
// WARNING: Removing unreachable block (ram,0x08049833)
// WARNING: Removing unreachable block (ram,0x0804982c)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_20h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_23h
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

uint16_t sym.func_1(void)
{
    int32_t var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_22h;
    uint32_t var_1ch;
    uint32_t var_18h;
    int32_t var_10h;
    uint16_t var_ch;
    uint16_t var_ah;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 2;
    var_ah = 0xfff7;
    var_10h = -1;
    for (var_4h = -0x16; var_4h < -8; var_4h = var_4h + 1) {
        var_8h = 7;
        if (var_4h % 0x6d42bd36 == 7) {
            var_10h = var_10h | 7;
        } else {
            var_ah = var_ah - 1;
            for (stack0xffffffdc = 0; stack0xffffffdc < -0x13; unique0x00000f40 = stack0xffffffdc + -1) {
            }
        }
    }
    for (var_ch = 0; var_ch < 0xd; var_ch = var_ch + 7) {
    }
    sym.set_var(var_4h, var_8h, (uint32_t)var_ah, (uint32_t)var_ch, var_10h);
    return var_ch;
}
