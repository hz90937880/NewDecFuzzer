
// WARNING: Removing unreachable block (ram,0x08049781)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_6h
// WARNING: [r2ghidra] Detected overlap for variable var_7h
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh

undefined4 sym.func_1(void)
{
    uint8_t uVar1;
    uint32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    char var_8h;
    uint8_t var_7h;
    uint16_t var_6h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_6h = 0xe022;
    var_7h = 0xfa;
    var_8h = '\a';
    for (var_4h = 0; 7 < var_4h; var_4h = var_4h + 1) {
        var_6h = (uint16_t)(var_4h != 0);
        if (var_6h == 0x143e) {
            uVar1 = 0x13;
        } else {
            uVar1 = 0x12;
        }
        var_7h = var_7h & uVar1;
        var_8h = (char)(var_7h + 1 + (char)var_4h & 0x3e) / -6;
    }
    sym.set_var(-6, 6, 1, -1, -4, var_4h, (uint32_t)var_6h, (int32_t)(char)var_7h, (int32_t)var_8h);
    return 0x143e;
}
