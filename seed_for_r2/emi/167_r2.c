
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049c56)
// WARNING: Removing unreachable block (ram,0x08049c6b)
// WARNING: Removing unreachable block (ram,0x08049c06)
// WARNING: Removing unreachable block (ram,0x0804994f)
// WARNING: Removing unreachable block (ram,0x08049a6d)
// WARNING: Removing unreachable block (ram,0x08049add)
// WARNING: Removing unreachable block (ram,0x08049ae7)
// WARNING: Removing unreachable block (ram,0x08049a87)
// WARNING: Removing unreachable block (ram,0x08049a91)
// WARNING: Removing unreachable block (ram,0x0804998d)
// WARNING: Removing unreachable block (ram,0x08049a35)
// WARNING: Removing unreachable block (ram,0x08049a3b)
// WARNING: Removing unreachable block (ram,0x08049a42)
// WARNING: Removing unreachable block (ram,0x08049a47)
// WARNING: Removing unreachable block (ram,0x08049a53)
// WARNING: Removing unreachable block (ram,0x08049a59)
// WARNING: Removing unreachable block (ram,0x08049a60)
// WARNING: Removing unreachable block (ram,0x08049a65)
// WARNING: Removing unreachable block (ram,0x08049b8a)
// WARNING: Removing unreachable block (ram,0x08049bdf)
// WARNING: Removing unreachable block (ram,0x08049bd9)
// WARNING: Removing unreachable block (ram,0x08049be6)
// WARNING: Removing unreachable block (ram,0x08049beb)
// WARNING: Removing unreachable block (ram,0x08049cb0)
// WARNING: Removing unreachable block (ram,0x08049d70)
// WARNING: Removing unreachable block (ram,0x08049cf4)
// WARNING: Removing unreachable block (ram,0x08049c17)
// WARNING: Removing unreachable block (ram,0x08049c1d)
// WARNING: Removing unreachable block (ram,0x08049c23)
// WARNING: Removing unreachable block (ram,0x08049dd2)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_30h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_64h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_3ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_41h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Detected overlap for variable var_38h
// WARNING: [r2ghidra] Detected overlap for variable var_b8h
// WARNING: [r2ghidra] Detected overlap for variable var_7dh
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_aeh
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined sym.func_1(void)
{
    int32_t var_cdh;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_c0h;
    int32_t var_bah;
    int32_t var_b4h;
    int32_t var_ach;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    int32_t var_88h;
    uint32_t var_84h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    uint32_t var_70h;
    uint32_t var_68h;
    undefined4 var_64h;
    uint32_t var_5ch;
    int32_t var_58h;
    uint32_t var_54h;
    uint32_t var_50h;
    uint32_t var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    undefined4 var_3ch;
    uint16_t var_38h;
    undefined var_35h;
    uint32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    undefined4 var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_18h = -0x624ddec6;
    var_1ch = 1;
    var_2ch = -0x2cc1800;
    var_38h = 0xfffb;
    for (var_30h = 0; var_30h != 0; var_30h = var_30h + 9) {
        var_1ch = 0;
        var_18h = 7;
    }
    var_35h = 0xb5;
    if (1 < var_1ch) {
        var_38h = 0;
        var_35h = 0;
        var_2ch = 0;
    }
    sym.set_var(0x112567c8, 0x2a3b, 0xfffffff6, 1, 0x4e78, -0x82a6bb8, var_18h, var_1ch & 4 < (var_38h & 0xfffe), 
                -0x68099733, 0x385637ea, 1, 8, 0x1c9d, 0xffff, 4, var_2ch + -1);
    return var_35h;
}
