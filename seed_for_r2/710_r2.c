
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049b71)
// WARNING: Removing unreachable block (ram,0x08049b78)
// WARNING: Removing unreachable block (ram,0x08049ba2)
// WARNING: Removing unreachable block (ram,0x08049be5)
// WARNING: Removing unreachable block (ram,0x08049bde)
// WARNING: Removing unreachable block (ram,0x08049bea)
// WARNING: Removing unreachable block (ram,0x08049a3d)
// WARNING: Removing unreachable block (ram,0x08049a4b)
// WARNING: Removing unreachable block (ram,0x08049abd)
// WARNING: Removing unreachable block (ram,0x080499b8)
// WARNING: Removing unreachable block (ram,0x080499c8)
// WARNING: Removing unreachable block (ram,0x080499f7)
// WARNING: Removing unreachable block (ram,0x08049aaa)
// WARNING: Removing unreachable block (ram,0x08049ad2)
// WARNING: Removing unreachable block (ram,0x08049acb)
// WARNING: Removing unreachable block (ram,0x08049ad7)
// WARNING: Removing unreachable block (ram,0x08049af2)
// WARNING: Removing unreachable block (ram,0x08049b2b)
// WARNING: Removing unreachable block (ram,0x08049c56)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_12h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_48h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_5eh
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_60h
// WARNING: [r2ghidra] Detected overlap for variable var_65h
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_6dh
// WARNING: [r2ghidra] Detected overlap for variable var_7dh
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Detected overlap for variable var_92h
// WARNING: [r2ghidra] Detected overlap for variable var_a6h
// WARNING: [r2ghidra] Detected overlap for variable var_bah
// WARNING: [r2ghidra] Detected overlap for variable var_bbh
// WARNING: [r2ghidra] Detected overlap for variable var_d5h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_38h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ch to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_ech;
    int32_t var_e8h;
    int32_t var_e4h;
    uint32_t var_e0h;
    uint32_t var_dch;
    int32_t var_d4h;
    int32_t var_d0h;
    int32_t var_cch;
    int32_t var_c8h;
    uint32_t var_c4h;
    int32_t var_c0h;
    int32_t var_b8h;
    uint32_t var_b4h;
    int32_t var_b0h;
    uint32_t var_ach;
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_90h;
    uint32_t var_8ch;
    int32_t var_88h;
    int32_t var_84h;
    int32_t var_7ch;
    uint32_t var_78h;
    int32_t var_74h;
    int32_t var_6ch;
    uint32_t var_64h;
    uint32_t var_5ch;
    int32_t var_55h;
    uint32_t var_50h;
    int32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_44h;
    uint8_t var_39h;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    uint32_t var_18h;
    undefined4 var_12h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_18h = 0xa4aefc51;
    var_1ch = 2;
    var_38h = -10;
    var_39h = 0x6b;
    var_44h = 0xefc0aefa;
    stack0xffffffa8 = 1;
    var_48h = 0xfffffffc;
    var_50h = 0;
    while (var_50h == 0xfffffff9) {
        var_18h = 0xff;
        unique0x00000f30 = stack0xffffffa8 | var_48h;
        var_1ch = var_1ch | 1;
        var_44h = var_44h + 1;
        var_39h = var_39h | unique0x00000f30 != 1U;
        var_38h = 1;
        var_48h = 0;
        var_50h = 0xfffffff8;
    }
    for (var_28h = 0; var_28h < 4; var_28h = var_28h + 1) {
    }
    sym.set_var(0, 1, 0, 0, var_18h, var_1ch, 0x70b1de00, 0xfffffffe, 0x681e8b00, 6, var_28h, 0x393687ea, 0xffff, 
                0x50add41a, 1, var_38h % 0x4935f482, var_38h, 0x73, (int32_t)(char)var_39h, 2, 0x6f64, 0x467c, var_44h);
    return var_1ch;
}
