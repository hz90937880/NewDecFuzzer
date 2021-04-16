
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x08049940)
// WARNING: Removing unreachable block (ram,0x08049960)
// WARNING: Removing unreachable block (ram,0x08049967)
// WARNING: Removing unreachable block (ram,0x08049919)
// WARNING: Removing unreachable block (ram,0x080498fc)
// WARNING: Removing unreachable block (ram,0x08049929)
// WARNING: Removing unreachable block (ram,0x08049a20)
// WARNING: Removing unreachable block (ram,0x0804996e)
// WARNING: Removing unreachable block (ram,0x08049973)
// WARNING: Removing unreachable block (ram,0x08049a73)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_68h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_47h
// WARNING: [r2ghidra] Detected overlap for variable var_84h
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_8dh
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_80h
// WARNING: [r2ghidra] Detected overlap for variable var_96h
// WARNING: [r2ghidra] Detected overlap for variable var_50h
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_79h
// WARNING: [r2ghidra] Detected overlap for variable var_58h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_5ch
// WARNING: [r2ghidra] Detected overlap for variable var_60h

undefined4 sym.func_1(void)
{
    uint32_t var_c8h;
    int32_t var_c4h;
    uint32_t var_c0h;
    int32_t var_bch;
    int32_t var_b8h;
    int32_t var_b4h;
    int32_t var_b0h;
    int32_t var_a0h;
    int32_t var_9ch;
    int32_t var_94h;
    int32_t var_8ch;
    int32_t var_82h;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    undefined4 var_68h;
    int32_t var_62h;
    int32_t var_5ah;
    int32_t var_4ch;
    int32_t var_44h;
    int32_t var_40h;
    uint32_t var_3ch;
    int32_t var_34h;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    uint16_t var_1ah;
    int32_t var_18h;
    uint32_t var_14h;
    uint32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_18h = -1;
    var_1ah = 0xfffb;
    var_20h = 7;
    var_24h = -0x82e2bf0;
    var_28h = -0x32e68f72;
    var_eh._0_2_ = 0;
    while ((uint16_t)var_eh == 0x2c) {
        var_24h = 1;
        var_18h = 1;
        var_1ah = 0xc586;
        var_20h = var_20h + 1;
        var_28h = ZEXT14(((var_20h & 0xffffU) != 1) == 0x4981c586);
        var_eh._0_2_ = 0x2d;
    }
    sym.set_var((uint32_t)(uint16_t)var_eh, 0x4981c586, var_18h, (uint32_t)var_1ah, var_20h, var_24h, var_28h, 0x40, 0, 
                0x66, 0x89d3, 2, 0, -1, -0x30c8, 1, 0x3379, 1, -0x30c8, 0x4189, 0x1f69, 0, 100, -8);
    return 1;
}
