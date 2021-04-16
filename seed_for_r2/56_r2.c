
// WARNING: Variable defined which should be unmapped: var_8h
// WARNING: Removing unreachable block (ram,0x08049706)
// WARNING: Removing unreachable block (ram,0x080497d2)
// WARNING: Removing unreachable block (ram,0x0804983a)
// WARNING: Removing unreachable block (ram,0x080497e1)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_40h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

uint8_t sym.func_1(void)
{
    uint32_t uVar1;
    int32_t var_44h;
    undefined4 var_40h;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    uint8_t var_12h;
    char var_11h;
    uint32_t var_ch;
    int32_t var_8h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0;
    var_11h = '\n';
    for (var_12h = 0xf2; var_12h < 0xf; var_12h = var_12h + 1) {
        if ((var_ch == 0) || (var_ch == 0)) {
            uVar1 = 0;
        } else {
            uVar1 = 1;
        }
        var_ch = (uint32_t)(((uVar1 == var_ch | var_ch) != 0) < 0x659e);
        var_11h = '\0';
    }
    sym.set_var(var_ch, 9, 4, -1, 1, (int32_t)var_11h, 0xdf);
    return var_12h;
}
