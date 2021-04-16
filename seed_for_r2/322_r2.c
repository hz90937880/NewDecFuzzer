
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x080497f0)
// WARNING: Removing unreachable block (ram,0x080497e3)
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_48h

undefined2 sym.func_1(void)
{
    int32_t var_54h;
    uint32_t var_50h;
    int32_t var_4ch;
    int32_t var_44h;
    uint32_t var_40h;
    uint32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_14h;
    uint8_t var_dh;
    uint32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0xffffffff;
    var_dh = 0xf9;
    for (var_8h = 0; var_8h != 0xfffffff8; var_8h = var_8h - 1) {
        var_ch = ((0 < (int32_t)var_8h != 0x519d8147 ^ 5) << 3 < 6) / var_8h == 0 | 0xafd061a6;
    }
    if ((int32_t)(1 / (int64_t)(int32_t)(char)var_ch) == 0) {
        var_dh = 0;
        var_ch = (uint32_t)((int32_t)(int16_t)((int32_t)(var_ch & 0xff) < -0x26aca0bb == 0xfffffff8 ^ 1) % -6 != 0);
        var_8h = var_ch;
    }
    sym.set_var(var_8h, var_ch, 0x7283a38c, (uint32_t)var_dh, 0x4a52);
    return 0x4a52;
}
