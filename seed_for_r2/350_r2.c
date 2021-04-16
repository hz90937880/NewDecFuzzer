
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x08049b7b)
// WARNING: Removing unreachable block (ram,0x08049ba8)
// WARNING: Removing unreachable block (ram,0x08049bb5)
// WARNING: Removing unreachable block (ram,0x08049b1c)
// WARNING: Removing unreachable block (ram,0x08049b0f)
// WARNING: Removing unreachable block (ram,0x08049c54)
// WARNING: Removing unreachable block (ram,0x08049c18)
// WARNING: Removing unreachable block (ram,0x080497f1)
// WARNING: Removing unreachable block (ram,0x08049c6d)
// WARNING: Removing unreachable block (ram,0x0804999a)
// WARNING: Removing unreachable block (ram,0x08049bae)
// WARNING: Removing unreachable block (ram,0x08049bba)
// WARNING: Removing unreachable block (ram,0x08049930)
// WARNING: Removing unreachable block (ram,0x080499b0)
// WARNING: Removing unreachable block (ram,0x08049c2a)
// WARNING: Removing unreachable block (ram,0x08049a02)
// WARNING: Removing unreachable block (ram,0x08049a1c)
// WARNING: Removing unreachable block (ram,0x08049a15)
// WARNING: Removing unreachable block (ram,0x08049a21)
// WARNING: Removing unreachable block (ram,0x08049c26)
// WARNING: Removing unreachable block (ram,0x08049c34)
// WARNING: Removing unreachable block (ram,0x08049c60)
// WARNING: Removing unreachable block (ram,0x08049c66)
// WARNING: Removing unreachable block (ram,0x08049c85)
// WARNING: Removing unreachable block (ram,0x08049c8b)
// WARNING: Removing unreachable block (ram,0x08049c92)
// WARNING: Removing unreachable block (ram,0x08049c97)
// WARNING: Removing unreachable block (ram,0x08049a30)
// WARNING: Removing unreachable block (ram,0x08049b26)
// WARNING: Removing unreachable block (ram,0x08049b2d)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_38h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_61h
// WARNING: [r2ghidra] Detected overlap for variable var_38h
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_76h
// WARNING: [r2ghidra] Detected overlap for variable var_91h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh

undefined4 sym.func_1(void)
{
    uint32_t var_9ch;
    uint32_t var_98h;
    int32_t var_90h;
    uint32_t var_8ch;
    uint32_t var_88h;
    int32_t var_84h;
    uint32_t var_80h;
    uint32_t var_7ch;
    int32_t var_74h;
    int32_t var_6ch;
    uint32_t var_68h;
    uint32_t var_60h;
    uint32_t var_58h;
    uint32_t var_54h;
    uint32_t var_50h;
    int32_t var_4ch;
    uint32_t var_48h;
    int32_t var_44h;
    uint32_t var_39h;
    uint32_t var_34h;
    uint32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_18h = 3;
    var_1ch = 0xfffffff7;
    var_dh._0_1_ = 1;
    while ((uint8_t)var_dh == 0x23) {
        var_dh._0_1_ = 0x24;
    }
    var_28h = 0x1c;
    while ((var_28h != 0xfffffff2 &&
           (var_18h = (uint32_t)(-0x457252b1 < (int32_t)(uint32_t)(uint8_t)var_dh) << 0x1f, (uint8_t)var_dh == 0))) {
        var_1ch = var_1ch + 1;
        var_28h = var_28h - 1;
    }
    sym.set_var(0xfc, (uint32_t)(uint8_t)var_dh, 0xffffffff, 0x57, var_18h, 1, var_1ch, 0, 0x1a35a1ef, -4, 0x1e9d581d, 
                0xffffffff, -1);
    return 0xffffffff;
}
