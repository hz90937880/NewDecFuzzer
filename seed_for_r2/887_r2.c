
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x08049a8c)
// WARNING: Removing unreachable block (ram,0x080499cb)
// WARNING: Removing unreachable block (ram,0x08049a21)
// WARNING: Removing unreachable block (ram,0x0804987a)
// WARNING: Removing unreachable block (ram,0x08049896)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1dh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_43h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_47h
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_76h
// WARNING: [r2ghidra] Detected overlap for variable var_78h

undefined4 sym.func_1(void)
{
    uint32_t uVar1;
    int32_t var_80h;
    int32_t var_74h;
    int32_t var_70h;
    uint32_t var_6ch;
    int32_t var_64h;
    uint32_t var_60h;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_4ch;
    uint32_t var_40h;
    uint32_t var_3ch;
    int32_t var_34h;
    int32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    char var_1dh;
    int32_t var_1ch;
    uint32_t var_14h;
    int32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_eh._0_2_ = 0x2f88;
    var_14h = 0xffffffff;
    var_1ch = 0x2416071e;
    var_1dh = -1;
    do {
        uVar1 = SEXT14(var_1dh);
        var_eh._0_2_ = (uint16_t)var_eh + 1;
        var_1dh = '\t';
        while( true ) {
            if (-1 < var_1dh) {
                sym.set_var(-0x3decacd1, 0x532f, 0xfffffff9, -7, 
                            (uint32_t)(0xfe5e81a6 < (uVar1 % 0xfffffff9 & 0xffff) * 0x532f), -0x54, -0x2716, 
                            (uint32_t)(uint16_t)var_eh, 0x8e, var_14h, 0x42, var_1ch, 0);
                return 0x42;
            }
            var_14h = 0x30;
            if ((uint32_t)(((((int16_t)((int16_t)var_1dh & 0x30) * 0x5500 | 0x5500U) == 0x64e3176a) != true) < 0x5501) *
                0x532f == 0) break;
            var_1dh = var_1dh + -5;
        }
        var_1ch = var_1ch + 1;
    } while( true );
}
