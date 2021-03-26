
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x0804982b)
// WARNING: Removing unreachable block (ram,0x08049839)
// WARNING: Removing unreachable block (ram,0x08049795)
// WARNING: Removing unreachable block (ram,0x0804976b)
// WARNING: Removing unreachable block (ram,0x080497fa)
// WARNING: [r2ghidra] Detected overlap for variable var_13h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_1bh
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_3eh

undefined sym.func_1(void)
{
    int32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_34h;
    uint32_t var_2ch;
    uint32_t var_24h;
    uint32_t var_20h;
    int32_t var_18h;
    uint32_t var_12h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0;
    while (var_8h == 0x1f) {
        var_8h = 0x20;
    }
    sym.set_var(2, 0xffffffff, var_8h, -1, 0x14ac, 0x6b, -8);
    return 0;
}
