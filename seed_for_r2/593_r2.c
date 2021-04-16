
// WARNING: Variable defined which should be unmapped: var_8h
// WARNING: Removing unreachable block (ram,0x08049954)
// WARNING: Removing unreachable block (ram,0x08049c27)
// WARNING: Removing unreachable block (ram,0x08049c49)
// WARNING: Removing unreachable block (ram,0x08049874)
// WARNING: Removing unreachable block (ram,0x0804987b)
// WARNING: Removing unreachable block (ram,0x08049ad2)
// WARNING: Removing unreachable block (ram,0x08049bd3)
// WARNING: Removing unreachable block (ram,0x08049a44)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_7ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_8eh

undefined4 sym.func_1(void)
{
    int16_t iVar1;
    uint32_t arg_14h;
    uint32_t var_8ch;
    int32_t var_88h;
    int32_t var_84h;
    uint32_t var_80h;
    undefined4 var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    uint32_t var_68h;
    uint32_t var_64h;
    uint32_t var_60h;
    uint32_t var_5ch;
    uint32_t var_50h;
    int32_t var_48h;
    uint32_t var_41h;
    uint32_t var_38h;
    uint32_t var_34h;
    uint32_t var_30h;
    int32_t var_2ch;
    uint32_t var_24h;
    uint32_t var_20h;
    uint16_t var_1ah;
    int32_t var_18h;
    uint16_t var_12h;
    uint32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0xfffffffe;
    var_12h = 0x4ed3;
    var_18h = -0x1faa5db5;
    var_1ah = 0xfecc;
    var_20h = 3;
    var_24h = 0;
    var_2ch = 0x45187fa;
    var_30h = 7;
    var_ch = 0;
    do {
        if (var_ch == 0xfffffff8) {
            sym.set_var(0xfffffff8, var_10h, (uint32_t)var_12h, var_18h, (int32_t)(int16_t)var_1ah, 0xfc, var_20h, 
                        var_24h, 0, 0, 1, var_2ch);
            return 0;
        }
        var_10h = var_10h ^ 0xd21dfe4b;
        var_12h = var_12h - 1;
        if (((0x66525c7e < ((uint16_t)var_30h <= var_12h) | var_ch) == 0) || (var_12h == 0)) {
            iVar1 = 0;
        } else {
            iVar1 = 1;
        }
        if (var_12h == 0) {
            var_1ah = (uint16_t)
                      ((uint8_t)((~((int32_t)iVar1 >> ((uint8_t)var_ch & 0x1f)) >> 0x1f != 0x2de201b5) + 0x45U) < 0xfb);
            var_18h = ZEXT14((char)(uint8_t)var_ch != -0x1a91ce3d);
            var_24h = var_24h & 0xd21dfe4b;
            if (var_24h == 0) {
                var_30h = 0xffffffe6;
                for (var_38h = 0; var_38h < 0x2e; var_38h = var_38h + 1) {
                    var_18h = 2;
                    var_24h = 1;
                    if ((uint32_t)(var_ch != 0) << 0x18 != -8) break;
                    var_24h = 1;
                }
            } else {
                for (var_1ah = 7; (int16_t)var_1ah < -7; var_1ah = var_1ah - 6) {
                    var_18h = -0x736369ae;
                }
                if (0xd < (uint32_t)var_18h) {
                    arg_14h = (uint32_t)(0x8a347b78 < (0xa131 < -(int32_t)(int16_t)var_10h ^ 0xa001a3c8));
                    sym.set_var(var_ch, var_10h, 0, arg_14h, (int32_t)(int16_t)var_1ah, 0xfc, 1, arg_14h, 
                                (int32_t)(char)(1 / 0), 0, 1, var_2ch);
                    return 0xfc;
                }
                var_24h = 0xff03;
                var_12h = 0xff02;
                var_18h = 0x23;
            }
            var_20h = 1;
            var_2ch = 0x16;
        } else {
            var_12h = var_12h | 1;
            var_18h = 4 % (uint32_t)var_12h;
        }
        var_ch = var_ch - 4;
    } while( true );
}
