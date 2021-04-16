
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: [r2ghidra] Detected overlap for variable var_9h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_30h

undefined sym.func_1(void)
{
    undefined uVar1;
    int32_t var_34h;
    int32_t var_2ch;
    int32_t var_20h;
    uint32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    if (0U % (1U % 0) == 0) {
        sym.set_var(1, 0, 0, -0x46cc777a, -4);
        uVar1 = 0x78;
    } else {
        sym.set_var(1, 0, 0, 0, 1);
        uVar1 = 0;
    }
    return uVar1;
}
