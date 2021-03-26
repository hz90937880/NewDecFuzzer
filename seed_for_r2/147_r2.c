
// WARNING: Variable defined which should be unmapped: var_8h
// WARNING: Removing unreachable block (ram,0x08049a34)
// WARNING: Removing unreachable block (ram,0x08049a41)
// WARNING: Removing unreachable block (ram,0x080498e3)
// WARNING: Removing unreachable block (ram,0x08049923)
// WARNING: Removing unreachable block (ram,0x08049927)
// WARNING: Removing unreachable block (ram,0x080499ae)
// WARNING: Removing unreachable block (ram,0x08049a7a)
// WARNING: Removing unreachable block (ram,0x08049a91)
// WARNING: Removing unreachable block (ram,0x08049afa)
// WARNING: Removing unreachable block (ram,0x08049b00)
// WARNING: Removing unreachable block (ram,0x08049b05)
// WARNING: Removing unreachable block (ram,0x08049b13)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_76h
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_57h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_78h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

uint32_t sym.func_1(void)
{
    int32_t var_74h;
    uint32_t var_70h;
    int32_t var_68h;
    int32_t var_64h;
    uint32_t var_60h;
    int32_t var_5bh;
    int32_t var_54h;
    int32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_40h;
    uint32_t var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    uint32_t var_30h;
    uint8_t var_29h;
    uint32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    uint32_t var_1ch;
    uint8_t var_15h;
    uint32_t var_14h;
    char var_eh;
    char var_dh;
    int32_t var_ch;
    int32_t var_8h;
    
    sym.__x86.get_pc_thunk.ax();
    var_eh = '\x01';
    var_15h = 0;
    var_1ch = 0xffffffff;
    var_28h = 1;
    var_29h = 0;
    for (var_ch = 0; var_14h = 0, var_ch < 2; var_ch = var_ch + 1) {
        var_eh = '\0';
        if (var_ch == -0x2037) {
            sym.set_var(0xffffdfc9, 
                        (int32_t)((int32_t)((int64_t)(uint64_t)((int32_t)(uint32_t)(var_ch < 0xfb) <= var_ch) %
                                           (int64_t)(int32_t)(char)var_ch) < var_ch), 0, 0, 0, -1, -0x676cb136, 1, 
                        0x19e2f9db, -4, 1, 0x379bbdc2, 0xfffffffb, 0);
            return 0xdfc9;
        }
    }
    var_dh = -6;
    while( true ) {
        if (var_dh < -9) {
            sym.set_var(var_ch, (int32_t)var_dh, (int32_t)var_eh, var_14h, (uint32_t)var_15h, var_1ch, -0x676cb136, 1, 
                        0x19e2f9db, -4, var_28h, 0x379bbdc2, 0xfffffffb, (uint32_t)var_29h);
            return var_1ch;
        }
        var_1ch = 0;
        if (var_14h == 0) break;
        for (var_eh = '\0'; var_eh < -0xc; var_eh = var_eh + -1) {
            var_14h = 0xffffffff;
            while ((var_14h == 0x2b && (var_dh == '\0'))) {
                var_14h = 0x2c;
            }
        }
        var_28h = var_28h + 1;
        var_15h = 0x28;
        var_29h = var_29h + 1;
        var_ch = 0;
        var_dh = var_dh + -1;
    }
    sym.set_var(var_ch, (int32_t)var_dh, (int32_t)var_eh, 0, 0x28, 0, -0x676cb136, 1, 0x19e2f9db, -4, var_28h, 
                0x379bbdc2, 0xfffffffb, (uint32_t)var_29h);
    return 0x8186f270;
}
