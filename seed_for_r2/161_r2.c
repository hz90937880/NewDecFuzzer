
// WARNING: Removing unreachable block (ram,0x0804970b)
// WARNING: Removing unreachable block (ram,0x08049718)
// WARNING: Removing unreachable block (ram,0x08049734)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_9h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_12h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_9h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_10h;
    uint8_t var_9h;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0x3af7806a;
    var_9h = 0xd9;
    for (var_4h = -0x15; -0x1e < var_4h; var_4h = var_4h + -1) {
        var_9h = var_9h & 7 < var_4h & ~(uint8_t)var_4h;
        var_8h = 0;
    }
    sym.set_var(0xa0734f09, 0xfffffff9, var_8h, (int32_t)(char)var_9h, 0xfff9);
    return 0xa0734f09;
}
