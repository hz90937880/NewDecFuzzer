
// WARNING: [r2ghidra] Detected overlap for variable var_9h

uint32_t sym.func_1(void)
{
    uint32_t uVar1;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    char var_9h;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_4h = -2;
    var_9h = '?';
    var_10h = 0xfffffffe;
    var_14h = 0;
    var_18h = 1;
    for (var_8h = 0; var_8h != 0xffffffeb; var_8h = var_8h - 7) {
        var_9h = -7;
        var_10h = var_10h | 0x4d;
        uVar1 = (uint32_t)((int64_t)(uint64_t)(var_10h == 0x47) / -3) ^ 0xfffffffb ^ var_8h;
        var_14h = var_14h | (int32_t)(int16_t)uVar1 - (int32_t)(int16_t)var_4h;
        var_18h = var_18h + -1;
        var_4h = uVar1;
    }
    sym.set_var((uint32_t)(var_10h != 0xffffffff) - (var_18h & 0xffU) & var_10h, 0xffffffeb, (int32_t)var_9h, var_10h, 
                var_14h);
    return var_10h;
}
