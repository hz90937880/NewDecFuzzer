
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: [r2ghidra] Detected overlap for variable var_22h

undefined4 sym.func_1(void)
{
    uint32_t arg_14h;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0xc00eadd5;
    for (var_8h = 0; var_8h != 0xfffffff8; var_8h = var_8h - 1) {
        var_ch = var_ch ^ (int32_t)(var_8h & 0xff) >> ((1 < var_8h >> 0x1f) * -8 & 0x1fU);
    }
    arg_14h = (int32_t)var_ch < (int32_t)-(uint32_t)(0xfffffff8 < ((int32_t)var_ch < -7)) ^ 0xffff4693;
    sym.set_var(0xfffffff8, 0x2c930f87, (uint32_t)((int32_t)var_ch < -7), arg_14h, 0x2c930f87 < arg_14h ^ 0xfffffff8, 0)
    ;
    return 0xfffffff8;
}
