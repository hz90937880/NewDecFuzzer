
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x080497d0)
// WARNING: Removing unreachable block (ram,0x080497bc)
// WARNING: Removing unreachable block (ram,0x080497c2)
// WARNING: Removing unreachable block (ram,0x0804984d)
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah

uint32_t sym.func_1(void)
{
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_3ch;
    uint32_t var_34h;
    int32_t var_30h;
    uint32_t var_28h;
    int32_t var_24h;
    uint32_t var_1ah;
    uint16_t var_12h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_12h = 0;
    stack0xffffffe4 = -0x1cd724e6;
    var_10h = 0xfffffff0;
    while (var_10h == 0x14) {
        var_12h = 9;
        unique0x00000f40 = stack0xffffffe4 + 1;
        var_10h = 0x15;
    }
    sym.set_var(0xfffb, 0, 0x727c, 0, 0xfffb, var_10h, 0xfffe, (uint32_t)var_12h, 0xffffe816, stack0xffffffe4);
    return var_10h;
}
