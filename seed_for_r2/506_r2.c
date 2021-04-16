
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x080499e7)
// WARNING: Removing unreachable block (ram,0x080497c1)
// WARNING: Removing unreachable block (ram,0x0804991f)
// WARNING: Removing unreachable block (ram,0x080498f0)
// WARNING: Removing unreachable block (ram,0x0804980d)
// WARNING: Removing unreachable block (ram,0x0804986e)
// WARNING: Removing unreachable block (ram,0x080498a4)
// WARNING: Removing unreachable block (ram,0x0804989d)
// WARNING: Removing unreachable block (ram,0x080498a9)
// WARNING: Removing unreachable block (ram,0x080498ad)
// WARNING: Removing unreachable block (ram,0x080498b4)
// WARNING: Removing unreachable block (ram,0x080498bb)
// WARNING: Removing unreachable block (ram,0x080498c0)
// WARNING: Removing unreachable block (ram,0x08049975)
// WARNING: Removing unreachable block (ram,0x080498dd)
// WARNING: Removing unreachable block (ram,0x080498fe)
// WARNING: Removing unreachable block (ram,0x08049962)
// WARNING: Removing unreachable block (ram,0x08049911)
// WARNING: Removing unreachable block (ram,0x08049968)
// WARNING: Removing unreachable block (ram,0x0804996b)
// WARNING: Removing unreachable block (ram,0x0804997f)
// WARNING: Removing unreachable block (ram,0x08049984)
// WARNING: Removing unreachable block (ram,0x080499a3)
// WARNING: Removing unreachable block (ram,0x08049a8b)
// WARNING: Removing unreachable block (ram,0x08049a1c)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2ah to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_50h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_17h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_23h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_7ch
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_64h
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_76h

char sym.func_1(void)
{
    int32_t var_88h;
    int32_t var_84h;
    uint32_t var_7eh;
    int32_t var_74h;
    int32_t var_6ch;
    uint32_t var_68h;
    uint32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    undefined4 var_50h;
    int32_t var_4ch;
    uint32_t var_44h;
    uint32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_34h;
    int32_t var_30h;
    uint8_t var_29h;
    int32_t var_28h;
    uint8_t var_23h;
    int32_t var_20h;
    uint32_t var_1ch;
    char var_17h;
    uint32_t var_14h;
    uint32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_1ch = 0xfffffff8;
    var_20h = -0x78b533ff;
    for (var_29h = 0xe3; 0xd < var_29h; var_29h = var_29h + 1) {
        var_1ch = 0;
        var_20h = var_20h + 1;
    }
    var_23h = 0x5f;
    var_1ch = var_1ch ^ 0x5f;
    for (var_17h = -9; -0x10 < var_17h; var_17h = var_17h + -1) {
        var_1ch = 0xfffffffe;
        var_23h = 1;
    }
    sym.set_var(4, 0xd058a835, 1, (int32_t)var_17h, var_1ch, var_20h, 0, (uint32_t)var_23h, -3, -10, 1);
    return var_17h;
}
