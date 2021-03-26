
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x080498a5)
// WARNING: Removing unreachable block (ram,0x0804990c)
// WARNING: Removing unreachable block (ram,0x08049905)
// WARNING: Removing unreachable block (ram,0x08049911)
// WARNING: Removing unreachable block (ram,0x08049923)
// WARNING: Removing unreachable block (ram,0x08049abf)
// WARNING: Removing unreachable block (ram,0x08049ae3)
// WARNING: Removing unreachable block (ram,0x08049adc)
// WARNING: Removing unreachable block (ram,0x08049ae8)
// WARNING: Removing unreachable block (ram,0x08049d1d)
// WARNING: Removing unreachable block (ram,0x08049d4c)
// WARNING: Removing unreachable block (ram,0x08049d50)
// WARNING: Removing unreachable block (ram,0x08049d79)
// WARNING: Removing unreachable block (ram,0x08049d72)
// WARNING: Removing unreachable block (ram,0x08049d7e)
// WARNING: Removing unreachable block (ram,0x08049960)
// WARNING: Removing unreachable block (ram,0x08049a35)
// WARNING: Removing unreachable block (ram,0x08049988)
// WARNING: Removing unreachable block (ram,0x08049a3a)
// WARNING: Removing unreachable block (ram,0x08049aac)
// WARNING: Removing unreachable block (ram,0x08049ab6)
// WARNING: Removing unreachable block (ram,0x08049b44)
// WARNING: Removing unreachable block (ram,0x08049948)
// WARNING: Removing unreachable block (ram,0x0804998d)
// WARNING: Removing unreachable block (ram,0x08049cc7)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_48h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_51h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_65h
// WARNING: [r2ghidra] Detected overlap for variable var_68h
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_79h
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_91h
// WARNING: [r2ghidra] Detected overlap for variable var_9eh
// WARNING: [r2ghidra] Detected overlap for variable var_b2h
// WARNING: [r2ghidra] Detected overlap for variable var_bch
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int8_t iVar1;
    uint16_t uVar2;
    uint32_t arg_1ch;
    int32_t var_d0h;
    int32_t var_bdh;
    int32_t var_b8h;
    int32_t var_b0h;
    uint32_t var_ach;
    int32_t var_a8h;
    uint32_t var_a4h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_90h;
    uint32_t var_8ch;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    uint32_t var_6ch;
    int32_t var_64h;
    int32_t var_60h;
    uint32_t var_5ch;
    uint32_t var_58h;
    uint8_t var_51h;
    int32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_48h;
    uint16_t var_44h;
    uint8_t var_41h;
    uint32_t var_40h;
    uint32_t var_38h;
    int32_t var_34h;
    int16_t var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_28h = 2;
    var_2ch = 0xffffffff;
    var_20h = 0xfffffffb;
    var_24h = 0x8d2ca8e1;
    var_30h = -8;
    var_34h = 1;
    var_38h = 8;
    var_40h = 0;
    var_41h = 0x47;
    var_44h = 0x7b76;
    var_48h = 0;
    var_50h = 0;
    var_18h = 0x13;
    do {
        if (var_18h != 0xffffffe3) {
            arg_1ch = 0x31cd >> ((uint8_t)var_28h & 0x1f);
            uVar2 = (uint16_t)
                    ((uint16_t)(var_48h < (uint32_t)((uint64_t)arg_1ch * 0x414848c9 >> 0x3d)) +
                    ((uint16_t)var_50h & 0xff)) >> 1;
            sym.set_var(var_28h, var_2ch, (uint32_t)uVar2, -0x4e4f3521, var_20h, arg_1ch, 0x1750, -1, 0, 
                        (int32_t)var_30h, var_34h, var_38h, 0xb64, var_40h, -0x57d04a5d, 0x396d215d, (uint32_t)var_41h, 
                        (uint32_t)var_44h, (int32_t)(char)uVar2);
            return 0x396d215d;
        }
        var_2ch = var_2ch ^ 0xb1b0cadf;
        for (var_51h = 0xf0; (char)var_51h < -0x15; var_51h = var_51h - 1) {
            var_20h = var_20h - 1;
            var_2ch = (uint32_t)
                      (((char)var_51h < -0x4e4f3520) <=
                      ((uint8_t)(((uint16_t)var_20h & 0xff) % (uint16_t)(var_51h & 0xfc)) & 0xe9));
        }
        var_28h = 0x17a;
        for (var_20h = 0; var_20h < 0x2e; var_20h = var_20h + 7) {
            var_24h = var_24h + 1;
            if (var_48h != 0) {
                var_34h = 0x77;
                var_24h = 0xffffff88;
            }
            var_48h = 1 / 0 ^ 0xa0c6649a;
            var_38h = (uint32_t)((uint32_t)((char)var_28h * 0x60) < 0xfffffffa);
            var_5ch = (uint32_t)((var_28h != 0x1750) == 0x2e988a7c);
            var_30h = 1;
            var_2ch = var_48h;
            for (var_4ch = 0; -0x1b < (int32_t)var_4ch; var_4ch = var_4ch - 1) {
                if ((var_48h & 0xff) * (var_5ch & 0xff) != 0) {
                    sym.set_var(var_28h, var_2ch, 0xffffffe3, -0x4e4f3521, var_20h, var_24h, 0x1750, -1, 0, 1, var_34h, 
                                var_38h, 0xb64, -1, -0x57d04a5d, 0x396d215d, (uint32_t)var_41h, (uint32_t)var_44h, 0xb);
                    return 0;
                }
                if (var_2ch + (var_24h == 0xffffffff) != 0) {
                    sym.set_var(var_28h, var_2ch, 0xffffffe3, -0x4e4f3521, var_20h, var_24h, 0x1750, -1, 0, 1, var_34h, 
                                var_38h, 0xb64, -1, -0x57d04a5d, 0x396d215e, (uint32_t)var_41h, (uint32_t)var_44h, 0xb);
                    return 1;
                }
                var_28h = var_28h | 9;
                for (var_40h = 0xffffffed; 0x38 < var_40h; var_40h = var_40h + 4) {
                }
                if ((var_40h == 0) ||
                   (var_41h = var_41h | (int32_t)(uint32_t)(var_5ch == 0xf8a12a9e) < (int32_t)var_4ch,
                   (int32_t)(uint32_t)var_41h >> ((uint8_t)var_4ch & 0x1f) == 0)) {
                    iVar1 = 1;
                } else {
                    iVar1 = 0;
                }
                var_50h = (0x31cd << iVar1 & var_38h) - (var_4ch & 0xff);
                var_2ch = (uint32_t)((uint32_t)((int32_t)(int16_t)var_50h / -0x3521) < 0x9e06837c);
                var_44h = var_44h ^ 0x95e2;
                var_5ch = var_50h | 0xb1b0cadf;
                var_40h = var_40h - 1;
            }
        }
        var_18h = 0xffffffe2;
    } while( true );
}
