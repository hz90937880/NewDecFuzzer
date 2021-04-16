
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x08049891)
// WARNING: Removing unreachable block (ram,0x0804989e)
// WARNING: Removing unreachable block (ram,0x08049808)
// WARNING: Removing unreachable block (ram,0x0804980e)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_2ch;
    int32_t var_28h;
    uint32_t var_24h;
    uint16_t var_1eh;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = -0x68900aa2;
    var_10h = 7;
    var_14h = 8;
    var_18h = 0x667f5aee;
    var_1ch = 0x1300ca3c;
    var_1eh = 6;
    var_24h = 0xffffffff;
    for (var_8h = -0xf; var_8h < -0x19; var_8h = var_8h + -1) {
        for (var_14h = 0xffffffee; var_14h != 0x1a; var_14h = var_14h + 2) {
            var_24h = 9;
            while (var_24h == 0x29) {
                var_18h = 1;
                var_24h = 0x2a;
            }
        }
        var_1ch = (uint32_t)(0 < var_8h);
        if (var_24h == 0) {
            var_10h = 0x5542ed5a;
        } else {
            var_1eh = var_1eh | (uint16_t)var_24h | 0x624;
            var_ch = ZEXT14(var_18h == 0);
            var_10h = (uint32_t)((int32_t)(uint32_t)(uint8_t)var_1eh < var_8h);
        }
    }
    sym.set_var(0x76820624, var_8h, var_ch, var_10h, var_14h, var_18h, var_1ch, (int32_t)(int16_t)var_1eh, 0x5d9d018e, 
                0x56);
    return 0x765a3ff;
}
