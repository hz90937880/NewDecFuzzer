
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x08049778)
// WARNING: Removing unreachable block (ram,0x08049741)
// WARNING: Removing unreachable block (ram,0x08049734)
// WARNING: Removing unreachable block (ram,0x0804970c)
// WARNING: Removing unreachable block (ram,0x080497f1)
// WARNING: Removing unreachable block (ram,0x0804979c)
// WARNING: Removing unreachable block (ram,0x08049821)
// WARNING: Removing unreachable block (ram,0x08049827)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_34h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_14h

undefined4 sym.func_1(void)
{
    undefined4 var_34h;
    int32_t var_30h;
    uint32_t var_28h;
    uint32_t var_24h;
    uint32_t var_1ch;
    uint32_t var_15h;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0xb2d863e3;
    var_8h = 0;
    for (stack0xffffffe8 = 0; 0x10 < (int32_t)stack0xffffffe8; unique0x00000f40 = stack0xffffffe8 + 3) {
        var_ch = 6;
        var_8h = var_8h + 1;
    }
    sym.set_var(0x7f, 0xf39cee24, 6, var_8h, var_ch, 0);
    return 0xffffffff;
}
