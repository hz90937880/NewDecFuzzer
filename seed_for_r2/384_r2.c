
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049a07)
// WARNING: Removing unreachable block (ram,0x08049a3c)
// WARNING: Removing unreachable block (ram,0x08049a41)
// WARNING: Removing unreachable block (ram,0x08049a4f)
// WARNING: Removing unreachable block (ram,0x0804997c)
// WARNING: Removing unreachable block (ram,0x08049acb)
// WARNING: Removing unreachable block (ram,0x08049b4f)
// WARNING: Removing unreachable block (ram,0x08049c45)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_58h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_48h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_52h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_58h
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_9dh
// WARNING: [r2ghidra] Detected overlap for variable var_92h
// WARNING: [r2ghidra] Detected overlap for variable var_9eh

undefined4 sym.func_1(void)
{
    int32_t var_c0h;
    int32_t var_b0h;
    uint32_t var_ach;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_9ch;
    uint32_t var_98h;
    int32_t var_90h;
    int32_t var_8ch;
    int32_t var_88h;
    uint32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    uint32_t var_68h;
    uint32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    uint32_t var_54h;
    uint32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    uint32_t var_44h;
    int16_t var_3eh;
    uint16_t var_3ch;
    uint16_t var_3ah;
    int32_t var_38h;
    uint32_t var_34h;
    uint16_t var_2eh;
    int32_t var_2ch;
    char var_25h;
    int32_t var_24h;
    int32_t var_20h;
    char var_19h;
    uint32_t var_18h;
    uint16_t var_12h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0xdae8c9f3;
    var_19h = -0x70;
    var_20h = 0x6fe0855b;
    var_24h = -1;
    var_25h = '\x06';
    var_2eh = 0xc035;
    var_34h = 0xe02f1192;
    var_38h = -0x333a0aab;
    var_3ah = 0xffff;
    var_3ch = 0;
    var_12h = 0;
    var_50h = 0xfffffff6;
    for (var_18h = 0; var_18h != 0xfffffff7; var_18h = var_18h - 9) {
        var_44h = 0;
        while (var_44h == 0x14) {
            for (var_12h = 0; var_12h < 0x2d; var_12h = var_12h + 1) {
                var_3eh = -3;
                while (var_3eh == 0x35) {
                    if (var_12h == 0) {
                        var_19h = '\x01';
                    }
                    var_20h = var_20h ^ 0xffffffff;
                    var_24h = ZEXT14((var_20h & 1U) != 0);
                    var_10h = var_10h & (uint32_t)((int32_t)var_19h <= (int32_t)var_50h) % var_18h;
                    var_25h = (char)var_10h;
                    var_2eh = var_2eh - 1;
                    var_3eh = 0x36;
                }
            }
            var_44h = 0x15;
        }
        for (var_34h = 0xfffffff1; var_34h != 0xf; var_34h = var_34h + 1) {
            for (var_12h = 0; var_12h < 0x20; var_12h = var_12h + 5) {
                var_3ah = 0xf555;
                var_50h = 0;
            }
        }
    }
    for (var_48h = 0; -0x18 < var_48h; var_48h = var_48h + -9) {
        var_3ch = var_3ch + 1;
        var_38h = (var_20h & 0xffU) * (uint32_t)(uint8_t)var_3ch;
    }
    sym.set_var(var_10h, (uint32_t)var_12h, 0xfffffff7, (int32_t)var_19h, var_20h, var_24h, (int32_t)var_25h, 
                -0x3a8b3c04, -5, (uint32_t)var_2eh, var_34h, var_38h, (uint32_t)var_3ah, (uint32_t)var_3ch);
    return 0x8401d562;
}
