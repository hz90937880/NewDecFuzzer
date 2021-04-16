
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x08049794)
// WARNING: Removing unreachable block (ram,0x080497c6)
// WARNING: Removing unreachable block (ram,0x080497cd)
// WARNING: Removing unreachable block (ram,0x080497d4)
// WARNING: Removing unreachable block (ram,0x080497d9)
// WARNING: Removing unreachable block (ram,0x08049828)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_1fh
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_28h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_ch

uint8_t sym.func_1(void)
{
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    int32_t var_24h;
    int32_t var_1ch;
    uint8_t var_15h;
    uint32_t var_14h;
    uint32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_15h = 0xbe;
    var_14h = 0;
    for (var_dh._0_1_ = 0; (uint8_t)var_dh < 0x23; var_dh._0_1_ = (uint8_t)var_dh + 1) {
        if ((uint8_t)var_dh == 0) {
            var_15h = var_15h + 1;
        }
        var_14h = 1;
    }
    sym.set_var(-0x7c3703ab, (uint32_t)(uint8_t)var_dh, var_14h, (uint32_t)var_15h, 0x275d, -0x58, -6, 0xab, 0x1940);
    return (uint8_t)var_dh;
}
