
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x0804971d)
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_29h

int32_t sym.func_1(void)
{
    int32_t var_28h;
    int32_t var_20h;
    uint32_t var_18h;
    uint32_t var_14h;
    int16_t var_eh;
    uint32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0x642c70bb;
    var_eh = -0xe03;
    var_ch = 0;
    while (var_ch == 0xe) {
        var_eh = 0xff;
        for (var_14h = 0x19; -1 < (int32_t)var_14h; var_14h = var_14h - 1) {
            var_8h = 0x279c90e6;
        }
        var_ch = 0x12;
    }
    sym.set_var(0x68206240, var_8h, var_ch, 0x300b);
    return (int32_t)var_eh;
}
