
// WARNING: Removing unreachable block (ram,0x0804979b)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_fh
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_34h

bool sym.func_1(void)
{
    int32_t var_35h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    uint8_t var_fh;
    uint16_t var_eh;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_4h = 8;
    var_8h = 0x25d16df2;
    var_eh = 0xffff;
    var_fh = 0xd3;
    var_35h._0_1_ = -0x21;
    for (var_ch = 0; var_ch != 0x1b; var_ch = var_ch + 1) {
        var_35h._0_1_ = -0x76;
    }
    for (var_ch = 0xfffffff7; var_ch != 0xffffffe8; var_ch = var_ch - 5) {
        var_8h = 1;
        var_fh = var_fh + 1;
        var_eh = var_eh ^ 0xfff8;
        var_4h = 1;
    }
    sym.set_var(var_4h, 0xc6a53d06, var_8h, 0x69f4288a, (int32_t)(char)var_35h ^ 0xffffffe8, (int32_t)(int16_t)var_eh, 
                (uint32_t)var_fh);
    return 0x8900fdb6 < (uint32_t)(((uint32_t)(int32_t)(char)var_35h % 0x1b < 0xd0) / 1 == 0) << 1 != 0x8900fdb6;
}
