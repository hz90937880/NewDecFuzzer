
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049789)
// WARNING: Removing unreachable block (ram,0x080497b9)
// WARNING: Removing unreachable block (ram,0x080497bf)
// WARNING: Removing unreachable block (ram,0x080497f1)
// WARNING: Removing unreachable block (ram,0x080497fb)
// WARNING: Removing unreachable block (ram,0x080499c6)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_48h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_61h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

uint8_t sym.func_1(void)
{
    uint8_t uVar1;
    int32_t arg_30h;
    int32_t iVar2;
    int32_t var_68h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    undefined4 var_48h;
    uint32_t var_40h;
    uint32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_34h;
    int32_t var_30h;
    int32_t var_28h;
    uint32_t var_22h;
    int32_t var_18h;
    uint16_t var_14h;
    uint8_t var_11h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_14h = 0xfff9;
    var_18h = -0x1ba56e8e;
    for (var_11h = 0; var_11h < 0x1e; var_11h = var_11h + 2) {
        var_14h = 0x118;
    }
    for (var_10h = 0; var_10h < -0xb; var_10h = var_10h + -5) {
        var_18h = 0x21;
    }
    iVar2 = 1 - (var_11h != 0 | 0xd16c);
    uVar1 = var_10h == 1 ^ 0xac;
    if (((uint16_t)(0xfd < (uint32_t)(int32_t)(char)uVar1) < (uint16_t)(var_14h + 1)) || (var_14h != 0xffff)) {
        arg_30h = 1;
    } else {
        arg_30h = 0;
    }
    sym.set_var(var_10h, (uint32_t)var_11h, 0xffffffff, 1, (uint32_t)var_14h, 
                (uint32_t)
                (var_18h !=
                (iVar2 + ((int32_t)((int64_t)iVar2 * 0xac232a5 >> 0x3a) - (iVar2 >> 0x1f)) * -0x5f2e0768 & 0xffU) * 0x80
                ), 0x59c2d16c, (int32_t)(char)uVar1, 0xfe, 0x59c2d16c, arg_30h);
    return var_11h;
}
