
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049902)
// WARNING: Removing unreachable block (ram,0x08049a84)
// WARNING: Removing unreachable block (ram,0x08049a9e)
// WARNING: Removing unreachable block (ram,0x08049a8d)
// WARNING: Removing unreachable block (ram,0x08049aa4)
// WARNING: Removing unreachable block (ram,0x08049aa7)
// WARNING: Removing unreachable block (ram,0x08049aac)
// WARNING: Removing unreachable block (ram,0x08049936)
// WARNING: Removing unreachable block (ram,0x08049a04)
// WARNING: Removing unreachable block (ram,0x080499aa)
// WARNING: Removing unreachable block (ram,0x08049a0a)
// WARNING: Removing unreachable block (ram,0x08049a5b)
// WARNING: Removing unreachable block (ram,0x08049a68)
// WARNING: Removing unreachable block (ram,0x08049a61)
// WARNING: Removing unreachable block (ram,0x08049a6d)
// WARNING: Removing unreachable block (ram,0x08049ab7)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_50h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_1fh
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_48h
// WARNING: [r2ghidra] Detected overlap for variable var_7eh
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_61h
// WARNING: [r2ghidra] Detected overlap for variable var_76h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

uint32_t sym.func_1(void)
{
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    undefined4 var_50h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_34h;
    int32_t var_30h;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_1ch;
    uint32_t var_18h;
    int16_t var_14h;
    uint16_t var_12h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_14h = 0x5d73;
    var_18h = 0xef544bd1;
    var_1ch = 0xedf2ffa3;
    for (var_10h = 0; 1 < var_10h; var_10h = var_10h + 1) {
    }
    var_34h = 0;
    for (var_12h = 2; var_12h < 0x26; var_12h = var_12h + 1) {
        var_1ch = 4;
        var_18h = 0xffffffd8;
        var_14h = -1;
        var_34h = 1;
    }
    sym.set_var((uint32_t)(uint16_t)(var_14h + 1U), (uint32_t)(var_12h | 0xfffd), (uint32_t)(uint16_t)(var_14h + 1U), 
                var_18h, var_1ch, 0xd92b, 5, -4, 1, -0x2241ef1d, 0, 0, 0x493b66af, 5, 0xadb170a);
    return var_34h;
}
