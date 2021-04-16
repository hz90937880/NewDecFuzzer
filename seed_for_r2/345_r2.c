
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x080498a2)
// WARNING: Removing unreachable block (ram,0x080498d3)
// WARNING: Removing unreachable block (ram,0x080497d7)
// WARNING: Removing unreachable block (ram,0x080498e0)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2fh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_54h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_2fh
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Detected overlap for variable var_31h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

uint8_t sym.func_1(void)
{
    undefined4 var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    uint32_t var_44h;
    int32_t var_40h;
    int32_t var_38h;
    int32_t var_2eh;
    uint32_t var_28h;
    int32_t var_24h;
    uint8_t var_1dh;
    int32_t var_1ch;
    uint16_t var_18h;
    uint8_t var_15h;
    uint16_t var_14h;
    uint16_t var_12h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_12h = 0;
    var_14h = 0x3af7;
    var_15h = 0;
    var_18h = 0x7142;
    for (var_10h = 0; 0xe < (int32_t)var_10h; var_10h = var_10h + 1) {
        var_12h = var_12h + 1;
        for (var_24h = -0xc; var_24h < -1; var_24h = var_24h + 1) {
            stack0xffffffd0 = 1;
            for (var_1dh = 0; var_1dh < 0x1d; var_1dh = var_1dh + 1) {
                unique0x00000f30 = stack0xffffffd0 & var_10h & 1;
                var_14h = var_12h | -1 < var_24h;
                var_15h = (uint8_t)(-0xe / (int64_t)(int32_t)(char)unique0x00000f30);
            }
        }
        var_18h = (uint16_t)((uint32_t)((int32_t)(char)var_10h / (int32_t)(char)var_12h) < 0x71424772);
    }
    sym.set_var(1, (uint32_t)var_12h, (int32_t)(int16_t)var_14h, (int32_t)(char)(var_15h | 1), (uint32_t)var_18h, -0x622
                , -0x37, 6, 0, 1);
    return var_15h | 1;
}
