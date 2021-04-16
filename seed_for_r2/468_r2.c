
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049a77)
// WARNING: Removing unreachable block (ram,0x08049a8d)
// WARNING: Removing unreachable block (ram,0x08049afa)
// WARNING: Removing unreachable block (ram,0x08049b8f)
// WARNING: Removing unreachable block (ram,0x08049b93)
// WARNING: Removing unreachable block (ram,0x08049991)
// WARNING: Removing unreachable block (ram,0x08049a63)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_40h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2bh
// WARNING: [r2ghidra] Detected overlap for variable var_31h
// WARNING: [r2ghidra] Detected overlap for variable var_34h
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_58h
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_71h
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_99h
// WARNING: [r2ghidra] Detected overlap for variable var_9ah
// WARNING: [r2ghidra] Detected overlap for variable var_9ch
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint32_t uVar1;
    int32_t var_a0h;
    int32_t var_98h;
    uint32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    uint32_t var_84h;
    int32_t var_80h;
    uint32_t var_78h;
    uint32_t var_70h;
    uint32_t var_6ch;
    uint32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_40h;
    char var_39h;
    uint32_t var_38h;
    int32_t var_30h;
    char var_2bh;
    uint16_t var_2ah;
    uint32_t var_28h;
    int16_t var_24h;
    uint8_t var_21h;
    uint32_t var_20h;
    uint16_t var_1ah;
    int32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_14h = 0xfffffff6;
    var_18h = 9;
    var_1ah = 0x86f8;
    var_20h = 0x2e46a6f;
    var_21h = 3;
    var_24h = 1;
    var_28h = 0;
    var_2ah = 1;
    var_2bh = -0x35;
    var_10h = 0xfffffff6;
    while (var_10h == 0x18) {
        var_39h = '\f';
        uVar1 = var_14h | 8;
        var_18h = var_18h + -1;
        var_1ah = (uint16_t)
                  ((int32_t)uVar1 <=
                  (int32_t)(uint32_t)
                           ((var_14h & (char)((char)var_10h * '\b') != (char)-((char)((uint8_t)var_18h | 0x5e) / '\a'))
                           == 8));
        if (var_1ah == 0) {
            var_28h = var_28h ^ 0x616e91f1;
            var_2ah = var_2ah | (uint16_t)
                                ((int32_t)(int16_t)(((int16_t)var_18h * 0xd4 & ((uint16_t)var_28h & 0xff) + 0x18) - 1)
                                << 0xc);
            var_14h = uVar1;
            if (var_21h != 0) break;
            for (var_20h = 0; var_21h = (uint8_t)var_18h, var_20h != 6; var_20h = var_20h + 6) {
                if ((var_39h == '\0') && (-1 < (int16_t)var_2ah)) {
                    var_2bh = '\0';
                } else {
                    var_2bh = '\x01';
                }
                var_39h = '\b';
            }
        } else {
            for (var_14h = 0x18; -0x1d < (int32_t)var_14h; var_14h = var_14h - 1) {
                for (var_40h = 0; -0x19 < var_40h; var_40h = var_40h + -4) {
                    var_20h = var_20h + 1;
                    var_21h = 0;
                    var_24h = -0x10e9;
                }
            }
        }
        var_10h = 0x19;
    }
    sym.set_var(var_10h, var_14h, var_18h, (int32_t)(int16_t)var_1ah, var_20h, (int32_t)(char)var_21h, (int32_t)var_24h
                , var_28h, (int32_t)(int16_t)var_2ah, (int32_t)var_2bh, -1, 0x7a216d7e, 0, -6, 6, -3);
    return 0xffffffff;
}
