
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x080499a7)
// WARNING: Removing unreachable block (ram,0x08049b56)
// WARNING: Removing unreachable block (ram,0x080498e3)
// WARNING: Removing unreachable block (ram,0x0804991a)
// WARNING: Removing unreachable block (ram,0x08049cc4)
// WARNING: Removing unreachable block (ram,0x08049b17)
// WARNING: Removing unreachable block (ram,0x08049b2a)
// WARNING: Removing unreachable block (ram,0x08049985)
// WARNING: Removing unreachable block (ram,0x08049999)
// WARNING: Removing unreachable block (ram,0x08049a1a)
// WARNING: Removing unreachable block (ram,0x08049c1b)
// WARNING: Removing unreachable block (ram,0x08049c29)
// WARNING: Removing unreachable block (ram,0x08049c61)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4eh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_dh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_16h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_54h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_48h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_50h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_88h
// WARNING: [r2ghidra] Detected overlap for variable var_95h
// WARNING: [r2ghidra] Detected overlap for variable var_96h
// WARNING: [r2ghidra] Detected overlap for variable var_a5h
// WARNING: [r2ghidra] Detected overlap for variable var_adh
// WARNING: [r2ghidra] Detected overlap for variable var_b4h
// WARNING: [r2ghidra] Detected overlap for variable var_b6h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_30h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    bool bVar1;
    int32_t var_d4h;
    uint32_t var_d0h;
    int32_t var_c4h;
    uint32_t var_c0h;
    int32_t var_bch;
    int32_t var_b7h;
    int32_t var_ach;
    uint32_t var_a4h;
    int32_t var_a0h;
    int32_t var_9ch;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    int32_t var_84h;
    uint32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    uint32_t var_74h;
    uint32_t var_70h;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    undefined4 var_54h;
    undefined4 var_4eh;
    undefined4 var_48h;
    uint16_t var_42h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_34h;
    uint32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int16_t var_1eh;
    uint32_t var_1ch;
    uint16_t var_16h;
    uint32_t var_14h;
    undefined4 var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_dh._0_1_ = -10;
    var_14h = 9;
    var_16h = 0xda8d;
    var_1ch = 9;
    var_1eh = 0x1d34;
    var_24h = -4;
    var_28h = 0x6112dd26;
    var_3ch = 1;
    bVar1 = true;
    for (var_42h = 0xfff8; 0x25 < var_42h; var_42h = var_42h + 1) {
        var_14h = 0x48;
        var_1ch = 0;
        if (bVar1) {
            var_24h = 0;
            bVar1 = false;
        } else {
            var_1eh = -0x43b6;
        }
        var_16h = 0xff70;
        var_3ch = var_3ch ^ 1;
        var_dh._0_1_ = -1;
        var_28h = -0x7dde2b3c;
    }
    sym.set_var(0xffffffff, (int32_t)(char)var_dh, var_14h, (uint32_t)var_16h, 0, var_1ch, (int32_t)var_1eh, var_24h, -1
                , 1, var_28h, 0x77380a6a, -0x11a0, 0x7568c23f, -0x257f2e7a, 1, var_3ch, 1);
    return 0xffffee60;
}
