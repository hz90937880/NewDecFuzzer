
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804982e)
// WARNING: Removing unreachable block (ram,0x0804984f)
// WARNING: Removing unreachable block (ram,0x08049a14)
// WARNING: Removing unreachable block (ram,0x0804989b)
// WARNING: Removing unreachable block (ram,0x08049a33)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_20h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_35h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_3dh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2ah to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_3dh
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_47h
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_7bh
// WARNING: [r2ghidra] Detected overlap for variable var_34h
// WARNING: [r2ghidra] Detected overlap for variable var_8ah
// WARNING: [r2ghidra] Detected overlap for variable var_5bh
// WARNING: [r2ghidra] Detected overlap for variable var_5ch
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_6ch
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    undefined4 uVar1;
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
    uint32_t var_35h;
    uint32_t var_30h;
    int32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_1ch = -0x4539b598;
    var_24h = 0;
    var_28h = -1;
    var_20h = 0;
    while( true ) {
        if (-0x18 < (int32_t)var_20h) {
            if ((char)var_28h < '\0') {
                sym.set_var(var_1ch, var_20h, var_24h, -10, var_28h, 3, -0x50, 0x4f79, -1, 0xe5, 3, 0x89, -0x698fc47a);
                uVar1 = 0;
            } else {
                sym.set_var(var_1ch, var_20h, var_24h, -10, var_28h, 3, -0x50, 0, -1, 0xe5, 3, 0x89, -0x698fc47a);
                uVar1 = 0xffffffff;
            }
            return uVar1;
        }
        if (0x250d < var_20h) break;
        stack0xffffffc8 = 0xf4fd1a68;
        var_24h = 0xe5;
        var_30h = 0xfffffffd;
        while (var_30h == 0x28) {
            unique0x00000f30 = stack0xffffffc8 & var_1ch;
            var_1ch = (char)unique0x00000f30 * -0x12;
            var_30h = 0x2d;
        }
        var_28h = var_28h + -1;
        sym.packed_printf(0xe5);
        var_20h = var_20h - 3;
    }
    sym.set_var(var_1ch, var_20h, 0x250e, -10, var_28h, 3, -0x50, 0x4f79, -1, 0xe5, 3, 0x89, -0x698fc47a);
    return 0xfffffff6;
}
