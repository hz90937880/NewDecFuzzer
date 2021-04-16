
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x080499af)
// WARNING: Removing unreachable block (ram,0x08049964)
// WARNING: Removing unreachable block (ram,0x08049c9f)
// WARNING: Removing unreachable block (ram,0x08049e18)
// WARNING: Removing unreachable block (ram,0x08049cf1)
// WARNING: Removing unreachable block (ram,0x0804a382)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_54h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_6ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_17h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_31h
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_7ch
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_9dh
// WARNING: [r2ghidra] Detected overlap for variable var_a0h
// WARNING: [r2ghidra] Detected overlap for variable var_b6h
// WARNING: [r2ghidra] Detected overlap for variable var_beh
// WARNING: [r2ghidra] Detected overlap for variable var_c6h
// WARNING: [r2ghidra] Detected overlap for variable var_d1h
// WARNING: [r2ghidra] Detected overlap for variable var_dah
// WARNING: [r2ghidra] Detected overlap for variable var_dch
// WARNING: [r2ghidra] Detected overlap for variable var_e9h
// WARNING: [r2ghidra] Detected overlap for variable var_f1h
// WARNING: [r2ghidra] Detected overlap for variable var_6dh
// WARNING: [r2ghidra] Detected overlap for variable var_78h
// WARNING: [r2ghidra] Detected overlap for variable var_105h
// WARNING: [r2ghidra] Detected overlap for variable var_112h
// WARNING: [r2ghidra] Detected overlap for variable var_113h

