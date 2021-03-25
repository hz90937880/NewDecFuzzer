
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x0804999a)
// WARNING: Removing unreachable block (ram,0x080499a7)
// WARNING: Removing unreachable block (ram,0x08049ab4)
// WARNING: Removing unreachable block (ram,0x08049847)
// WARNING: Removing unreachable block (ram,0x08049850)
// WARNING: Removing unreachable block (ram,0x08049aec)
// WARNING: Removing unreachable block (ram,0x08049b44)
// WARNING: Removing unreachable block (ram,0x08049bb2)
// WARNING: Removing unreachable block (ram,0x08049a04)
// WARNING: Removing unreachable block (ram,0x08049a11)
// WARNING: Removing unreachable block (ram,0x08049a4b)
// WARNING: Removing unreachable block (ram,0x08049ac3)
// WARNING: Removing unreachable block (ram,0x08049aa9)
// WARNING: Removing unreachable block (ram,0x08049b8e)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_15h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_16h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ah to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_3dh
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_68h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_8ah
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_b8h;
    uint32_t var_b4h;
    int32_t var_b0h;
    int32_t var_a0h;
    uint32_t var_9ch;
    int32_t var_98h;
    uint32_t var_94h;
    int32_t var_90h;
    int32_t var_88h;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    uint32_t var_6ch;
    uint32_t var_64h;
    uint32_t var_60h;
    uint32_t var_5ch;
    uint32_t var_58h;
    uint32_t var_54h;
    int32_t var_50h;
    undefined4 var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    uint32_t var_3ch;
    uint32_t var_34h;
    int32_t var_30h;
    uint32_t var_28h;
    int32_t var_24h;
    uint16_t var_1eh;
    uint16_t var_1ch;
    int16_t var_1ah;
    uint16_t var_18h;
    char var_15h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_14h = -0x178e268a;
    var_15h = -0x4b;
    var_18h = 0xffff;
    var_1ah = -8;
    var_1ch = 0xffff;
    var_1eh = 0x6f46;
    var_24h = -0x1eb46c79;
    var_30h = -0x47c9b4d4;
    for (var_10h = 0xd; -6 < (int32_t)var_10h; var_10h = var_10h - 1) {
        for (var_14h = -0x17; var_14h < -0x14; var_14h = var_14h + 1) {
            var_15h = 0x4f5774d1 < var_14h;
            var_18h = var_18h | 0xb;
            var_30h = (uint32_t)((var_10h & 0xffff) * (uint32_t)((uint16_t)(int16_t)var_15h < var_1ch) != -8) * 0xfa;
            var_1ch = var_1ch + 1;
        }
    }
    if (var_15h == '\0') {
        do {
            var_15h = '\0';
            var_1ah = 1;
            var_18h = 0;
            var_24h = 1;
        } while (var_1ch != 0);
    } else {
        var_1eh = 0x6f47;
        var_10h = 0;
    }
    sym.set_var(var_10h, var_30h, var_14h, (int32_t)var_15h, -1, (int32_t)(int16_t)var_18h, (int32_t)var_1ah, 0x37, 
                (uint32_t)var_1ch, 0x53, -1, -2, (uint32_t)var_1eh, var_24h, 1, 0x6f);
    return 1;
}
