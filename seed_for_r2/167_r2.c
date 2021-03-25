
// WARNING: Variable defined which should be unmapped: var_8h
// WARNING: Removing unreachable block (ram,0x08049a11)
// WARNING: Removing unreachable block (ram,0x08049a36)
// WARNING: Removing unreachable block (ram,0x08049a7a)
// WARNING: Removing unreachable block (ram,0x08049a88)
// WARNING: Removing unreachable block (ram,0x08049a81)
// WARNING: Removing unreachable block (ram,0x08049a8d)
// WARNING: Removing unreachable block (ram,0x08049906)
// WARNING: Removing unreachable block (ram,0x080498bd)
// WARNING: Removing unreachable block (ram,0x080497df)
// WARNING: Removing unreachable block (ram,0x08049823)
// WARNING: Removing unreachable block (ram,0x0804981c)
// WARNING: Removing unreachable block (ram,0x08049828)
// WARNING: Removing unreachable block (ram,0x08049853)
// WARNING: Removing unreachable block (ram,0x08049830)
// WARNING: Removing unreachable block (ram,0x0804985d)
// WARNING: Removing unreachable block (ram,0x080498b6)
// WARNING: Removing unreachable block (ram,0x080498c2)
// WARNING: Removing unreachable block (ram,0x08049939)
// WARNING: Removing unreachable block (ram,0x080498cf)
// WARNING: Removing unreachable block (ram,0x080499d1)
// WARNING: Removing unreachable block (ram,0x08049aee)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_43h
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_6dh
// WARNING: [r2ghidra] Detected overlap for variable var_7dh
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

uint32_t sym.func_1(void)
{
    int32_t var_88h;
    int32_t var_84h;
    int32_t var_7ch;
    uint32_t var_78h;
    int32_t var_74h;
    int32_t var_6ch;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_54h;
    int32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_40h;
    int32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    sym.__x86.get_pc_thunk.ax();
    var_14h = 0xffffffff;
    var_24h = 0xffffffff;
    for (var_ch = 0xb; 4 < var_ch; var_ch = var_ch + -5) {
        for (var_10h = -0x10; var_10h < -0x15; var_10h = var_10h + -1) {
            var_14h = ~var_24h;
            var_24h = 0xffffffe5;
        }
    }
    sym.set_var(var_ch, 0, var_14h, -0x1921ee2a, 0xffff, -0xf6c4fc0, 0x4dd9, 0xe9, 1, 0, var_24h);
    return var_24h;
}
