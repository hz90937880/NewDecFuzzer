
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x0804a0f1)
// WARNING: Removing unreachable block (ram,0x0804990a)
// WARNING: Removing unreachable block (ram,0x08049eb9)
// WARNING: Removing unreachable block (ram,0x080499fd)
// WARNING: Removing unreachable block (ram,0x08049a52)
// WARNING: Removing unreachable block (ram,0x08049d1d)
// WARNING: Removing unreachable block (ram,0x08049d23)
// WARNING: Removing unreachable block (ram,0x08049d28)
// WARNING: Removing unreachable block (ram,0x08049d3b)
// WARNING: Removing unreachable block (ram,0x08049d31)
// WARNING: Removing unreachable block (ram,0x08049cf6)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_b4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_64h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_79h
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_8ah
// WARNING: [r2ghidra] Detected overlap for variable var_a5h
// WARNING: [r2ghidra] Detected overlap for variable var_a8h
// WARNING: [r2ghidra] Detected overlap for variable var_dah
// WARNING: [r2ghidra] Detected overlap for variable var_dch
// WARNING: [r2ghidra] Detected overlap for variable var_ddh
// WARNING: [r2ghidra] Detected overlap for variable var_e6h
// WARNING: [r2ghidra] Detected overlap for variable var_f2h
// WARNING: [r2ghidra] Detected overlap for variable var_57h
// WARNING: [r2ghidra] Detected overlap for variable var_c1h
// WARNING: [r2ghidra] Detected overlap for variable var_d0h
// WARNING: [r2ghidra] Detected overlap for variable var_d1h

undefined4 sym.func_1(void)
{
    uint32_t var_100h;
    uint32_t var_fch;
    uint32_t var_f8h;
    uint32_t var_f0h;
    int32_t var_ech;
    uint32_t var_e4h;
    int32_t var_d8h;
    int32_t var_d2h;
    int32_t var_cch;
    int32_t var_c8h;
    int32_t var_c0h;
    int32_t var_bch;
    int32_t var_b8h;
    undefined4 var_b4h;
    uint32_t var_b0h;
    uint32_t var_ach;
    int32_t var_a4h;
    uint32_t var_a0h;
    int32_t var_9ch;
    uint32_t var_98h;
    uint32_t var_94h;
    int32_t var_90h;
    uint32_t var_88h;
    uint32_t var_80h;
    int32_t var_78h;
    uint32_t var_74h;
    uint32_t var_6ch;
    uint32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    uint32_t var_5ah;
    int32_t var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_44h;
    int32_t var_40h;
    uint32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_34h;
    uint8_t var_2dh;
    uint32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint16_t var_16h;
    uint32_t var_14h;
    uint32_t var_10h;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0x62969fbc;
    var_14h = 0xfffffffc;
    var_16h = 0xfffa;
    var_1ch = 5;
    var_20h = 0xfffffff6;
    var_24h = 1;
    var_28h = 2;
    var_2ch = 0xd5eb93ca;
    var_2dh = 0xfe;
    var_34h = 0xee45caa3;
    var_38h = 0x3517dedc;
    var_3ch = 0;
    var_4ch = 3;
    var_50h = 0xfffffffc;
    var_54h = 2;
code_r0x080497dc:
    var_ch = 0;
    var_8h = 0;
    do {
        if (var_8h < 0x1c) {
            sym.set_var(1, 0xf47a6de, var_8h, var_ch, -1, var_10h, 1, var_14h, (int32_t)(int16_t)var_16h, var_1ch, 
                        var_20h, 0x485c884e, var_24h, var_28h, var_2ch, (uint32_t)var_2dh, var_34h, var_38h);
            return 1;
        }
        if (var_ch != 0) {
            sym.set_var(1, 0xf47a6de, var_8h, var_ch, -1, var_10h, 1, var_14h, (int32_t)(int16_t)var_16h, var_1ch, 
                        var_20h, 0x485c884e, var_24h, var_28h, var_2ch, (uint32_t)var_2dh, var_34h, var_38h);
            return 0xffffffff;
        }
        var_3ch = ~var_3ch;
        var_48h = 0xfffffffe;
        if (((var_8h ^ 0x3b0d) % 0 != 0) < 0xf47a6df) {
            var_50h = var_50h ^ 1;
            var_10h = var_48h;
        } else {
            var_14h = var_14h - 1;
            for (var_5ah._3_1_ = -0x1b; var_5ah._3_1_ != -0x18; var_5ah._3_1_ = var_5ah._3_1_ + '\x01') {
                var_ch = var_ch + 1;
                var_20h = var_20h - 1;
                var_24h = var_24h - 1;
            }
            var_3ch = 6;
            var_48h = var_ch & 0xfffffffe;
            var_10h = (uint32_t)((var_48h != 0) != 0xe5ec);
        }
        var_1ch = (uint32_t)(0x151 < var_20h);
        var_16h = (uint16_t)(0x151 < var_20h) * 0x74d0;
        if (((uint32_t)(var_ch == var_20h < var_ch) << ((uint8_t)var_ch & 0x1f) & 0x30f7) == 0) {
            var_4ch = var_4ch ^ 0x5203a911;
            var_28h = var_28h | var_4ch < var_ch;
            if ((int32_t)((int64_t)(uint64_t)(var_54h != 0) / (int64_t)(int32_t)(char)var_16h) <=
                (int32_t)(uint32_t)(var_28h != 1)) {
                sym.set_var(1, 0xf47a6de, var_8h, var_ch, -1, var_10h, 1, var_14h, (int32_t)(int16_t)var_16h, var_1ch, 
                            var_20h, 0x485c884e, var_24h, var_28h, var_2ch, (uint32_t)var_2dh, var_34h, var_38h);
                return 0xf47a6de;
            }
            for (var_28h = 0xfffffffb; var_28h < 0x15; var_28h = var_28h + 1) {
                for (var_5ah._0_2_ = 2; (uint16_t)var_5ah < 9; var_5ah._0_2_ = (uint16_t)var_5ah + 1) {
                    if (var_50h != 0) goto code_r0x080497dc;
                }
                var_10h = 0x2726df1f;
            }
        } else {
            var_10h = 0xa4f06702;
            var_4ch = 0;
            var_2ch = 0xffffffff;
            var_16h = -0x1b85406e < (int32_t)(0 / (int64_t)(int32_t)(int16_t)var_16h) ^ 0x421;
            var_54h = (int32_t)(int16_t)var_16h;
            var_ch = var_28h + ((var_54h & var_ch) != 0);
            var_1ch = (var_8h & 0xff) * 0x5d;
            for (var_64h = 0; var_64h < 0x1e; var_64h = var_64h + 7) {
                var_1ch = var_1ch ^ 1;
                var_48h = var_48h ^ 1;
                if ((var_8h != var_48h) != 0xffff) {
                    var_10h = 1;
                    var_4ch = 0;
                    if ((int32_t)(int16_t)var_28h * (int32_t)(int16_t)var_16h < -9) {
                        var_2dh = var_2dh - 1;
                        var_34h = (uint32_t)(var_20h < 0xfffffff8) << 0x12;
                        var_10h = 0;
                        var_38h = (uint32_t)(0x1f154393 < (var_14h < 9 ^ 0xffffffff));
                        var_1ch = (uint32_t)(var_38h != 0) + (var_3ch & 0xff) + 0xa4 & var_ch;
                    }
                    goto code_r0x080497dc;
                }
            }
        }
        var_8h = var_8h + 1;
    } while( true );
}
