
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049b5f)
// WARNING: Removing unreachable block (ram,0x08049bc5)
// WARNING: Removing unreachable block (ram,0x08049925)
// WARNING: Removing unreachable block (ram,0x08049932)
// WARNING: Removing unreachable block (ram,0x080498fd)
// WARNING: Removing unreachable block (ram,0x08049c06)
// WARNING: Removing unreachable block (ram,0x08049a95)
// WARNING: Removing unreachable block (ram,0x08049bf4)
// WARNING: Removing unreachable block (ram,0x08049c04)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_40h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_c6h
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_ceh
// WARNING: [r2ghidra] Detected overlap for variable var_d6h
// WARNING: [r2ghidra] Detected overlap for variable var_d7h
// WARNING: [r2ghidra] Detected overlap for variable var_dah
// WARNING: [r2ghidra] Detected overlap for variable var_e6h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_a2h
// WARNING: [r2ghidra] Detected overlap for variable var_a3h
// WARNING: [r2ghidra] Detected overlap for variable var_a4h
// WARNING: [r2ghidra] Detected overlap for variable var_a5h
// WARNING: [r2ghidra] Detected overlap for variable var_a6h
// WARNING: [r2ghidra] Detected overlap for variable var_a7h
// WARNING: [r2ghidra] Detected overlap for variable var_81h
// WARNING: [r2ghidra] Detected overlap for variable var_89h
// WARNING: [r2ghidra] Detected overlap for variable var_8ah
// WARNING: [r2ghidra] Detected overlap for variable var_64h
// WARNING: [r2ghidra] Detected overlap for variable var_76h
// WARNING: [r2ghidra] Detected overlap for variable var_a0h
// WARNING: [r2ghidra] Detected overlap for variable var_74h
// WARNING: [r2ghidra] Detected overlap for variable var_aeh
// WARNING: [r2ghidra] Detected overlap for variable var_adh
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_f4h;
    int32_t var_f0h;
    int32_t var_ech;
    int32_t var_e4h;
    int32_t var_e0h;
    int32_t var_d4h;
    int32_t var_cch;
    uint32_t var_c4h;
    int32_t var_c0h;
    int32_t var_bch;
    int32_t var_b8h;
    int32_t var_b4h;
    int32_t var_ach;
    int32_t var_a1h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_88h;
    int32_t var_80h;
    uint32_t var_7ch;
    int32_t var_77h;
    uint32_t var_70h;
    int32_t var_6ch;
    int32_t var_65h;
    uint32_t var_60h;
    uint32_t var_58h;
    int32_t var_50h;
    int32_t var_48h;
    int32_t var_42h;
    uint32_t var_3ch;
    uint32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    char var_29h;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_b8h = 1;
    var_20h = 1;
    var_24h = 0x24fe5f2f;
    var_28h = 0x747af82b;
    var_1ch = -0x8b91c21;
    var_60h = 0xfffffffb;
    var_29h = '\x14';
    do {
        if (var_29h != -0x19) {
            var_3ch = 0;
            while (var_3ch == 0x1b) {
                var_3ch = 0x23;
            }
            sym.set_var(0xdbea5223, var_1ch, var_60h, 1, -2, 0, 0x46159332, 1, 1, 0xfff7, 3, 0x60fc, var_b8h, 
                        -0x36a55651, 0x4d99, 0, var_20h, 9, -1, var_24h, 0x69208027, var_28h, 0x1904);
            return var_20h;
        }
        stack0xffffffbc = -1;
        var_70h = 0xa204fe41;
        var_60h = 0x17;
        while (var_60h == 3) {
            if (((uint32_t)((int64_t)(uint64_t)((char)var_70h != -2) % -0x6cce) >> 3 & 0x1fff) == 0) {
                sym.set_var(0xdbea5223, var_1ch, 3, 1, -2, 0, 0x46159332, 1, 1, 0xfff7, 3, 0x60fc, var_b8h, -0x36a55651
                            , 0x4d99, 0, var_20h, 9, -1, var_24h, 0x69208027, var_28h, 0x1904);
                return -0x7fecca3c;
            }
            var_24h = var_24h & (uint32_t)(stack0xffffffbc != 0);
            var_28h = var_28h & 1;
            var_70h = var_70h + 1;
            for (var_1ch = 0; var_1ch < 0x13; var_1ch = var_1ch + 1) {
                var_b8h = var_b8h + -1;
            }
            for (stack0xffffffbc = 0; stack0xffffffbc < 0x13; unique0x00000f40 = stack0xffffffbc + 1) {
            }
            var_20h = -0x4a;
            sym.packed_printf(9);
            var_60h = 2;
        }
        var_60h = 0xffffffff;
        var_29h = -0x1a;
    } while( true );
}
