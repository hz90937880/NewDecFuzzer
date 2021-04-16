
// WARNING: Variable defined which should be unmapped: var_8h
// WARNING: Removing unreachable block (ram,0x08049e34)
// WARNING: Removing unreachable block (ram,0x08049e41)
// WARNING: Removing unreachable block (ram,0x08049e6f)
// WARNING: Removing unreachable block (ram,0x08049e23)
// WARNING: Removing unreachable block (ram,0x08049d97)
// WARNING: Removing unreachable block (ram,0x0804995f)
// WARNING: Removing unreachable block (ram,0x08049bd8)
// WARNING: Removing unreachable block (ram,0x08049c37)
// WARNING: Removing unreachable block (ram,0x0804997b)
// WARNING: Removing unreachable block (ram,0x08049ddf)
// WARNING: Removing unreachable block (ram,0x08049dec)
// WARNING: Removing unreachable block (ram,0x08049df5)
// WARNING: Removing unreachable block (ram,0x08049dfc)
// WARNING: Removing unreachable block (ram,0x08049e01)
// WARNING: Removing unreachable block (ram,0x08049e13)
// WARNING: Removing unreachable block (ram,0x08049e76)
// WARNING: Removing unreachable block (ram,0x08049e7b)
// WARNING: Removing unreachable block (ram,0x080499f5)
// WARNING: Removing unreachable block (ram,0x08049a4d)
// WARNING: Removing unreachable block (ram,0x08049a63)
// WARNING: Removing unreachable block (ram,0x08049e1d)
// WARNING: Removing unreachable block (ram,0x08049ceb)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_5ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_38h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2bh
// WARNING: [r2ghidra] Detected overlap for variable var_75h
// WARNING: [r2ghidra] Detected overlap for variable var_8ah
// WARNING: [r2ghidra] Detected overlap for variable var_a5h
// WARNING: [r2ghidra] Detected overlap for variable var_a6h
// WARNING: [r2ghidra] Detected overlap for variable var_a7h
// WARNING: [r2ghidra] Detected overlap for variable var_aah
// WARNING: [r2ghidra] Detected overlap for variable var_50h
// WARNING: [r2ghidra] Detected overlap for variable var_cdh
// WARNING: [r2ghidra] Detected overlap for variable var_beh

uint32_t sym.func_1(void)
{
    char cVar1;
    int32_t var_d4h;
    uint32_t var_cch;
    int32_t var_c8h;
    int32_t var_c4h;
    uint32_t var_bch;
    uint32_t var_b8h;
    uint32_t var_b4h;
    int32_t var_b0h;
    uint32_t var_a4h;
    uint32_t var_a0h;
    uint32_t var_9ch;
    uint32_t var_98h;
    uint32_t var_94h;
    uint32_t var_90h;
    int32_t var_88h;
    uint32_t var_84h;
    int32_t var_80h;
    uint32_t var_7ch;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_64h;
    uint32_t var_60h;
    undefined4 var_5ch;
    uint32_t var_58h;
    uint32_t var_51h;
    uint32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    uint32_t var_3ch;
    undefined4 var_38h;
    uint32_t var_34h;
    uint32_t var_30h;
    uint8_t var_2bh;
    int16_t var_2ah;
    int32_t var_28h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    
    sym.__x86.get_pc_thunk.ax();
    var_1ch = 3;
    var_ch = 0xfffffffe;
    var_10h = 1;
    var_14h = 0x8ddd7ad2;
    var_2ah = -0x69d1;
    var_2bh = 1;
    var_30h = 1;
    var_34h = 0xfffffff6;
    var_20h = 0;
    do {
        if ((int32_t)var_20h < 0x1c) {
            sym.set_var(2, 1, 1, -1, -0x162fa459, 0x4b25b3b, var_1ch, -0x77f8720d, 0x35e1, 7, var_ch, var_10h, var_14h, 
                        9, -7, (int32_t)var_2ah, (uint32_t)var_2bh, var_30h, 0, 0, var_34h);
            return var_30h;
        }
        if ((var_ch != 0) == 0xffffca1f) {
            var_10h = 0x35e1;
            var_14h = var_14h - 1;
            if ((var_1ch == 0) && (var_2ah = -1, var_14h == 0)) {
                cVar1 = '\0';
            } else {
                cVar1 = '\x01';
            }
            if (cVar1 * -0x1f == 0) {
                var_1ch = 1;
                var_30h = var_30h ^ 0x3ffe4;
            } else {
                var_2bh = 0xf9;
            }
        }
        for (var_4ch = 0; var_4ch != 0xf; var_4ch = var_4ch + 1) {
            var_30h = var_30h + 1;
            if (var_30h == 0) {
                var_34h = 0xfffa;
            }
            var_1ch = 0;
            if (var_34h != 0) break;
        }
        var_20h = var_20h + 1;
        var_ch = var_ch + 1;
    } while( true );
}
