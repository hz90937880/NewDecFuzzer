
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049a28)
// WARNING: Removing unreachable block (ram,0x0804988c)
// WARNING: Removing unreachable block (ram,0x08049c1b)
// WARNING: Removing unreachable block (ram,0x08049b07)
// WARNING: Removing unreachable block (ram,0x08049cb5)
// WARNING: Removing unreachable block (ram,0x08049d07)
// WARNING: Removing unreachable block (ram,0x08049cd9)
// WARNING: Removing unreachable block (ram,0x08049d0e)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2dh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_48h
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_84h
// WARNING: [r2ghidra] Detected overlap for variable var_8ah
// WARNING: [r2ghidra] Detected overlap for variable var_8ch
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_74h
// WARNING: [r2ghidra] Detected overlap for variable var_95h

uint16_t sym.func_1(void)
{
    uint32_t uVar1;
    char cVar2;
    uint8_t uVar3;
    uint32_t var_a4h;
    int32_t var_a0h;
    int32_t var_9ch;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_88h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_76h;
    uint32_t var_70h;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_58h;
    uint32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_46h;
    uint32_t var_40h;
    uint32_t var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    uint8_t var_2dh;
    uint16_t var_2ch;
    uint8_t var_29h;
    uint32_t var_28h;
    int32_t var_24h;
    uint16_t var_20h;
    uint8_t var_1dh;
    uint32_t var_1ch;
    uint16_t var_16h;
    uint16_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0xfffffff8;
    var_14h = 0xffff;
    var_16h = 1;
    var_1dh = 0xfa;
    var_20h = 0x9a7b;
    var_24h = 0x7e389239;
    var_28h = 0xe0bb6b9e;
    var_29h = 0;
    var_2ch = 0xd7fa;
    var_2dh = 0xf6;
    uVar1 = var_28h;
code_r0x080497cb:
    var_28h = uVar1;
    cVar2 = (char)((int32_t)(int16_t)((char)(uint8_t)var_10h * 0x72) >> ((uint8_t)var_10h & 0x1f));
    var_16h = var_16h ^ var_2dh != 2;
    var_2dh = 0;
    do {
        if ((char)var_2dh < '\x1b') {
            for (var_10h = 0xffffffe7; var_10h < 0x33; var_10h = var_10h + 1) {
            }
            sym.set_var(2, var_10h, (int32_t)cVar2, (int32_t)(int16_t)var_14h, (uint32_t)var_16h, -0x7b6046b, 
                        (int32_t)(char)var_1dh, (uint32_t)var_20h, var_24h, (uint32_t)(var_16h != 0xd034), 
                        (uint32_t)var_29h, (uint32_t)var_2ch);
            return var_2ch;
        }
        for (var_10h = 0xffffffe2; var_10h < 0xf; var_10h = var_10h + 1) {
            var_40h = 0xdbac6b99;
            var_14h = 0;
            var_1dh = var_2dh;
            var_3ch = (uint32_t)
                      ((int32_t)(char)var_2dh <=
                      (int32_t)(uint32_t)
                               ((uint32_t)(var_16h < 2) << ((uint8_t)(0 << ((uint8_t)var_10h & 0x1f)) & 0x1f) == 0xdc23)
                      );
            var_20h = var_16h;
            for (var_34h = 0; var_34h < 0x28; var_34h = var_34h + 1) {
                if ((var_3ch == 0) || (var_20h == 0)) {
                    uVar3 = 0;
                } else {
                    uVar3 = 1;
                }
                var_40h = var_40h & cVar2 < (char)(~uVar3 ^ var_1dh);
                var_3ch = 0xf849fb95;
                var_20h = var_20h | 1;
                var_1dh = ~((char)var_20h + (char)var_16h + 2U);
                uVar1 = var_40h;
                if ((int32_t)(uint32_t)(var_14h == (int16_t)(char)var_1dh) < (int32_t)cVar2) goto code_r0x080497cb;
                var_24h = var_24h ^ (uint32_t)(var_14h == 0x30);
                var_14h = (uint16_t)((int32_t)(uint32_t)(var_10h != 0) < -0x7b6046b);
                if ((uint32_t)(var_14h <= var_16h) << ((uint8_t)var_28h & 0x1f) == 0) {
                    var_29h = var_29h - 1;
                    var_40h = 0;
                }
                var_20h = (uint16_t)var_24h;
                var_2ch = var_2ch | var_34h < (var_24h & 0xffffU);
            }
        }
        var_2dh = var_2dh + 1;
    } while( true );
}
