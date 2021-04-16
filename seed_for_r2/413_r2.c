
// WARNING: Variable defined which should be unmapped: var_2h
// WARNING: Removing unreachable block (ram,0x080497bb)
// WARNING: Removing unreachable block (ram,0x080497c9)
// WARNING: Removing unreachable block (ram,0x080497a8)
// WARNING: Removing unreachable block (ram,0x08049764)
// WARNING: Removing unreachable block (ram,0x0804973c)
// WARNING: Removing unreachable block (ram,0x08049750)
// WARNING: Removing unreachable block (ram,0x0804975d)
// WARNING: Removing unreachable block (ram,0x08049769)
// WARNING: Removing unreachable block (ram,0x08049776)
// WARNING: Removing unreachable block (ram,0x08049784)
// WARNING: Removing unreachable block (ram,0x08049724)
// WARNING: Removing unreachable block (ram,0x080497fd)
// WARNING: Removing unreachable block (ram,0x0804981b)
// WARNING: Removing unreachable block (ram,0x08049870)
// WARNING: Removing unreachable block (ram,0x0804977d)
// WARNING: Removing unreachable block (ram,0x08049789)
// WARNING: Removing unreachable block (ram,0x0804979b)
// WARNING: Removing unreachable block (ram,0x080497a1)
// WARNING: Removing unreachable block (ram,0x080497ad)
// WARNING: Removing unreachable block (ram,0x080497c2)
// WARNING: Removing unreachable block (ram,0x080497ce)
// WARNING: Removing unreachable block (ram,0x08049915)
// WARNING: Removing unreachable block (ram,0x0804983c)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_21h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_dh
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Detected overlap for variable var_50h

uint16_t sym.func_1(void)
{
    int32_t var_51h;
    int32_t var_48h;
    uint32_t var_40h;
    uint32_t var_38h;
    uint32_t var_34h;
    uint32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    char var_21h;
    uint32_t var_20h;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_2h;
    
    sym.__x86.get_pc_thunk.ax();
    var_2h._0_2_ = 0;
    var_ch = 0x628d16e9;
    for (var_21h = '\0'; var_21h < '\0'; var_21h = var_21h + -1) {
        var_2h._0_2_ = (uint16_t)var_2h - 1;
        var_ch = 1;
    }
    sym.set_var((uint32_t)(uint16_t)var_2h, 1, 0x612d29ed, (uint32_t)(uint16_t)var_2h, var_ch, 0xeb, 2, 4);
    return (uint16_t)var_2h;
}
