
// WARNING: Variable defined which should be unmapped: var_1h
// WARNING: Removing unreachable block (ram,0x08049738)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_44h;
    uint32_t var_40h;
    uint32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_1h;
    
    sym.__x86.get_pc_thunk.ax();
    var_1h._0_1_ = 5;
    var_10h = 0x3bc6c2db;
    var_14h = 0x5c2c102d;
    var_18h = 3;
    for (var_1ch = 0; 2 < var_1ch; var_1ch = var_1ch + 3) {
        var_14h = var_14h ^ (char)(((((int32_t)(char)(uint8_t)var_1h | var_10h | 0x1170) != 0x422d5fba) + '\x05') * '?')
        ;
        var_1h._0_1_ = (uint8_t)var_1h & (char)(0xbc18 / ((var_10h | 0x1170) == 0)) + 1U;
        var_10h = (uint32_t)((uint8_t)var_1h == 0);
        var_18h = var_18h + 1;
    }
    sym.set_var(0xfffffffb, (int32_t)(char)(uint8_t)var_1h, 0x422d5fba, -1, 1, var_14h, var_18h, -0xd777be2, -0xd777be2)
    ;
    return 0x984bbc18;
}
