
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_1fh
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_2fh
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_67h
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_7ch
// WARNING: [r2ghidra] Detected overlap for variable var_7eh

int32_t sym.func_1(void)
{
    uint32_t uVar1;
    uint32_t var_ach;
    int32_t var_a8h;
    int32_t var_a4h;
    uint32_t var_a0h;
    uint32_t var_90h;
    int32_t var_8ch;
    uint32_t var_88h;
    int32_t var_84h;
    int32_t var_78h;
    uint32_t var_74h;
    uint32_t var_70h;
    uint32_t var_6ch;
    int32_t var_64h;
    int32_t var_60h;
    uint32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_48h;
    uint8_t var_41h;
    uint32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    uint8_t var_30h;
    char var_2fh;
    uint8_t var_2eh;
    int16_t var_2ch;
    bool var_29h;
    int32_t var_28h;
    uint32_t var_24h;
    uint8_t var_20h;
    uint8_t var_1fh;
    uint16_t var_1eh;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint16_t var_12h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_12h = 0xfffc;
    var_18h = 0xffffffff;
    var_1ch = 0xec17e5c2;
    var_1eh = 0xfff7;
    var_1fh = 0x9b;
    var_20h = 0xb8;
    var_24h = 1;
    var_28h = 1;
    var_29h = false;
    var_2ch = -0x1e28;
    var_2eh = 0x68;
    var_2fh = -1;
    var_30h = 0x49;
    var_34h = 0xffffffff;
    var_38h = -0x3b2affb3;
    var_3ch = 0x1fb0335;
    var_10h = 0x1b;
    do {
        if (var_10h == 2) {
            sym.set_var(2, (uint32_t)var_12h, var_18h, var_1ch, (uint32_t)var_1eh, (uint32_t)var_1fh, (uint32_t)var_20h
                        , var_24h, var_28h, (int32_t)var_29h, (int32_t)var_2ch, -0x2d, (uint32_t)var_2eh, 
                        (int32_t)var_2fh, (uint32_t)var_30h, var_34h, var_38h);
            return var_3ch;
        }
        var_18h = var_18h + 1;
        for (var_12h = 0x10; 0x2b < var_12h; var_12h = var_12h + 1) {
            var_40h = 0x653649d9;
            var_41h = 0x9e;
            for (var_1ch = 8; var_1ch < 0x26; var_1ch = var_1ch + 9) {
                var_1eh = var_1eh + 1;
                var_1fh = var_18h < (uint32_t)(int32_t)(int16_t)var_10h;
                var_20h = (char)(1 >> ((uint8_t)var_18h & 0x1f)) * (char)var_1eh;
                if (var_20h == 8) {
                    var_40h = 0;
                    if ((0xfff7 << var_1fh == 0) && (var_1eh == 0)) {
                        uVar1 = 0;
                    } else {
                        uVar1 = 1;
                    }
                    var_24h = var_24h ^ uVar1;
                    var_20h = 9;
                    var_29h = var_1ch < 0x6748;
                    var_2ch = 0;
                    var_2eh = var_2eh | (int32_t)(1 % (uint64_t)(int64_t)(int32_t)(uint32_t)var_1eh) == (int32_t)var_29h
                    ;
                    var_3ch = 0;
                    var_2fh = 'U';
                    var_30h = var_30h & 1;
                    var_28h = ZEXT14(var_30h);
                    break;
                }
                for (var_2eh = 0x15; var_2eh < 7; var_2eh = var_2eh - 4) {
                    var_29h = false;
                    var_40h = var_40h ^ (uint32_t)((var_1ch == ((var_2eh & var_2fh < '\x01') == 0)) < 0x21f1eb32) /
                                        (uint32_t)(int32_t)var_2fh;
                    var_3ch = var_3ch ^ var_40h;
                    var_1fh = var_1fh + 1;
                    var_2ch = -0x315c;
                }
                var_41h = var_41h | var_30h;
                var_28h = ZEXT14(var_41h);
                for (var_48h = 0x11; var_48h != 0xffffffff; var_48h = var_48h - 6) {
                    var_34h = 0;
                }
                var_38h = var_38h + 1;
            }
            if (var_40h != 0) break;
        }
        var_10h = var_10h - 1;
    } while( true );
}
