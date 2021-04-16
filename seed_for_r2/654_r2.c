
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x0804981b)
// WARNING: Removing unreachable block (ram,0x0804980a)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_28h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_ch

undefined2 sym.func_1(void)
{
    int32_t var_54h;
    int32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_48h;
    int32_t var_44h;
    uint32_t var_3ch;
    int32_t var_38h;
    int32_t var_30h;
    uint16_t var_2ah;
    uint16_t var_28h;
    char var_25h;
    uint32_t var_24h;
    uint8_t var_1dh;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    int16_t var_10h;
    uint32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0x1510;
    var_14h = 5;
    var_18h = 0x393632ca;
    var_1ch = 0;
    var_1dh = 0xd6;
    var_24h = 0x22a57d88;
    var_25h = '=';
    var_28h = 0xe33a;
    for (var_dh._0_1_ = 0x18; (uint8_t)var_dh != 0x38; var_dh._0_1_ = (uint8_t)var_dh + 4) {
        if (((uint8_t)var_dh != 9) == 0xa298) {
            for (var_1ch = 0xffffffeb; 0x1a < var_1ch; var_1ch = var_1ch + 1) {
                var_1dh = var_1dh & (uint8_t)var_18h;
                var_24h = var_24h ^ 0x5d3c;
                var_25h = '\0';
            }
        } else {
            var_10h = 6;
            var_14h = var_14h + 1;
            var_18h = 0xffffa37b;
            var_1ch = -(uint32_t)(uint8_t)var_dh - 0x2822;
        }
        if (var_24h != 0) break;
    }
    for (var_2ah = 0xffe2; 0x29 < var_2ah; var_2ah = var_2ah + 3) {
        var_28h = 1;
    }
    sym.set_var(0x6e60b0ce, (uint32_t)(uint8_t)var_dh, 0xffffa37b, (int32_t)var_10h, var_14h, var_18h, var_1ch, 
                (int32_t)(char)var_1dh, var_24h, (int32_t)var_25h, var_24h ^ 0xfffffff8, (uint32_t)var_28h);
    return 0x5d3c;
}
