
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x0804a050)
// WARNING: Removing unreachable block (ram,0x08049d24)
// WARNING: Removing unreachable block (ram,0x08049a04)
// WARNING: Removing unreachable block (ram,0x08049a0f)
// WARNING: Removing unreachable block (ram,0x08049a0a)
// WARNING: Removing unreachable block (ram,0x08049837)
// WARNING: Removing unreachable block (ram,0x080499ab)
// WARNING: Removing unreachable block (ram,0x08049b61)
// WARNING: Removing unreachable block (ram,0x08049b68)
// WARNING: Removing unreachable block (ram,0x0804a090)
// WARNING: Removing unreachable block (ram,0x08049f03)
// WARNING: Removing unreachable block (ram,0x08049f08)
// WARNING: Removing unreachable block (ram,0x08049f4b)
// WARNING: Removing unreachable block (ram,0x0804a04a)
// WARNING: Removing unreachable block (ram,0x0804a056)
// WARNING: Removing unreachable block (ram,0x0804a067)
// WARNING: Removing unreachable block (ram,0x08049d48)
// WARNING: Removing unreachable block (ram,0x08049ddd)
// WARNING: Removing unreachable block (ram,0x08049d65)
// WARNING: Removing unreachable block (ram,0x08049dd9)
// WARNING: Removing unreachable block (ram,0x08049de3)
// WARNING: Removing unreachable block (ram,0x08049de6)
// WARNING: Removing unreachable block (ram,0x08049ded)
// WARNING: Removing unreachable block (ram,0x08049e14)
// WARNING: Removing unreachable block (ram,0x08049e0d)
// WARNING: Removing unreachable block (ram,0x08049e19)
// WARNING: Removing unreachable block (ram,0x08049e3f)
// WARNING: Removing unreachable block (ram,0x08049ec7)
// WARNING: Removing unreachable block (ram,0x08049eb7)
// WARNING: Removing unreachable block (ram,0x08049ec0)
// WARNING: Removing unreachable block (ram,0x08049ecc)
// WARNING: Removing unreachable block (ram,0x08049ef3)
// WARNING: Removing unreachable block (ram,0x08049efc)
// WARNING: Removing unreachable block (ram,0x0804a071)
// WARNING: Removing unreachable block (ram,0x0804a074)
// WARNING: Removing unreachable block (ram,0x0804a0df)
// WARNING: Removing unreachable block (ram,0x0804a0f4)
// WARNING: Removing unreachable block (ram,0x08049b1c)
// WARNING: Removing unreachable block (ram,0x08049b44)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_1fh
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_fh
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_75h
// WARNING: [r2ghidra] Detected overlap for variable var_7eh
// WARNING: [r2ghidra] Detected overlap for variable var_8eh
// WARNING: [r2ghidra] Detected overlap for variable var_8fh
// WARNING: [r2ghidra] Detected overlap for variable var_99h
// WARNING: [r2ghidra] Detected overlap for variable var_aeh
// WARNING: [r2ghidra] Detected overlap for variable var_c9h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint16_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    uint32_t var_f0h;
    uint32_t var_ech;
    uint32_t var_e8h;
    uint32_t var_e4h;
    uint32_t var_e0h;
    int32_t var_dch;
    int32_t var_d8h;
    int32_t var_d4h;
    uint32_t var_d0h;
    uint32_t var_c8h;
    int32_t var_c4h;
    int32_t var_c0h;
    int32_t var_bch;
    uint32_t var_b8h;
    int32_t var_b4h;
    int32_t var_ach;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_a0h;
    uint32_t var_98h;
    uint32_t var_94h;
    uint32_t var_8ch;
    uint32_t var_88h;
    int32_t var_84h;
    uint32_t var_7ch;
    int32_t var_74h;
    int32_t var_6ch;
    int32_t var_68h;
    uint32_t var_64h;
    int32_t var_60h;
    int32_t var_58h;
    uint32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_40h;
    uint32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_34h;
    int32_t var_2ch;
    int32_t var_28h;
    uint16_t var_24h;
    uint8_t var_1eh;
    undefined4 var_1ch;
    uint32_t var_14h;
    uint32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_1eh = 0xf8;
    var_24h = 0x51dd;
    bVar3 = true;
    uVar1 = var_24h;
    do {
        var_24h = uVar1;
        var_1eh = var_1eh - 1;
        uVar1 = var_24h - 1;
        uVar2 = 0 >> bVar3;
        bVar3 = (uVar2 & 0xd6) != 0;
        if (!bVar3) {
            sym.set_var(0, 0, (uint32_t)var_1eh, 0xd7, 0xffff966e, (uint32_t)uVar1, 0, (int32_t)(char)uVar2, -0x4a4dccd1
                        , 0xa5, 0, 0x1f1f586, 1, 0xa4, -7, 0x8434);
            return 0x8434;
        }
        var_eh._0_2_ = 0;
        while( true ) {
            if ((uint16_t)var_eh != 0x3a) {
                sym.set_var(0xd5537929, 0, (uint32_t)var_1eh, 0xd6, 0xffff966e, (uint32_t)var_24h, 
                            (uint32_t)(uint16_t)var_eh, 1, 1, 0xa4, 2, 0x1f1f586, -0x33e1067a, 0xa4, -7, 0x8434);
                return 0xd5537929;
            }
            if (uVar1 == 0) break;
            var_eh._0_2_ = 0x3b;
        }
    } while( true );
}
