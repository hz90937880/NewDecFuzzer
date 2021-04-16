
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049abe)
// WARNING: Removing unreachable block (ram,0x08049ac5)
// WARNING: Removing unreachable block (ram,0x08049af8)
// WARNING: Removing unreachable block (ram,0x08049afc)
// WARNING: Removing unreachable block (ram,0x08049b1b)
// WARNING: Removing unreachable block (ram,0x08049b14)
// WARNING: Removing unreachable block (ram,0x08049b20)
// WARNING: Removing unreachable block (ram,0x08049b35)
// WARNING: Removing unreachable block (ram,0x08049b50)
// WARNING: Removing unreachable block (ram,0x08049b95)
// WARNING: Removing unreachable block (ram,0x08049bc1)
// WARNING: Removing unreachable block (ram,0x08049c23)
// WARNING: Removing unreachable block (ram,0x08049c30)
// WARNING: Removing unreachable block (ram,0x08049c29)
// WARNING: Removing unreachable block (ram,0x08049c35)
// WARNING: Removing unreachable block (ram,0x08049c79)
// WARNING: Removing unreachable block (ram,0x08049c72)
// WARNING: Removing unreachable block (ram,0x08049c7e)
// WARNING: Removing unreachable block (ram,0x08049bb1)
// WARNING: Removing unreachable block (ram,0x080497c7)
// WARNING: Removing unreachable block (ram,0x08049974)
// WARNING: Removing unreachable block (ram,0x08049850)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_54h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_60h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_31h
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_4fh
// WARNING: [r2ghidra] Detected overlap for variable var_50h
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_68h
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_74h
// WARNING: [r2ghidra] Detected overlap for variable var_79h
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Detected overlap for variable var_8dh
// WARNING: [r2ghidra] Detected overlap for variable var_9ah
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_8ch;
    int32_t var_84h;
    int32_t var_80h;
    uint32_t var_78h;
    int32_t var_70h;
    int32_t var_64h;
    undefined4 var_60h;
    uint32_t var_5ch;
    undefined4 var_54h;
    uint32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    int32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_30h;
    char var_29h;
    uint32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    int16_t var_12h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_20h = 0;
    var_24h = 0x61ffe8b4;
    var_28h = 0xffffffff;
    var_29h = '\x01';
    var_38h = 0xe304fec5;
    var_18h = 5;
    var_10h = 0x7b;
    var_1ch = 0x8af769ff;
    for (var_12h = 0; var_12h < -0x16; var_12h = var_12h + -1) {
        if ((int32_t)(uint32_t)
                     (var_18h !=
                     (int32_t)(int16_t)((int16_t)((int32_t)(int16_t)((int16_t)var_18h +
                                                                    (uint16_t)(0xe0ea8ede < var_18h) * 0x7121) << 7) >>
                                       0xf)) < (int32_t)var_1ch) {
            var_10h = -0x478;
        } else {
            var_10h = 0;
        }
        if ((char)var_12h == '\x04') {
            if ((var_1ch != 0) || (var_12h == 0)) break;
            var_20h = var_20h ^ (int32_t)(int16_t)((var_10h == -1) - 9 & 7);
            var_1ch = (uint32_t)(var_18h == 0);
            for (var_44h = 9; var_44h != 0x1d; var_44h = var_44h + 1) {
                var_10h = 1;
            }
            var_24h = 0;
            var_29h = -1;
            for (var_28h = 0xffffffea; var_28h != 0xfffffff3; var_28h = var_28h + 1) {
                var_24h = 6;
                var_38h = 7;
                var_18h = var_18h & 0x23;
            }
        }
    }
    sym.set_var(var_10h, 3, (int32_t)var_12h, var_18h, var_1ch, var_20h, var_24h, var_28h, (int32_t)var_29h, 5, 0x4b, 
                var_38h, 0xffd, 3, 1);
    return 0x7b;
}
