
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x08049800)
// WARNING: Removing unreachable block (ram,0x08049816)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_28h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_13h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint8_t uVar1;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    undefined4 var_28h;
    uint32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    char var_13h;
    int16_t var_12h;
    uint32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0x90ac204e;
    var_12h = 0;
    var_13h = '\t';
    var_18h = -0x5271231b;
    var_1ch = 0x7aa55709;
    for (var_ch = 0; 2 < var_ch; var_ch = var_ch + 2) {
        var_12h = -0x6719;
        uVar1 = (uint8_t)(0xffff % 0) ^ 0xe7;
        var_13h = (char)((int64_t)(uint64_t)
                                  ((int32_t)((uint32_t)(uint16_t)(int16_t)(char)uVar1 *
                                            (uint32_t)(uint16_t)(int16_t)(char)uVar1) < 0x6dad3f05) /
                        (int64_t)(int32_t)(char)uVar1);
        var_18h = 1;
        var_8h = 0;
        var_1ch = var_1ch & (uint32_t)(-4 < (int32_t)((2 - (uint16_t)(int16_t)(char)var_ch & 0xffff) * 0xfffa));
    }
    sym.set_var(var_8h, 0x58e469ad, var_ch, 1, (int32_t)var_12h, (int32_t)var_13h, var_18h, var_1ch);
    return 0xfffffffc;
}
