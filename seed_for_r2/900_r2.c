
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x08049ed1)
// WARNING: Removing unreachable block (ram,0x08049b76)
// WARNING: Removing unreachable block (ram,0x0804992a)
// WARNING: Removing unreachable block (ram,0x080498b7)
// WARNING: Removing unreachable block (ram,0x08049960)
// WARNING: Removing unreachable block (ram,0x08049cd5)
// WARNING: Removing unreachable block (ram,0x08049c72)
// WARNING: Removing unreachable block (ram,0x08049c78)
// WARNING: Removing unreachable block (ram,0x08049c10)
// WARNING: Removing unreachable block (ram,0x08049c9c)
// WARNING: Removing unreachable block (ram,0x08049cb2)
// WARNING: Removing unreachable block (ram,0x08049cb7)
// WARNING: Removing unreachable block (ram,0x08049f15)
// WARNING: Removing unreachable block (ram,0x08049a77)
// WARNING: Removing unreachable block (ram,0x08049e16)
// WARNING: Removing unreachable block (ram,0x08049e93)
// WARNING: Removing unreachable block (ram,0x08049a8f)
// WARNING: Removing unreachable block (ram,0x08049f74)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_48h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_88h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_60h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_88h
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_91h
// WARNING: [r2ghidra] Detected overlap for variable var_9eh
// WARNING: [r2ghidra] Detected overlap for variable var_b1h
// WARNING: [r2ghidra] Detected overlap for variable var_b4h
// WARNING: [r2ghidra] Detected overlap for variable var_deh
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_d4h
// WARNING: [r2ghidra] Detected overlap for variable var_dfh

uint32_t sym.func_1(void)
{
    bool bVar1;
    int32_t var_e8h;
    int32_t var_e4h;
    int32_t var_e0h;
    int32_t var_dch;
    int32_t var_d6h;
    int32_t var_d0h;
    int32_t var_cch;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_c0h;
    int32_t var_bch;
    int32_t var_b8h;
    int32_t var_b0h;
    uint32_t var_ach;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_90h;
    int32_t var_8ch;
    uint32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    uint32_t var_68h;
    uint32_t var_64h;
    int32_t var_60h;
    uint32_t var_5ch;
    uint32_t var_54h;
    char var_4dh;
    uint32_t var_4ch;
    int32_t var_48h;
    uint32_t var_44h;
    uint16_t var_40h;
    uint16_t var_3eh;
    uint32_t var_3ch;
    uint32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    uint16_t var_1eh;
    int32_t var_1ch;
    uint32_t var_14h;
    uint32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_dh._0_1_ = 0xb0;
    var_1ch = -0x4f6b39ab;
    var_1eh = 0xfff8;
    var_24h = -4;
    var_2ch = 0x89bbd4c;
    var_30h = -1;
    var_38h = 0xfffffffd;
    var_3eh = 0x4292;
    var_40h = 0;
    var_4dh = -1;
    var_54h = 6;
    bVar1 = false;
    var_44h = 0xfffffffc;
    do {
        var_14h = (uint32_t)bVar1;
        if (var_44h != 10) {
            sym.set_var((uint32_t)(uint8_t)var_dh, 0x68, 0xb3, var_14h, 8, 0x24, var_1ch, (uint32_t)var_1eh, var_24h, -1
                        , 8, var_2ch, var_30h, 0x370f7b9e, var_38h, -0x5ae0f68c, -2, (uint32_t)var_3eh, 0, 1, 
                        (uint32_t)var_40h);
            return var_44h;
        }
        var_1ch = 0;
        for (var_5ch = 0x15; var_5ch != 0xfffffff3; var_5ch = var_5ch - 1) {
            for (var_4dh = '\0'; var_4dh != -0x15; var_4dh = var_4dh + -3) {
                var_dh._0_1_ = (uint8_t)var_dh - 1;
            }
        }
        for (var_48h = 0; var_1eh = 0, var_48h < 0x13; var_48h = var_48h + 7) {
            var_2ch = var_2ch ^ 0x370f7b9e;
            var_30h = ZEXT14((int32_t)(int16_t)((uint16_t)(int16_t)(char)((uint8_t)var_5ch | 7) % 8) - (int32_t)var_4dh
                             < 0x46cb947f);
            var_54h = (uint32_t)(uint8_t)var_dh * 0x4c;
            var_24h = 0x4014c235;
            var_38h = 0xa6;
        }
        var_64h = 0xffffffe8;
        while (var_64h == 0xfffffffd) {
            for (var_60h = 0x12; -0x1f < var_60h; var_60h = var_60h + -1) {
                if (var_54h != 0) {
                    var_24h = -0x7938e0c2;
                    if ((uint32_t)(uint8_t)var_dh + ((uint32_t)(0x41880d0c / 0) & 0xffff) == 0) {
                        var_5ch = var_64h;
                    } else {
                        var_24h = -0x7938e0c2;
                    }
                    break;
                }
            }
            var_54h = (uint32_t)(0xbd < (uint8_t)var_dh);
            var_3eh = var_3eh - 1;
            var_dh._0_1_ = (uint8_t)var_dh + 1;
            var_64h = 0xfffffffe;
        }
        bVar1 = -2 < (int32_t)var_5ch;
        var_40h = var_40h + 1;
        var_44h = 0xb;
    } while( true );
}
