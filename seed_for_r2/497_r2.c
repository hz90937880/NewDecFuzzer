
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x080497f3)
// WARNING: Removing unreachable block (ram,0x08049800)
// WARNING: Removing unreachable block (ram,0x0804971c)
// WARNING: Removing unreachable block (ram,0x08049749)
// WARNING: Removing unreachable block (ram,0x08049756)
// WARNING: Removing unreachable block (ram,0x0804974f)
// WARNING: Removing unreachable block (ram,0x0804975b)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_fh
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint32_t var_2ch;
    int32_t var_28h;
    int32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_14h;
    undefined4 var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0xffffffff;
    for (var_8h = 0; var_8h < 0x1a; var_8h = var_8h + 1) {
        var_ch = 0;
    }
    sym.set_var(var_8h, var_ch, 5, 0xff, -7, -0x12, 0xfffd);
    return 0xff;
}
