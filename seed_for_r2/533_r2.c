
// WARNING: Removing unreachable block (ram,0x080498a1)
// WARNING: Removing unreachable block (ram,0x080498b2)
// WARNING: Removing unreachable block (ram,0x080499f2)
// WARNING: Removing unreachable block (ram,0x08049820)
// WARNING: Removing unreachable block (ram,0x08049841)
// WARNING: Removing unreachable block (ram,0x080498bc)
// WARNING: Removing unreachable block (ram,0x080498c7)
// WARNING: Removing unreachable block (ram,0x08049918)
// WARNING: Removing unreachable block (ram,0x080499d9)
// WARNING: Removing unreachable block (ram,0x080499ca)
// WARNING: Removing unreachable block (ram,0x080499e7)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_47h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_58h
// WARNING: [r2ghidra] Detected overlap for variable var_5ch

int32_t sym.func_1(void)
{
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    uint32_t var_74h;
    int32_t var_70h;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_5eh;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    undefined4 var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    uint32_t var_18h;
    int32_t var_14h;
    int32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 1;
    for (var_4h = 0; var_4h != 0xfffffff8; var_4h = var_4h - 2) {
        var_8h = (char)((1 < (int32_t)var_4h) << ((uint8_t)var_4h & 0x1f)) * -0x24 ^ var_4h;
    }
    sym.set_var(0, var_8h, 3, -0x6961, 0x84a8, -0x2680, 1, 7, -0x1b9e6937, -0x3a2043b2, 0, -0x265ee2d0);
    return var_8h;
}
