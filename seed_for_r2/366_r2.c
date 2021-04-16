
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x080499b8)
// WARNING: Removing unreachable block (ram,0x08049866)
// WARNING: Removing unreachable block (ram,0x08049879)
// WARNING: Removing unreachable block (ram,0x08049931)
// WARNING: Removing unreachable block (ram,0x08049a8f)
// WARNING: Removing unreachable block (ram,0x08049ab3)
// WARNING: Removing unreachable block (ram,0x08049a98)
// WARNING: Removing unreachable block (ram,0x08049ab9)
// WARNING: Removing unreachable block (ram,0x08049a37)
// WARNING: Removing unreachable block (ram,0x08049abd)
// WARNING: Removing unreachable block (ram,0x08049a72)
// WARNING: Removing unreachable block (ram,0x08049ac3)
// WARNING: Removing unreachable block (ram,0x08049ac6)
// WARNING: Removing unreachable block (ram,0x08049ae1)
// WARNING: Removing unreachable block (ram,0x08049aec)
// WARNING: Removing unreachable block (ram,0x08049af3)
// WARNING: Removing unreachable block (ram,0x08049af8)
// WARNING: Removing unreachable block (ram,0x08049b2f)
// WARNING: Removing unreachable block (ram,0x08049b33)
// WARNING: Removing unreachable block (ram,0x08049bda)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_36h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_48h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_5eh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_34h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_4fh
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_5eh
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_6ch
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Detected overlap for variable var_70h
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Detected overlap for variable var_87h
// WARNING: [r2ghidra] Detected overlap for variable var_88h
// WARNING: [r2ghidra] Detected overlap for variable var_34h
// WARNING: [r2ghidra] Detected overlap for variable var_8dh
// WARNING: [r2ghidra] Detected overlap for variable var_99h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_1ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_2ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_30h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ch to Decompiler type: Unknown type identifier
// signed

uint8_t sym.func_1(void)
{
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_98h;
    uint32_t var_94h;
    int32_t var_8ch;
    int32_t var_84h;
    int32_t var_80h;
    uint32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_68h;
    int32_t var_64h;
    uint32_t var_5ch;
    int32_t var_54h;
    undefined4 var_48h;
    int32_t var_40h;
    uint32_t var_3ch;
    int32_t var_36h;
    int32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    uint8_t var_21h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    undefined4 var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_1ch = -0x76dd93cf;
    var_21h = 0x45;
    var_28h = 0xffffffff;
    var_2ch = 0x87c7a501;
    for (var_18h = 0; 1 < var_18h; var_18h = var_18h + 1) {
        var_1ch = var_1ch & 1;
        var_21h = var_21h + 1;
    }
    for (stack0xffffffc8 = -0x1d; stack0xffffffc8 < 0xd; unique0x00000f40 = stack0xffffffc8 + 8) {
        var_28h = var_28h | 0x5467356a;
        var_2ch = var_2ch ^ 6;
    }
    sym.set_var(0xffffffe7, 0x2159124b, 8, var_18h, var_1ch, 0x377, -1, 0, 0x69a22db7, 0x74be, -0x7952, 0x6a, -0x3c1731a
                , (uint32_t)var_21h, var_28h, var_2ch, -0x7b);
    return var_21h;
}
