
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x08049ccb)
// WARNING: Removing unreachable block (ram,0x0804988f)
// WARNING: Removing unreachable block (ram,0x08049b39)
// WARNING: Removing unreachable block (ram,0x0804997e)
// WARNING: Removing unreachable block (ram,0x08049cd9)
// WARNING: Removing unreachable block (ram,0x08049cdf)
// WARNING: Removing unreachable block (ram,0x080499b9)
// WARNING: Removing unreachable block (ram,0x08049a1a)
// WARNING: Removing unreachable block (ram,0x08049a13)
// WARNING: Removing unreachable block (ram,0x08049a1f)
// WARNING: Removing unreachable block (ram,0x08049a38)
// WARNING: Removing unreachable block (ram,0x08049a31)
// WARNING: Removing unreachable block (ram,0x08049a3d)
// WARNING: Removing unreachable block (ram,0x08049a76)
// WARNING: Removing unreachable block (ram,0x08049a6f)
// WARNING: Removing unreachable block (ram,0x08049a7b)
// WARNING: Removing unreachable block (ram,0x08049ab8)
// WARNING: Removing unreachable block (ram,0x08049ae5)
// WARNING: Removing unreachable block (ram,0x08049ad8)
// WARNING: Removing unreachable block (ram,0x08049aea)
// WARNING: Removing unreachable block (ram,0x08049b7a)
// WARNING: Removing unreachable block (ram,0x08049cb2)
// WARNING: Removing unreachable block (ram,0x08049b8c)
// WARNING: Removing unreachable block (ram,0x08049bde)
// WARNING: Removing unreachable block (ram,0x08049be2)
// WARNING: Removing unreachable block (ram,0x08049c54)
// WARNING: Removing unreachable block (ram,0x08049c4d)
// WARNING: Removing unreachable block (ram,0x08049c59)
// WARNING: Removing unreachable block (ram,0x08049cae)
// WARNING: Removing unreachable block (ram,0x08049cbc)
// WARNING: Removing unreachable block (ram,0x08049cbf)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_fh
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_2fh
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_38h
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_80h
// WARNING: [r2ghidra] Detected overlap for variable var_a2h

undefined4 sym.func_1(void)
{
    uint32_t var_a0h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    uint32_t var_8ch;
    int32_t var_88h;
    uint32_t var_81h;
    uint32_t var_78h;
    uint32_t var_74h;
    int32_t var_6ch;
    uint32_t var_68h;
    uint32_t var_64h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_40h;
    int32_t var_3ch;
    uint32_t var_34h;
    uint8_t var_2fh;
    int32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    uint8_t var_1eh;
    char var_1dh;
    int32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    uint8_t var_fh;
    char var_eh;
    uint32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_dh._0_1_ = 0xc0;
    var_eh = 'B';
    var_fh = 0;
    var_14h = 1;
    var_18h = 0xbe584996;
    var_1ch = -4;
    var_1dh = -6;
    var_1eh = 0xff;
    var_24h = -1;
    var_34h = 0xd34108fa;
    for (var_2fh = 0; var_2fh < 0x16; var_2fh = var_2fh + 4) {
        if ((uint8_t)var_dh == 0) {
            var_dh._0_1_ = 0xff;
            var_1ch = 0;
        } else {
            var_18h = var_14h & (uint8_t)var_dh == 0;
            var_fh = (uint8_t)var_dh;
            var_34h = var_34h ^ (char)(uint8_t)var_dh * 0x24;
            var_1ch = (int32_t)(uint32_t)(((uint8_t)var_dh <= ((var_34h != 0xb6) < var_18h)) < 0xbd) >> (int8_t)var_18h;
            var_1dh = (char)var_1ch;
            if (var_18h == (int32_t)var_1dh) {
                var_eh = -0x20;
            } else {
                var_eh = -0x1f;
            }
            var_14h = 0x45925f8a;
        }
        var_1eh = var_1eh + 1;
        var_24h = var_24h + -1;
    }
    sym.set_var((uint32_t)(uint8_t)var_dh, (int32_t)var_eh, (int32_t)(char)var_fh, var_14h, var_18h, var_1ch, 
                (int32_t)var_1dh, (uint32_t)var_1eh, var_24h, -0x183160cd, -0x652eb6ad, 0x29a7);
    return 0x29a7;
}
