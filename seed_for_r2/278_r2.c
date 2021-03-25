
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x08049849)
// WARNING: Removing unreachable block (ram,0x08049856)
// WARNING: Removing unreachable block (ram,0x08049863)
// WARNING: Removing unreachable block (ram,0x0804985c)
// WARNING: Removing unreachable block (ram,0x08049868)
// WARNING: Removing unreachable block (ram,0x08049878)
// WARNING: Removing unreachable block (ram,0x08049908)
// WARNING: Removing unreachable block (ram,0x0804994d)
// WARNING: Removing unreachable block (ram,0x08049986)
// WARNING: Removing unreachable block (ram,0x0804999b)
// WARNING: Removing unreachable block (ram,0x080499a1)
// WARNING: Removing unreachable block (ram,0x080499bf)
// WARNING: Removing unreachable block (ram,0x080499b8)
// WARNING: Removing unreachable block (ram,0x080499c4)
// WARNING: Removing unreachable block (ram,0x08049a0a)
// WARNING: Removing unreachable block (ram,0x08049a25)
// WARNING: Removing unreachable block (ram,0x08049a20)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_60h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_78h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_37h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_43h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_60h
// WARNING: [r2ghidra] Detected overlap for variable var_64h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_86h

undefined2 sym.func_1(void)
{
    int32_t var_ach;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    undefined4 var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_62h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_50h;
    uint32_t var_48h;
    int32_t var_40h;
    int32_t var_3ch;
    uint32_t var_34h;
    int32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_20h;
    int32_t var_1ch;
    char var_15h;
    uint32_t var_14h;
    uint32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_14h = 0x69209a48;
    var_15h = '\x04';
    var_1ch = -8;
    for (stack0xffffff9c = 0; stack0xffffff9c < -0x14; unique0x00000f40 = stack0xffffff9c + -1) {
        var_14h = var_14h ^ 1;
        var_15h = '\0';
    }
    var_eh._0_2_ = 0;
    while ((uint16_t)var_eh == 0x2a) {
        var_15h = -9;
        var_1ch = var_14h - (var_14h != 0) | var_14h;
        var_eh._0_2_ = 0x2b;
    }
    sym.set_var((uint32_t)(uint16_t)var_eh, var_14h, (int32_t)var_15h, var_1ch, 0x2e6b, 0xdd, 0x4d14c5bd, -0x59a2d9b6, 
                0x45aa775b, 0, 0x2149, 0, -10, 3, -9, -1, 0, 0xfffa);
    return 0x93e1;
}
