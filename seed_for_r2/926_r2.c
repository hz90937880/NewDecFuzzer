
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804993c)
// WARNING: Removing unreachable block (ram,0x08049942)
// WARNING: Removing unreachable block (ram,0x0804995a)
// WARNING: Removing unreachable block (ram,0x08049968)
// WARNING: Removing unreachable block (ram,0x08049961)
// WARNING: Removing unreachable block (ram,0x0804996d)
// WARNING: Removing unreachable block (ram,0x08049a34)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_5ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_78h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint32_t var_90h;
    int32_t var_8ch;
    int32_t var_88h;
    int32_t var_80h;
    int32_t var_79h;
    uint32_t var_74h;
    int32_t var_70h;
    uint32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    undefined4 var_5ch;
    int32_t var_54h;
    undefined4 var_4ch;
    int32_t var_48h;
    int32_t var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    uint32_t var_30h;
    uint32_t var_2ch;
    char var_25h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    uint16_t var_18h;
    uint16_t var_16h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_16h = 0x791f;
    var_18h = 1;
    var_1ch = -0x2a4ed738;
    var_20h = -0x60e9819e;
    var_24h = -0x2a8cb39d;
    var_25h = '\x01';
    for (var_10h = 0x1a; -0x18 < var_10h; var_10h = var_10h + -8) {
        for (var_14h = 0; 0xe < var_14h; var_14h = var_14h + 1) {
            var_2ch = 0;
            while (var_2ch == 0x1c) {
                var_2ch = 0x1d;
            }
        }
        var_34h = 0xffffffeb;
        while ((var_34h != 0xfffffff0 &&
               (var_16h = (uint16_t)(0 / (int32_t)(int16_t)var_16h), ((uint16_t)var_10h & var_16h) != 0))) {
            var_18h = var_18h - 1;
            var_1ch = var_1ch + 1;
            var_14h = -8;
            var_34h = var_34h + 5;
        }
        var_20h = -(int32_t)(int16_t)((uint16_t)var_14h ^ 1) & var_34h;
    }
    if (var_18h == 0) {
        var_24h = -0x2a8cb39e;
        var_25h = 'b';
    }
    sym.set_var(var_10h, -8, 0, 1, (int32_t)(int16_t)var_16h, 1, (uint32_t)var_18h, var_1ch, var_20h, 0x48cc, 0x14, 
                -0xbbfaaa, 1, 0x39db, -0x1e7946a1, var_24h, (int32_t)var_25h);
    return 1;
}
