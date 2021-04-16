
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049eb6)
// WARNING: Removing unreachable block (ram,0x08049ebc)
// WARNING: Removing unreachable block (ram,0x08049ec7)
// WARNING: Removing unreachable block (ram,0x08049cc4)
// WARNING: Removing unreachable block (ram,0x08049cca)
// WARNING: Removing unreachable block (ram,0x08049c03)
// WARNING: Removing unreachable block (ram,0x08049ab0)
// WARNING: Removing unreachable block (ram,0x08049abe)
// WARNING: Removing unreachable block (ram,0x08049a33)
// WARNING: Removing unreachable block (ram,0x08049ab7)
// WARNING: Removing unreachable block (ram,0x08049ac3)
// WARNING: Removing unreachable block (ram,0x08049b1e)
// WARNING: Removing unreachable block (ram,0x08049b25)
// WARNING: Removing unreachable block (ram,0x0804999d)
// WARNING: Removing unreachable block (ram,0x080499b4)
// WARNING: Removing unreachable block (ram,0x08049bb7)
// WARNING: Removing unreachable block (ram,0x08049c09)
// WARNING: Removing unreachable block (ram,0x08049c10)
// WARNING: Removing unreachable block (ram,0x08049c15)
// WARNING: Removing unreachable block (ram,0x08049c55)
// WARNING: Removing unreachable block (ram,0x08049c59)
// WARNING: Removing unreachable block (ram,0x08049c6b)
// WARNING: Removing unreachable block (ram,0x08049cd1)
// WARNING: Removing unreachable block (ram,0x08049cd6)
// WARNING: Removing unreachable block (ram,0x08049d0c)
// WARNING: Removing unreachable block (ram,0x08049d26)
// WARNING: Removing unreachable block (ram,0x08049e47)
// WARNING: Removing unreachable block (ram,0x08049e9c)
// WARNING: Removing unreachable block (ram,0x08049ea9)
// WARNING: Removing unreachable block (ram,0x08049ea2)
// WARNING: Removing unreachable block (ram,0x08049eae)
// WARNING: Removing unreachable block (ram,0x08049d28)
// WARNING: Removing unreachable block (ram,0x08049ed2)
// WARNING: Removing unreachable block (ram,0x08049f03)
// WARNING: Removing unreachable block (ram,0x08049ef6)
// WARNING: Removing unreachable block (ram,0x08049efc)
// WARNING: Removing unreachable block (ram,0x08049f08)
// WARNING: Removing unreachable block (ram,0x08049f10)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_17h
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_34h
// WARNING: [r2ghidra] Detected overlap for variable var_3dh
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_28h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_59h
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_6ch
// WARNING: [r2ghidra] Detected overlap for variable var_71h
// WARNING: [r2ghidra] Detected overlap for variable var_7eh
// WARNING: [r2ghidra] Detected overlap for variable var_7fh
// WARNING: [r2ghidra] Detected overlap for variable var_85h
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Detected overlap for variable var_8dh
// WARNING: [r2ghidra] Detected overlap for variable var_95h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_96h
// WARNING: [r2ghidra] Detected overlap for variable var_9eh
// WARNING: [r2ghidra] Detected overlap for variable var_a6h

undefined4 sym.func_1(void)
{
    uint32_t var_bch;
    uint32_t var_b8h;
    uint32_t var_b4h;
    int32_t var_b0h;
    int32_t var_ach;
    int32_t var_a4h;
    int32_t var_9ch;
    int32_t var_94h;
    uint32_t var_8ch;
    uint32_t var_84h;
    int32_t var_7ch;
    uint32_t var_78h;
    int32_t var_70h;
    uint32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_58h;
    int32_t var_54h;
    uint32_t var_4ch;
    int32_t var_44h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_30h;
    uint32_t var_2bh;
    int32_t var_24h;
    int32_t var_1dh;
    uint8_t var_17h;
    int16_t var_16h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_16h = -0x57a1;
    var_17h = 0xdb;
    var_30h = 0x11c7dc5e;
    var_10h = 1;
    for (var_2bh._1_2_ = 0xffe2; 0xd < var_2bh._1_2_; var_2bh._1_2_ = var_2bh._1_2_ + 1) {
        var_16h = (int16_t)var_10h;
        var_17h = var_17h ^ (uint8_t)var_10h;
        var_10h = (uint32_t)(var_10h == 0);
        var_30h = -5;
    }
    sym.set_var(0xffffffe6, 0, var_10h, 9, 0x5c69, (int32_t)var_16h, (int32_t)(char)var_17h, var_30h, 7, 0xf4c8, 
                0x6a1bc1fb, 0x18acb783, 1, -0x34, -0x2c960f5a);
    return 0xe6;
}
