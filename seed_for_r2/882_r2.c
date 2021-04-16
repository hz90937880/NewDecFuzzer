
// WARNING: Removing unreachable block (ram,0x080498b5)
// WARNING: Removing unreachable block (ram,0x080497df)
// WARNING: Removing unreachable block (ram,0x080497f6)
// WARNING: Removing unreachable block (ram,0x08049804)
// WARNING: Removing unreachable block (ram,0x080497fd)
// WARNING: Removing unreachable block (ram,0x08049809)
// WARNING: Removing unreachable block (ram,0x0804984a)
// WARNING: Removing unreachable block (ram,0x0804985f)
// WARNING: Removing unreachable block (ram,0x0804993f)
// WARNING: Removing unreachable block (ram,0x0804994d)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1dh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Detected overlap for variable var_59h
// WARNING: [r2ghidra] Detected overlap for variable var_61h

undefined4 sym.func_1(void)
{
    int32_t var_60h;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_48h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    int32_t var_30h;
    int32_t var_28h;
    uint32_t var_24h;
    uint32_t var_1ch;
    uint8_t var_15h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0x2eb90da1;
    var_ch = -1;
    var_14h = 0;
    var_15h = 200;
    for (var_10h = -4; -0x1d < var_10h; var_10h = var_10h + -6) {
        var_14h = var_14h ^ 0xfffffff3;
        var_15h = var_15h ^ 5;
        var_ch = ZEXT14((int32_t)((int32_t)(int16_t)var_10h + (uint32_t)(var_14h != 0xeaf6)) < 0x565e);
        var_8h = -4;
    }
    sym.set_var(1, var_8h, 0x52cb1363, var_ch, var_10h, var_14h, (int32_t)(char)var_15h, 0x10, 0x17005583, 0, 0x8375f08)
    ;
    return 0x17005583;
}
