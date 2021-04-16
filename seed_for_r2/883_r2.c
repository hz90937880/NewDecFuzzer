
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x080499d5)
// WARNING: Removing unreachable block (ram,0x080499e0)
// WARNING: Removing unreachable block (ram,0x080499ed)
// WARNING: Removing unreachable block (ram,0x080499e6)
// WARNING: Removing unreachable block (ram,0x080499f2)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_23h
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_5bh
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    uint32_t var_58h;
    int32_t var_54h;
    uint32_t var_4ch;
    int32_t var_48h;
    int32_t var_3eh;
    int32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    int32_t var_2ch;
    uint32_t var_28h;
    uint8_t var_23h;
    uint16_t var_22h;
    int32_t var_20h;
    uint16_t var_1ah;
    int32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0xac64a684;
    var_10h = 9;
    var_14h = 9;
    var_18h = -0x4d8b4070;
    var_1ah = 0xce6b;
    var_20h = 0x69ed994a;
    var_22h = 1;
    var_23h = 0xff;
    var_28h = 1;
    var_2ch = 0;
    var_30h = 3;
    var_ch = 2;
    do {
        if (-0xb < var_ch) {
            sym.set_var(var_8h, var_ch, var_10h, var_14h, var_18h, (uint32_t)var_1ah, var_20h, (uint32_t)var_22h, 
                        (uint32_t)var_23h, var_28h, var_2ch);
            return var_20h;
        }
        var_38h = 0xa4ccfd6;
        for (var_10h = -0x17; var_10h < -0x1a; var_10h = var_10h + -1) {
            for (var_18h = 0x17; var_18h < 0x12; var_18h = var_18h + -1) {
                var_8h = 1;
                var_1ah = (uint16_t)var_38h;
                var_38h = -0x1241;
            }
            var_1ah = var_1ah + 1;
            var_30h = 0x2595;
            var_20h = var_20h | (uint32_t)(((var_8h != 0) == 0x3542) < 0x2cfeaa3c);
            var_22h = var_22h + 1;
            var_23h = var_23h | 1;
            var_28h = (uint32_t)var_23h;
            var_38h = var_38h | (uint32_t)
                                ((uint16_t)((int16_t)(char)~((uint8_t)((var_18h != 0) + 0xa3U) >> 1) - 2U) >> 9);
            if (var_28h != 0) break;
            var_2ch = var_2ch + -1;
        }
        for (var_23h = 0; var_23h != 0; var_23h = var_23h + 8) {
            var_14h = var_30h;
        }
        var_8h = var_2ch;
        var_ch = var_ch + -1;
    } while( true );
}
