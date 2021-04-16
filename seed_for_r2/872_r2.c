
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x08049930)
// WARNING: Removing unreachable block (ram,0x08049970)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_36h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_5ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_48h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_ch

undefined4 sym.func_1(void)
{
    uint8_t uVar1;
    uint32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    uint32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    undefined4 var_5ch;
    uint32_t var_58h;
    int32_t var_50h;
    int32_t var_44h;
    uint32_t var_3eh;
    int16_t var_36h;
    int32_t var_34h;
    int32_t var_30h;
    uint16_t var_2ch;
    uint8_t var_29h;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    uint32_t var_18h;
    char var_12h;
    char var_11h;
    uint16_t var_10h;
    uint32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_12h = '\x01';
    var_18h = 0xfffffff6;
    var_1ch = -4;
    var_24h = 9;
    var_28h = -0x673c2cb2;
    var_29h = 1;
    var_30h = 1;
    var_10h = 0;
    var_11h = '\0';
    for (var_eh._0_2_ = 0xffe8; 0x11 < (uint16_t)var_eh; var_eh._0_2_ = (uint16_t)var_eh + 1) {
        var_30h = var_30h | (uint32_t)('\x01' < var_11h);
        var_10h = (uint16_t)var_30h;
        var_12h = (char)var_30h * -0x10 + -0x3b;
        for (var_2ch = 0; 3 < var_2ch; var_2ch = var_2ch + 1) {
            uVar1 = 1;
            var_11h = '\0';
            while (var_11h == -0x18) {
                var_10h = var_10h ^ 6;
                var_18h = SEXT24((int16_t)var_10h);
                for (var_36h = -0xe; -3 < var_36h; var_36h = var_36h + 1) {
                    var_24h = var_24h + 1;
                    var_18h = 0xffffffff;
                    var_1ch = 0;
                }
                var_28h = var_28h + -1;
                for (var_36h = 3; var_36h < -0xc; var_36h = var_36h + -1) {
                }
                var_11h = -0x19;
            }
            for (var_12h = -8; var_12h != -8; var_12h = var_12h + '\t') {
                var_29h = 0;
                var_10h = (uint16_t)(1 << (uVar1 & 0x1f));
                var_1ch = var_1ch & 0x74dcc0c0;
                uVar1 = 0x2a;
            }
        }
    }
    sym.set_var(6, (uint32_t)(uint16_t)var_eh, (int32_t)(int16_t)var_10h, (int32_t)var_11h, (int32_t)var_12h, var_18h, 
                var_1ch, 0, -0x19, -6, var_24h, -0x1c72, var_28h, (uint32_t)var_29h);
    return 0x3372;
}
