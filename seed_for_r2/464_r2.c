
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x08049809)
// WARNING: Removing unreachable block (ram,0x0804980f)
// WARNING: Removing unreachable block (ram,0x080497ce)
// WARNING: Removing unreachable block (ram,0x080497a6)
// WARNING: Removing unreachable block (ram,0x080497ac)
// WARNING: Removing unreachable block (ram,0x080497c1)
// WARNING: Removing unreachable block (ram,0x08049920)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_2fh
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_28h
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_3dh
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_43h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_ch

undefined4 sym.func_1(void)
{
    uint32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_4ch;
    int32_t var_48h;
    uint32_t var_3ch;
    uint32_t var_38h;
    int32_t var_34h;
    uint32_t var_2eh;
    uint16_t var_28h;
    char var_25h;
    uint16_t var_24h;
    int32_t var_20h;
    uint16_t var_1ah;
    int32_t var_18h;
    uint32_t var_14h;
    uint32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_18h = 0x61fa7bb3;
    var_1ah = 2;
    var_20h = 0x6c342871;
    var_24h = 0x567d;
    var_25h = -2;
    var_28h = 0xffff;
    var_14h = 0;
    for (var_dh._0_1_ = 0xf5; 1 < (uint8_t)var_dh; var_dh._0_1_ = (uint8_t)var_dh + 1) {
        var_18h = var_18h + -1;
        if (var_14h == 0) {
            var_20h = 0;
            var_1ah = 0;
            var_24h = var_24h & 0xfffb;
            var_14h = 3;
            while (var_14h == 0x11) {
                var_25h = '\0';
                var_14h = 0x12;
            }
            var_28h = var_28h ^ 1;
        }
    }
    sym.set_var(0x4f84, (uint32_t)(uint8_t)var_dh, 0, var_14h, 0, var_18h, (uint32_t)var_1ah, var_20h, -7, 
                (int32_t)(int16_t)var_24h, (int32_t)var_25h, (uint32_t)var_28h);
    return 0xfffd;
}
