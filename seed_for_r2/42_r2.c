
// WARNING: Variable defined which should be unmapped: var_5h
// WARNING: Removing unreachable block (ram,0x080497e2)
// WARNING: Removing unreachable block (ram,0x080499bc)
// WARNING: Removing unreachable block (ram,0x0804982f)
// WARNING: Removing unreachable block (ram,0x080499d5)
// WARNING: Removing unreachable block (ram,0x080499db)
// WARNING: Removing unreachable block (ram,0x080499e1)
// WARNING: Removing unreachable block (ram,0x080499e8)
// WARNING: Removing unreachable block (ram,0x080499ed)
// WARNING: Removing unreachable block (ram,0x08049a15)
// WARNING: Removing unreachable block (ram,0x08049a24)
// WARNING: Removing unreachable block (ram,0x08049838)
// WARNING: Removing unreachable block (ram,0x0804993c)
// WARNING: Removing unreachable block (ram,0x080499a4)
// WARNING: Removing unreachable block (ram,0x08049951)
// WARNING: Removing unreachable block (ram,0x080499ab)
// WARNING: Removing unreachable block (ram,0x080499c3)
// WARNING: Removing unreachable block (ram,0x080499c8)
// WARNING: Removing unreachable block (ram,0x08049871)
// WARNING: Removing unreachable block (ram,0x080498ae)
// WARNING: Removing unreachable block (ram,0x080498a7)
// WARNING: Removing unreachable block (ram,0x080498b3)
// WARNING: Removing unreachable block (ram,0x080498bd)
// WARNING: Removing unreachable block (ram,0x08049909)
// WARNING: Removing unreachable block (ram,0x08049a2e)
// WARNING: Removing unreachable block (ram,0x08049a80)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_34h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_6ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_5bh
// WARNING: [r2ghidra] Detected overlap for variable var_61h
// WARNING: [r2ghidra] Detected overlap for variable var_4h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_7ch
// WARNING: [r2ghidra] Detected overlap for variable var_89h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    undefined2 extraout_var;
    uint8_t uVar1;
    int32_t var_90h;
    int32_t var_88h;
    uint32_t var_84h;
    int32_t var_80h;
    int32_t var_78h;
    int32_t var_74h;
    undefined4 var_6ch;
    uint32_t var_68h;
    int32_t var_60h;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    uint32_t var_4ch;
    int32_t var_48h;
    uint32_t var_40h;
    int32_t var_3ch;
    uint32_t var_38h;
    undefined4 var_34h;
    uint32_t var_30h;
    uint32_t var_28h;
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_14h;
    uint32_t var_ch;
    uint32_t var_5h;
    
    sym.__x86.get_pc_thunk.ax();
    var_14h = 6;
    var_1ch = 0xbc2a41b8;
    for (var_ch = 0xfffffffe; var_14h = var_14h + -1, 0xa1 >> ((uint8_t)var_ch & 0x1f) != 0; var_ch = var_ch & 4) {
        var_1ch = 0x2b;
    }
    if (((uint32_t)((((int32_t)var_ch < 0) < 0x40a1) < 0xc91981f0) * -0x1d == 0) || (var_1ch == 0)) {
        uVar1 = 0;
    } else {
        uVar1 = 1;
    }
    sym.set_var(0, (uint32_t)(0xfe < uVar1), 0xce3e63e3, 0x62, var_14h, 0x40a1, var_1ch, -0x330891a1, -0x36e67e10, 0, 
                -0x637ca57e, -5);
    return CONCAT22(extraout_var, 0x62);
}
