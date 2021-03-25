
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_28h
// WARNING: [r2ghidra] Detected overlap for variable var_48h
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_7ah

undefined4 sym.func_1(void)
{
    uint32_t uVar1;
    uint32_t var_9ch;
    int32_t var_98h;
    uint32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    int32_t var_88h;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    uint32_t var_54h;
    int32_t var_50h;
    uint32_t var_4ch;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    uint32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    uint32_t var_2ch;
    uint16_t var_28h;
    uint16_t var_26h;
    uint16_t var_24h;
    uint32_t var_20h;
    uint8_t var_19h;
    uint32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0x799ac789;
    var_18h = 0x9d19ac19;
    var_19h = 0xf7;
    var_20h = 8;
    var_24h = 0xfff6;
    var_26h = 0xffff;
    var_28h = 0xfff7;
    for (var_14h = -0xb; 0x1d < var_14h; var_14h = var_14h + 7) {
        for (var_18h = 0; var_18h != 0x10; var_18h = var_18h + 1) {
            var_38h = 0xc7e011b5;
            var_19h = var_19h - 1;
            var_2ch = 0;
            while (var_2ch == 0xb) {
                var_38h = var_38h - 1;
                if (var_14h < (int32_t)(uint32_t)(0x78 < (int32_t)var_18h)) {
                    uVar1 = 0;
                } else {
                    uVar1 = 3;
                }
                var_24h = (uint16_t)
                          ((uint32_t)(0xfff8 % (uint64_t)(int64_t)(int32_t)(var_38h & 0xffff)) ==
                          (uint32_t)(0x971cf70 < uVar1));
                if ((char)((1 < var_24h) + (var_19h == 0x8f)) == '\0') {
                    var_26h = var_26h + 1;
                }
                var_20h = 0;
                var_10h = 1;
                var_2ch = 0xc;
            }
        }
        var_28h = var_28h + 1;
    }
    sym.set_var(1, var_10h, -1, var_14h, -6, var_18h, (uint32_t)var_19h, var_20h, 0x8f, (uint32_t)var_24h, 
                (uint32_t)var_26h, 0, (uint32_t)var_28h);
    return 0;
}
