
// WARNING: Variable defined which should be unmapped: var_ah
// WARNING: Removing unreachable block (ram,0x080497a4)
// WARNING: Removing unreachable block (ram,0x080497e7)
// WARNING: Removing unreachable block (ram,0x080497ed)
// WARNING: Removing unreachable block (ram,0x080497b4)
// WARNING: Removing unreachable block (ram,0x080497f0)
// WARNING: Removing unreachable block (ram,0x08049815)
// WARNING: Removing unreachable block (ram,0x080497f8)
// WARNING: Removing unreachable block (ram,0x0804980a)
// WARNING: Removing unreachable block (ram,0x08049801)
// WARNING: Removing unreachable block (ram,0x08049810)
// WARNING: Removing unreachable block (ram,0x0804981c)
// WARNING: Removing unreachable block (ram,0x080497c1)
// WARNING: Removing unreachable block (ram,0x08049a8c)
// WARNING: Removing unreachable block (ram,0x08049b1b)
// WARNING: Removing unreachable block (ram,0x0804990d)
// WARNING: Removing unreachable block (ram,0x08049952)
// WARNING: Removing unreachable block (ram,0x0804994b)
// WARNING: Removing unreachable block (ram,0x08049957)
// WARNING: Removing unreachable block (ram,0x0804996e)
// WARNING: Removing unreachable block (ram,0x08049a14)
// WARNING: Removing unreachable block (ram,0x08049ae3)
// WARNING: Removing unreachable block (ram,0x080498de)
// WARNING: Removing unreachable block (ram,0x08049b5c)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_30h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_74h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_17h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_5eh
// WARNING: [r2ghidra] Detected overlap for variable var_5fh
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Detected overlap for variable var_7eh
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_8ch
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_8dh;
    uint32_t var_84h;
    int32_t var_7ch;
    int32_t var_78h;
    undefined4 var_74h;
    int32_t var_6ch;
    int32_t var_64h;
    int32_t var_5ch;
    int32_t var_54h;
    int32_t var_4ch;
    int32_t var_44h;
    uint32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_33h;
    undefined4 var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    uint8_t var_17h;
    uint32_t var_14h;
    uint32_t var_10h;
    uint32_t var_ah;
    
    sym.__x86.get_pc_thunk.ax();
    var_17h = 0x8d;
    var_20h = 0xb6d0374c;
    while ((uint32_t)((int32_t)(char)((char)var_20h * -0x2b) - 0x2cU < var_20h) * 0x2bd4 != 0) {
        var_17h = var_17h | 1;
        var_20h = 0;
    }
    for (var_24h = 0; var_24h < -0x1e; var_24h = var_24h + -1) {
    }
    sym.set_var(0, 1, 0xf392, 0xf23, 0x1fbfe3ac, 0x17bd45ed, -0x4e228d4, -1, 9, (uint32_t)var_17h, 0x57e77fe7);
    return 0x5b974db9;
}
