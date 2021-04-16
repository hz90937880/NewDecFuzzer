
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049bcb)
// WARNING: Removing unreachable block (ram,0x08049a08)
// WARNING: Removing unreachable block (ram,0x08049a66)
// WARNING: Removing unreachable block (ram,0x08049aa6)
// WARNING: Removing unreachable block (ram,0x08049aaf)
// WARNING: Removing unreachable block (ram,0x08049ab5)
// WARNING: Removing unreachable block (ram,0x08049abc)
// WARNING: Removing unreachable block (ram,0x08049ac1)
// WARNING: Removing unreachable block (ram,0x08049ad6)
// WARNING: Removing unreachable block (ram,0x08049ac9)
// WARNING: Removing unreachable block (ram,0x08049be6)
// WARNING: Removing unreachable block (ram,0x08049bea)
// WARNING: Removing unreachable block (ram,0x08049bdd)
// WARNING: Removing unreachable block (ram,0x08049bf0)
// WARNING: Removing unreachable block (ram,0x08049bf3)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Detected overlap for variable var_a6h
// WARNING: [r2ghidra] Detected overlap for variable var_a7h
// WARNING: [r2ghidra] Detected overlap for variable var_aeh
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Detected overlap for variable var_7eh
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_8dh
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_6dh
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_70h
// WARNING: [r2ghidra] Detected overlap for variable var_9ah
// WARNING: [r2ghidra] Detected overlap for variable var_9ch
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    undefined2 extraout_var;
    int32_t var_d0h;
    int32_t var_cch;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_c0h;
    uint32_t var_ach;
    int32_t var_a4h;
    int32_t var_9eh;
    int32_t var_98h;
    uint32_t var_94h;
    uint32_t var_8ch;
    uint32_t var_84h;
    int32_t var_7ch;
    int32_t var_78h;
    uint32_t var_72h;
    int32_t var_6ch;
    int32_t var_68h;
    uint32_t var_60h;
    int32_t var_58h;
    int32_t var_50h;
    int32_t var_48h;
    int32_t var_44h;
    uint32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_24h;
    int32_t var_1eh;
    int32_t var_18h;
    uint16_t var_12h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_12h = 0xf2ab;
    var_24h = 0x7d98a9a2;
    var_28h = 3;
    var_2ch = -1;
    var_30h = -1;
    for (var_10h = 0; var_10h != 0x10; var_10h = var_10h + 1) {
        stack0xffffffe0 = 0xfffffff6;
        var_12h = var_12h | ~(uint16_t)(var_10h != 0xd890) & (uint16_t)var_10h;
        for (var_18h = 0; var_18h < 0x17; var_18h = var_18h + 1) {
            var_24h = stack0xffffffe0 & (uint32_t)(uint16_t)(var_12h >> 1 ^ var_12h);
            var_28h = 0xffffd890;
            var_2ch = 0;
            var_30h = var_30h + -1;
            unique0x100002fa = var_24h;
        }
        if (var_24h != 0) break;
    }
    sym.set_var(0xd51, (uint32_t)var_12h, 0, var_24h, var_28h, var_2ch, var_30h, 1, 0x3396ac63, 0, 0x17e4cdb7, 6, 0x81, 
                0x7814, 0, -0x62694289, -0x722b, 0, -0x6c124e57, -0x1316, -0x4db0cba7, 0x6490b889, 3, 6, 1, -9);
    return CONCAT22(extraout_var, 0xffff);
}
