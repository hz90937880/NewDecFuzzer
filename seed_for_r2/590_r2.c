
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049c6c)
// WARNING: Removing unreachable block (ram,0x08049c79)
// WARNING: Removing unreachable block (ram,0x08049a8e)
// WARNING: Removing unreachable block (ram,0x080499bf)
// WARNING: Removing unreachable block (ram,0x0804995a)
// WARNING: Removing unreachable block (ram,0x08049960)
// WARNING: Removing unreachable block (ram,0x080499e6)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_28h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_44h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_a2h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_58h
// WARNING: [r2ghidra] Detected overlap for variable var_59h
// WARNING: [r2ghidra] Detected overlap for variable var_5ch
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_75h
// WARNING: [r2ghidra] Detected overlap for variable var_78h
// WARNING: [r2ghidra] Detected overlap for variable var_7eh
// WARNING: [r2ghidra] Detected overlap for variable var_95h
// WARNING: [r2ghidra] Detected overlap for variable var_96h
// WARNING: [r2ghidra] Detected overlap for variable var_a2h
// WARNING: [r2ghidra] Detected overlap for variable var_a4h
// WARNING: [r2ghidra] Detected overlap for variable var_aah
// WARNING: [r2ghidra] Detected overlap for variable var_ach
// WARNING: [r2ghidra] Detected overlap for variable var_b2h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t iVar1;
    uint32_t uVar2;
    int32_t iVar3;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_c0h;
    int32_t var_bch;
    uint32_t var_b8h;
    int32_t var_b0h;
    int32_t var_a8h;
    int32_t var_a0h;
    int32_t var_9ch;
    int32_t var_94h;
    uint32_t var_90h;
    uint32_t var_8ch;
    uint32_t var_88h;
    uint32_t var_84h;
    uint32_t var_7ch;
    int32_t var_74h;
    uint32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    uint32_t var_60h;
    int32_t var_54h;
    int32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_44h;
    int32_t var_40h;
    uint16_t var_3ch;
    uint16_t var_3ah;
    int32_t var_38h;
    uint32_t var_34h;
    char var_2dh;
    uint32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_24h;
    int32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_15h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_24h = 0xac64a684;
    var_2ch = 0x17d0b0a3;
    var_15h._0_1_ = 0x9d;
    var_1ch = 0x48f7c4fb;
    var_20h = 0;
    var_2dh = -0x67;
    var_34h = 0xfffffff9;
    var_10h = 0x4014c235;
    stack0xffffffe8 = -0x9534a47;
    var_38h = -4;
    var_3ah = 0xfffd;
    var_3ch = 1;
    var_40h = 6;
    var_44h = 0xd085c9e5;
    var_48h = 0x1ab14a3d;
    var_28h = 0x12;
    while( true ) {
        if ((int32_t)var_28h < 0x19) {
            sym.set_var(var_24h, var_28h, var_2ch, (int32_t)(char)(uint8_t)var_15h, var_1ch, var_20h, (int32_t)var_2dh, 
                        var_34h, var_10h, -0x7009, -1, -0x489b2bed, stack0xffffffe8, -1, var_38h, 
                        (int32_t)(int16_t)var_3ah, (uint32_t)var_3ch, var_40h, -0x2437, 0xfd);
            return var_40h;
        }
        var_24h = 0x4432;
        if (0 < (int32_t)(var_44h | 0xad)) break;
        var_44h = 0;
        var_48h = var_48h | 0x8cfe46da;
        for (var_4ch._3_1_ = 0; 0x16 < var_4ch._3_1_; var_4ch._3_1_ = var_4ch._3_1_ + 4) {
            iVar3 = (int32_t)(char)(uint8_t)var_15h;
            if ((~(int32_t)(int16_t)((var_48h & 0xffff) % (uint32_t)(uint16_t)(int16_t)(char)(uint8_t)var_15h) <
                 (int32_t)(char)(uint8_t)var_15h) || (var_24h == 0)) {
                iVar1 = 0;
            } else {
                iVar1 = 1;
            }
            uVar2 = SEXT14((char)(uint8_t)var_15h);
            if (var_24h == 0) {
                var_20h = var_20h + 1;
                var_2dh = -1;
                var_15h._0_1_ = (uint8_t)var_15h ^ (uint8_t)(0xff / (uint64_t)(int64_t)(int32_t)(uint32_t)var_4ch._3_1_)
                ;
                var_1ch = 0;
                if (var_48h == 0) {
                    var_38h = var_38h + 1;
                    var_3ah = var_3ah | 0xff9d;
                    var_34h = (uint32_t)
                              (0 < (int32_t)((int32_t)(char)(uint8_t)var_15h ^ (uint32_t)(uint8_t)var_3ah * 0xff));
                    if ((int32_t)(int16_t)-(int16_t)((uint64_t)var_34h / (uint64_t)(int64_t)(int32_t)(var_2ch & 0xffff))
                        << (iVar3 < (int32_t)(uint32_t)((iVar1 != -9) == uVar2)) != 0) {
                        sym.set_var(0, var_28h, var_2ch, (int32_t)(char)(uint8_t)var_15h, 0, var_20h, -1, var_34h, 
                                    var_10h, -0x7009, -1, -0x489b2bed, -9, -1, var_38h, (int32_t)(int16_t)var_3ah, 
                                    (uint32_t)var_3ch, var_40h, -0x2437, 0xfd);
                        return 0xff;
                    }
                    stack0xffffffe8 = -1;
                    var_2ch = 0xefdd03b6;
                    var_44h = var_44h | 1 << ((uint8_t)var_20h & 0x1f);
                    var_3ch = 0x1f6;
                    var_40h = var_28h ^ 1;
                } else {
                    var_10h = 1;
                    var_24h = 1;
                    var_44h = var_44h & 0xe0b9da2;
                    var_34h = var_48h;
                }
            }
        }
        var_28h = var_28h + 1;
    }
    if (var_28h != 0) {
        sym.set_var(0x4432, var_28h, var_2ch, (int32_t)(char)(uint8_t)var_15h, var_1ch, var_20h, (int32_t)var_2dh, 
                    var_34h, var_10h, -0x7009, -1, -0x489b2bed, stack0xffffffe8, -1, var_38h, (int32_t)(int16_t)var_3ah
                    , (uint32_t)var_3ch, var_40h, -0x2437, 0xfd);
        return 0xd55c;
    }
    if (-1 < 0 << ((uint8_t)var_2ch & 0x1f)) {
        var_24h = 1;
        var_20h = var_20h + -1;
        var_1ch = 0;
    }
    sym.set_var(var_24h, 0, var_2ch, 0, var_1ch, var_20h, (int32_t)var_2dh, var_34h, var_10h, -0x7009, -1, -0x489b2bed, 
                stack0xffffffe8, -1, var_38h, (int32_t)(int16_t)var_3ah, (uint32_t)var_3ch, var_40h, -0x2437, 0xfd);
    return 0;
}
