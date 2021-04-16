
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049a3e)
// WARNING: Removing unreachable block (ram,0x08049977)
// WARNING: Removing unreachable block (ram,0x0804999b)
// WARNING: Removing unreachable block (ram,0x08049980)
// WARNING: Removing unreachable block (ram,0x08049986)
// WARNING: Removing unreachable block (ram,0x080499a1)
// WARNING: Removing unreachable block (ram,0x08049aa4)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_68h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_6ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_53h
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Detected overlap for variable var_7ch
// WARNING: [r2ghidra] Detected overlap for variable var_78h
// WARNING: [r2ghidra] Detected overlap for variable var_88h

uint32_t sym.func_1(void)
{
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_90h;
    int32_t var_8ah;
    int32_t var_84h;
    int32_t var_80h;
    uint32_t var_7ah;
    uint32_t var_74h;
    uint32_t var_70h;
    int32_t var_6ch;
    uint32_t var_68h;
    uint32_t var_64h;
    int32_t var_60h;
    uint32_t var_5ch;
    int32_t var_58h;
    uint8_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    uint16_t var_3eh;
    uint32_t var_3ch;
    uint32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_11h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_30h = 1;
    stack0xffffffec = 5;
    var_34h = 0x34a2d56a;
    var_3ch = 0x88696b6c;
    var_3eh = 0x93c;
    var_4ch = 0x5044ef07;
    var_50h = -0x3ddfd46c;
    var_54h = 0xff;
    var_64h = 0xaf9eb11d;
    var_68h = 0xffffffff;
    var_6ch = 0xc;
    do {
        if (-0x1c < var_6ch) {
            sym.set_var(1, 0xc3, 0xffffffff, -0xcdc19d7, 0x393632ca, 0, 0xffffc2df, -0x4fac557, var_30h, stack0xffffffec
                        , var_34h, 0x79f7, var_3ch, (uint32_t)var_3eh, var_4ch, var_50h, -3, -0x7c, (uint32_t)var_54h, 
                        -0x28f97fd6);
            return var_64h;
        }
        var_30h = var_30h + 1;
        for (var_64h = 0xfffffff5; var_64h < 0x28; var_64h = var_64h + 9) {
            if (0xc6c9cd34 < ((var_68h & 1) == 0xb874b34b)) {
                sym.set_var(1, 0xc3, 0xffffffff, -0xcdc19d7, 0x393632ca, 0, 0xffffc2df, -0x4fac557, var_30h, 1, var_34h
                            , 0x79f7, var_3ch, (uint32_t)var_3eh, var_4ch, var_50h, -3, -0x7c, (uint32_t)var_54h, 
                            -0x28f97fd6);
                return 0x393632ca;
            }
            var_34h = var_34h + 1;
            stack0xffffffec = 1;
            for (var_68h = 0; 0x17 < (int32_t)var_68h; var_68h = var_68h + 9) {
                var_3ch = var_3ch ^ 1;
                var_3eh = (uint16_t)(var_3ch != 0);
                var_4ch = -0x17;
                var_50h = ZEXT14(1 < var_34h);
                var_54h = var_54h + 1;
            }
        }
        var_6ch = var_6ch + -1;
    } while( true );
}
