
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ah to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_31h
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_48h;
    int32_t var_40h;
    int32_t var_38h;
    int32_t var_30h;
    int32_t var_28h;
    int32_t var_20h;
    uint16_t var_1ah;
    uint32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_4h = -0x7a08f52a;
    var_ch = -1;
    var_10h = -0x3ae6871a;
    var_14h = -0x472dcdee;
    var_18h = 0xffffffff;
    var_1ah = 0xffff;
    var_8h = 0x16;
    do {
        if (-5 < (int32_t)var_8h) {
code_r0x08049839:
            sym.set_var(var_4h, var_8h | var_14h, var_ch, var_10h, var_14h, var_18h, 4);
            return 1 - var_10h;
        }
        var_4h = 0;
        if (var_8h != 0) {
            if (var_8h == 0) {
                sym.set_var(0, 0, var_ch, var_10h, var_14h, var_18h, 5);
                return 0;
            }
            goto code_r0x08049839;
        }
        var_10h = ZEXT14((var_1ah | 1) != 0xffff);
        var_14h = var_14h ^ (uint32_t)((int16_t)var_1ah < 0x34ae);
        var_18h = var_18h + 1;
        for (var_1ah = 0xb; 0xf < (int16_t)var_1ah; var_1ah = var_1ah + 2) {
            var_4h = ZEXT14(var_18h != 0);
        }
        var_8h = 0xffffffff;
        var_ch = var_10h;
    } while( true );
}
