
// WARNING: Removing unreachable block (ram,0x08049730)
// WARNING: Removing unreachable block (ram,0x0804973d)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_25h

undefined4 sym.func_1(void)
{
    int32_t var_30h;
    int32_t var_2ch;
    uint32_t var_24h;
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint16_t var_eh;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 1;
    var_eh = 0x5f99;
    for (var_8h = 0xe; -0x18 < var_8h; var_8h = var_8h + -1) {
        for (var_ch = -9; var_ch < -1; var_ch = var_ch + 1) {
            var_eh = var_eh + 1;
        }
    }
    sym.set_var(-0x38a4a803, 0x4b5f5c18, 0x6d44418, var_8h, var_ch, (uint32_t)var_eh);
    return 0x4b5f5c18;
}
