
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049b46)
// WARNING: Removing unreachable block (ram,0x08049b4c)
// WARNING: Removing unreachable block (ram,0x08049b5c)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_28h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_50h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_60h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_64h
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_65h
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_68h
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_89h
// WARNING: [r2ghidra] Detected overlap for variable var_5bh
// WARNING: [r2ghidra] Detected overlap for variable var_60h
// WARNING: [r2ghidra] Detected overlap for variable var_a9h
// WARNING: [r2ghidra] Detected overlap for variable var_b4h
// WARNING: [r2ghidra] Detected overlap for variable var_75h

uint32_t sym.func_1(void)
{
    int32_t iVar1;
    uint32_t uVar2;
    int32_t var_cch;
    uint32_t var_c8h;
    int32_t var_c4h;
    int32_t var_c0h;
    int32_t var_b6h;
    uint32_t var_b0h;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_9ch;
    uint32_t var_98h;
    int32_t var_94h;
    uint32_t var_90h;
    uint32_t var_88h;
    uint32_t var_84h;
    int32_t var_80h;
    uint32_t var_7ch;
    uint32_t var_74h;
    uint32_t var_70h;
    uint32_t var_62h;
    uint8_t var_5bh;
    uint16_t var_5ah;
    uint32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_48h;
    uint8_t var_41h;
    uint16_t var_40h;
    uint16_t var_3eh;
    int32_t var_3ch;
    uint8_t var_35h;
    uint32_t var_34h;
    uint32_t var_2eh;
    uint32_t var_28h;
    uint8_t var_21h;
    int32_t var_20h;
    uint32_t var_1ch;
    uint8_t var_15h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_15h = 0xec;
    var_1ch = 0xfffffffa;
    var_20h = 4;
    var_21h = 8;
    var_2eh._0_2_ = 0xfff8;
    var_34h = 0x66bd5d51;
    var_35h = 0x57;
    var_28h = 1;
    stack0xffffffd0 = 0xfffffffd;
    var_3ch = 1;
    var_3eh = 0xa90b;
    var_40h = 3;
    var_41h = 0xc6;
    var_48h = 0xb082b000;
    var_4ch = 0xa1329794;
    var_10h = 0xfffffffc;
    while (var_10h == 0xfffffff6) {
        var_10h = 0xfffffff3;
    }
    do {
        var_14h = 0;
        while ((iVar1 = var_20h, var_14h == 6 && (var_10h == 0))) {
            var_15h = 0xfd;
            iVar1 = var_20h + 1;
            var_21h = (uint8_t)var_20h;
            var_1ch = var_1ch ^ 0xfffffffd;
            var_2eh._0_2_ = (uint16_t)var_2eh | (var_20h & 0xffU) == 0xfffe4736;
            var_48h = (uint32_t)((uint32_t)var_41h != (char)((((uint16_t)var_2eh <= var_1ch) < 6U) + '\x06') * -0x71);
            var_10h = 1;
            if (var_1ch != 0) break;
            var_34h = 0xffffffff;
            var_4ch = (uint32_t)(var_41h != 1);
            var_15h = (uint8_t)(((uint32_t)((uint16_t)var_2eh < var_4ch) - (int32_t)(char)iVar1) / (var_20h & 0xffU));
            if ((uint16_t)var_2eh != 0) break;
            var_35h = var_35h - 1;
            var_14h = 7;
            var_20h = iVar1;
        }
        var_20h = iVar1;
        var_10h = 0x1c;
        while( true ) {
            if (var_10h == 0xffffffea) {
                sym.set_var(0xffffffea, var_14h, (int32_t)(char)var_15h, var_1ch, var_20h, (uint32_t)var_21h, 
                            (uint32_t)(uint16_t)var_2eh, var_34h, (uint32_t)var_35h, var_28h, -0x3368, stack0xffffffd0, 
                            -0x2780, var_3ch, (uint32_t)var_3eh, 0xf7, (int32_t)(int16_t)var_40h, 1);
                return (int32_t)(char)var_15h;
            }
            var_58h = 0xd1a88bb4;
            var_4ch = var_4ch ^ var_1ch / (uint16_t)var_2eh;
            if ((uint32_t)
                ((((int32_t)(char)var_15h <=
                  (int32_t)(uint32_t)((int32_t)(uint32_t)var_35h <= (int32_t)((int32_t)(char)var_15h ^ 0x6549U))) *
                  var_48h & 0xff) << (var_41h & 0x1f) == 0) == (int32_t)(char)var_15h) {
                sym.set_var(var_10h, var_14h, (int32_t)(char)var_15h, var_1ch, var_20h, (uint32_t)var_21h, 
                            (uint32_t)(uint16_t)var_2eh, var_34h, (uint32_t)var_35h, -4, -0x3368, stack0xffffffd0, 
                            -0x2780, var_3ch, (uint32_t)var_3eh, 0xf7, (int32_t)(int16_t)var_40h, 1);
                return (uint32_t)var_35h;
            }
            var_5ah = 0xfffd;
            var_5bh = 5;
            if (var_4ch != (var_28h != 0)) {
                sym.set_var(var_10h, var_14h, (int32_t)(char)var_15h, var_1ch, var_20h, (uint32_t)var_21h, 
                            (uint32_t)(uint16_t)var_2eh, var_34h, (uint32_t)var_35h, var_28h, -0x3368, stack0xffffffd0, 
                            -0x2780, var_3ch, (uint32_t)var_3eh, 0xf7, (int32_t)(int16_t)var_40h, 1);
                return 2;
            }
            var_3ch = var_3ch + 1;
            if (var_48h != 0) break;
            if (var_4ch == 0) {
                var_5ah = (uint16_t)(var_3ch % (int32_t)(uint32_t)(uint16_t)var_2eh);
                if (((var_3ch % (int32_t)(uint32_t)(uint16_t)var_2eh & 0xffffU | 0xfffffffb) == 0) ||
                   (var_4ch = (uint32_t)
                              ((int32_t)(uint32_t)var_21h <
                              (int32_t)(char)(var_35h +
                                             (((char)((uint32_t)(uint16_t)(int16_t)(char)var_35h * 0x39 >> 8) >> 1) -
                                             ((char)var_35h >> 7)) * -9)), var_4ch == 0)) {
                    var_58h = 0;
                } else {
                    var_58h = 1;
                }
            }
            var_28h = (var_28h | 0x8feb948c) ^ (uint32_t)(var_58h != 0);
            *(uint32_t *)0x8 = (uint32_t)(var_28h < 0x8feb948d) << (var_15h & 0x1f);
            for (var_41h = 0; 0xd < var_41h; var_41h = var_41h + 8) {
                if ((var_58h == 0) && (var_5ah == 0)) {
                    uVar2 = 0;
                } else {
                    uVar2 = 1;
                }
                uVar2 = var_28h | uVar2 < var_1ch;
                var_3eh = var_3eh ^ 1;
                for (var_50h = -3; -0x10 < var_50h; var_50h = var_50h + -4) {
                    var_21h = 0;
                    stack0xffffffd0 = var_1ch;
                    for (stack0xffffff9c = -0x11; (int32_t)stack0xffffff9c < 2; unique0x00000f40 = stack0xffffff9c + 4)
                    {
                        var_3eh = 2;
                        var_40h = var_40h ^ var_5ah ^ '\x01' < (char)var_15h;
                        var_14h = var_14h + 1;
                    }
                }
                for (var_28h = 0xffffffed; -0x12 < (int32_t)var_28h; var_28h = var_28h + 1) {
                    var_5bh = var_5bh & uVar2 == 0xfffffffa;
                    var_15h = var_5bh < var_35h;
                }
            }
            var_10h = var_10h - 5;
        }
    } while( true );
}
