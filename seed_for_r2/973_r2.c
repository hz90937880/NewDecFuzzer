
// WARNING: Variable defined which should be unmapped: var_ah
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_28h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_14h;
    uint32_t var_10h;
    uint32_t var_ah;
    
    sym.__x86.get_pc_thunk.ax();
    var_ah._0_2_ = 0;
    var_10h = 0xb99bf0bb;
    for (var_28h = 0; (int32_t)var_28h < -0x10; var_28h = var_28h - 1) {
        var_ah._0_2_ = (uint16_t)((var_28h & 0xff) * 0xfc == 0x5b68);
        if ((((int32_t)var_28h <
             (int32_t)(uint32_t)
                      ((int32_t)((int32_t)(char)var_28h + (uint32_t)((uint16_t)var_ah < 0x9c96c798)) <= (int32_t)var_28h
                      )) < 0xffff == 0x9c96c797) && (var_28h != 0)) {
            var_10h = 1;
        } else {
            var_10h = 0;
        }
        var_10h = var_10h | var_28h & 0xb7e59501;
        var_ah._0_2_ = (uint16_t)var_ah + 1;
    }
    sym.set_var(var_28h, (uint32_t)(uint16_t)var_ah, var_10h, -2, 0xfffffffa, 0xfff7);
    return 0xfffffffe;
}
