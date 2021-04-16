
// WARNING: Variable defined which should be unmapped: var_8h
// WARNING: Removing unreachable block (ram,0x08049df6)
// WARNING: Removing unreachable block (ram,0x08049e1d)
// WARNING: Removing unreachable block (ram,0x08049e5a)
// WARNING: Removing unreachable block (ram,0x08049e67)
// WARNING: Removing unreachable block (ram,0x08049e60)
// WARNING: Removing unreachable block (ram,0x08049e6c)
// WARNING: Removing unreachable block (ram,0x08049e86)
// WARNING: Removing unreachable block (ram,0x08049e8d)
// WARNING: Removing unreachable block (ram,0x08049e92)
// WARNING: Removing unreachable block (ram,0x08049dc1)
// WARNING: Removing unreachable block (ram,0x08049bfd)
// WARNING: Removing unreachable block (ram,0x08049cfa)
// WARNING: Removing unreachable block (ram,0x08049c42)
// WARNING: Removing unreachable block (ram,0x08049c52)
// WARNING: Removing unreachable block (ram,0x08049c5c)
// WARNING: Removing unreachable block (ram,0x08049c63)
// WARNING: Removing unreachable block (ram,0x08049c68)
// WARNING: Removing unreachable block (ram,0x08049caa)
// WARNING: Removing unreachable block (ram,0x08049cb0)
// WARNING: Removing unreachable block (ram,0x08049cb7)
// WARNING: Removing unreachable block (ram,0x08049cbc)
// WARNING: Removing unreachable block (ram,0x08049ccc)
// WARNING: Removing unreachable block (ram,0x08049cd9)
// WARNING: Removing unreachable block (ram,0x08049cd2)
// WARNING: Removing unreachable block (ram,0x08049cde)
// WARNING: Removing unreachable block (ram,0x08049d04)
// WARNING: Removing unreachable block (ram,0x08049d9a)
// WARNING: Removing unreachable block (ram,0x08049b7e)
// WARNING: Removing unreachable block (ram,0x08049b91)
// WARNING: Removing unreachable block (ram,0x08049ba9)
// WARNING: Removing unreachable block (ram,0x08049eb6)
// WARNING: Removing unreachable block (ram,0x08049bb3)
// WARNING: Removing unreachable block (ram,0x08049868)
// WARNING: Removing unreachable block (ram,0x08049af1)
// WARNING: Removing unreachable block (ram,0x0804996e)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_3ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_48h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_59h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_28h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_5ch
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_76h
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_8dh
// WARNING: [r2ghidra] Detected overlap for variable var_96h
// WARNING: [r2ghidra] Detected overlap for variable var_aeh
// WARNING: [r2ghidra] Detected overlap for variable var_b5h
// WARNING: [r2ghidra] Detected overlap for variable var_b6h

uint32_t sym.func_1(void)
{
    int32_t var_c0h;
    uint32_t var_bch;
    int32_t var_b4h;
    uint32_t var_ach;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_9ch;
    int32_t var_94h;
    uint32_t var_8ch;
    uint32_t var_88h;
    int32_t var_80h;
    int32_t var_7ch;
    uint32_t var_74h;
    uint32_t var_70h;
    int32_t var_6ch;
    uint32_t var_68h;
    uint32_t var_64h;
    int32_t var_58h;
    int32_t var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    undefined4 var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    int32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_34h;
    uint32_t var_30h;
    int32_t var_2ch;
    uint16_t var_26h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    int16_t var_10h;
    uint8_t var_dh;
    uint32_t var_ch;
    int32_t var_8h;
    
    sym.__x86.get_pc_thunk.ax();
    var_dh = 0x90;
    var_10h = 4;
    var_18h = 0x2244f8a3;
    var_1ch = 0xffffffff;
    var_20h = 0x8a1103c6;
    var_26h = 0xffff;
    var_40h = 0;
    for (var_3ch = 0; -0x1a < var_3ch; var_3ch = var_3ch + -1) {
        var_dh = 0;
        for (var_30h = 0x1a; var_30h < 0x33; var_30h = var_30h + 4) {
            var_10h = (int16_t)var_3ch;
            var_40h = var_40h + 1;
            if (var_40h == 0) {
                var_20h = var_20h + 1;
                var_26h = var_26h + 1;
                var_18h = 7;
                var_1ch = 2;
            } else {
                var_1ch = 0xd0502ee2;
                var_dh = 0xca;
            }
        }
    }
    sym.set_var(0x2fafd11d, 0x78acc4b8, 0x78acc4b6, (uint32_t)var_dh, (int32_t)var_10h, 0, var_18h, var_1ch, -0x2686c775
                , 2, var_20h, 3, 5, (uint32_t)var_26h, 0xfffa, -0x4a0e250e);
    return var_1ch;
}
