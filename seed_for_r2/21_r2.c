
// WARNING: Removing unreachable block (ram,0x08049806)
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_38h

uint32_t sym.func_1(void)
{
    int32_t var_44h;
    uint32_t var_40h;
    int32_t var_3ch;
    uint32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0xd1a6f322;
    var_10h = 0xffffffff;
    var_14h = 0xd42374b1;
    for (var_4h = 0; -0x13 < (int32_t)var_4h; var_4h = var_4h - 1) {
    }
    if ((var_4h ^ 1 | 0x9b) == 0) {
        var_14h = 5;
    } else {
        var_ch = 0;
        var_10h = 0x1b;
    }
    sym.set_var(1, (uint32_t)(0xc6 < (int32_t)var_ch), 0x8eb98765, (uint32_t)(0xc6 < (int32_t)var_ch), 6, var_ch, 
                var_10h);
    return var_14h;
}
