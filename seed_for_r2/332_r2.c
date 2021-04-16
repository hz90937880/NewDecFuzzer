
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804999e)
// WARNING: Removing unreachable block (ram,0x080499f7)
// WARNING: Removing unreachable block (ram,0x080499fc)
// WARNING: Removing unreachable block (ram,0x080497f9)
// WARNING: Removing unreachable block (ram,0x08049aa9)
// WARNING: Removing unreachable block (ram,0x08049ac4)
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_4bh
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_58h
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_6dh
// WARNING: [r2ghidra] Detected overlap for variable var_70h
// WARNING: [r2ghidra] Detected overlap for variable var_7ah

uint32_t sym.func_1(void)
{
    int32_t var_90h;
    uint32_t var_80h;
    uint32_t var_78h;
    int32_t var_74h;
    int32_t var_6ch;
    uint32_t var_68h;
    int32_t var_60h;
    int32_t var_5ch;
    uint32_t var_54h;
    uint32_t var_50h;
    uint32_t var_48h;
    uint32_t var_44h;
    int32_t var_40h;
    int32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    uint8_t var_29h;
    int32_t var_28h;
    uint32_t var_24h;
    uint8_t var_1dh;
    uint32_t var_1ch;
    int32_t var_18h;
    uint16_t var_14h;
    uint8_t var_12h;
    uint8_t var_11h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_11h = 0xc0;
    var_12h = 2;
    var_14h = 0x467;
    var_18h = 1;
    var_1ch = 0xe3f50e16;
    var_1dh = 0xf9;
    var_24h = 6;
    var_28h = 0x3475f540;
    var_29h = 0xff;
    var_30h = 0x6c12a7b0;
    var_34h = 1;
    var_38h = -1;
    var_10h = 0xffffffe9;
    while( true ) {
        if (var_10h < 0x12) {
            sym.set_var(var_10h, (uint32_t)var_11h, 0x421dd2eb, (int32_t)(char)var_12h, (uint32_t)var_14h, var_18h, 
                        var_38h ^ 0xec31a0a7, (uint32_t)var_1dh, -1, var_24h, var_28h, (uint32_t)(uint8_t)(var_29h + 1)
                        , 1);
            return var_30h;
        }
        var_11h = 0xf6;
        var_12h = (uint8_t)var_30h & var_12h;
        var_14h = (uint16_t)((uint32_t)(int32_t)(char)var_12h < var_10h) | (uint16_t)var_10h | 1;
        if (var_10h == var_14h <= var_10h) break;
        for (var_30h = 0; 0x1d < var_30h; var_30h = var_30h + 6) {
            var_34h = var_34h - 1;
            var_18h = 0x2625a004;
            if ((var_12h |
                var_10h !=
                (int32_t)(char)(((char)((var_34h & 0x2625a004U) << 3) + (char)(var_34h & 0x2625a004U)) * '\x04') >>
                ((uint8_t)var_10h & 0x1f)) == 0) {
                var_28h = 0xffff9932;
                var_24h = 0;
                var_1ch = var_28h;
            } else {
                var_1dh = var_1ch != (var_14h == 0xf34c9333);
                var_1ch = (uint32_t)(-0xcb36ccd < (int32_t)((uint32_t)var_1dh * 0x100));
                if (var_10h == 0) {
                    sym.set_var(0, 0xf6, 0x421dd2eb, (int32_t)(char)var_12h, (uint32_t)var_14h, 0x2625a004, var_1ch, 
                                (uint32_t)var_1dh, -1, var_24h, var_28h, (uint32_t)var_29h, 1);
                    return (int32_t)(char)var_12h;
                }
            }
        }
        var_29h = 0xf2;
        var_38h = 1;
        var_10h = var_10h + 1;
    }
    sym.set_var(var_10h, 0xf6, 0x421dd2eb, (int32_t)(char)var_12h, (uint32_t)var_14h, var_18h, var_1ch, 
                (uint32_t)var_1dh, -1, var_24h, var_28h, (uint32_t)var_29h, 1);
    return (uint32_t)var_1dh;
}
