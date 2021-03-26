
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049a31)
// WARNING: Removing unreachable block (ram,0x08049a6b)
// WARNING: Removing unreachable block (ram,0x08049b98)
// WARNING: Removing unreachable block (ram,0x08049bbc)
// WARNING: Removing unreachable block (ram,0x08049bb2)
// WARNING: Removing unreachable block (ram,0x08049bc2)
// WARNING: Removing unreachable block (ram,0x0804981d)
// WARNING: Removing unreachable block (ram,0x08049bd8)
// WARNING: Removing unreachable block (ram,0x080497c7)
// WARNING: Removing unreachable block (ram,0x08049933)
// WARNING: Removing unreachable block (ram,0x0804993d)
// WARNING: Removing unreachable block (ram,0x080498a4)
// WARNING: Removing unreachable block (ram,0x080498ea)
// WARNING: Removing unreachable block (ram,0x080499f6)
// WARNING: Removing unreachable block (ram,0x08049b1c)
// WARNING: Removing unreachable block (ram,0x080498f0)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2bh
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Detected overlap for variable var_6fh
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_4fh
// WARNING: [r2ghidra] Detected overlap for variable var_50h
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_60h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_6ch;
    int32_t var_68h;
    uint32_t var_61h;
    int32_t var_5ch;
    int32_t var_54h;
    uint32_t var_4ch;
    uint32_t var_45h;
    int32_t var_40h;
    uint32_t var_3ch;
    int32_t var_38h;
    int32_t var_30h;
    uint8_t var_29h;
    int32_t var_28h;
    uint16_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_18h = 0;
    var_24h = 0x4f79;
    var_28h = -1;
    var_29h = 0xe5;
    var_14h = 0;
    while( true ) {
        if (-0x18 < (int32_t)var_14h) {
            sym.set_var(0xbac64a68, var_14h, var_18h, -10, -1, 3, -0x50, (int32_t)(int16_t)var_24h, var_28h, 
                        (uint32_t)var_29h, 3, 0x89, -0x698fc47a);
            return 0;
        }
        var_18h = 0x250e;
        if (0x250d < var_14h) break;
        var_28h = var_28h & 1;
        var_29h = 3;
        var_24h = var_24h & 1;
        var_14h = var_14h - 3;
    }
    sym.set_var(0xbac64a68, var_14h, 0x250e, -10, -1, 3, -0x50, (int32_t)(int16_t)var_24h, var_28h, (uint32_t)var_29h, 3
                , 0x89, -0x698fc47a);
    return 0xfffffff6;
}
