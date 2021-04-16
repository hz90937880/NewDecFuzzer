
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x08049b61)
// WARNING: Removing unreachable block (ram,0x080499a1)
// WARNING: Removing unreachable block (ram,0x08049ae0)
// WARNING: Removing unreachable block (ram,0x08049b67)
// WARNING: Removing unreachable block (ram,0x08049b6e)
// WARNING: Removing unreachable block (ram,0x08049b73)
// WARNING: Removing unreachable block (ram,0x080499e9)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_54h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_5eh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_64h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_3bh
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_5eh
// WARNING: [r2ghidra] Detected overlap for variable var_5fh
// WARNING: [r2ghidra] Detected overlap for variable var_75h

undefined4 sym.func_1(void)
{
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_74h;
    uint32_t var_70h;
    uint32_t var_6ch;
    uint32_t var_68h;
    undefined4 var_64h;
    int32_t var_5ch;
    uint32_t var_58h;
    undefined4 var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    uint32_t var_38h;
    uint32_t var_34h;
    uint32_t var_30h;
    uint32_t var_2ch;
    int32_t var_28h;
    uint8_t var_21h;
    int32_t var_20h;
    uint8_t var_19h;
    uint32_t var_18h;
    uint16_t var_12h;
    uint16_t var_10h;
    uint8_t var_eh;
    uint32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_dh._0_1_ = -6;
    var_10h = 0x4b80;
    var_12h = 0x13bc;
    var_18h = 0;
    var_19h = 7;
    var_20h = -1;
    var_21h = 8;
    var_28h = 8;
    var_30h = 3;
    for (var_eh = 0x19; -0x1e < (char)var_eh; var_eh = var_eh - 7) {
        var_10h = (uint16_t)
                  ((int32_t)(char)var_eh <
                  (int32_t)(((int32_t)(char)var_dh | (uint32_t)((uint8_t)(1 / var_eh) <= var_30h)) - 10));
        if (var_eh == 0x93) {
            for (var_12h = 3; 0x31 < var_12h; var_12h = var_12h + 1) {
                var_30h = var_12h + 1;
                var_19h = (char)var_12h >> 6;
                var_18h = (uint32_t)(1 < var_21h) ^
                          (0x8e7d4845U - -7 / (int32_t)(char)(1 / (uint32_t)var_28h)) % (uint32_t)var_12h;
            }
        } else {
            if (var_eh != 0x93) break;
            var_18h = (uint32_t)(var_12h & 0x51);
            var_19h = (char)var_dh != -0x6d;
            var_20h = var_20h + -1;
            for (var_12h = 0xfff2; var_12h < 4; var_12h = var_12h + 8) {
                var_21h = 0xe3;
                for (var_dh._0_1_ = '\0'; (char)var_dh < -0x1b; var_dh._0_1_ = (char)var_dh + -1) {
                }
                var_28h = 0;
            }
        }
        for (var_34h = 0; var_34h != 0x1a; var_34h = var_34h + 1) {
            for (var_2ch = 0xffffffee; (int32_t)var_2ch < -0x19; var_2ch = var_2ch - 1) {
                for (var_19h = 0; 0x27 < var_19h; var_19h = var_19h + 3) {
                }
            }
        }
    }
    sym.set_var((int32_t)(char)var_dh, (int32_t)(char)var_eh, (uint32_t)var_10h, (uint32_t)var_12h, var_18h, 
                (uint32_t)var_19h, var_20h, (int32_t)(char)var_21h, var_28h);
    return 0x17e6f66a;
}
