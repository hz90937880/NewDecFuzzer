
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x0804975f)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_9h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    uint8_t uVar1;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    undefined4 var_24h;
    int32_t var_20h;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    char var_9h;
    int32_t var_8h;
    undefined4 var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_9h = -3;
    for (var_8h = -0xc; 3 < var_8h; var_8h = var_8h + 1) {
        var_9h = var_9h + '\x01';
    }
    uVar1 = (var_9h != '\0') * (char)var_8h;
    sym.set_var(var_8h, (uint32_t)uVar1, (uint32_t)uVar1, 0x7fff, -0x2c1715bd);
    return var_8h;
}
