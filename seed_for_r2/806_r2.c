
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049b26)
// WARNING: Removing unreachable block (ram,0x080498a9)
// WARNING: Removing unreachable block (ram,0x0804993f)
// WARNING: Removing unreachable block (ram,0x080498b2)
// WARNING: Removing unreachable block (ram,0x080498fc)
// WARNING: Removing unreachable block (ram,0x080498f6)
// WARNING: Removing unreachable block (ram,0x08049949)
// WARNING: Removing unreachable block (ram,0x08049b47)
// WARNING: Removing unreachable block (ram,0x08049cc4)
// WARNING: Removing unreachable block (ram,0x08049bf1)
// WARNING: Removing unreachable block (ram,0x08049c25)
// WARNING: Removing unreachable block (ram,0x08049bf7)
// WARNING: Removing unreachable block (ram,0x08049c2b)
// WARNING: Removing unreachable block (ram,0x08049a11)
// WARNING: Removing unreachable block (ram,0x08049ba8)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_1bh
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_64h
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_92h
// WARNING: [r2ghidra] Detected overlap for variable var_93h
// WARNING: [r2ghidra] Detected overlap for variable var_96h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_adh
// WARNING: [r2ghidra] Detected overlap for variable var_bdh
// WARNING: [r2ghidra] Detected overlap for variable var_a0h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined2 sym.func_1(void)
{
    int32_t var_cch;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_bch;
    uint32_t var_b8h;
    uint32_t var_b4h;
    int32_t var_ach;
    int32_t var_a8h;
    int32_t var_a2h;
    int32_t var_9ch;
    uint32_t var_90h;
    int32_t var_8ch;
    int32_t var_88h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    uint32_t var_54h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_41h;
    uint16_t var_3ah;
    uint32_t var_38h;
    uint16_t var_32h;
    uint32_t var_30h;
    uint32_t var_2ch;
    undefined4 var_24h;
    char var_1ch;
    uint8_t var_1bh;
    uint16_t var_1ah;
    uint32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0x2c03342e;
    var_18h = 0xf62c4df8;
    var_1ah = 0xfffa;
    var_1bh = 0x5e;
    var_30h._0_2_ = 0x6b31;
    var_32h = 0x6da2;
    var_38h = 0xfffffffd;
    var_3ah = 7;
    var_14h = -0x17;
    do {
        if (var_14h < -0x15) {
code_r0x08049d61:
            sym.set_var(var_10h, var_14h, var_18h, (int32_t)(int16_t)var_1ah, (uint32_t)var_1bh, 
                        (uint32_t)(uint16_t)var_30h, -3, (uint32_t)var_32h, 0, var_38h, (uint32_t)var_3ah, 1);
            return 0xffff;
        }
        if ((int16_t)(uint16_t)(0x1c77dcc < var_14h) < -1) {
            var_18h = 0x84f65c83;
        } else {
            var_18h = 0x84f64c83;
        }
        var_1ah = var_1ah & (uint16_t)var_18h;
        if (var_1ah == 0) {
            sym.set_var(var_10h, var_14h, var_18h ^ 0xfffffff9, 0, (uint32_t)var_1bh, 0x6b31, -3, 0x6da2, 0, var_38h, 7
                        , 1);
            return 0x6da2;
        }
        var_1ch = -5;
        while( true ) {
            if ((var_1ch == -5) || (var_10h != 0)) break;
            var_1ch = var_1ch + '\t';
        }
        var_1bh = var_1bh | (uint8_t)var_1ah;
        if (var_14h != 0) {
            var_1ah = 0xfe;
            if ((uint32_t)var_1bh == -(uint32_t)var_1bh - 3) {
                var_32h = 1;
                if ((int16_t)(1 - ((uint16_t)var_14h & 1)) >> 1 == 0) {
                    var_18h = 0xfffffffd;
                } else {
                    var_10h = 0x18;
                }
                var_30h._3_1_ = '\0';
                while (var_30h._3_1_ == '%') {
                    var_30h._3_1_ = ',';
                }
            } else {
                var_38h = var_38h + 1;
                var_30h._0_2_ = (uint16_t)var_1bh;
                var_3ah = 0xff97;
                var_18h = -0x69 % (int32_t)var_1ch;
            }
            goto code_r0x08049d61;
        }
        var_38h = var_38h + 1;
        var_14h = 1;
        var_10h = var_18h;
    } while( true );
}
