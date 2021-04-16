
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x08049800)
// WARNING: Removing unreachable block (ram,0x080497c4)
// WARNING: Removing unreachable block (ram,0x08049706)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_30h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_9h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_26h

undefined4 sym.func_1(void)
{
    undefined4 var_30h;
    int32_t var_2ch;
    int32_t var_24h;
    uint32_t var_20h;
    uint32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int16_t var_ch;
    uint8_t var_9h;
    uint32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_9h = 0xeb;
    var_ch = 0x37de;
    var_8h = 0x3643;
    var_14h = 1;
    var_10h = 9;
    while (var_10h == 0x11) {
        var_9h = var_9h + 1;
        var_8h = (uint32_t)(4 < var_8h) / (uint32_t)var_14h;
        if (var_8h != 0) {
            if (var_9h == 0) {
                var_ch = 0;
            }
            var_14h = ZEXT14(-0x54a65983 < (int32_t)(uint32_t)(var_9h != 0));
        }
        var_10h = 0x12;
    }
    sym.set_var(var_8h, (uint32_t)var_9h, 5, (int32_t)var_ch);
    return 5;
}
