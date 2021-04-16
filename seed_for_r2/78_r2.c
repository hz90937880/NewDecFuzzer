
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x080497b6)
// WARNING: Removing unreachable block (ram,0x080497c3)
// WARNING: Removing unreachable block (ram,0x08049728)
// WARNING: Removing unreachable block (ram,0x080497fe)
// WARNING: Removing unreachable block (ram,0x0804983a)
// WARNING: Removing unreachable block (ram,0x08049840)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_28h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_3ch

undefined4 sym.func_1(void)
{
    int32_t var_40h;
    int32_t var_38h;
    uint32_t var_34h;
    int32_t var_30h;
    undefined4 var_28h;
    uint32_t var_22h;
    int32_t var_1ch;
    uint32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    uint32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0x9be67e78;
    var_14h = -2;
    for (var_1ch = 0; var_1ch < 7; var_1ch = var_1ch + 9) {
        var_ch = 1;
        var_14h = 0;
    }
    sym.set_var(5, 1, var_ch, 1, 0, var_14h, 0xfffe, 0);
    return 0;
}
