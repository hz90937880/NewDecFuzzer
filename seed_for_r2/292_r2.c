
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x08049a6e)
// WARNING: Removing unreachable block (ram,0x080497fb)
// WARNING: Removing unreachable block (ram,0x080497a2)
// WARNING: Removing unreachable block (ram,0x080498fb)
// WARNING: Removing unreachable block (ram,0x08049929)
// WARNING: Removing unreachable block (ram,0x08049933)
// WARNING: Removing unreachable block (ram,0x08049b16)
// WARNING: Removing unreachable block (ram,0x08049909)
// WARNING: Removing unreachable block (ram,0x080497ac)
// WARNING: Removing unreachable block (ram,0x080499a1)
// WARNING: Removing unreachable block (ram,0x08049b66)
// WARNING: Removing unreachable block (ram,0x08049b96)
// WARNING: Removing unreachable block (ram,0x08049b9c)
// WARNING: Removing unreachable block (ram,0x08049ba2)
// WARNING: Removing unreachable block (ram,0x08049c94)
// WARNING: Removing unreachable block (ram,0x08049c72)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_34h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_17h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_59h
// WARNING: [r2ghidra] Detected overlap for variable var_61h
// WARNING: [r2ghidra] Detected overlap for variable var_64h
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Detected overlap for variable var_70h
// WARNING: [r2ghidra] Detected overlap for variable var_75h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

char sym.func_1(void)
{
    uint32_t uVar1;
    int32_t var_85h;
    int32_t var_7ch;
    int32_t var_74h;
    int32_t var_6ch;
    uint32_t var_68h;
    uint32_t var_60h;
    int32_t var_58h;
    int32_t var_50h;
    uint32_t var_48h;
    uint32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    uint32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    uint16_t var_2ah;
    uint32_t var_28h;
    uint32_t var_24h;
    uint8_t var_1dh;
    int32_t var_1ch;
    char var_17h;
    int16_t var_16h;
    uint32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0x1824a8c6;
    var_ch = 0xd06ce125;
    var_14h = 0xc2da8afc;
    var_16h = -0x2ac3;
    var_17h = '\b';
    var_1ch = 0x34d1cd05;
    var_1dh = 0x61;
    var_24h = 0x75504184;
    var_28h = 0xfffffff7;
    var_2ah = 0;
    var_10h = 0;
    var_34h = 0x6ccb0362;
    while ((-0x12 < var_10h && (var_34h == 0))) {
        var_10h = var_10h + -1;
        var_34h = 0;
    }
    var_10h = -0x11;
    while ((var_10h == -0x14 &&
           (var_14h = var_8h,
           ((int32_t)(char)('2' - ((uint8_t)var_8h + (0xf6 < (uint8_t)var_8h) * '\t')) & 0xfffffffU) != 0))) {
        for (var_14h = 5; var_14h != 8; var_14h = var_14h + 3) {
            var_17h = '\0';
            var_8h = ZEXT14((uint8_t)var_16h);
            var_1ch = 0x2e525b78;
        }
        if (var_16h != 0) break;
        var_1dh = var_1dh + 1;
        var_24h = 0xffffff6a;
        var_16h = -0x4731;
        var_1ch = 0;
        for (var_2ah = 0xffe5; var_2ah != 0x11; var_2ah = var_2ah + 1) {
            var_ch = var_ch & 0xfffbd760;
        }
        var_17h = var_1dh * '\x12' + -0x7f;
        if ((int32_t)(uint32_t)(var_17h < -0x95) < -0x14) {
            uVar1 = 0xe5;
        } else {
            uVar1 = 0xe4;
        }
        var_28h = (var_28h | 0xffff8625) ^ uVar1;
        var_10h = -0x15;
    }
    sym.set_var(var_8h, var_ch, var_10h, var_14h, (int32_t)var_16h, (int32_t)var_17h, var_1ch, (uint32_t)var_1dh, 
                -0x5cd044e, var_24h, var_28h, (uint32_t)var_2ah, -0x535eead6, 1);
    return var_17h;
}
