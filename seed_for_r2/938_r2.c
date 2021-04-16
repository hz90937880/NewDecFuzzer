
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049bea)
// WARNING: Removing unreachable block (ram,0x08049aac)
// WARNING: Removing unreachable block (ram,0x08049bf4)
// WARNING: Removing unreachable block (ram,0x08049c10)
// WARNING: Removing unreachable block (ram,0x08049c16)
// WARNING: Removing unreachable block (ram,0x08049c1d)
// WARNING: Removing unreachable block (ram,0x08049c22)
// WARNING: Removing unreachable block (ram,0x08049c46)
// WARNING: Removing unreachable block (ram,0x08049c57)
// WARNING: Removing unreachable block (ram,0x08049c50)
// WARNING: Removing unreachable block (ram,0x08049c5c)
// WARNING: Removing unreachable block (ram,0x08049898)
// WARNING: Removing unreachable block (ram,0x08049af9)
// WARNING: Removing unreachable block (ram,0x08049ca4)
// WARNING: Removing unreachable block (ram,0x08049b05)
// WARNING: Removing unreachable block (ram,0x08049b3e)
// WARNING: Removing unreachable block (ram,0x08049b37)
// WARNING: Removing unreachable block (ram,0x08049b43)
// WARNING: Removing unreachable block (ram,0x08049ba0)
// WARNING: Removing unreachable block (ram,0x08049ba6)
// WARNING: Removing unreachable block (ram,0x08049bad)
// WARNING: Removing unreachable block (ram,0x08049bb2)
// WARNING: Removing unreachable block (ram,0x08049bc6)
// WARNING: Removing unreachable block (ram,0x08049bca)
// WARNING: Removing unreachable block (ram,0x08049cae)
// WARNING: Removing unreachable block (ram,0x08049807)
// WARNING: Removing unreachable block (ram,0x08049889)
// WARNING: Removing unreachable block (ram,0x08049cbc)
// WARNING: Removing unreachable block (ram,0x0804987b)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_50h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_38h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_40h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_44h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_53h
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_6dh
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_9eh
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_89h
// WARNING: [r2ghidra] Detected overlap for variable var_a4h

undefined4 sym.func_1(void)
{
    int32_t iVar1;
    int32_t var_b0h;
    int32_t var_a6h;
    uint32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_88h;
    uint32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    uint32_t var_74h;
    int32_t var_6ch;
    uint32_t var_68h;
    int32_t var_64h;
    int32_t var_5ch;
    int32_t var_58h;
    undefined4 var_50h;
    int32_t var_4ch;
    char var_45h;
    uint32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_30h;
    int32_t var_28h;
    uint16_t var_22h;
    int16_t var_20h;
    uint8_t var_1dh;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_14h = 0;
    var_1ch = 0x22f0f5b8;
    var_1dh = 0xf7;
    var_20h = -0x11ae;
    var_22h = 0xffff;
    var_28h = 0;
    var_44h = 0xfffffffb;
    var_45h = '\x13';
    for (var_38h = -10; var_38h != -0x1b; var_38h = var_38h + -1) {
        for (var_40h = 0x19; 0x11 < var_40h; var_40h = var_40h + -2) {
            var_45h = var_45h + -1;
            var_1dh = 1;
            var_20h = 0;
            var_1ch = (uint32_t)(var_1ch == 0);
        }
        var_22h = var_1dh ^ 0x8302;
        var_28h = 9;
        if (var_40h < var_45h >> 1) {
            iVar1 = 0;
        } else {
            iVar1 = 2;
        }
        if (iVar1 * -0x12 == 0) {
            if (var_44h == 0) {
                var_14h = 0xc8d1ea51;
            }
        } else {
            var_44h = var_44h ^ 1;
        }
    }
    sym.set_var(-0x1e8a8ee9, var_14h, -0x145110e0, 6, 0x48718302, var_1ch, (uint32_t)var_1dh, (int32_t)var_20h, 
                (uint32_t)var_22h, var_28h, 0, -1, 0x7e, -0x6f850c7c, 0x56a0);
    return 0x48718302;
}
