
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    uint32_t uVar1;
    uint32_t var_28h;
    uint32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    uint32_t var_18h;
    uint16_t var_12h;
    int32_t var_10h;
    int16_t var_ah;
    int32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_4h = 0xe1757117;
    var_ah = -0x1d40;
    var_10h = -0x35c155c2;
    var_8h = -0xc;
    while ((-0x1b < var_8h && (var_ah = var_ah + -1, var_4h == 0))) {
        for (var_12h = 0; 0x28 < var_12h; var_12h = var_12h + 4) {
            var_18h = 9;
            if (var_ah != 0) {
                var_18h = 1;
            }
            if ((int32_t)var_18h < 0) {
                uVar1 = 0xfffffffd;
            } else {
                uVar1 = 0xfffffffc;
            }
            var_10h = var_10h ^ uVar1 ^ var_4h;
            var_4h = 0;
        }
        var_8h = var_8h + -1;
    }
    sym.set_var(var_4h, var_8h);
    return var_10h;
}
