
// WARNING: Removing unreachable block (ram,0x08049712)
// WARNING: Removing unreachable block (ram,0x0804971f)
// WARNING: Removing unreachable block (ram,0x0804974d)
// WARNING: Removing unreachable block (ram,0x0804975a)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    uint32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int16_t var_ah;
    int32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_4h = 0x4e064826;
    var_ah = 0x2524;
    var_10h = 0x5eafb5d1;
    for (var_8h = 0; var_8h < -0xb; var_8h = var_8h + -1) {
        var_ah = 1;
        var_10h = var_10h ^ 0x623b4709;
        var_4h = 0xfffffffa;
    }
    sym.set_var(var_4h, var_8h, (int32_t)var_ah, var_10h);
    return var_10h;
}
