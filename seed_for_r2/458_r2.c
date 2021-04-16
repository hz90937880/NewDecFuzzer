
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x080498c9)
// WARNING: Removing unreachable block (ram,0x080498f4)
// WARNING: Removing unreachable block (ram,0x080498df)
// WARNING: Removing unreachable block (ram,0x080498fb)
// WARNING: Removing unreachable block (ram,0x08049900)
// WARNING: Removing unreachable block (ram,0x0804992d)
// WARNING: Removing unreachable block (ram,0x08049888)
// WARNING: Removing unreachable block (ram,0x0804998c)
// WARNING: Removing unreachable block (ram,0x080499ad)
// WARNING: Removing unreachable block (ram,0x0804999c)
// WARNING: Removing unreachable block (ram,0x080499b3)
// WARNING: Removing unreachable block (ram,0x080498aa)
// WARNING: Removing unreachable block (ram,0x080498b8)
// WARNING: Removing unreachable block (ram,0x08049983)
// WARNING: Removing unreachable block (ram,0x08049a41)
// WARNING: Removing unreachable block (ram,0x08049849)
// WARNING: Removing unreachable block (ram,0x08049a87)
// WARNING: Removing unreachable block (ram,0x0804992f)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_7eh

undefined4 sym.func_1(void)
{
    int32_t var_90h;
    int32_t var_7ch;
    uint32_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_64h;
    int32_t var_5ch;
    int32_t var_54h;
    int32_t var_50h;
    uint32_t var_4ch;
    int32_t var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    int32_t var_38h;
    uint32_t var_32h;
    int32_t var_28h;
    uint16_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint8_t var_15h;
    undefined4 var_14h;
    uint32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_15h = 99;
    var_24h = 0xa44a;
    var_1ch = 0xffffffe3;
    while (var_1ch == 0x11) {
        var_15h = var_15h - 1;
        var_24h = 1;
        var_1ch = 0x18;
    }
    sym.set_var(7, 0x2f, 0, 0x38f58595, 0x1908, 0x1909, (uint32_t)var_15h, 0xd33d, var_1ch, 0x54a43772, 1, 
                (uint32_t)var_24h, 1, -0x1f);
    return 0x2a30a4c9;
}