uint8_t sym.func_1(void)
{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int32_t iVar4;
    uint8_t uVar5;
    bool bVar6;
    uint32_t var_14ch;
    uint32_t var_148h;
    uint32_t var_144h;
    uint32_t var_140h;
    int32_t var_13ch;
    uint32_t var_138h;
    int32_t var_134h;
    int32_t var_130h;
    int32_t var_120h;
    uint32_t var_11ch;
    int32_t var_118h;
    uint32_t var_110h;
    int32_t var_10ch;
    uint32_t var_104h;
    int32_t var_100h;
    uint32_t var_fch;
    uint32_t var_f8h;
    int32_t var_f0h;
    int32_t var_e8h;
    int32_t var_e4h;
    int32_t var_e0h;
    int32_t var_d8h;
    int32_t var_d0h;
    int32_t var_cch;
    int32_t var_c4h;
    uint32_t var_bch;
    int32_t var_b4h;
    uint32_t var_b0h;
    uint32_t var_ach;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_9ch;
    uint32_t var_98h;
    uint32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    uint32_t var_84h;
    int32_t var_80h;
    int32_t var_79h;
    uint32_t var_74h;
    uint8_t var_6dh;
    int32_t var_6ch;
    int32_t var_68h;
    uint32_t var_64h;
    uint32_t var_60h;
    uint32_t var_5ch;
    uint32_t var_58h;
    int32_t var_54h;
    uint32_t var_50h;
    uint8_t var_49h;
    uint32_t var_48h;
    uint16_t var_42h;
    uint32_t var_40h;
    int32_t var_3ch;
    uint32_t var_38h;
    uint8_t var_32h;
    uint8_t var_31h;
    uint32_t var_30h;
    uint16_t var_2ah;
    uint32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    char var_19h;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_18h._0_1_ = 5;
    var_20h = 0xd9403132;
    var_24h = 3;
    var_28h = 0xaeacb2d5;
    var_10h = 0x2b6367af;
    var_14h = 0xffffffff;
    var_18h._2_1_ = -5;
    var_18h._1_1_ = 'J';
    var_2ah = 1;
    var_30h = 0xbc9e7330;
    var_31h = 0xfc;
    var_32h = 6;
    var_3ch = -1;
    var_40h = 0xa42c73b;
    var_42h = 0;
    var_48h = 0;
    var_49h = 0x60;
    var_50h = 1;
    var_5ch = 0xfffffffe;
    cVar1 = var_18h._1_1_;
code_r0x0804994e:
    var_18h._1_1_ = cVar1;
    var_19h = '\x01';
    bVar6 = 1 >> ((uint8_t)var_18h & 0x1f) != 0;
    if (bVar6) {
        var_20h = (uint32_t)(uint8_t)((uint16_t)var_50h / 1);
        var_24h = var_24h & 0xfffffff5;
    }
    var_5ch = var_5ch ^ bVar6;
    var_28h = var_28h | (int32_t)(int16_t)var_5ch % 10;
    uVar3 = (uint32_t)(((uint8_t)var_18h - var_28h & 1) != 0);
    if (uVar3 < 2) {
        bVar6 = '\0' < var_18h._2_1_;
        uVar2 = 0;
        if ((uint32_t)((int32_t)bVar6 % -0x5d < 5) << bVar6 == 0x2d) {
            uVar5 = 3;
        } else {
            uVar5 = 2;
        }
        var_10h = (var_3ch & 0xffU) - 1;
        if (((bVar6 < uVar5) <= var_40h == true) <
            ((int32_t)(uVar3 ^ ((uint32_t)(var_40h <= (uint32_t)(int32_t)(int16_t)(uint16_t)var_50h) |
                               (int32_t)var_18h._1_1_)) < (int32_t)var_10h)) {
            var_31h = 0x26;
            var_10h = var_10h | 1;
            var_42h = 0xffff;
            var_48h = 0xffffffff;
            var_49h = 0x61;
        } else {
            var_10h = 1;
        }
        sym.set_var((uint32_t)(uint8_t)var_18h, 1, var_20h, var_24h, var_28h, var_10h, var_14h, -0x5d, 
                    (int32_t)var_18h._2_1_, (int32_t)var_18h._1_1_, (int32_t)(int16_t)var_2ah, var_30h, 
                    (uint32_t)var_31h, 0x7f, 1, (uint32_t)var_32h, -0x766, 0x1f61fbc8, var_10h, 1, var_3ch, var_40h, 0, 
                    -1, (uint32_t)var_42h, 0x69775cc2, var_48h, (uint32_t)var_49h);
    } else {
        for (var_58h = 0; var_58h != 10; var_58h = var_58h + 2) {
            var_60h = 0;
            while (var_60h == 0xc) {
                var_19h = '8';
                var_10h = 0xe00;
                var_14h = 0;
                var_60h = 0xd;
            }
            for (var_54h = 0; 0x13 < var_54h; var_54h = var_54h + 1) {
                if (var_20h != 0) {
                    var_18h._0_1_ = (uint8_t)var_18h - 1;
                    var_18h._2_1_ = '\0';
                    var_18h._1_1_ = '\0';
                    var_10h = 0xa85175ef;
                    var_2ah = (uint16_t)var_14h & 1;
                    cVar1 = '\0';
                    if ((var_14h & 1) != 0) goto code_r0x0804994e;
                    var_30h = var_30h | 0xfff7;
                    var_31h = 0;
                    var_19h = (char)var_20h;
                    if (var_28h == 0) {
                        var_32h = var_32h + 1;
                        var_10h = 1;
                        var_31h = 0xff;
                        var_5ch = 1;
                    }
                    break;
                }
                if (((uint32_t)
                     ((~(uint32_t)((int32_t)var_10h < (int32_t)(var_18h._1_1_ != '\0' | var_50h)) & 0xffff) -
                      (var_14h & 0xffff) != 8) << ((uint8_t)var_10h & 0x1f) == 0) && (var_30h == 0)) {
                    var_10h = 0;
                } else {
                    var_10h = 1;
                }
                var_5ch = 0;
                for (var_6ch = 0; var_6ch < 0; var_6ch = var_6ch + -1) {
                    if ((var_14h == 1) && (var_18h._2_1_ == '\0')) {
                        iVar4 = 0;
                    } else {
                        iVar4 = 1;
                    }
                    var_50h = var_50h & iVar4 >> (var_31h & 0x1f);
                }
                var_3ch = var_3ch + -1;
                for (var_6dh = 0x1d; var_6dh < 0x24; var_6dh = var_6dh + 3) {
                    var_10h = 0;
                    var_40h = var_40h + 1;
                }
            }
        }
        sym.set_var((uint32_t)(uint8_t)var_18h, (int32_t)var_19h, var_20h, var_24h, var_28h, var_10h, var_14h, -0x5d, 
                    (int32_t)var_18h._2_1_, (int32_t)var_18h._1_1_, (int32_t)(int16_t)var_2ah, var_30h, 
                    (uint32_t)var_31h, 0x7f, 1, (uint32_t)var_32h, -0x766, 0x1f61fbc8, 0x558e2862, 1, var_3ch, var_40h, 
                    0, -1, 0, 0x69775cc2, 0, 0x60);
        uVar2 = var_31h;
    }
    return uVar2;
}
