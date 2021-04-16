
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x08049785)
// WARNING: Removing unreachable block (ram,0x080497bb)
// WARNING: Removing unreachable block (ram,0x080497c1)
// WARNING: Removing unreachable block (ram,0x08049c1f)
// WARNING: Removing unreachable block (ram,0x08049a0f)
// WARNING: Removing unreachable block (ram,0x08049a1c)
// WARNING: Removing unreachable block (ram,0x080497c8)
// WARNING: Removing unreachable block (ram,0x080497cd)
// WARNING: Removing unreachable block (ram,0x0804996c)
// WARNING: Removing unreachable block (ram,0x08049c3e)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_53h
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_5bh
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_68h
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_74h
// WARNING: [r2ghidra] Detected overlap for variable var_76h
// WARNING: [r2ghidra] Detected overlap for variable var_a1h
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Detected overlap for variable var_8eh
// WARNING: [r2ghidra] Detected overlap for variable var_90h
// WARNING: [r2ghidra] Detected overlap for variable var_98h

int32_t sym.func_1(void)
{
    int32_t iVar1;
    int32_t var_b4h;
    int32_t var_b0h;
    int32_t var_ach;
    int32_t var_a8h;
    int32_t var_a0h;
    int32_t var_99h;
    int32_t var_94h;
    int32_t var_8ch;
    int32_t var_84h;
    uint32_t var_80h;
    uint32_t var_7ch;
    int32_t var_70h;
    int32_t var_6ch;
    uint32_t var_64h;
    int32_t var_60h;
    int32_t var_58h;
    uint32_t var_50h;
    int32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    uint32_t var_38h;
    uint32_t var_34h;
    uint32_t var_30h;
    int32_t var_2ch;
    uint8_t var_26h;
    char var_25h;
    int32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    int32_t var_14h;
    uint16_t var_eh;
    uint32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 4;
    var_eh = 0x4be4;
    var_14h = 1;
    var_1ch = 0xf2c5fdd6;
    var_20h = 1;
    var_24h = -2;
    var_25h = '\x06';
    var_26h = 0;
    var_30h = 0xffffffff;
    var_40h = 0xfffffffd;
    var_44h = 0xfb28e062;
    var_38h = 0;
    var_18h = 0;
    for (var_ch = 0; var_ch != 8; var_ch = var_ch + 1) {
        for (var_48h = 0x10; 0x33 < var_48h; var_48h = var_48h + 1) {
            for (var_14h = 0; -0xc < var_14h; var_14h = var_14h + -5) {
                var_eh = 0xfff0;
                while ((var_eh == 0xfff8 && (var_ch == 0))) {
                    var_8h = 0xfffffff8;
                    var_38h = (uint32_t)(var_38h == 0xfffffff8) * -2;
                    var_1ch = var_1ch ^ 0xfffffff8;
                    var_eh = 0xfffd;
                }
            }
            for (var_2ch = 0x12; 9 < var_2ch; var_2ch = var_2ch + -3) {
                var_18h = (int32_t)(char)((char)var_eh + -1) % 0;
            }
            var_20h = var_20h | var_38h;
            if ((int32_t)((var_20h & 0xff) + 0x91) < (int32_t)((uint32_t)(-5 / (int64_t)(int32_t)var_48h) | 0xfe)) {
                var_30h = (uint32_t)(1 - var_24h != (int32_t)(int16_t)var_eh);
                if (var_24h + (uint32_t)(var_30h != 0x3965c3e6) == 0x6ab0) {
                    iVar1 = 0xfffa;
                } else {
                    iVar1 = 0xfffd;
                }
                var_20h = var_20h | iVar1 << ((uint8_t)var_44h & 0x1f);
            } else {
                var_44h = 0;
                if (var_14h != 0) break;
                var_eh = (uint16_t)
                         ((int32_t)(uint32_t)
                                   ((uint16_t)((uint16_t)var_8h | 0xd8ca) + 1 ==
                                   (uint32_t)(-2 < (int32_t)(var_8h != 0 ^ 0xfffffffa | 1))) < (int32_t)var_18h);
                var_24h = var_24h & (var_1ch ==
                                    ((int32_t)(int16_t)((int16_t)var_30h + -3) % (int32_t)(int16_t)var_38h & 0xffU) * 6)
                                    - 0x6a3f;
                var_25h = var_48h != 0;
                var_20h = 0;
                for (var_4ch = -0x10; var_4ch < 0x14; var_4ch = var_4ch + 1) {
                    var_26h = var_26h + 1;
                }
            }
        }
        var_40h = var_40h - 1;
        if (var_40h != 0) break;
    }
    sym.set_var(var_8h, -(int32_t)(char)var_44h & 0xffff, (int32_t)(int16_t)var_eh, var_14h, 0, var_1ch, var_20h, 
                var_24h, 1, (int32_t)var_25h, (uint32_t)var_26h);
    return var_24h;
}
