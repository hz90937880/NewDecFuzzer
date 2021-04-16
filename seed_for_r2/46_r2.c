
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049bb1)
// WARNING: Removing unreachable block (ram,0x08049c17)
// WARNING: Removing unreachable block (ram,0x08049990)
// WARNING: Removing unreachable block (ram,0x080499b6)
// WARNING: Removing unreachable block (ram,0x080499af)
// WARNING: Removing unreachable block (ram,0x080499bb)
// WARNING: Removing unreachable block (ram,0x080499db)
// WARNING: Removing unreachable block (ram,0x080499e1)
// WARNING: Removing unreachable block (ram,0x080499e8)
// WARNING: Removing unreachable block (ram,0x080499ed)
// WARNING: Removing unreachable block (ram,0x08049a1c)
// WARNING: Removing unreachable block (ram,0x08049a21)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4ah to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_3dh
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_8eh
// WARNING: [r2ghidra] Detected overlap for variable var_a5h
// WARNING: [r2ghidra] Detected overlap for variable var_a8h
// WARNING: [r2ghidra] Detected overlap for variable var_b1h
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Detected overlap for variable var_b9h
// WARNING: [r2ghidra] Detected overlap for variable var_bch
// WARNING: [r2ghidra] Detected overlap for variable var_bdh

uint32_t sym.func_1(void)
{
    uint8_t uVar1;
    uint32_t uVar2;
    int32_t iVar3;
    uint32_t var_dch;
    int32_t var_d8h;
    int32_t var_d4h;
    uint32_t var_d0h;
    uint32_t var_b8h;
    int32_t var_b0h;
    int32_t var_ach;
    uint32_t var_a4h;
    uint32_t var_a0h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_8ch;
    int32_t var_88h;
    uint32_t var_80h;
    int32_t var_7ch;
    uint32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    uint32_t var_6ch;
    uint32_t var_68h;
    int32_t var_60h;
    uint32_t var_5ch;
    int32_t var_55h;
    int32_t var_50h;
    char var_4ah;
    uint8_t var_49h;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_3ch;
    uint8_t var_35h;
    uint32_t var_34h;
    uint8_t var_2dh;
    uint16_t var_2ch;
    int16_t var_2ah;
    uint32_t var_28h;
    uint8_t var_21h;
    uint32_t var_20h;
    uint16_t var_1ah;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0;
    var_18h = 0xc2039807;
    var_1ah = 0xfff8;
    var_21h = 0xff;
    var_28h = 0xffc42e2e;
    var_2ah = -0x2869;
    var_2ch = 2;
    var_2dh = 4;
    var_34h = 0x47b8cee1;
    var_35h = 6;
    var_44h = 0;
    var_48h = 0;
    var_49h = 0xff;
    var_4ah = -5;
    var_14h = 0xfffffffd;
    do {
        if (var_14h != 0xfffffff7) {
            sym.set_var(var_10h, var_14h ^ ((uint8_t)(var_35h + 1) != 0) != 0xab484368, var_18h, 
                        (int32_t)(int16_t)var_1ah, 7, 0xfb, var_28h, 1, (int32_t)var_2ah, -0x5cc64359, 
                        (uint32_t)(uint16_t)(var_2ch - 1), (int32_t)(char)var_2dh, var_34h & 0x54a6f35b, 
                        (uint32_t)(uint8_t)(var_35h + 1), -1, 0xfd, 1, -1, var_44h, var_48h, (uint32_t)var_49h, 
                        0x7f9db91b);
            return (uint32_t)((var_34h & 0x54a6f35b) < 0xff - var_35h);
        }
        for (var_18h = 0; var_18h != 0; var_18h = var_18h + 1) {
            var_10h = 0;
            if (var_18h == 0) {
                sym.set_var(0, 0xfffffff7, 0, (int32_t)(int16_t)var_1ah, 7, (uint32_t)var_21h, var_28h, 1, 
                            (int32_t)var_2ah, -0x5cc64359, (uint32_t)var_2ch, (int32_t)(char)var_2dh, var_34h, 
                            (uint32_t)var_35h, 0, 0xfd, 1, -1, var_44h, var_48h, (uint32_t)var_49h, 0x7f9db91b);
                return 0xf89738bb;
            }
            var_50h = 0x4f5ac3d6;
            for (var_4ah = '\x17'; -0x1c < var_4ah; var_4ah = var_4ah + -1) {
                var_50h = var_50h + 1;
                var_1ah = var_1ah & (uint16_t)var_50h;
                if ((char)var_18h * -0x10 == 0x26) {
                    uVar2 = 0x29ef;
                } else {
                    uVar2 = 0;
                }
                var_10h = (var_10h ^ 0xffffffff) & uVar2 | (int32_t)(int16_t)var_1ah;
            }
            var_21h = var_21h - 1;
            var_28h = (uint32_t)(-9 < (int32_t)(uint32_t)var_21h);
            if (var_28h != 0) {
                var_2ch = var_2ch - 1;
            }
            if ((-9 < (int32_t)(uint32_t)((int32_t)var_18h < 2) == 0xfffffffa) && (var_1ah == 0)) {
                uVar1 = 0;
            } else {
                uVar1 = 1;
            }
            var_2dh = var_2dh | uVar1;
            var_34h = (int32_t)(int16_t)var_1ah << 0xe;
            var_1ah = (uint16_t)(var_34h < 2) * -9;
            var_35h = var_35h ^ 2;
            var_2ah = 0;
            var_44h = var_44h + -1;
        }
        if ((int32_t)(uint32_t)('\0' < var_4ah) >> ((uint8_t)var_10h & 0x1f) < -2) {
            iVar3 = -0x77ca;
        } else {
            iVar3 = -0x77cb;
        }
        if ((int32_t)(uint32_t)var_35h < iVar3) {
            var_10h = 0x80;
        } else {
            var_10h = 0;
        }
        var_34h = 0;
        while (var_34h == 0x30) {
            var_48h = var_48h + -1;
            var_34h = 0x31;
        }
        var_49h = var_49h - 1;
        var_14h = 0xffffffef;
    } while( true );
}
