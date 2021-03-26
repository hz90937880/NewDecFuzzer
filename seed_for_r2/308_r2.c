
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x0804978b)
// WARNING: Removing unreachable block (ram,0x08049a20)
// WARNING: Removing unreachable block (ram,0x08049a2b)
// WARNING: Removing unreachable block (ram,0x08049a26)
// WARNING: Removing unreachable block (ram,0x080498b5)
// WARNING: Removing unreachable block (ram,0x080498d8)
// WARNING: Removing unreachable block (ram,0x080498de)
// WARNING: Removing unreachable block (ram,0x080498e5)
// WARNING: Removing unreachable block (ram,0x080498ea)
// WARNING: Removing unreachable block (ram,0x080498ff)
// WARNING: Removing unreachable block (ram,0x0804994b)
// WARNING: Removing unreachable block (ram,0x08049971)
// WARNING: Removing unreachable block (ram,0x0804998a)
// WARNING: Removing unreachable block (ram,0x0804998f)
// WARNING: Removing unreachable block (ram,0x08049836)
// WARNING: Removing unreachable block (ram,0x08049a15)
// WARNING: Removing unreachable block (ram,0x08049808)
// WARNING: Removing unreachable block (ram,0x08049843)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2bh
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_5eh
// WARNING: [r2ghidra] Detected overlap for variable var_38h

int16_t sym.func_1(void)
{
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_5ch;
    uint32_t var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    int32_t var_48h;
    uint32_t var_40h;
    uint32_t var_39h;
    uint32_t var_34h;
    uint32_t var_30h;
    int32_t var_28h;
    int16_t var_22h;
    int32_t var_20h;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_20h = -10;
    var_22h = 0x2bb7;
    var_28h = -0x654ec02f;
    var_14h = 0xfffffff8;
    for (var_eh._0_2_ = 0x1b; 0x39 < (uint16_t)var_eh; var_eh._0_2_ = (uint16_t)var_eh + 9) {
        var_14h = 1;
        var_28h = var_28h & 0x91e;
        var_20h = 0x359a7032;
        var_22h = 0x1f5f;
    }
    sym.set_var((uint32_t)(uint16_t)var_eh, 0xf6, var_14h, 1, 0, 0xf8, var_20h, (int32_t)var_22h, var_28h, 8, 8);
    return var_22h;
}
