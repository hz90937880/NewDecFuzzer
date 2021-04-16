
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x08049896)
// WARNING: Removing unreachable block (ram,0x08049795)
// WARNING: Removing unreachable block (ram,0x080498ac)
// WARNING: Removing unreachable block (ram,0x08049933)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_ch

undefined4 sym.func_1(void)
{
    int32_t var_60h;
    uint32_t var_50h;
    int32_t var_4ch;
    int32_t var_44h;
    uint32_t var_40h;
    int32_t var_38h;
    uint32_t var_34h;
    uint32_t var_28h;
    uint32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int16_t var_14h;
    char var_11h;
    uint16_t var_10h;
    uint32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0xb7dd;
    var_11h = -0x4f;
    var_14h = 1;
    var_20h = 0x2e3979d7;
    var_eh._0_2_ = 0xfffe;
    for (var_1ch = -1; var_1ch < -0x12; var_1ch = var_1ch + -1) {
        var_10h = var_10h & (uint16_t)var_eh;
        var_eh._0_2_ = (uint16_t)(-1 < (int32_t)(uint32_t)((var_20h & 0xffU) < 10)) << 1;
        var_20h = var_20h | 9;
        var_11h = '\x01';
        var_14h = 0;
    }
    sym.set_var((uint32_t)(uint16_t)var_eh, 9, 1, 0, (int32_t)(int16_t)var_10h, (int32_t)var_11h, (int32_t)var_14h, 1, 1
               );
    return 0xabd119e2;
}
