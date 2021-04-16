
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x080498a7)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_34h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_1bh
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_76h
// WARNING: [r2ghidra] Detected overlap for variable var_90h
// WARNING: [r2ghidra] Detected overlap for variable var_95h
// WARNING: [r2ghidra] Detected overlap for variable var_96h
// WARNING: [r2ghidra] Detected overlap for variable var_98h
// WARNING: [r2ghidra] Detected overlap for variable var_9dh
// WARNING: [r2ghidra] Detected overlap for variable var_78h
// WARNING: [r2ghidra] Detected overlap for variable var_7dh
// WARNING: [r2ghidra] Detected overlap for variable var_8ch
// WARNING: [r2ghidra] Detected overlap for variable var_84h
// WARNING: [r2ghidra] Detected overlap for variable var_a9h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

uint32_t sym.func_1(void)
{
    bool bVar1;
    char cVar2;
    int16_t iVar3;
    uint32_t uVar4;
    int32_t var_c0h;
    int32_t var_b8h;
    uint32_t var_b4h;
    int32_t var_b0h;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_9ch;
    uint32_t var_94h;
    int32_t var_8dh;
    int32_t var_86h;
    int32_t var_7ch;
    uint32_t var_74h;
    int32_t var_70h;
    uint32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    uint32_t var_58h;
    int32_t var_54h;
    uint32_t var_50h;
    int32_t var_48h;
    uint8_t var_41h;
    uint32_t var_40h;
    uint32_t var_3ch;
    uint8_t var_36h;
    uint8_t var_35h;
    uint32_t var_34h;
    uint32_t var_30h;
    int32_t var_2ch;
    uint32_t var_28h;
    int16_t var_24h;
    uint16_t var_22h;
    int32_t var_20h;
    uint8_t var_1bh;
    uint16_t var_1ah;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0x1e559696;
    var_18h = 0xffffffff;
    var_1ah = 0xffff;
    var_1bh = 0xd0;
    var_20h = -1;
    var_22h = 4;
    var_24h = -2;
    var_28h = 4;
    var_2ch = -1;
    var_30h = 0xfffffff7;
    var_34h = 0;
    var_35h = 0x6b;
    var_36h = 0x80;
    var_3ch = 0x307c177f;
    var_41h = 0xb6;
    var_48h = -3;
    var_14h = 0xfffffffa;
    do {
        if ((int32_t)var_14h < -0xf) {
            sym.set_var(0x60477862, var_10h, var_14h, var_18h, (uint32_t)var_1ah, (int32_t)(char)var_1bh, var_20h, 
                        (uint32_t)var_22h, (int32_t)var_24h, var_28h, var_2ch, var_30h, 0x1ab8, var_18h, -3, 0x2c61b7ce
                        , (uint32_t)var_35h, (uint32_t)var_36h, var_3ch);
            return var_14h;
        }
        var_50h = 0xffffffff;
        for (var_18h = 0; -4 < (int32_t)var_18h; var_18h = var_18h + -1) {
            var_1ah = 8;
            var_50h = 0;
            var_10h = 8;
        }
        for (var_18h = 0; var_18h != 0xffffffee; var_18h = var_18h - 3) {
            var_1bh = var_1bh ^ (uint8_t)var_18h;
            if ((int32_t)(char)var_1bh << ((uint8_t)var_50h & 0x1f) < (int32_t)(uint32_t)var_1ah) {
                var_50h = 0;
            } else {
                var_50h = 2;
            }
            var_20h = var_20h & var_50h + 0xff;
            cVar2 = (char)((var_20h * -0x645f6a57 & 0xffU) << 3);
            var_22h = 0xffff;
            var_24h = (int16_t)cVar2;
            if (var_18h ==
                (int32_t)(int16_t)((uint16_t)var_41h *
                                  (int16_t)((uint64_t)((int32_t)cVar2 >> (var_24h <= (char)var_1bh) == -0x5c5df848) /
                                           (uint64_t)(int64_t)(int32_t)(var_20h & 0xff))) % (int32_t)(int16_t)var_18h) {
                for (var_22h = 0xffe4; var_22h != 0x2a; var_22h = var_22h + 2) {
                    if (var_50h == 0) {
                        sym.set_var(0x60477862, var_10h, var_14h, var_18h, (uint32_t)(var_1ah & 0x95a9), 
                                    (int32_t)(char)var_1bh, var_20h, (uint32_t)var_22h, (int32_t)var_24h, 
                                    (int32_t)(char)var_1bh + (uint32_t)var_22h, var_2ch, var_30h, 0x1ab8, var_34h, -3, 
                                    0x2c61b7ce, (uint32_t)var_35h, (uint32_t)var_36h, var_3ch);
                        return 0xffffffff;
                    }
                    var_35h = var_35h - 1;
                    var_10h = (uint32_t)((var_1ah | 0xfffe) != 0x5c);
                    if (var_10h != 0) break;
                    var_28h = var_28h ^ 0x92dbf0b2;
                }
                var_24h = 0x6065;
                iVar3 = -(int16_t)(char)var_22h;
                if ((iVar3 == (int16_t)(((int16_t)(iVar3 * 0x10000b777 >> 0x1d) - (iVar3 >> 0xf)) * 0x2ca7)) ||
                   (var_28h == 0)) {
                    iVar3 = 0;
                } else {
                    iVar3 = 1;
                }
                if ((iVar3 == -0x4982) || (var_1bh == 0)) {
                    bVar1 = false;
                } else {
                    bVar1 = true;
                }
                if (bVar1) {
                    uVar4 = 0x10d2121a;
                } else {
                    uVar4 = 0x10d2121b;
                }
                var_34h = var_34h | uVar4;
            } else {
                var_50h = 0;
                for (var_40h = 0; 0x15 < var_40h; var_40h = var_40h + 8) {
                    var_50h = (uint32_t)var_20h / (var_48h & 0xffffU);
                    var_2ch = -(int32_t)(char)((uint8_t)var_1ah | 1);
                    var_30h = var_30h ^ (int32_t)(int16_t)var_10h + (int32_t)(int16_t)var_2ch == -10;
                    var_48h = 6;
                }
            }
            var_10h = SEXT24((int16_t)((uint16_t)var_41h << 6) >> 4);
        }
        var_50h = 0;
        while (var_50h == 0xe) {
            var_34h = var_34h | var_20h;
            for (var_35h = 5; 0x25 < var_35h; var_35h = var_35h + 1) {
                var_3ch = (uint32_t)var_36h;
                var_34h = 0x40;
                var_10h = 0;
                var_36h = var_36h - 1;
            }
            var_22h = var_22h - 1;
            if ((var_10h & 0xffff) + (uint32_t)var_22h == 0) {
                sym.set_var(0x60477862, var_10h, var_14h, var_18h, (uint32_t)var_1ah, (int32_t)(char)var_1bh, var_20h, 
                            (uint32_t)var_22h, (int32_t)var_24h, var_28h, var_2ch, var_30h, 0x1ab8, var_34h, 0, 
                            0x2c61b7ce, (uint32_t)var_35h, (uint32_t)var_36h, var_3ch);
                return var_3ch;
            }
            for (var_41h = 0; 0x27 < var_41h; var_41h = var_41h + 1) {
            }
            var_18h = (uint32_t)(0x5e7e < var_3ch);
            var_50h = 0x17;
        }
        var_14h = var_14h - 3;
    } while( true );
}
