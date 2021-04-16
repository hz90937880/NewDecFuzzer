
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049934)
// WARNING: Removing unreachable block (ram,0x08049941)
// WARNING: Removing unreachable block (ram,0x0804990c)
// WARNING: Removing unreachable block (ram,0x08049bd0)
// WARNING: Removing unreachable block (ram,0x08049a98)
// WARNING: Removing unreachable block (ram,0x08049bbe)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_40h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_b6h
// WARNING: [r2ghidra] Detected overlap for variable var_beh
// WARNING: [r2ghidra] Detected overlap for variable var_48h
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_cah
// WARNING: [r2ghidra] Detected overlap for variable var_cch
// WARNING: [r2ghidra] Detected overlap for variable var_d6h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_50h
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_61h
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_8eh
// WARNING: [r2ghidra] Detected overlap for variable var_8fh
// WARNING: [r2ghidra] Detected overlap for variable var_90h
// WARNING: [r2ghidra] Detected overlap for variable var_91h
// WARNING: [r2ghidra] Detected overlap for variable var_99h
// WARNING: [r2ghidra] Detected overlap for variable var_a0h
// WARNING: [r2ghidra] Detected overlap for variable var_6dh
// WARNING: [r2ghidra] Detected overlap for variable var_75h
// WARNING: [r2ghidra] Detected overlap for variable var_76h
// WARNING: [r2ghidra] Detected overlap for variable var_58h
// WARNING: [r2ghidra] Detected overlap for variable var_64h
// WARNING: [r2ghidra] Detected overlap for variable var_8ch
// WARNING: [r2ghidra] Detected overlap for variable var_a1h

int32_t sym.func_1(void)
{
    char cVar1;
    int32_t var_f4h;
    int32_t var_f0h;
    int32_t var_ech;
    uint32_t var_dch;
    int32_t var_d4h;
    int32_t var_d0h;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_bch;
    uint32_t var_b4h;
    uint32_t var_b0h;
    uint32_t var_ach;
    int32_t var_a8h;
    int32_t var_a2h;
    int32_t var_98h;
    int32_t var_8dh;
    int32_t var_88h;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_74h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_60h;
    int32_t var_59h;
    uint32_t var_54h;
    int32_t var_4ch;
    int32_t var_45h;
    int32_t var_40h;
    uint32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    char var_2dh;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_20h = 1;
    var_a2h._0_1_ = 0;
    var_24h = 1;
    var_28h = 0x24fe5f2f;
    var_2ch = 0x747af82b;
    var_1ch = 0xfffffffb;
    var_2dh = '\x14';
    do {
        if (var_2dh != -0x19) {
            var_3ch = 0;
            while (var_3ch == 0x1b) {
                var_3ch = 0x23;
            }
            sym.set_var(0xdbea5223, 0xf746e3df, var_1ch, 1, -2, 0, 0x46159332, 1, var_20h, 0xfff7, 3, 0x60fc, 1, 
                        -0x36a55651, 0x4d99, (uint32_t)(uint8_t)var_a2h, var_24h, 9, -1, var_28h, 0x69208027, var_2ch, 
                        0x1904);
            return var_24h;
        }
        var_40h = -1;
        cVar1 = 'A';
        var_1ch = 0x17;
        while (var_1ch == 3) {
            if (((uint32_t)((int64_t)(uint64_t)(cVar1 != -2) % -0x6cce) >> 3 & 0x1fff) == 0) {
                sym.set_var(0xdbea5223, 0xf746e3df, 3, 1, -2, 0, 0x46159332, 1, var_20h, 0xfff7, 3, 0x60fc, 1, 
                            -0x36a55651, 0x4d99, (uint32_t)(uint8_t)var_a2h, var_24h, 9, -1, var_28h, 0x69208027, 
                            var_2ch, 0x1904);
                return -0x7fecca3c;
            }
            var_28h = var_28h & (uint32_t)(var_40h != 0);
            var_2ch = var_2ch & 1;
            var_20h = var_20h + 1;
            if (var_20h == 0) {
                var_24h = -0x4a;
            } else {
                var_24h = 1;
            }
            for (var_40h = 0; var_40h < 0x13; var_40h = var_40h + 1) {
                cVar1 = cVar1 + -1;
            }
            var_a2h._0_1_ = 1;
            sym.packed_printf(9);
            var_1ch = 2;
        }
        var_1ch = 0xffffffff;
        var_2dh = -0x1a;
    } while( true );
}
