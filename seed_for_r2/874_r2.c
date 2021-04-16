
// WARNING: Variable defined which should be unmapped: var_6h
// WARNING: Removing unreachable block (ram,0x0804977f)
// WARNING: Removing unreachable block (ram,0x0804988f)
// WARNING: Removing unreachable block (ram,0x080498a7)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2bh
// WARNING: [r2ghidra] Detected overlap for variable var_48h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_4h

uint16_t sym.func_1(void)
{
    int32_t var_58h;
    int32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_44h;
    int32_t var_40h;
    uint32_t var_38h;
    uint32_t var_34h;
    int16_t var_2eh;
    uint16_t var_2ah;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    uint8_t var_15h;
    uint32_t var_14h;
    uint16_t var_eh;
    int32_t var_ch;
    uint32_t var_6h;
    
    sym.__x86.get_pc_thunk.ax();
    var_eh = 0xb775;
    var_14h = 0x2f69a016;
    var_15h = 0x6f;
    var_1ch = -0x25b3237a;
    var_20h = 1;
    var_24h = -9;
    var_2ah = 1;
    var_28h = 0;
    var_ch = 6;
    for (var_6h._0_2_ = 0; (int16_t)var_6h != 0x14; var_6h._0_2_ = (int16_t)var_6h + 1) {
        var_eh = (uint16_t)var_24h;
        var_14h = (uint32_t)(0x45 << ((uint8_t)var_28h & 0x1f) != 0);
        var_15h = 0;
        var_2ah = var_2ah | 0x5278;
        for (var_24h = 0x1c; -3 < var_24h; var_24h = var_24h + -1) {
            var_eh = var_eh + 1;
            var_28h = var_28h ^ var_2ah ^ 0x6f084217;
            var_2eh = -0xf;
            while (var_2eh == 0x17) {
                var_2eh = 0x1b;
            }
            var_1ch = var_1ch ^ (uint32_t)((int32_t)(uint32_t)var_eh < -7);
        }
        var_ch = var_ch + -1;
        var_20h = -1;
    }
    sym.set_var(0x244c3f4f, 0x14, var_ch, 2, (uint32_t)var_eh, var_14h, (uint32_t)var_15h, var_1ch, 0xe042, var_20h);
    return var_eh;
}
