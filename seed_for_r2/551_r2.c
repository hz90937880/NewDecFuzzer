
// WARNING: Variable defined which should be unmapped: var_6h
// WARNING: Removing unreachable block (ram,0x08049755)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_6h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_4h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_1ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_24h to Decompiler type: Unknown type identifier
// signed

uint32_t sym.func_1(void)
{
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_44h;
    uint32_t var_40h;
    int32_t var_3ch;
    uint32_t var_34h;
    int32_t var_30h;
    uint32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint16_t var_16h;
    uint32_t var_14h;
    uint8_t var_dh;
    uint32_t var_ch;
    undefined4 var_6h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0x8ef068cd;
    var_dh = 0xff;
    var_14h = 0xffffffff;
    var_16h = 0xb48f;
    var_1ch = 0;
    var_20h = 0xfffffff8;
    var_6h._0_2_ = 0;
    while ((-0x18 < (int16_t)var_6h && (var_1ch == 0x3c72))) {
        for (var_1ch = 0xfffffff0; 0x10 < var_1ch; var_1ch = var_1ch + 2) {
            var_ch = var_ch - 1;
        }
        var_20h = var_1ch;
        var_14h = 0x491e29ea;
        var_dh = 0x12;
        var_16h = 0;
        var_6h._0_2_ = (int16_t)var_6h + -1;
    }
    sym.set_var(0x491e29ea, (int32_t)(int16_t)var_6h, 1, 1, var_ch, (uint32_t)var_dh, var_14h, (uint32_t)var_16h, 1);
    return var_20h;
}
