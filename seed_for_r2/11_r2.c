
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049a3d)
// WARNING: Removing unreachable block (ram,0x08049a4a)
// WARNING: Removing unreachable block (ram,0x08049911)
// WARNING: Removing unreachable block (ram,0x080499e4)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_3dh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_47h
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_4bh
// WARNING: [r2ghidra] Detected overlap for variable var_31h
// WARNING: [r2ghidra] Detected overlap for variable var_34h
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_3dh
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_88h;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_74h;
    int32_t var_6ch;
    uint32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    uint32_t var_54h;
    int32_t var_50h;
    int32_t var_44h;
    char var_3dh;
    uint32_t var_3ch;
    int32_t var_38h;
    uint8_t var_31h;
    int32_t var_30h;
    int32_t var_2ch;
    uint32_t var_24h;
    uint32_t var_20h;
    uint16_t var_1ch;
    uint8_t var_19h;
    uint32_t var_18h;
    char var_11h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_11h = '\x06';
    var_18h = 0x2d7bc352;
    var_19h = 0xff;
    var_1ch = 0xacef;
    var_20h = 0x88ba54f9;
    var_24h = 1;
    var_30h = 0x785dc571;
    var_31h = 0x4b;
    var_38h = -5;
    for (var_10h = -3; 5 < var_10h; var_10h = var_10h + 7) {
        var_18h = var_18h + 1;
        if (var_18h == 0) {
            var_3ch._0_1_ = 0xd8;
        } else {
            var_3ch._0_1_ = 1;
        }
        var_19h = 1;
        if (var_10h == 0) {
            if (0x24 << ((uint8_t)var_3ch & 0x1f) == 0) {
                var_31h = 0;
                var_38h = 0;
                var_1ch = 7;
            } else {
                var_19h = (uint8_t)var_3ch ^ 1;
                var_11h = '\x01';
                var_1ch = var_1ch & 0x19;
                var_20h = 0;
                var_24h = 0;
                for (var_3dh = '\x1c'; -0xb < var_3dh; var_3dh = var_3dh + -1) {
                    var_30h = 0;
                }
            }
        }
    }
    sym.set_var(0xe8ca, var_10h, (int32_t)var_11h, 0x24, var_18h, (uint32_t)var_19h, (uint32_t)var_1ch, var_20h, 0x32c2
                , var_24h, 0x1f, 0x16cbb4d0, 0x57, var_30h, (uint32_t)var_31h);
    return var_38h;
}
