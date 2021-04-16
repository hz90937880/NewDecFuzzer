
// WARNING: Variable defined which should be unmapped: var_8h
// WARNING: Removing unreachable block (ram,0x0804984b)
// WARNING: Removing unreachable block (ram,0x080498b9)
// WARNING: Removing unreachable block (ram,0x080497d7)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_34h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_44h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2bh
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_13h
// WARNING: [r2ghidra] Detected overlap for variable var_2fh
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_3fh
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

uint32_t sym.func_1(void)
{
    uint32_t uVar1;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_68h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_50h;
    int32_t var_48h;
    undefined4 var_44h;
    int32_t var_3ch;
    int32_t var_38h;
    undefined4 var_34h;
    uint32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    sym.__x86.get_pc_thunk.ax();
    var_1ch = 0xffffffff;
    for (var_ch = 0xb; 4 < var_ch; var_ch = var_ch + -5) {
        for (var_10h = -0x10; var_10h < -0x15; var_10h = var_10h + -1) {
            var_1ch = 0xffffffe5;
        }
    }
    uVar1 = 0xe9;
    if (var_ch < 0xe9) {
        sym.set_var(var_ch, 0, -1, -0x1921ee2a, 0xffff, -0xf6c4fc0, 0x4dd9, 0xe9, 1, 0, var_1ch);
        uVar1 = var_1ch;
    }
    return uVar1;
}
