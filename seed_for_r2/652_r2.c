
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049a48)
// WARNING: Removing unreachable block (ram,0x08049d16)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_25h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_46h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_88h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ech to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_61h
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_a6h
// WARNING: [r2ghidra] Detected overlap for variable var_a8h
// WARNING: [r2ghidra] Detected overlap for variable var_a9h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint32_t uVar1;
    int32_t var_f0h;
    undefined4 var_ech;
    uint32_t var_e8h;
    int32_t var_e4h;
    uint32_t var_e0h;
    int32_t var_d4h;
    int32_t var_d0h;
    int32_t var_cch;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_c0h;
    int32_t var_bch;
    int32_t var_b8h;
    int32_t var_b4h;
    uint32_t var_b0h;
    uint32_t var_a4h;
    uint32_t var_a0h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    undefined4 var_88h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_68h;
    uint32_t var_60h;
    uint32_t var_58h;
    uint32_t var_54h;
    uint32_t var_4ch;
    uint16_t var_46h;
    int32_t var_44h;
    int32_t var_40h;
    int16_t var_3ch;
    char var_39h;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_2dh;
    uint32_t var_25h;
    uint16_t var_1eh;
    uint16_t var_1ch;
    uint8_t var_19h;
    uint32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0x43d9532b;
    var_14h = 8;
    var_18h = 0xffffffff;
    var_19h = 0x9a;
    var_1ch = 0xfffe;
    var_25h._0_1_ = 0xc0;
    var_1eh = 0xfff9;
    stack0xffffffd8 = 0;
    var_2dh._0_1_ = 'Z';
    var_34h = 0x1da04f93;
    var_38h = 0x452b0610;
    stack0xffffffd0 = -4;
    var_39h = -3;
    var_3ch = 0x1d2e;
    var_40h = 7;
    var_44h = -4;
    var_46h = 0xfff9;
code_r0x080498ad:
    if ((int32_t)(char)var_10h * (int32_t)(char)var_46h == 0xc) {
        var_14h = -0x20337908;
        for (var_46h = 3; (int16_t)var_46h < 0x19; var_46h = var_46h + 2) {
        }
    } else {
        var_18h = var_18h - 1;
    }
    var_10h = 0xb;
    do {
        if (10 < var_10h) {
            sym.set_var(var_10h, 0x8700d35, var_14h, -0x29b3, -0x7c1ca7a4, var_18h, (uint32_t)var_19h, (uint32_t)var_1ch
                        , (int32_t)(char)(uint8_t)var_25h, (int32_t)(int16_t)var_1eh, stack0xffffffd8, 
                        (int32_t)(char)var_2dh, var_34h, -9, var_38h, stack0xffffffd0, (int32_t)var_39h, 
                        (int32_t)var_3ch, 0x1d3cf30, 0x9d, 0, 0, 0x66f017b8, 0x29cee28c, 0xeb90, var_40h, var_44h);
            return 1;
        }
        var_19h = var_19h - 1;
        if (var_10h < -10) {
            var_14h = 0x20;
        } else {
            var_14h = 0;
        }
        uVar1 = (uint32_t)(var_46h == var_14h < -0x41385bd6);
        if ((uVar1 & var_18h) == 0) {
            var_54h = 0;
            if (var_10h != 0) goto code_r0x080498ad;
            for (var_14h = 0; var_14h < -9; var_14h = var_14h + -6) {
                var_25h._0_1_ = (uint8_t)var_25h ^ 0x8b;
                var_1eh = -((uint16_t)var_54h & 0xff);
                var_1ch = var_1ch | var_1eh & 0xff;
                var_2dh._0_1_ = var_1eh != 0;
                *(uint32_t *)0x0 = (uint32_t)(uint8_t)(char)var_2dh;
                if (*(uint32_t *)0x0 * 0x20 == 5) {
                    var_34h = ZEXT14(-0x7c1ca7a5 < (int32_t)(uint32_t)(var_18h < 5));
                    var_e0h = (uint32_t)((int32_t)(uint32_t)((int32_t)var_54h < -0x7c1ca7a4) < -0x7c1ca7a4);
                    var_38h = var_38h ^ (uint32_t)(uint8_t)var_1eh / ((var_e0h * 0x1551026 & 0xff) + 0xf6);
                } else {
                    var_1ch = var_1ch - 1;
                    var_54h = 0xffffffda;
                    if (uVar1 != 0) break;
                }
                var_39h = -0x3a;
                var_3ch = (int16_t)var_18h;
                for (var_25h._0_1_ = 0; (char)(uint8_t)var_25h < '\x10'; var_25h._0_1_ = (uint8_t)var_25h + 1) {
                }
                stack0xffffffd0 = 0;
            }
            var_14h = 1;
            var_40h = 0;
            var_44h = 0;
        } else {
            var_1ch = 1;
        }
        var_10h = var_10h + -1;
    } while( true );
}
