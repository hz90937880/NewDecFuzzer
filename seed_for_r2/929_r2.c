
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x0804984c)
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Detected overlap for variable var_87h
// WARNING: [r2ghidra] Detected overlap for variable var_6dh
// WARNING: [r2ghidra] Detected overlap for variable var_76h
// WARNING: [r2ghidra] Detected overlap for variable var_78h

undefined4 sym.func_1(void)
{
    int32_t var_84h;
    int32_t var_80h;
    uint32_t var_7ch;
    int32_t var_74h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    uint32_t var_2ch;
    int32_t var_28h;
    int16_t var_22h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    uint16_t var_12h;
    int32_t var_10h;
    int16_t var_ah;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = -0x3f1f8adb;
    var_12h = 0x8475;
    var_18h = -1;
    var_1ch = 0x6574f20;
    var_20h = 0x5a815809;
    var_8h = 0xffffffe4;
    while (var_8h == 0xffffffe8) {
        var_8h = 0xffffffe9;
    }
    var_22h = 0xb;
    while (var_22h == 0x33) {
        var_12h = var_12h - 1;
        var_18h = 0;
        var_20h = var_20h - 1;
        var_1ch = 0;
        var_8h = 0x20306220;
        var_22h = 0x35;
    }
    var_ah = -2;
    while( true ) {
        if (0x18 < var_ah) {
            sym.set_var(-0x13d1f30b, -0x17c388d0, 5, var_8h, (int32_t)var_ah, var_10h, -5, (uint32_t)var_12h, var_18h, 
                        var_1ch, -9, 0, var_20h);
            return 5;
        }
        var_10h = -7;
        if ((var_1ch & 1U) == 0xfffffffb) break;
        var_1ch = var_1ch & 1U | (uint32_t)(((char)var_8h + 1U & 0xfd) != 0xfb);
        var_ah = var_ah + 2;
    }
    sym.set_var(-0x13d1f30b, -0x17c388d0, 5, var_8h, (int32_t)var_ah, -7, -5, (uint32_t)var_12h, var_18h, -5, -9, 0, 
                var_20h);
    return 0x66ca;
}
