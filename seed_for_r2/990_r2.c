
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049883)
// WARNING: Removing unreachable block (ram,0x08049797)
// WARNING: Removing unreachable block (ram,0x080497e3)
// WARNING: Removing unreachable block (ram,0x080497c1)
// WARNING: Removing unreachable block (ram,0x080497d9)
// WARNING: Removing unreachable block (ram,0x080497c7)
// WARNING: Removing unreachable block (ram,0x080497df)
// WARNING: Removing unreachable block (ram,0x080497e9)
// WARNING: Removing unreachable block (ram,0x08049850)
// WARNING: Removing unreachable block (ram,0x08049912)
// WARNING: Removing unreachable block (ram,0x08049ae8)
// WARNING: Removing unreachable block (ram,0x0804977f)
// WARNING: Removing unreachable block (ram,0x0804992e)
// WARNING: Removing unreachable block (ram,0x080499b4)
// WARNING: Removing unreachable block (ram,0x08049a22)
// WARNING: Removing unreachable block (ram,0x08049aa8)
// WARNING: Removing unreachable block (ram,0x08049a50)
// WARNING: Removing unreachable block (ram,0x08049a96)
// WARNING: Removing unreachable block (ram,0x08049a83)
// WARNING: Removing unreachable block (ram,0x08049a9c)
// WARNING: Removing unreachable block (ram,0x08049aa3)
// WARNING: Removing unreachable block (ram,0x080499d9)
// WARNING: Removing unreachable block (ram,0x08049aef)
// WARNING: Removing unreachable block (ram,0x08049afa)
// WARNING: Removing unreachable block (ram,0x08049b65)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_41h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_48h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_28h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_58h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_5ch
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_64h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Detected overlap for variable var_87h

undefined4 sym.func_1(void)
{
    uint32_t var_90h;
    int32_t var_8ch;
    int32_t var_84h;
    int32_t var_80h;
    uint32_t var_7ch;
    uint32_t var_78h;
    uint32_t var_70h;
    int32_t var_6ch;
    uint32_t var_68h;
    int32_t var_60h;
    int32_t var_56h;
    int32_t var_4ch;
    undefined4 var_48h;
    uint32_t var_40h;
    uint32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_34h;
    int32_t var_30h;
    char var_29h;
    uint32_t var_24h;
    uint32_t var_1ch;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0xcea5d6c0;
    var_29h = -8;
    var_14h = 0;
    for (var_38h = 0xfffffffa; var_38h != 0xc; var_38h = var_38h + 1) {
        var_29h = '\x01';
        var_14h = (uint32_t)(var_14h == 0);
        var_10h = var_14h;
    }
    sym.set_var(var_10h, 0xb02f, 0, 0x23, 1, 1, 1, 6, 0x7a9f, (int32_t)var_29h, -1);
    return 0;
}
