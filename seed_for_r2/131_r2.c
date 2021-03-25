
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x080499d1)
// WARNING: Removing unreachable block (ram,0x08049802)
// WARNING: Removing unreachable block (ram,0x080499f8)
// WARNING: Removing unreachable block (ram,0x080499fc)
// WARNING: Removing unreachable block (ram,0x080499eb)
// WARNING: Removing unreachable block (ram,0x08049a02)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_34h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_23h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_27h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_38h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_47h
// WARNING: [r2ghidra] Detected overlap for variable var_48h
// WARNING: [r2ghidra] Detected overlap for variable var_4fh
// WARNING: [r2ghidra] Detected overlap for variable var_4ch

int32_t sym.func_1(void)
{
    int32_t var_64h;
    int32_t var_60h;
    uint32_t var_54h;
    int32_t var_4eh;
    int32_t var_44h;
    uint32_t var_40h;
    uint32_t var_3ah;
    int32_t var_34h;
    char var_2dh;
    uint32_t var_2ch;
    uint8_t var_23h;
    uint8_t var_22h;
    char var_21h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    int32_t var_14h;
    uint8_t var_eh;
    uint32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_dh._0_1_ = 0x90;
    var_eh = 0x84;
    var_14h = 0x6c4779d4;
    var_18h = 0xaf953423;
    var_20h = 0xfffffffe;
    var_21h = 'Z';
    var_22h = 0xff;
    var_23h = 1;
    *(int32_t *)0x0 = 0;
    var_2dh = -0xf;
    while (var_2dh == '\r') {
        stack0xffffffc4 = 0;
        for (var_34h = 0; var_34h < -0xe; var_34h = var_34h + -9) {
            stack0xffffffc4 = 0x12;
            while (stack0xffffffc4 == -0x15) {
                for (var_dh._0_1_ = 9; (uint8_t)var_dh < 10; var_dh._0_1_ = (uint8_t)var_dh + 4) {
                    var_14h = var_14h + 1;
                    var_18h = var_18h - 1;
                }
                var_eh = (uint8_t)var_18h & 0xe8;
                unique0x00000f40 = -0x16;
            }
        }
        var_2dh = '\x0e';
    }
    for (var_1ch = 0xd; 0x21 < var_1ch; var_1ch = var_1ch + 1) {
        var_20h = var_20h - 1;
        var_21h = '}';
        var_22h = var_22h + 1;
        var_23h = var_23h ^ var_2dh != '\0';
    }
    sym.set_var((uint32_t)(uint8_t)var_dh, (int32_t)(char)var_eh, var_14h, var_18h, 0x6ed7, var_1ch, var_20h, 
                (int32_t)var_21h, (uint32_t)var_22h, (int32_t)(char)var_23h, 
                (int32_t)(int16_t)(uint16_t)
                                  (var_20h == ~(uint32_t)(var_1ch == (((var_18h != 0 ^ 0x71) & var_18h) != 0))), 0, 
                -0x1c396450);
    return stack0xffffffc4;
}
