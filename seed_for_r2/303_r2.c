
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049975)
// WARNING: Removing unreachable block (ram,0x08049ba3)
// WARNING: Removing unreachable block (ram,0x08049bd8)
// WARNING: Removing unreachable block (ram,0x08049bb6)
// WARNING: Removing unreachable block (ram,0x08049be2)
// WARNING: Removing unreachable block (ram,0x08049bc9)
// WARNING: Removing unreachable block (ram,0x08049bd3)
// WARNING: Removing unreachable block (ram,0x08049bdf)
// WARNING: Removing unreachable block (ram,0x08049be5)
// WARNING: Removing unreachable block (ram,0x08049bfd)
// WARNING: Removing unreachable block (ram,0x08049b4d)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_80h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_61h
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Detected overlap for variable var_70h
// WARNING: [r2ghidra] Detected overlap for variable var_71h
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_8eh
// WARNING: [r2ghidra] Detected overlap for variable var_90h
// WARNING: [r2ghidra] Detected overlap for variable var_96h
// WARNING: [r2ghidra] Detected overlap for variable var_a8h
// WARNING: [r2ghidra] Detected overlap for variable var_a1h

undefined4 sym.func_1(void)
{
    uint16_t uVar1;
    int32_t var_b8h;
    int32_t var_b4h;
    int32_t var_b0h;
    int32_t var_aah;
    int32_t var_a4h;
    uint32_t var_a0h;
    uint32_t var_9ch;
    int32_t var_94h;
    int32_t var_8ch;
    int32_t var_88h;
    undefined4 var_80h;
    int32_t var_7ch;
    uint32_t var_78h;
    uint32_t var_6ch;
    int32_t var_68h;
    uint32_t var_60h;
    int32_t var_5ch;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    uint8_t var_2ah;
    uint8_t var_29h;
    int32_t var_28h;
    uint8_t var_21h;
    int32_t var_20h;
    char var_19h;
    uint16_t var_18h;
    uint16_t var_16h;
    uint16_t var_14h;
    uint16_t var_12h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_12h = 5;
    var_14h = 0x136e;
    var_16h = 0x2614;
    var_18h = 0xfff8;
    var_19h = -0x14;
    var_20h = 7;
    var_21h = 1;
    var_28h = -9;
    var_29h = 1;
    var_2ah = 0xa3;
    var_30h = 0x5b1c4912;
    var_34h = 8;
    var_3ch = -0x22490a00;
    var_40h = 0xcc167df2;
    var_44h = 0x60136b80;
    var_10h = 0;
    do {
        if (0x31 < var_10h) {
            sym.set_var(var_10h, (uint32_t)var_12h, (uint32_t)var_14h, (uint32_t)var_16h, (int32_t)(int16_t)var_18h, 
                        (int32_t)var_19h, var_20h, -0x3a0f847a, (uint32_t)var_21h, var_28h, (uint32_t)var_29h, 
                        (uint32_t)var_2ah, var_30h, var_34h, 0, var_3ch, 0x202e, -0x3eea97d9, 
                        (uint32_t)
                        ((uint32_t)((int32_t)(var_44h & 0xff) >> ((uint8_t)var_44h & 0x1f)) < 0xfffffff9 == true));
            return 0xfa;
        }
        uVar1 = var_12h - 1;
        if (var_12h < ((0xffe25bff < var_10h) <= var_10h)) {
            var_14h = 0xc921;
            var_40h = 0;
            if (0xcf9e8bfa < (var_10h != 0)) {
                var_21h = 1;
                var_44h = 0x16;
                while (var_44h == 0xffffffe7) {
                    var_28h = 0;
                    var_44h = 0xffffffe6;
                }
                var_29h = var_29h - 1;
                goto code_r0x08049cef;
            }
            if ((var_10h | 1) == 0) {
                sym.set_var(var_10h, (uint32_t)uVar1, 0xc921, (uint32_t)var_16h, (int32_t)(int16_t)var_18h, 
                            (int32_t)(char)var_10h, var_20h, -0x3a0f847a, (uint32_t)var_21h, var_28h, (uint32_t)var_29h
                            , (uint32_t)var_2ah, var_30h, var_34h, 0, var_3ch, 0x202e, -0x3eea97d9, 1);
                return 0x8d19c921;
            }
            var_44h = 1;
            var_18h = (uint16_t)var_10h &
                      (uVar1 & 1 ^
                      (uint16_t)
                      (1 / (uint64_t)(int64_t)(int32_t)((int32_t)(char)uVar1 / (int32_t)(char)var_10h & 0xffff)));
            var_16h = (uint16_t)var_10h;
        } else {
            var_21h = var_21h - 1;
            var_19h = ((int32_t)(uint32_t)(var_10h < (uint8_t)(1 % (uint16_t)(uint8_t)var_28h)) <= (int32_t)var_40h) +
                      '\x02';
            for (var_4ch = 0x14; var_4ch < -0xb; var_4ch = var_4ch + -8) {
            }
code_r0x08049cef:
            var_14h = var_14h + 1;
            var_20h = var_20h ^ (uint32_t)var_29h;
            var_2ah = (uint8_t)var_28h;
            var_30h = (int32_t)(var_28h & 0xffffU) >> 1;
            var_3ch = 0;
            var_34h = var_3ch;
        }
        var_10h = var_10h + 1;
        var_12h = uVar1;
    } while( true );
}
