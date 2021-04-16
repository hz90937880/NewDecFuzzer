
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x080499fa)
// WARNING: Removing unreachable block (ram,0x08049a1c)
// WARNING: Removing unreachable block (ram,0x08049a15)
// WARNING: Removing unreachable block (ram,0x08049a21)
// WARNING: Removing unreachable block (ram,0x08049c06)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_68h
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_81h
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_83h
// WARNING: [r2ghidra] Detected overlap for variable var_64h
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_abh
// WARNING: [r2ghidra] Detected overlap for variable var_bdh
// WARNING: [r2ghidra] Detected overlap for variable var_c0h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_a8h
// WARNING: [r2ghidra] Detected overlap for variable var_8eh
// WARNING: [r2ghidra] Detected overlap for variable var_8fh
// WARNING: [r2ghidra] Detected overlap for variable var_92h
// WARNING: [r2ghidra] Detected overlap for variable var_93h

uint32_t sym.func_1(void)
{
    uint32_t uVar1;
    int32_t iVar2;
    uint32_t var_d4h;
    uint32_t var_d0h;
    uint32_t var_c4h;
    int32_t var_bch;
    uint32_t var_b8h;
    int32_t var_b4h;
    uint32_t var_b0h;
    int32_t var_aah;
    int32_t var_a4h;
    uint32_t var_a0h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_8ch;
    int32_t var_88h;
    int32_t var_80h;
    uint32_t var_78h;
    uint32_t var_70h;
    int32_t var_6ch;
    uint32_t var_67h;
    uint32_t var_60h;
    int32_t var_5ch;
    uint32_t var_58h;
    uint32_t var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    uint16_t var_46h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    uint8_t var_35h;
    int32_t var_34h;
    uint32_t var_30h;
    uint32_t var_2ch;
    uint16_t var_26h;
    uint32_t var_24h;
    uint16_t var_20h;
    uint16_t var_1eh;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_eh._0_2_ = 0xee1c;
    var_14h = 0xffffffff;
    var_18h = 0x69b41dbc;
    var_1ch = 0x9a1d127a;
    var_1eh = 0xd8e1;
    var_20h = 0xfffb;
    var_26h = 1;
    var_2ch = 0x4e94fa9f;
    var_30h = 0xfffffffe;
    var_34h = 0x6a208ca9;
    var_35h = 0;
    var_40h = 0x6f3bd686;
    var_44h = -8;
    var_46h = 1;
    var_4ch = 0x25b0e446;
    var_50h = 0xd43ddca2;
    var_54h = 0;
    var_58h = 0x186b95fe;
code_r0x0804980d:
    var_54h = var_54h & -var_50h & 0xffff;
    if (((var_4ch - 1 & 0xffff) == (uint32_t)((int32_t)var_50h <= (char)(uint16_t)var_eh + 0x3b)) && (var_54h == 0)) {
        iVar2 = 0;
    } else {
        iVar2 = 1;
    }
    var_14h = var_14h | var_50h + iVar2;
    var_eh._0_2_ = 0;
    do {
        if ((uint16_t)var_eh != 9) {
            sym.set_var((uint32_t)(uint16_t)var_eh, var_14h, var_18h, var_1ch, (int32_t)(int16_t)var_1eh, 
                        (uint32_t)var_20h, 1, (int32_t)(int16_t)var_26h, var_2ch, -1, var_30h, 1, var_34h, 
                        (uint32_t)var_35h, 5, var_40h, -1, var_44h, (int32_t)(int16_t)var_46h);
            return var_58h;
        }
        var_60h = 0xdd754719;
        var_67h._1_2_ = 0;
        for (var_50h = 0xfffffff8; 8 < (int32_t)var_50h; var_50h = var_50h + 7) {
            uVar1 = var_18h ^ var_50h;
            var_1ch = var_1ch + 1;
            var_1eh = (uint16_t)var_1ch;
            for (var_18h = 0; var_18h < 0xc; var_18h = var_18h + 1) {
                if (var_1eh != 0) {
                    var_1ch = 0x6dc6;
                }
                if (((uVar1 | 6) == 1) / 1 == 0) {
                    sym.set_var(9, var_14h, var_18h, var_1ch, (int32_t)(int16_t)var_1eh, (uint32_t)var_20h, 1, 
                                (int32_t)(int16_t)var_26h, var_2ch, -1, var_30h, 1, var_34h, (uint32_t)var_35h, 5, 
                                var_40h, -1, var_44h, (int32_t)(int16_t)var_46h);
                    return var_54h;
                }
                var_20h = var_20h - 1;
                var_60h = var_60h | (int32_t)(int16_t)var_50h *
                                    (uint32_t)(var_18h <= ((int32_t)(int16_t)var_1eh & 0xea8fU));
                var_26h = var_26h & var_1eh;
            }
        }
        if (var_2ch == 0) {
            var_1eh = 0x76;
            var_2ch = (uint32_t)(0x75 < (var_58h == 1));
        } else {
            var_30h = 0xffff;
            for (var_4ch = 0; var_4ch != 0x10; var_4ch = var_4ch + 1) {
                var_1eh = (uint16_t)var_54h;
                var_50h = SEXT24((int16_t)var_1eh);
                var_58h = 0x43;
                var_60h = 1;
                var_2ch = 0;
                if (var_14h != 0) goto code_r0x0804980d;
                var_34h = var_34h + -1;
            }
            var_2ch = (int32_t)(int16_t)var_60h << 0xf;
        }
        for (var_35h = 0xfb; var_35h < 0x2a; var_35h = var_35h + 7) {
            var_40h = 5;
            var_44h = var_44h + 1;
            var_20h = 0;
            while (var_20h == 0xe) {
                for (var_2ch = 0xffffffec; 0x1b < (int32_t)var_2ch; var_2ch = var_2ch + 4) {
                    var_67h._1_2_ = var_67h._1_2_ - 1;
                }
                var_2ch = var_30h;
                var_50h = var_50h & var_67h._1_2_;
                var_54h = (var_50h ^ var_26h != 0) - var_34h;
                var_46h = (uint16_t)var_50h | 1;
                var_20h = 0xf;
            }
        }
        for (var_35h = 0; var_35h != 0x38; var_35h = var_35h + 1) {
        }
        var_eh._0_2_ = 0xd;
    } while( true );
}
