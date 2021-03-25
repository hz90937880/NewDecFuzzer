
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049c11)
// WARNING: Removing unreachable block (ram,0x08049c2f)
// WARNING: Removing unreachable block (ram,0x08049b96)
// WARNING: Removing unreachable block (ram,0x08049c39)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_5ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_54h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_1bh
// WARNING: [r2ghidra] Detected overlap for variable var_31h
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Detected overlap for variable var_6fh
// WARNING: [r2ghidra] Detected overlap for variable var_75h
// WARNING: [r2ghidra] Detected overlap for variable var_95h
// WARNING: [r2ghidra] Detected overlap for variable var_a2h
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_b1h
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Detected overlap for variable var_bdh
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

uint32_t sym.func_1(void)
{
    char cVar1;
    uint32_t uVar2;
    int32_t var_d0h;
    int32_t var_bch;
    int32_t var_b8h;
    int32_t var_b0h;
    int32_t var_ach;
    int32_t var_a8h;
    int32_t var_a0h;
    int32_t var_9ch;
    int32_t var_94h;
    uint32_t var_90h;
    int32_t var_8ch;
    uint32_t var_88h;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_74h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_60h;
    undefined4 var_5ch;
    int32_t var_58h;
    int16_t var_54h;
    uint8_t var_51h;
    int32_t var_50h;
    int32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    uint8_t var_31h;
    int32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    char var_1bh;
    uint8_t var_1ah;
    char var_19h;
    uint16_t var_18h;
    char var_15h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0x90da1152;
    var_18h = 1;
    var_19h = -10;
    var_1ah = 0;
    var_1bh = -0x37;
    var_20h = 0xe206f6ec;
    var_24h = -1;
    var_28h = 0xbd03168f;
    var_2ch = 0xfffffffa;
    var_30h = -10;
    var_31h = 0x3b;
    var_38h = 1;
    var_3ch = -0x60236122;
    var_40h = 0xb6355d27;
    var_44h = 1;
    var_48h = 0xffffffff;
    var_14h = 0xfffffff4;
    do {
        if (0x10 < (int32_t)var_14h) {
            if ((int32_t)((int32_t)var_1bh & ~var_48h) < 0xffbe) {
                cVar1 = '\0';
            } else {
                cVar1 = '\x02';
            }
            sym.set_var(0, var_10h, var_14h ^ 0x698b, (int32_t)cVar1, (int32_t)(int16_t)var_18h, (int32_t)var_19h, 
                        (uint32_t)var_1ah, (int32_t)var_1bh, var_20h, var_24h, var_28h, var_2ch, var_30h, 
                        (uint32_t)var_31h, var_38h, -1, var_3ch, -0x745ce89d, var_40h, 0x2f9622ff);
            return var_48h;
        }
        var_50h = -5;
        var_15h = '\0';
        var_18h = var_18h | 0x331c;
        if (var_18h == 0) {
            var_18h = 0;
            while (var_18h == 0xf) {
                var_2ch = 0xfffffff2;
                while (((int32_t)var_2ch < -0xe && (var_2ch == 0))) {
                    for (var_15h = '\0'; -0x17 < var_15h; var_15h = var_15h + -1) {
                        var_10h = 1;
                    }
                    var_2ch = 1;
                }
                if (var_10h != 0) break;
                var_48h = 0;
                var_30h = ZEXT14(0xbb395f0e < var_20h);
                var_18h = 0x10;
            }
            if ((var_2ch < 0x100) || (var_18h != 0)) {
                uVar2 = 1;
            } else {
                uVar2 = 0;
            }
            if (var_48h != (int32_t)((int32_t)var_15h | uVar2) < (int32_t)(uint32_t)(var_30h == var_28h)) {
                var_31h = var_31h - 1;
                var_30h = (var_24h & 0xffffU) * 0x200 + -0x2df4801;
            }
            var_28h = var_24h;
            if (var_24h == 0) {
                var_40h = var_40h - 1;
            }
            var_38h = var_38h & (uint32_t)
                                ((int32_t)var_1bh <=
                                (int32_t)(uint32_t)
                                         ((uint16_t)((uint16_t)(1 < (int32_t)var_44h) - (int16_t)var_3ch) >> 7));
        } else {
            for (var_4ch = 0; -10 < var_4ch; var_4ch = var_4ch + -1) {
                for (var_19h = '\0'; var_19h < '\x14'; var_19h = var_19h + '\x06') {
                    var_1ah = var_1ah + 1;
                    var_1bh = -0x18 - var_19h;
                    for (var_54h = 0; var_54h < 0x1b; var_54h = var_54h + 1) {
                        var_20h = var_20h + 1;
                    }
                    if (var_48h != 0) break;
                    for (var_51h = 0; 0x11 < var_51h; var_51h = var_51h + 3) {
                        var_24h = 1;
                        var_28h = var_28h ^ 1;
                        var_44h = 0xfffffffd;
                    }
                }
            }
            var_48h = 0;
            var_44h = var_44h & var_2ch;
            var_50h = var_1ah & 0xfffffffb;
        }
        var_10h = var_38h;
        var_3ch = 0;
        var_28h = var_28h ^ var_50h;
        var_14h = var_14h + 1;
    } while( true );
}
