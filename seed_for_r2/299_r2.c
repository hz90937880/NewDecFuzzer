
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049ca1)
// WARNING: Removing unreachable block (ram,0x080498fc)
// WARNING: Removing unreachable block (ram,0x08049af9)
// WARNING: Removing unreachable block (ram,0x0804a075)
// WARNING: Removing unreachable block (ram,0x0804a111)
// WARNING: Removing unreachable block (ram,0x0804995f)
// WARNING: Removing unreachable block (ram,0x08049d13)
// WARNING: Removing unreachable block (ram,0x08049d68)
// WARNING: Removing unreachable block (ram,0x08049d6e)
// WARNING: Removing unreachable block (ram,0x08049d75)
// WARNING: Removing unreachable block (ram,0x08049d7a)
// WARNING: Removing unreachable block (ram,0x0804a060)
// WARNING: Removing unreachable block (ram,0x08049980)
// WARNING: Removing unreachable block (ram,0x0804a090)
// WARNING: Removing unreachable block (ram,0x0804a1e6)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_44h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_50h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_98h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_58h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_34h
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_38h
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_7dh
// WARNING: [r2ghidra] Detected overlap for variable var_7eh
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_92h
// WARNING: [r2ghidra] Detected overlap for variable var_9ah
// WARNING: [r2ghidra] Detected overlap for variable var_9ch
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_a2h
// WARNING: [r2ghidra] Detected overlap for variable var_b2h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_b4h
// WARNING: [r2ghidra] Detected overlap for variable var_b9h
// WARNING: [r2ghidra] Detected overlap for variable var_ceh
// WARNING: [r2ghidra] Detected overlap for variable var_d8h
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_f5h
// WARNING: [r2ghidra] Detected overlap for variable var_e9h
// WARNING: [r2ghidra] Detected overlap for variable var_bah
// WARNING: [r2ghidra] Detected overlap for variable var_c2h
// WARNING: [r2ghidra] Detected overlap for variable var_a9h

