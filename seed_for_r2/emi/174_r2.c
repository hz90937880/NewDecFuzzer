
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049828)
// WARNING: Removing unreachable block (ram,0x08049846)
// WARNING: Removing unreachable block (ram,0x080499f8)
// WARNING: Removing unreachable block (ram,0x08049a6f)
// WARNING: Removing unreachable block (ram,0x08049a8b)
// WARNING: Removing unreachable block (ram,0x08049a07)
// WARNING: Removing unreachable block (ram,0x08049a1e)
// WARNING: Removing unreachable block (ram,0x08049a96)
// WARNING: Removing unreachable block (ram,0x08049892)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_20h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_3dh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_49h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_26h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_76h
// WARNING: [r2ghidra] Detected overlap for variable var_77h
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Detected overlap for variable var_57h
// WARNING: [r2ghidra] Detected overlap for variable var_58h
// WARNING: [r2ghidra] Detected overlap for variable var_5eh
// WARNING: [r2ghidra] Detected overlap for variable var_68h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_69h;
    int32_t var_64h;
    int32_t var_5ch;
    int32_t var_54h;
    int32_t var_50h;
    uint32_t var_48h;
    int32_t var_44h;
    uint32_t var_3dh;
    uint32_t var_38h;
    int32_t var_34h;
    uint8_t var_2eh;
    uint8_t var_2dh;
    int32_t var_2ch;
    uint32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_1ch = -0x4539b598;
    var_24h = 0;
    var_2ch = -1;
    var_2dh = 0xe5;
    var_2eh = 3;
    var_20h = 0;
    while( true ) {
        if (-0x18 < (int32_t)var_20h) {
            sym.set_var(var_1ch, var_20h, var_24h, -10, -1, 3, -0x50, 0x4f79, var_2ch, (uint32_t)var_2dh, 
                        (uint32_t)var_2eh, 0x89, -0x698fc47a);
            return 0;
        }
        var_24h = 0x250e;
        if (0x250d < var_20h) break;
        stack0xffffffc0 = 0xf4fd1a68;
        var_38h = 0xfffffffd;
        while (var_38h == 0x28) {
            unique0x00000f30 = stack0xffffffc0 & var_1ch;
            var_1ch = (char)unique0x00000f30 * 0x17;
            var_38h = 0x2d;
        }
        var_2ch = var_2ch & 1;
        if (var_38h != 0) {
            var_2dh = 3;
        }
        var_2eh = var_2eh ^ ((var_38h != 0) == 0x7b1aa435) == 0x682f;
        sym.packed_printf(0x250e);
        var_20h = var_20h - 3;
    }
    sym.set_var(var_1ch, var_20h, 0x250e, -10, -1, 3, -0x50, 0x4f79, var_2ch, (uint32_t)var_2dh, (uint32_t)var_2eh, 0x89
                , -0x698fc47a);
    return 0xfffffff6;
}
