
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x0804986f)
// WARNING: Removing unreachable block (ram,0x08049827)
// WARNING: Removing unreachable block (ram,0x080497c0)
// WARNING: Removing unreachable block (ram,0x080497fa)
// WARNING: Removing unreachable block (ram,0x080498cb)
// WARNING: Removing unreachable block (ram,0x080498e0)
// WARNING: Removing unreachable block (ram,0x080498da)
// WARNING: Removing unreachable block (ram,0x080498e7)
// WARNING: Removing unreachable block (ram,0x080498ec)
// WARNING: Removing unreachable block (ram,0x0804995a)
// WARNING: Removing unreachable block (ram,0x08049953)
// WARNING: Removing unreachable block (ram,0x0804995f)
// WARNING: Removing unreachable block (ram,0x0804998c)
// WARNING: Removing unreachable block (ram,0x08049999)
// WARNING: Removing unreachable block (ram,0x08049992)
// WARNING: Removing unreachable block (ram,0x0804999e)
// WARNING: Removing unreachable block (ram,0x080499bc)
// WARNING: Removing unreachable block (ram,0x080499b5)
// WARNING: Removing unreachable block (ram,0x080499c1)
// WARNING: Removing unreachable block (ram,0x08049a08)
// WARNING: Removing unreachable block (ram,0x080499d9)
// WARNING: Removing unreachable block (ram,0x08049a4d)
// WARNING: Removing unreachable block (ram,0x080499fb)
// WARNING: Removing unreachable block (ram,0x08049a1e)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_64h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_7ah to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_17h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_71h

undefined4 sym.func_1(void)
{
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    undefined4 var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    uint32_t var_54h;
    uint32_t var_4eh;
    uint32_t var_44h;
    uint32_t var_40h;
    int32_t var_3ch;
    uint32_t var_34h;
    undefined4 var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_1ch;
    uint32_t var_14h;
    uint32_t var_10h;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_4eh._0_2_ = 0xab83;
    for (var_7ch._2_2_ = 0; var_7ch._2_2_ < -4; var_7ch._2_2_ = var_7ch._2_2_ + -1) {
        var_4eh._0_2_ = (uint16_t)var_4eh | 1;
    }
    sym.set_var(0xe91a049f, (int32_t)(int16_t)(uint16_t)var_4eh, 0x898d08f4, 8, -3, 0xfffa, 0x61, 0x695bd660, -2, 0x18, 
                -0x48a85ab7, 0, -1);
    return 0xfffffffb;
}
