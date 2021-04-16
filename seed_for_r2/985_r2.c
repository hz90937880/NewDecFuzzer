
// WARNING: Removing unreachable block (ram,0x08049777)
// WARNING: Removing unreachable block (ram,0x08049784)
// WARNING: Removing unreachable block (ram,0x080497be)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    uint32_t var_4ch;
    int32_t var_48h;
    int32_t var_40h;
    int32_t var_3ch;
    uint32_t var_34h;
    int32_t var_30h;
    uint32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0x7222631;
    var_ch = 0xffffffff;
    var_14h = -1;
    var_18h = 0x6a205b29;
    var_20h = 0x545f0a86;
    for (var_4h = 0; 0x12 < var_4h; var_4h = var_4h + 1) {
        for (var_8h = 0; var_8h < 0x11; var_8h = var_8h + 4) {
            var_ch = 0xd8f8f576;
            var_18h = -0x27070a8a;
        }
        var_14h = 0x9980;
        var_20h = var_20h & (var_18h ^ 0xfe660000U);
    }
    sym.set_var(2, var_20h, 5, -0x512dc49f, -1, var_8h, var_ch, 0xc8e82b3, var_14h);
    return var_20h;
}
