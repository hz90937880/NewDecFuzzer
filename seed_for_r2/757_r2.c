
// WARNING: Variable defined which should be unmapped: var_8h
// WARNING: Removing unreachable block (ram,0x0804981f)
// WARNING: Removing unreachable block (ram,0x08049740)
// WARNING: Removing unreachable block (ram,0x0804974d)
// WARNING: Removing unreachable block (ram,0x08049779)
// WARNING: Removing unreachable block (ram,0x080498d6)
// WARNING: Removing unreachable block (ram,0x0804996f)
// WARNING: Removing unreachable block (ram,0x08049992)
// WARNING: Removing unreachable block (ram,0x0804997e)
// WARNING: Removing unreachable block (ram,0x08049998)
// WARNING: Removing unreachable block (ram,0x08049764)
// WARNING: Removing unreachable block (ram,0x0804976d)
// WARNING: Removing unreachable block (ram,0x08049936)
// WARNING: Removing unreachable block (ram,0x08049951)
// WARNING: Removing unreachable block (ram,0x0804995e)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_20h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_13h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_42h

undefined sym.func_1(void)
{
    int32_t var_48h;
    uint32_t var_40h;
    uint32_t var_38h;
    uint32_t var_34h;
    uint32_t var_2dh;
    uint32_t var_28h;
    char var_21h;
    int32_t var_20h;
    int16_t var_1ch;
    int32_t var_18h;
    char var_13h;
    uint32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    
    sym.__x86.get_pc_thunk.ax();
    var_1ch = 1;
    var_20h = 0;
    var_13h = 'W';
    var_21h = '\0';
    while (var_21h == ',') {
        var_13h = var_13h + '\x01';
        var_20h = 1;
        var_1ch = 0;
        var_21h = '-';
    }
    sym.set_var(0, 0xfffffffe, 1, 0xffffffa9, (int32_t)var_13h, 0, 0xffffffff, (int32_t)var_1ch, var_20h);
    return 0;
}
