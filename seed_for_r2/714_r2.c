
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x08049c11)
// WARNING: Removing unreachable block (ram,0x080499ae)
// WARNING: Removing unreachable block (ram,0x080497e4)
// WARNING: Removing unreachable block (ram,0x080497fa)
// WARNING: Removing unreachable block (ram,0x08049807)
// WARNING: Removing unreachable block (ram,0x08049800)
// WARNING: Removing unreachable block (ram,0x0804980c)
// WARNING: Removing unreachable block (ram,0x0804982e)
// WARNING: Removing unreachable block (ram,0x08049828)
// WARNING: Removing unreachable block (ram,0x08049835)
// WARNING: Removing unreachable block (ram,0x0804983a)
// WARNING: Removing unreachable block (ram,0x08049847)
// WARNING: Removing unreachable block (ram,0x08049907)
// WARNING: Removing unreachable block (ram,0x08049b07)
// WARNING: Removing unreachable block (ram,0x08049c42)
// WARNING: Removing unreachable block (ram,0x0804999b)
// WARNING: Removing unreachable block (ram,0x08049abb)
// WARNING: Removing unreachable block (ram,0x08049ae5)
// WARNING: Removing unreachable block (ram,0x08049b19)
// WARNING: Removing unreachable block (ram,0x08049b1c)
// WARNING: Removing unreachable block (ram,0x08049b95)
// WARNING: Removing unreachable block (ram,0x08049b22)
// WARNING: Removing unreachable block (ram,0x08049b9b)
// WARNING: Removing unreachable block (ram,0x08049c34)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_3ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_44h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_60h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_45h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_23h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_50h
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_7dh
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_91h
// WARNING: [r2ghidra] Detected overlap for variable var_94h
// WARNING: [r2ghidra] Detected overlap for variable var_a0h
// WARNING: [r2ghidra] Detected overlap for variable var_a2h

undefined4 sym.func_1(void)
{
    int32_t var_b0h;
    int32_t var_a3h;
    int32_t var_9ch;
    int32_t var_98h;
    uint32_t var_90h;
    int32_t var_8ch;
    int32_t var_84h;
    uint32_t var_7ch;
    int32_t var_78h;
    int32_t var_70h;
    int32_t var_68h;
    int32_t var_64h;
    undefined4 var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    uint32_t var_54h;
    int32_t var_4ch;
    undefined4 var_44h;
    int32_t var_40h;
    uint32_t var_3ch;
    uint32_t var_38h;
    uint16_t var_32h;
    int32_t var_30h;
    int32_t var_28h;
    uint8_t var_22h;
    uint8_t var_21h;
    uint32_t var_20h;
    uint32_t var_1ch;
    char var_15h;
    uint32_t var_14h;
    uint32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_eh._0_2_ = 0xd7f;
    var_15h = '\x04';
    var_1ch = 0xd6b9c2d6;
    var_21h = 0xfc;
    var_22h = 7;
    var_30h = -0x136b9bb6;
    var_32h = 0xffff;
    for (var_3ch = 0xffffffee; (int32_t)var_3ch < 0x17; var_3ch = var_3ch + 1) {
        for (var_eh._0_2_ = 0x14; (int16_t)var_eh < 8; var_eh._0_2_ = (int16_t)var_eh + -8) {
            var_15h = '\0';
            var_1ch = (int32_t)(int16_t)((uint16_t)(1 % 0) ^ 0xffff) + 0xf6;
            var_21h = 1;
        }
    }
    for (var_14h = 0xfffffff8; var_14h < 0x11; var_14h = var_14h + 1) {
        if (var_3ch != (var_14h >> 6 & 3)) {
            var_3ch = var_3ch & var_21h;
        }
        var_22h = (uint8_t)var_3ch & var_21h;
        if (var_22h < var_14h) {
            if (var_21h != 0) break;
            if (0x19282 < (var_32h ^ 1) + 0xc941) {
                sym.set_var((int32_t)(int16_t)var_eh, -1, var_14h, (int32_t)var_15h, var_1ch, -0x62dfa874, 0, 
                            (uint32_t)var_22h, -0x34, -0x43269d07, 5, var_30h, (int32_t)(int16_t)(var_32h ^ 1));
                return 0xfffffffa;
            }
            var_21h = 1;
            var_32h = 1;
            var_30h = var_30h & 0x170593e5;
        } else {
            var_eh._0_2_ = -0x8bc;
            if (((int32_t)((int64_t)(uint64_t)(~var_3ch >> 0x1f) / (int64_t)(int32_t)var_1ch) == -0x8bc) == 0x62dfa874)
            {
                sym.set_var(0xfffff744, -1, var_14h, (int32_t)var_15h, var_1ch, -0x62dfa874, (uint32_t)var_21h, 
                            (uint32_t)(var_1ch != 1), -0x34, -0x43269d07, 5, var_30h, (int32_t)(int16_t)var_32h);
                return 0x2a;
            }
            for (var_38h = 0xfffffffd; (int32_t)var_38h < 5; var_38h = var_38h + 5) {
            }
        }
        var_3ch = 0;
    }
    sym.set_var((int32_t)(int16_t)var_eh, -1, var_14h, (int32_t)var_15h, var_1ch, -0x62dfa874, (uint32_t)var_21h, 
                (uint32_t)var_22h, -0x34, -0x43269d07, 5, var_30h, (int32_t)(int16_t)var_32h);
    return 0xffffffcc;
}
