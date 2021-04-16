
// WARNING: Removing unreachable block (ram,0x080496d0)
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_13h

undefined4 sym.func_1(void)
{
    int32_t var_18h;
    uint16_t var_10h;
    uint8_t var_dh;
    uint32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_4h = 0x2c03342e;
    var_ch = 1;
    var_dh = 200;
    var_10h = 0x637b;
    for (var_8h = 0; var_8h != 0x15; var_8h = var_8h + 1) {
        var_ch = var_8h;
        if (var_8h != 0) {
            var_dh = var_dh ^ (uint8_t)var_8h;
        }
        var_10h = var_10h & var_8h != 0;
        var_4h = var_4h & var_8h;
    }
    sym.set_var(var_4h, 0x7770, var_ch, (int32_t)(char)var_dh, (uint32_t)var_10h);
    return 0x7770;
}
