
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049803)
// WARNING: Removing unreachable block (ram,0x08049821)
// WARNING: Removing unreachable block (ram,0x08049998)
// WARNING: Removing unreachable block (ram,0x080499fb)
// WARNING: Removing unreachable block (ram,0x08049a13)
// WARNING: Removing unreachable block (ram,0x080499a4)
// WARNING: Removing unreachable block (ram,0x080499bb)
// WARNING: Removing unreachable block (ram,0x08049a1a)
// WARNING: Removing unreachable block (ram,0x0804986d)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_21h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2dh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_16h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_44h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_50h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_37h
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_73h
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_64h
// WARNING: [r2ghidra] Detected overlap for variable var_50h
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_65h;
    int32_t var_60h;
    int32_t var_58h;
    int32_t var_51h;
    int32_t var_48h;
    undefined4 var_44h;
    int32_t var_3ch;
    int32_t var_34h;
    uint32_t var_2ch;
    int32_t var_28h;
    int32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_14h = 0;
    var_10h = 0;
    while( true ) {
        if (-0x18 < (int32_t)var_10h) {
            sym.set_var(-0x4539b598, var_10h, var_14h, -10, -1, 3, -0x50, 0x4f79, -1, 0xe5, 3, 0x89, -0x698fc47a);
            return 0;
        }
        var_14h = 0x250e;
        if (0x250d < var_10h) break;
        var_1ch = 0xfffffffd;
        while (var_1ch == 0x28) {
            var_1ch = 0x2d;
        }
        var_10h = var_10h - 3;
    }
    sym.set_var(-0x4539b598, var_10h, 0x250e, -10, -1, 3, -0x50, 0x4f79, -1, 0xe5, 3, 0x89, -0x698fc47a);
    return 0xfffffff6;
}
