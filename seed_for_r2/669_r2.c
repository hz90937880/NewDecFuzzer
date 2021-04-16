
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049b1e)
// WARNING: Removing unreachable block (ram,0x08049b2a)
// WARNING: Removing unreachable block (ram,0x08049b31)
// WARNING: Removing unreachable block (ram,0x08049b36)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_f1h
// WARNING: [r2ghidra] Detected overlap for variable var_fah
// WARNING: [r2ghidra] Detected overlap for variable var_fch
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Detected overlap for variable var_75h
// WARNING: [r2ghidra] Detected overlap for variable var_78h
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_8dh
// WARNING: [r2ghidra] Detected overlap for variable var_9ah
// WARNING: [r2ghidra] Detected overlap for variable var_9bh
// WARNING: [r2ghidra] Detected overlap for variable var_a2h
// WARNING: [r2ghidra] Detected overlap for variable var_a9h
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_ach
// WARNING: [r2ghidra] Detected overlap for variable var_adh
// WARNING: [r2ghidra] Detected overlap for variable var_bah
// WARNING: [r2ghidra] Detected overlap for variable var_bbh
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_bch
// WARNING: [r2ghidra] Detected overlap for variable var_48h
// WARNING: [r2ghidra] Detected overlap for variable var_35h

undefined4 sym.func_1(void)
{
    int32_t var_134h;
    int32_t var_130h;
    int32_t var_12ch;
    int32_t var_128h;
    int32_t var_124h;
    int32_t var_120h;
    int32_t var_11ch;
    int32_t var_118h;
    int32_t var_114h;
    uint32_t var_110h;
    int32_t var_f8h;
    int32_t var_f0h;
    int32_t var_ech;
    int32_t var_e8h;
    int32_t var_e4h;
    int32_t var_e0h;
    int32_t var_dch;
    int32_t var_d8h;
    int32_t var_d4h;
    int32_t var_d0h;
    int32_t var_cch;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_c0h;
    int32_t var_b8h;
    int32_t var_b4h;
    int32_t var_a8h;
    int32_t var_a0h;
    int32_t var_98h;
    int32_t var_94h;
    uint32_t var_8ch;
    int32_t var_84h;
    int32_t var_80h;
    uint32_t var_74h;
    int32_t var_70h;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_54h;
    int32_t var_50h;
    uint32_t var_4ah;
    int32_t var_45h;
    int32_t var_40h;
    uint32_t var_3ch;
    int32_t var_34h;
    uint32_t var_30h;
    uint32_t var_2ch;
    int32_t var_28h;
    uint32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_45h._0_1_ = 1;
    stack0xffffffb8 = 1;
    for (var_3ch = 0xfffffffc; var_3ch < 0x11; var_3ch = var_3ch + 1) {
        unique0x00000f40 = stack0xffffffb8 - 1;
        var_45h._0_1_ = (uint8_t)var_45h - 1;
    }
    sym.set_var(1, 0, 0, -5, 0x78, 0x4141eda7, 4, 1, 0, 1, 0x4fa1a2bb, 0, 0x53, 0, 0x516bf4f6, -1, 1, 0x6804, -1, 2, 1, 
                0xc80a, -0x727930fd, 0xa2b921b, 3, -4, 0xf0, -1, 0x5f07, -9, 0, 0xffff, 
                (uint32_t)(0xa74d < (stack0xffffffb8 & 1U)), 0, -3, -0x1c2, -0x3de265d5, 0x47, 
                (uint32_t)(uint8_t)var_45h, stack0xffffffb8);
    return 1;
}
