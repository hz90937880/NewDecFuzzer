
// WARNING: Removing unreachable block (ram,0x080496c9)
// WARNING: Removing unreachable block (ram,0x080496d9)
// WARNING: Removing unreachable block (ram,0x080496ed)
// WARNING: Removing unreachable block (ram,0x080496fb)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_9h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_12h;
    uint16_t var_ch;
    char var_9h;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0x14768c0a;
    var_ch = 0x91b6;
code_r0x080496ad:
    for (var_4h = 0; 0x1a < var_4h; var_4h = var_4h + 1) {
        var_8h = var_8h & 0xdb22124f;
        var_ch = var_ch | 0xd;
    }
    do {
        var_9h = '\0';
        while( true ) {
            if (var_9h == -0x14) {
                sym.set_var(var_4h, var_8h, 0xffffffec, 0);
                return 0xffffffec;
            }
            if (var_4h != 0) goto code_r0x080496ad;
            if ((var_8h == 0) && (var_ch != 0)) break;
            var_9h = var_9h + -4;
        }
    } while( true );
}
