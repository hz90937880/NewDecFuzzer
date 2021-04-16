
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x08049804)
// WARNING: Removing unreachable block (ram,0x08049873)
// WARNING: Removing unreachable block (ram,0x080498ac)
// WARNING: Removing unreachable block (ram,0x080498a1)
// WARNING: Removing unreachable block (ram,0x080498a7)
// WARNING: Removing unreachable block (ram,0x080498b3)
// WARNING: Removing unreachable block (ram,0x080498b6)
// WARNING: Removing unreachable block (ram,0x080497d2)
// WARNING: Removing unreachable block (ram,0x0804984a)
// WARNING: Removing unreachable block (ram,0x08049986)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ah to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_11h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_50h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_20h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_24h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_51h;
    uint32_t var_48h;
    uint32_t var_44h;
    int32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_34h;
    uint32_t var_2ch;
    int32_t var_25h;
    uint16_t var_20h;
    uint16_t var_1eh;
    int32_t var_1ch;
    int32_t var_18h;
    char var_11h;
    int32_t var_10h;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_18h = 0xd5dc534;
    var_1ch = -0x1d501a78;
    var_1eh = 0xbdad;
    var_20h = 0x6b81;
    for (var_11h = '\x18'; var_11h < -8; var_11h = var_11h + -5) {
        var_18h = var_18h ^ 0x15359783;
        var_1ch = -8;
        var_1eh = var_1eh ^ 0xffbf;
        var_20h = 0xa945;
    }
    sym.set_var(0x593c869a, 0xee6e, 0x5bdddd59, (int32_t)var_11h, var_18h, var_1ch, (int32_t)(int16_t)var_1eh, 
                (uint32_t)var_20h);
    return var_1ch;
}
