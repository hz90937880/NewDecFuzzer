
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049a24)
// WARNING: Removing unreachable block (ram,0x08049a80)
// WARNING: Removing unreachable block (ram,0x08049a8a)
// WARNING: Removing unreachable block (ram,0x08049a91)
// WARNING: Removing unreachable block (ram,0x08049a96)
// WARNING: Removing unreachable block (ram,0x08049ac6)
// WARNING: Removing unreachable block (ram,0x08049bf7)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_bah to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_50h
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_8dh
// WARNING: [r2ghidra] Detected overlap for variable var_96h
// WARNING: [r2ghidra] Detected overlap for variable var_98h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Detected overlap for variable var_9dh
// WARNING: [r2ghidra] Detected overlap for variable var_aeh
// WARNING: [r2ghidra] Detected overlap for variable var_b0h
// WARNING: [r2ghidra] Detected overlap for variable var_7ch
// WARNING: [r2ghidra] Detected overlap for variable var_bah
// WARNING: [r2ghidra] Detected overlap for variable var_bbh
// WARNING: [r2ghidra] Detected overlap for variable var_beh
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int16_t iVar1;
    int32_t var_dch;
    int32_t var_d8h;
    int32_t var_d4h;
    uint32_t var_d0h;
    int32_t var_bfh;
    int32_t var_b8h;
    int32_t var_b4h;
    uint32_t var_ach;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_9ch;
    uint32_t var_94h;
    int32_t var_8ch;
    uint32_t var_84h;
    int32_t var_7dh;
    uint32_t var_78h;
    uint32_t var_74h;
    int32_t var_6ch;
    uint32_t var_68h;
    int32_t var_64h;
    uint32_t var_5ch;
    int32_t var_55h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_40h;
    uint32_t var_3ch;
    uint32_t var_38h;
    int32_t var_34h;
    uint8_t var_2dh;
    int32_t var_2ch;
    int32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint8_t var_19h;
    uint32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_14h = -0x6c4b1e5d;
    var_19h = 1;
    var_20h = 0x33634c77;
    var_24h = 0xfffffffa;
    var_28h = 0;
    var_2ch = -0x43b01cfc;
    var_2dh = 0xff;
    var_4ch = 0xf;
    while( true ) {
        if (var_4ch < 5) {
            sym.set_var(-5, var_14h, var_4ch, 0, (uint32_t)var_19h, var_20h, var_24h, 1, 1, -8, 4, 0x52, 0x6e00, 0x15, 0
                        , 0, var_2ch, (int32_t)(char)var_2dh, -0x4ea966cb, 1, -0x19d58ac0);
            return 4;
        }
        var_19h = var_19h - 1;
        var_2dh = var_2dh & 0xec;
        if ((char)var_2dh >> 3 == '\0') break;
        var_28h = 0x4a109fdd;
        if ((var_20h < 2) || (var_4ch == 0)) {
            iVar1 = 0;
        } else {
            iVar1 = 1;
        }
        var_14h = ZEXT14(0x3bac8edc < (uint32_t)(iVar1 * 0x40));
        var_24h = 0;
        var_2ch = 0x3bac8edc;
        var_4ch = var_4ch + -1;
        var_20h = var_20h + 1;
    }
    sym.set_var(-5, var_14h, var_4ch, 0, (uint32_t)var_19h, var_20h, var_24h, 1, 1, -8, 4, 0x52, 0x6e00, 0x15, 0, 
                var_28h, var_2ch, (int32_t)(char)var_2dh, -0x4ea966cb, 1, -0x19d58ac0);
    return 0x5c16;
}
