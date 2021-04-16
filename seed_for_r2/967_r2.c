
// WARNING: Variable defined which should be unmapped: var_9h
// WARNING: [r2ghidra] Failed to match type signed int for variable var_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Detected overlap for variable var_8h

undefined4 sym.func_1(void)
{
    int32_t var_34h;
    int32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_20h;
    int32_t var_19h;
    uint16_t var_12h;
    int32_t var_10h;
    int32_t var_9h;
    
    sym.__x86.get_pc_thunk.ax();
    var_12h = 0xffff;
    for (stack0xffffffe4 = -0x16; -9 < stack0xffffffe4; unique0x00000f40 = stack0xffffffe4 + 9) {
        var_12h = (uint16_t)(stack0xffffffe4 != 0) % 0xfa;
    }
    sym.set_var(0xd3, 8, 99, -0x2f, -0x5473c52d, 0xfffa, (uint32_t)var_12h);
    return 8;
}
