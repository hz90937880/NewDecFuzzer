
// WARNING: Variable defined which should be unmapped: var_8h
// WARNING: Removing unreachable block (ram,0x08049752)
// WARNING: Removing unreachable block (ram,0x080497f2)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_23h
// WARNING: [r2ghidra] Detected overlap for variable var_31h
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint32_t var_48h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_30h;
    int32_t var_2ch;
    uint32_t var_28h;
    int32_t var_20h;
    int32_t var_18h;
    int32_t var_14h;
    uint8_t var_dh;
    int32_t var_ch;
    int32_t var_8h;
    
    sym.__x86.get_pc_thunk.ax();
    var_dh = 0x7a;
    for (var_ch = -7; var_ch < 9; var_ch = var_ch + 1) {
        var_dh = 0x23;
    }
    sym.set_var(4, var_ch, 5, (uint32_t)var_dh, 5, 0x7d625c2a, 0xffff9493, 0x65, -1);
    return 0x65;
}