uint32_t sym.func_1(void)
{
    uint32_t uVar1;
    int32_t iVar2;
    int32_t var_110h;
    int32_t var_108h;
    uint32_t var_104h;
    uint32_t var_100h;
    int32_t var_fch;
    int32_t var_f4h;
    int32_t var_f0h;
    int32_t var_ech;
    int32_t var_e8h;
    uint32_t var_e4h;
    uint32_t var_e0h;
    int32_t var_d9h;
    uint32_t var_d4h;
    int32_t var_cch;
    int32_t var_c8h;
    uint32_t var_c0h;
    int32_t var_b8h;
    uint32_t var_b0h;
    int32_t var_a8h;
    uint32_t var_a0h;
    undefined4 var_98h;
    int32_t var_90h;
    int32_t var_8ch;
    uint32_t var_88h;
    int32_t var_84h;
    uint32_t var_7ch;
    uint32_t var_78h;
    uint32_t var_74h;
    uint32_t var_70h;
    uint32_t var_6ch;
    int32_t var_68h;
    int32_t var_60h;
    undefined4 var_58h;
    uint32_t var_50h;
    uint8_t var_49h;
    uint32_t var_48h;
    uint32_t var_44h;
    uint16_t var_3eh;
    uint32_t var_3ch;
    int16_t var_38h;
    uint8_t var_35h;
    uint16_t var_34h;
    uint16_t var_32h;
    uint32_t var_30h;
    uint32_t var_2ch;
    uint16_t var_26h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int16_t var_16h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_14h = 5;
    var_16h = 0x2b46;
    var_1ch = 0x66c0953b;
    var_26h = 0xffff;
    var_2ch = 0xfef6f1ac;
    var_30h = 0xfffffffc;
    var_32h = 0x4674;
    var_34h = 0;
    var_35h = 5;
    var_38h = 0x6bea;
    var_3ch = 0x2433cc30;
    var_3eh = 0x63a6;
    var_44h = 0;
    var_20h = 6;
    var_10h = 6;
    var_24h = 0xfffffff5;
    do {
        if (var_24h == 0x19) {
code_r0x0804a212:
            sym.set_var(0x9aaed6b6, var_20h, var_24h, var_10h, var_14h, (int32_t)var_16h, var_1ch, (uint32_t)var_26h, 
                        var_2ch + 1, var_30h, (uint32_t)var_32h, (int32_t)(int16_t)var_34h, 1, 0x44792810, 
                        (int32_t)var_38h, -1, var_3ch, (uint32_t)(var_3eh | 1));
            return var_44h;
        }
        var_50h = 0x5d8284a8;
        var_20h = 0;
        while ((var_20h != 7 && (var_14h = var_14h ^ 0x2be197e7, var_10h == 0))) {
            var_16h = 0;
            var_1ch = (uint32_t)(var_14h < 2);
            var_26h = (uint16_t)(var_14h < 2);
            var_2ch = var_2ch ^ var_26h;
            var_50h = (int32_t)(char)var_2ch / 0xf ^ 0xfff6U | 0x12;
            var_20h = var_20h + 1;
            var_10h = 0xf;
        }
        if ((int32_t)((var_10h & 0xff) - 0xff) < 1) {
            iVar2 = 0x5d;
        } else {
            iVar2 = 0x5e;
        }
        if (iVar2 << (int8_t)var_44h == 0) {
            var_20h = 0;
            if (var_32h != 0) {
                var_44h = var_44h ^ 8;
            }
            if ((int32_t)var_1ch < 1 == 0xdb9cc511) {
                var_1ch = 9;
                var_35h = 0x10;
                var_26h = (uint16_t)var_44h;
                var_38h = 0;
                if (((int32_t)(int16_t)(1 >> ((uint8_t)var_2ch & 0x1f)) & 0x7ffffffU) != 0) {
                    var_32h = (uint16_t)(0xf7 < (uint8_t)var_34h);
                    var_35h = 0xf;
                    var_14h = var_14h ^ 8 < (uint32_t)(-0x20 % (int64_t)(int32_t)(char)var_16h);
                    goto code_r0x08049dba;
                }
            } else {
                var_20h = (uint32_t)(var_26h <= (-10 % 0 < 1));
                var_34h = (uint16_t)var_50h | 0x5639;
code_r0x08049dba:
                var_1ch = var_10h & 0xdd;
                if (var_35h == 0) {
                    for (var_49h = 0xe7; 0x20 < var_49h; var_49h = var_49h + 4) {
                        var_35h = 0xb6;
                        var_3ch = 0xb6;
                        if (var_20h != 0x2d6baa40) {
                            var_35h = 0xb5;
                        }
                    }
                    var_10h = var_10h - 1;
                    var_3eh = 0;
                    var_34h = 0;
                    if ((int32_t)(-0x24633aef - (uint32_t)var_26h) < (int32_t)(uint32_t)var_35h) {
                        sym.set_var(0x9aaed6b6, var_20h, var_24h, var_10h, var_14h, (int32_t)var_16h, var_1ch, 
                                    (uint32_t)var_26h, var_2ch, var_30h, (uint32_t)var_32h, 0, (uint32_t)var_35h, 
                                    0x44792810, (int32_t)var_38h, -1, var_3ch, 0);
                        return 0;
                    }
                    var_44h = 0x7d796623;
                    if (var_30h == 0) {
                        var_44h = 0x17;
                        var_14h = var_32h & 1;
                        goto code_r0x0804a185;
                    }
                    goto code_r0x0804a212;
                }
                var_1ch = 0x9aaed6b6;
            }
        } else {
            if ((var_44h == 0) || (var_24h == 0)) {
                uVar1 = 0;
            } else {
                uVar1 = 1;
            }
            var_20h = (uint32_t)((int64_t)(uint64_t)(uVar1 <= var_20h) / -10) ^
                      (uint32_t)((int32_t)(char)var_14h * (int32_t)(char)var_30h != -0x47bb58ac);
code_r0x0804a185:
            var_30h = 0;
            while ((var_30h < 5 && (var_30h == 0))) {
                var_30h = 1;
            }
        }
        var_24h = var_24h + 9;
    } while( true );
}
