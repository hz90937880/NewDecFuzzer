
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049e42)
// WARNING: Removing unreachable block (ram,0x08049c24)
// WARNING: Removing unreachable block (ram,0x08049c2a)
// WARNING: Removing unreachable block (ram,0x08049ab2)
// WARNING: Removing unreachable block (ram,0x08049ddc)
// WARNING: Removing unreachable block (ram,0x08049df7)
// WARNING: Removing unreachable block (ram,0x08049dfe)
// WARNING: Removing unreachable block (ram,0x08049cee)
// WARNING: Removing unreachable block (ram,0x08049dc4)
// WARNING: Removing unreachable block (ram,0x08049ac0)
// WARNING: Removing unreachable block (ram,0x08049cd8)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_38h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_40h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_22h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_3bh
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_59h
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Detected overlap for variable var_9ah
// WARNING: [r2ghidra] Detected overlap for variable var_a2h
// WARNING: [r2ghidra] Detected overlap for variable var_a4h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_adh
// WARNING: [r2ghidra] Detected overlap for variable var_23h
// WARNING: [r2ghidra] Detected overlap for variable var_aeh
// WARNING: [r2ghidra] Detected overlap for variable var_28h
// WARNING: [r2ghidra] Detected overlap for variable var_c1h
// WARNING: [r2ghidra] Detected overlap for variable var_cdh
// WARNING: [r2ghidra] Detected overlap for variable var_d0h
// WARNING: [r2ghidra] Detected overlap for variable var_d1h
// WARNING: [r2ghidra] Detected overlap for variable var_d4h
// WARNING: [r2ghidra] Detected overlap for variable var_d5h
// WARNING: [r2ghidra] Detected overlap for variable var_d6h
// WARNING: [r2ghidra] Detected overlap for variable var_e2h
// WARNING: [r2ghidra] Detected overlap for variable var_e4h
// WARNING: [r2ghidra] Detected overlap for variable var_edh
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint16_t uVar1;
    bool bVar2;
    uint32_t arg_8h;
    int32_t iVar3;
    int32_t var_110h;
    uint32_t var_100h;
    uint32_t var_fch;
    int32_t var_f8h;
    int32_t var_f4h;
    int32_t var_ech;
    int32_t var_e8h;
    uint32_t var_e0h;
    uint32_t var_dch;
    uint32_t var_cch;
    uint32_t var_c8h;
    int32_t var_c0h;
    int32_t var_bch;
    int32_t var_b8h;
    int32_t var_b4h;
    uint32_t var_ach;
    uint32_t var_a8h;
    int32_t var_a0h;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_78h;
    int32_t var_70h;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_58h;
    uint32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    uint32_t var_40h;
    uint8_t var_3bh;
    uint16_t var_3ah;
    uint32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_29h;
    uint8_t var_23h;
    uint16_t var_22h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    char var_11h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_34h = -0x579f4b01;
    var_3ah = 0x87fc;
    var_3bh = 0xfd;
    var_40h = 0x5c526587;
    var_48h = 2;
    var_4ch = -0x680696d3;
    var_29h._0_1_ = 0xe5;
    var_10h = 0xefc7127b;
    var_1ch = 0xffffffff;
    for (var_38h = 0; -0x1e < (int32_t)var_38h; var_38h = var_38h - 1) {
        bVar2 = (int32_t)(var_38h >> 0x1f) < (int32_t)var_38h;
        for (var_22h = 0; var_34h = ZEXT14(bVar2), (int16_t)var_22h < -0x1c; var_22h = var_22h - 1) {
            var_3bh = var_3bh + 1;
            var_40h = var_10h ^ (uint32_t)
                                ((uint64_t)var_3bh %
                                (uint64_t)
                                (int64_t)(int32_t)(uint32_t)
                                                  (uint8_t)(((uint16_t)
                                                             ((int32_t)(char)((int16_t)(var_22h / 0) >> 7) >>
                                                             ((uint8_t)var_38h & 0x1f)) & 0xff) % 0)) ^ 0x552b;
            if ((0 % (int32_t)(char)((uint8_t)var_38h & (uint8_t)var_40h) < (int32_t)var_38h) || (var_22h != 0)) {
                iVar3 = 1;
            } else {
                iVar3 = 0;
            }
            bVar2 = 0x87fc < (iVar3 == -0x8778);
            var_10h = var_40h;
        }
    }
    var_10h = 0x11;
    uVar1 = (char)-(8U < (0x10 < (int32_t)var_40h) != true | 8U) * 0x20 == 0x11 ^ 0xfff7;
    arg_8h = (uint32_t)((uint32_t)(int32_t)(int16_t)uVar1 / 8 != 0);
    iVar3 = (var_3bh != 1) - 0x86;
    var_40h = (uint32_t)(iVar3 != -0x2f7e8665);
    if (var_3bh != 1) {
        var_3bh = var_3bh - 1;
        if (var_40h + (var_3bh == 0xf3a4480c) < 0x1b) {
            var_34h = 0x46b80fc1;
        } else {
            var_34h = 0x46b80fc2;
        }
        var_48h = 3;
code_r0x08049e85:
        sym.set_var(arg_8h, var_34h, iVar3, (uint32_t)var_3ah, (uint32_t)var_3bh, var_40h, (int32_t)(int16_t)uVar1, 
                    0x6b242cff, -0x6d, var_48h, var_4ch, (uint32_t)(uint8_t)var_29h, -9, -0x6a, 0, -10, -9, -2, 2);
        return 0xffffffff;
    }
    var_23h = 0x81;
    do {
        var_4ch = var_4ch + -1;
        var_11h = -0x1e;
        while( true ) {
            if (var_11h != '\x1b') goto code_r0x08049e85;
            if (var_10h != 0) break;
            var_23h = var_23h - 1;
            var_10h = 0;
            if (var_1ch == 1) {
                var_3bh = 1;
            } else {
                if (((uint32_t)(arg_8h < 0x48) *
                     ((int32_t)(int16_t)((uint16_t)var_23h << 10) / (int32_t)(int16_t)var_40h & 0xffU) | 0x9e1b5ab6) !=
                    0) goto code_r0x08049e85;
                for (var_10h = 0; 0x14 < (int32_t)var_10h; var_10h = var_10h + 5) {
                    var_48h = var_48h + -1;
                }
                for (var_40h = 0; (int32_t)var_40h < -0x1b; var_40h = var_40h - 1) {
                    var_3ah = 0;
                }
            }
            var_29h._0_1_ = 2;
            var_1ch = 0;
            var_11h = '\x1c';
        }
    } while( true );
}
