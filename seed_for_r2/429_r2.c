
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x08049cb8)
// WARNING: Removing unreachable block (ram,0x080498ef)
// WARNING: Removing unreachable block (ram,0x080498ff)
// WARNING: Removing unreachable block (ram,0x08049a73)
// WARNING: Removing unreachable block (ram,0x08049b28)
// WARNING: Removing unreachable block (ram,0x08049c65)
// WARNING: Removing unreachable block (ram,0x08049c9d)
// WARNING: Removing unreachable block (ram,0x08049ca8)
// WARNING: Removing unreachable block (ram,0x08049cb1)
// WARNING: Removing unreachable block (ram,0x08049cbd)
// WARNING: Removing unreachable block (ram,0x08049e76)
// WARNING: Removing unreachable block (ram,0x08049e80)
// WARNING: Removing unreachable block (ram,0x08049d17)
// WARNING: Removing unreachable block (ram,0x08049d35)
// WARNING: Removing unreachable block (ram,0x08049d3f)
// WARNING: Removing unreachable block (ram,0x08049b41)
// WARNING: Removing unreachable block (ram,0x08049b56)
// WARNING: Removing unreachable block (ram,0x08049b7c)
// WARNING: Removing unreachable block (ram,0x08049bbd)
// WARNING: Removing unreachable block (ram,0x08049e89)
// WARNING: Removing unreachable block (ram,0x08049e3f)
// WARNING: Removing unreachable block (ram,0x08049bd9)
// WARNING: Removing unreachable block (ram,0x08049d44)
// WARNING: Removing unreachable block (ram,0x08049d62)
// WARNING: Removing unreachable block (ram,0x08049d6f)
// WARNING: Removing unreachable block (ram,0x08049d68)
// WARNING: Removing unreachable block (ram,0x08049d74)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_28h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_38h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_fh
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_31h
// WARNING: [r2ghidra] Detected overlap for variable var_4bh
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_71h
// WARNING: [r2ghidra] Detected overlap for variable var_79h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_8ah
// WARNING: [r2ghidra] Detected overlap for variable var_8bh
// WARNING: [r2ghidra] Detected overlap for variable var_96h
// WARNING: [r2ghidra] Detected overlap for variable var_9eh
// WARNING: [r2ghidra] Detected overlap for variable var_b1h
// WARNING: [r2ghidra] Detected overlap for variable var_b2h
// WARNING: [r2ghidra] Detected overlap for variable var_b3h
// WARNING: [r2ghidra] Detected overlap for variable var_c1h
// WARNING: [r2ghidra] Detected overlap for variable var_c9h

undefined4 sym.func_1(void)
{
    int32_t iVar1;
    int32_t var_dch;
    int32_t var_d8h;
    int32_t var_d4h;
    int32_t var_d0h;
    uint32_t var_c8h;
    int32_t var_c0h;
    int32_t var_bch;
    uint32_t var_b8h;
    int32_t var_b0h;
    uint32_t var_ach;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_9ch;
    int32_t var_94h;
    uint32_t var_90h;
    int32_t var_88h;
    int32_t var_80h;
    int32_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    uint32_t var_64h;
    uint32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_48h;
    uint32_t var_44h;
    int32_t var_40h;
    uint32_t var_3ch;
    undefined4 var_38h;
    uint32_t var_30h;
    undefined4 var_28h;
    uint16_t var_22h;
    uint16_t var_20h;
    uint8_t var_1dh;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    uint8_t var_fh;
    uint32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_1ch = 0x827cf573;
    var_1dh = 0xe2;
    var_20h = 0x57c2;
    var_22h = 0xd368;
    var_38h = 3;
    for (var_fh = 0; var_fh < 0x12; var_fh = var_fh + 1) {
        var_1ch = 0x2c;
        if ((var_fh != 0) == 0xffff) {
            var_20h = var_20h | var_1dh ^ 1;
        } else {
            var_38h = 2;
            var_1dh = var_1dh ^ 0xd4;
        }
        if ((var_1dh == 0xffffffff) && (var_1dh != 4)) {
            iVar1 = 0;
        } else {
            iVar1 = 1;
        }
        var_22h = (uint16_t)((iVar1 - 0xb7U) / 0x40121ffd);
    }
    var_1dh = var_1dh ^ 0xb182bc9U < (uint32_t)-(int32_t)(char)((char)var_1ch * (char)var_20h);
    sym.set_var(0xb6b1, 0xe033c225, (uint32_t)var_fh, 0xb7, 1, 1, var_1ch, (uint32_t)var_1dh, (int32_t)(int16_t)var_20h
                , (uint32_t)var_22h, (int32_t)(int16_t)((char)var_1dh * -0x4f), 0, 0x5964, 3, -1, 3, -7, -1, 0x1c0a70e4
                , -0x7b6a5d8c);
    return var_38h;
}
