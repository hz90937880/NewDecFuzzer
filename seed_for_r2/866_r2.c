
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049bb8)
// WARNING: Removing unreachable block (ram,0x08049af6)
// WARNING: Removing unreachable block (ram,0x08049b07)
// WARNING: Removing unreachable block (ram,0x08049b3b)
// WARNING: Removing unreachable block (ram,0x08049b48)
// WARNING: Removing unreachable block (ram,0x08049b41)
// WARNING: Removing unreachable block (ram,0x08049b4d)
// WARNING: Removing unreachable block (ram,0x08049dff)
// WARNING: Removing unreachable block (ram,0x08049bc7)
// WARNING: Removing unreachable block (ram,0x08049cd9)
// WARNING: Removing unreachable block (ram,0x08049be0)
// WARNING: Removing unreachable block (ram,0x08049c15)
// WARNING: Removing unreachable block (ram,0x08049c0e)
// WARNING: Removing unreachable block (ram,0x08049c1a)
// WARNING: Removing unreachable block (ram,0x08049ccf)
// WARNING: Removing unreachable block (ram,0x08049cf8)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_44h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_53h
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_57h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_28h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Detected overlap for variable var_b5h
// WARNING: [r2ghidra] Detected overlap for variable var_beh
// WARNING: [r2ghidra] Detected overlap for variable var_75h
// WARNING: [r2ghidra] Detected overlap for variable var_78h
// WARNING: [r2ghidra] Detected overlap for variable var_79h
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_ach
// WARNING: [r2ghidra] Detected overlap for variable var_50h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

uint32_t sym.func_1(void)
{
    uint16_t uVar1;
    uint32_t var_ech;
    int32_t var_e8h;
    uint32_t var_e4h;
    uint32_t var_e0h;
    int32_t var_dch;
    int32_t var_d8h;
    int32_t var_d4h;
    uint32_t var_d0h;
    int32_t var_bch;
    int32_t var_b4h;
    uint32_t var_adh;
    int32_t var_a8h;
    uint32_t var_a4h;
    int32_t var_a0h;
    uint32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    uint32_t var_84h;
    uint32_t var_80h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_5ch;
    int32_t var_52h;
    int32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_44h;
    uint16_t var_3eh;
    uint32_t var_3ch;
    uint32_t var_38h;
    uint16_t var_32h;
    int32_t var_30h;
    uint16_t var_28h;
    uint8_t var_21h;
    uint32_t var_20h;
    uint16_t var_1ah;
    uint32_t var_18h;
    uint8_t var_11h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_11h = 0x54;
    var_18h = 0x3967be2d;
    var_1ah = 0xd17f;
    var_20h = 0x3b0e2d30;
    var_21h = 0xf6;
    var_28h = 0xdff4;
    var_38h = 0x6f9a4d91;
    var_3eh = 0xfff7;
    var_44h = 0;
code_r0x08049893:
    for (var_10h = 0x10; 0x13 < (int32_t)var_10h; var_10h = var_10h + 1) {
    }
    var_32h = 0;
    do {
        if (var_32h < 0x35) {
            sym.set_var(var_10h, -0x7c25, (int32_t)(char)var_11h, var_18h, (uint32_t)var_1ah, 1, var_20h, 0x7d, 
                        (uint32_t)var_21h, -0x3f, -0x32, 0x10, 1, 0xae80, 3, -0x58, (uint32_t)var_28h, -0x6b, 0x280f67d3
                        , 2);
            return var_38h;
        }
        var_38h = 0;
        while (var_38h < 0x22) {
            if (var_38h != 0) goto code_r0x08049893;
            var_3eh = var_3eh - 1;
            var_18h = var_18h + 1;
            for (stack0xffffffac = 0; (uint32_t)stack0xffffffac < 0x1b; unique0x00000f40 = stack0xffffffac + 1) {
            }
            var_44h = var_44h | var_18h ^ 0xfffffffe;
            var_11h = ((uint8_t)var_32h | 1) & (int32_t)var_44h <= (int32_t)(uint32_t)var_3eh;
            if (((stack0xffffffac == 1U) < 3) && (var_3eh != 0)) {
                uVar1 = 1;
            } else {
                uVar1 = 0;
            }
            var_1ah = var_1ah & uVar1;
            var_20h = var_20h & 32000;
            var_10h = var_18h;
            var_38h = 1;
        }
        var_10h = var_10h | 0xffffffce;
        var_28h = var_28h - 1;
        var_21h = 0xce;
        var_32h = var_32h + 1;
    } while( true );
}
