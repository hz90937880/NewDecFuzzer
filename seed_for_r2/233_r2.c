
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804977f)
// WARNING: Removing unreachable block (ram,0x08049785)
// WARNING: Removing unreachable block (ram,0x080497e8)
// WARNING: Removing unreachable block (ram,0x0804979d)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_3fh
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_43h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_47h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined2 sym.func_1(void)
{
    int32_t var_50h;
    int32_t var_3eh;
    int32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    int32_t var_28h;
    uint32_t var_22h;
    int32_t var_1ch;
    int32_t var_18h;
    uint8_t var_11h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_11h = 3;
    for (var_10h = 0; 0x1b < var_10h; var_10h = var_10h + 7) {
        var_11h = var_11h + 1;
    }
    sym.set_var(var_10h, 1, 9, 0x20, 0xfe, (uint32_t)var_11h, 0, 1, -0x8d3, 0, -1);
    return 0;
}
