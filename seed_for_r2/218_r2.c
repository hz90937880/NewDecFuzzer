
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049800)
// WARNING: Removing unreachable block (ram,0x08049821)
// WARNING: Removing unreachable block (ram,0x08049997)
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_89h
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_67h
// WARNING: [r2ghidra] Detected overlap for variable var_6dh
// WARNING: [r2ghidra] Detected overlap for variable var_70h
// WARNING: [r2ghidra] Detected overlap for variable var_72h

undefined4 sym.func_1(void)
{
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_88h;
    int32_t var_84h;
    int32_t var_80h;
    uint32_t var_7ch;
    int32_t var_78h;
    int32_t var_6ch;
    int32_t var_64h;
    uint32_t var_5ch;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_34h;
    uint32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    uint32_t var_24h;
    uint16_t var_20h;
    int16_t var_1eh;
    int32_t var_1ch;
    int32_t var_18h;
    uint8_t var_12h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0xa8358bd4;
    var_12h = 0x53;
    var_18h = -0x7c8210a1;
    var_1ch = -5;
    var_1eh = 0x51ed;
    var_20h = 0x9ac4;
    for (var_24h = 0; 0x20 < var_24h; var_24h = var_24h + 1) {
        var_18h = 1;
        var_1ch = var_1ch ^ (int32_t)(char)var_10h *
                            (uint32_t)(-1 < (int32_t)((uint32_t)(uint8_t)(var_12h - 1) % 0x5d07));
        var_1eh = 1;
        var_20h = 1;
        var_12h = var_12h - 2;
        var_10h = 0xcf76;
    }
    sym.set_var(var_10h, 0xac842f88, 0, 1, (uint32_t)var_12h, var_18h, var_1ch, (int32_t)var_1eh, 7, 0, -5, -2, 4, 7, 
                0x44eb, (uint32_t)var_20h, -1, -0x645b6f99);
    return 0xfffffffd;
}
