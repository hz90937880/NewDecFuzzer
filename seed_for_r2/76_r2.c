
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: [r2ghidra] Failed to match type signed int for variable var_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_28h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_4ch

uint32_t sym.func_1(void)
{
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_54h;
    int32_t var_4eh;
    int32_t var_45h;
    int32_t var_40h;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    uint32_t var_8h;
    undefined4 var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_1ch = 0x5c68ec0a;
    var_8h = 0x47a6deec;
    var_ch = 0xd6273d59;
    var_10h = 0x34ce5fef;
    for (var_24h = -0x1d; -8 < var_24h; var_24h = var_24h + 1) {
        for (var_8h = 0; -0x1b < (int32_t)var_8h; var_8h = var_8h - 1) {
            var_ch = var_ch & var_1ch;
        }
        var_18h = (var_8h & 0xffff) * 0x74;
        var_10h = var_10h - 1;
        for (var_14h = 0xffffffef; var_14h != 0xffffffe9; var_14h = var_14h - 1) {
            var_1ch = ((var_10h & 0xe2b7U) -
                      (int32_t)(char)((0x5b6d4f4f <
                                      (uint32_t)
                                      ((uint64_t)(var_24h == -0x6043f51e) %
                                      (uint64_t)(int64_t)(int32_t)(var_18h & 0xffff))) + '\x1e')) + 9;
            for (var_28h = -0x1a; -0x12 < var_28h; var_28h = var_28h + 7) {
            }
            var_18h = var_18h | 0x7f7a796;
            var_8h = 0x100203;
        }
    }
    sym.set_var(0, 0, 0x56915a13, var_24h, var_8h, var_ch, var_10h, 1, 0x1966d8da);
    return var_8h;
}
