
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049bf3)
// WARNING: Removing unreachable block (ram,0x08049c10)
// WARNING: Removing unreachable block (ram,0x08049c66)
// WARNING: Removing unreachable block (ram,0x08049c5f)
// WARNING: Removing unreachable block (ram,0x08049c6b)
// WARNING: Removing unreachable block (ram,0x08049d60)
// WARNING: Removing unreachable block (ram,0x08049ca5)
// WARNING: Removing unreachable block (ram,0x08049d20)
// WARNING: Removing unreachable block (ram,0x08049d19)
// WARNING: Removing unreachable block (ram,0x08049d25)
// WARNING: Removing unreachable block (ram,0x08049d41)
// WARNING: Removing unreachable block (ram,0x08049d3a)
// WARNING: Removing unreachable block (ram,0x08049d46)
// WARNING: Removing unreachable block (ram,0x080498cc)
// WARNING: Removing unreachable block (ram,0x080498f1)
// WARNING: Removing unreachable block (ram,0x080498fe)
// WARNING: Removing unreachable block (ram,0x08049e5c)
// WARNING: Removing unreachable block (ram,0x08049e69)
// WARNING: Removing unreachable block (ram,0x08049a06)
// WARNING: Removing unreachable block (ram,0x08049a27)
// WARNING: Removing unreachable block (ram,0x08049a7c)
// WARNING: Removing unreachable block (ram,0x08049a2d)
// WARNING: Removing unreachable block (ram,0x08049a82)
// WARNING: Removing unreachable block (ram,0x08049b29)
// WARNING: Removing unreachable block (ram,0x08049b13)
// WARNING: Removing unreachable block (ram,0x08049be7)
// WARNING: Removing unreachable block (ram,0x08049bc9)
// WARNING: Removing unreachable block (ram,0x08049bee)
// WARNING: Removing unreachable block (ram,0x0804997d)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_12h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ah to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_21h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_cah
// WARNING: [r2ghidra] Detected overlap for variable var_cbh
// WARNING: [r2ghidra] Detected overlap for variable var_c2h
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_dah
// WARNING: [r2ghidra] Detected overlap for variable var_dbh
// WARNING: [r2ghidra] Detected overlap for variable var_81h
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_83h
// WARNING: [r2ghidra] Detected overlap for variable var_84h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_8dh
// WARNING: [r2ghidra] Detected overlap for variable var_8eh
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_a9h
// WARNING: [r2ghidra] Detected overlap for variable var_70h
// WARNING: [r2ghidra] Detected overlap for variable var_98h
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Detected overlap for variable var_c0h

undefined4 sym.func_1(void)
{
    int32_t var_f8h;
    int32_t var_f4h;
    int32_t var_f0h;
    int32_t var_e4h;
    int32_t var_e0h;
    uint32_t var_d8h;
    uint32_t var_d4h;
    int32_t var_d0h;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_bch;
    int32_t var_b8h;
    uint32_t var_b4h;
    int32_t var_b0h;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_9ah;
    int32_t var_94h;
    int32_t var_8ch;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_71h;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    uint32_t var_5ch;
    uint32_t var_58h;
    int32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_44h;
    uint32_t var_40h;
    int32_t var_3ch;
    char var_35h;
    int32_t var_34h;
    uint32_t var_30h;
    uint32_t var_28h;
    int32_t var_20h;
    uint32_t var_18h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_30h = 0xc95aa9af;
    var_34h = -1;
    var_10h = 0xfffffffb;
    var_35h = '\x14';
    while (var_35h == -0x19) {
        var_10h = 0x17;
        var_30h = var_30h ^ 0xfff7;
        var_34h = var_30h | 0xfff7;
        var_35h = -0x1a;
    }
    var_44h = 0;
    while (var_44h == 0x1b) {
        var_30h = var_30h | 0xb372ba29;
        var_44h = 0x23;
    }
    sym.set_var(0xdbea5223, 0xf746e3df, var_10h, 1, -2, 0, 0x46159332, 1, 1, 0xfff7, 3, 0x60fc, 1, var_30h, 0x4d99, 0, 1
                , 9, var_34h, 0x24fe5f2f, 0x69208027, 0x747af82b, 0x1904);
    return 1;
}
