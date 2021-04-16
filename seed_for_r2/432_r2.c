
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049af0)
// WARNING: Removing unreachable block (ram,0x08049e19)
// WARNING: Removing unreachable block (ram,0x08049e30)
// WARNING: Removing unreachable block (ram,0x08049e37)
// WARNING: Removing unreachable block (ram,0x08049e3c)
// WARNING: Removing unreachable block (ram,0x08049e4a)
// WARNING: Removing unreachable block (ram,0x080498f9)
// WARNING: Removing unreachable block (ram,0x08049af5)
// WARNING: Removing unreachable block (ram,0x08049d12)
// WARNING: Removing unreachable block (ram,0x08049b42)
// WARNING: Removing unreachable block (ram,0x08049a0f)
// WARNING: Removing unreachable block (ram,0x08049a1c)
// WARNING: Removing unreachable block (ram,0x08049a64)
// WARNING: Removing unreachable block (ram,0x08049a9a)
// WARNING: Removing unreachable block (ram,0x08049b68)
// WARNING: Removing unreachable block (ram,0x08049c3a)
// WARNING: Removing unreachable block (ram,0x08049b72)
// WARNING: Removing unreachable block (ram,0x08049de7)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_58h
// WARNING: [r2ghidra] Detected overlap for variable var_59h
// WARNING: [r2ghidra] Detected overlap for variable var_5ch
// WARNING: [r2ghidra] Detected overlap for variable var_61h
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_6ch
// WARNING: [r2ghidra] Detected overlap for variable var_6dh
// WARNING: [r2ghidra] Detected overlap for variable var_79h
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_88h
// WARNING: [r2ghidra] Detected overlap for variable var_89h
// WARNING: [r2ghidra] Detected overlap for variable var_8ch
// WARNING: [r2ghidra] Detected overlap for variable var_9ah
// WARNING: [r2ghidra] Detected overlap for variable var_b5h
// WARNING: [r2ghidra] Detected overlap for variable var_b6h
// WARNING: [r2ghidra] Detected overlap for variable var_a9h
// WARNING: [r2ghidra] Detected overlap for variable var_b1h

uint32_t sym.func_1(void)
{
    uint32_t var_d8h;
    int32_t var_d4h;
    int32_t var_d0h;
    int32_t var_cch;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_c0h;
    int32_t var_b4h;
    int32_t var_b0h;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    uint32_t var_84h;
    int32_t var_80h;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_68h;
    int32_t var_60h;
    uint32_t var_50h;
    int32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_44h;
    int32_t var_40h;
    uint16_t var_3ah;
    int32_t var_38h;
    uint32_t var_34h;
    int32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    char var_1ah;
    char var_19h;
    uint32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_14h = 0;
    var_18h = 0x7a4129b8;
    var_19h = -1;
    var_1ah = 'S';
    var_20h = 0x4c3dc4d7;
    var_24h = 0;
    var_28h = 0xffffffff;
    var_34h = 0x4d58f1af;
    var_38h = -0x3989f845;
    var_3ah = 0x70c1;
    var_10h = 4;
    do {
        if (var_10h != 0x3a) {
            sym.set_var(0x6c516536, 0x84bc9c3, var_10h, var_14h, var_18h, (int32_t)var_19h, (int32_t)var_1ah, var_20h, 
                        var_24h, var_28h, 0x79dd, 0x31b79e29, 4, var_34h, 0x2abd, var_38h, -1, 0x6490, -0x4b, -0x3898, 
                        -7, 1, 2, 3, (uint32_t)var_3ah, 4, -0x2427862f);
            return var_10h;
        }
        for (var_14h = 0; 0xf < var_14h; var_14h = var_14h + 1) {
            var_18h = 0x84bc9c3;
            var_19h = -5;
            var_1ah = '\0';
            var_20h = var_20h + -1;
            if ((var_14h != -(var_14h >> 0x1f)) == true) {
                var_28h = 0x84bc9c3;
                break;
            }
        }
        if (var_34h == 0) {
            var_3ah = var_3ah + 1;
            var_38h = var_38h ^ 0xffffc768;
        } else {
            var_24h = var_24h + 1;
            var_34h = var_38h | 1;
        }
        var_10h = 0x3b;
    } while( true );
}
