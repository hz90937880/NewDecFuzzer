
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804982b)
// WARNING: Removing unreachable block (ram,0x0804984c)
// WARNING: Removing unreachable block (ram,0x080499a7)
// WARNING: Removing unreachable block (ram,0x08049a0d)
// WARNING: Removing unreachable block (ram,0x08049a25)
// WARNING: Removing unreachable block (ram,0x080499b3)
// WARNING: Removing unreachable block (ram,0x080499ca)
// WARNING: Removing unreachable block (ram,0x08049a2c)
// WARNING: Removing unreachable block (ram,0x08049898)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_20h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_31h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_3dh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_26h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_3dh
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_47h
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_7bh
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Detected overlap for variable var_8ah
// WARNING: [r2ghidra] Detected overlap for variable var_5bh
// WARNING: [r2ghidra] Detected overlap for variable var_5ch
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_6ch
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_88h;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_6dh;
    int32_t var_68h;
    int32_t var_60h;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_4ch;
    int32_t var_44h;
    uint32_t var_3ch;
    int32_t var_38h;
    uint32_t var_31h;
    uint32_t var_2ch;
    uint32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_1ch = -0x4539b598;
    var_24h = 0;
    var_20h = 0;
    while( true ) {
        if (-0x18 < (int32_t)var_20h) {
            sym.set_var(var_1ch, var_20h, var_24h, -10, -1, 3, -0x50, 0x4f79, -1, 0xe5, 3, 0x89, -0x698fc47a);
            return 0;
        }
        var_24h = 0x250e;
        if (0x250d < var_20h) break;
        stack0xffffffcc = 0xf4fd1a68;
        var_2ch = 0xfffffffd;
        while (var_2ch == 0x28) {
            unique0x00000f30 = stack0xffffffcc & var_1ch;
            var_1ch = (char)unique0x00000f30 * 0x17;
            var_2ch = 0x2d;
        }
        sym.packed_printf(0x250e);
        var_20h = var_20h - 3;
    }
    sym.set_var(var_1ch, var_20h, 0x250e, -10, -1, 3, -0x50, 0x4f79, -1, 0xe5, 3, 0x89, -0x698fc47a);
    return 0xfffffff6;
}
