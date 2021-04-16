
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049cfe)
// WARNING: Removing unreachable block (ram,0x08049d4a)
// WARNING: Removing unreachable block (ram,0x08049bb4)
// WARNING: Removing unreachable block (ram,0x08049ba3)
// WARNING: Removing unreachable block (ram,0x08049baf)
// WARNING: Removing unreachable block (ram,0x08049bc4)
// WARNING: Removing unreachable block (ram,0x080499a1)
// WARNING: Removing unreachable block (ram,0x080499c6)
// WARNING: Removing unreachable block (ram,0x080499b9)
// WARNING: Removing unreachable block (ram,0x080499bf)
// WARNING: Removing unreachable block (ram,0x080499cb)
// WARNING: Removing unreachable block (ram,0x08049a4e)
// WARNING: Removing unreachable block (ram,0x08049a47)
// WARNING: Removing unreachable block (ram,0x08049a53)
// WARNING: Removing unreachable block (ram,0x08049a95)
// WARNING: Removing unreachable block (ram,0x08049a9b)
// WARNING: Removing unreachable block (ram,0x08049aa2)
// WARNING: Removing unreachable block (ram,0x08049aa7)
// WARNING: Removing unreachable block (ram,0x0804988e)
// WARNING: Removing unreachable block (ram,0x08049d43)
// WARNING: Removing unreachable block (ram,0x08049d4f)
// WARNING: Removing unreachable block (ram,0x080498be)
// WARNING: Removing unreachable block (ram,0x08049bba)
// WARNING: Removing unreachable block (ram,0x0804997c)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_20h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2fh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_90h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_43h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_2fh
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_60h
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Detected overlap for variable var_75h
// WARNING: [r2ghidra] Detected overlap for variable var_7eh
// WARNING: [r2ghidra] Detected overlap for variable var_92h
// WARNING: [r2ghidra] Detected overlap for variable var_94h
// WARNING: [r2ghidra] Detected overlap for variable var_96h
// WARNING: [r2ghidra] Detected overlap for variable var_98h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_a0h;
    int32_t var_9ch;
    undefined4 var_90h;
    int32_t var_8ch;
    int32_t var_88h;
    uint32_t var_84h;
    int32_t var_7ch;
    int32_t var_74h;
    uint32_t var_70h;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_5ch;
    int32_t var_58h;
    uint32_t var_54h;
    int32_t var_50h;
    undefined4 var_4ch;
    int32_t var_40h;
    uint32_t var_3ch;
    uint32_t var_38h;
    int32_t var_34h;
    char var_2fh;
    uint32_t var_2ch;
    uint8_t var_26h;
    uint8_t var_25h;
    uint32_t var_24h;
    int32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_24h = 0xa7abe333;
    var_25h = 0xd8;
    var_26h = 0xff;
    var_20h = 0xe3580d4;
    var_10h = -0x10;
    while( true ) {
        if (-9 < var_10h) {
            sym.set_var(0x4ec2e0cf, var_10h, 0x86e52d8c, 0x23afc371, 1, var_20h, 0, -0x58541ccd, 0xd8, 0xff, -0x399ead97
                        , 0, 2, 0x22, 0xf9, 8, 0xffff);
            return 0;
        }
        var_20h = 0x1c;
        if (var_10h == 0x1d) break;
        var_10h = var_10h + 3;
    }
    for (var_2fh = '\0'; '\x13' < var_2fh; var_2fh = var_2fh + '\x02') {
        var_24h = 0x86e52d8c;
        var_25h = 0;
        var_26h = var_26h & 1;
    }
    sym.set_var(0x4ec2e0cf, 0x1d, 0x86e52d8c, 0x23afc371, 1, 0x1c, 0, var_24h, (uint32_t)var_25h, (uint32_t)var_26h, 
                -0x399ead97, 0, 2, 0x22, 0xf9, 8, 0xffff);
    return 2;
}
