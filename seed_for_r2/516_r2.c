
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x08049947)
// WARNING: Removing unreachable block (ram,0x08049968)
// WARNING: Removing unreachable block (ram,0x080497f6)
// WARNING: Removing unreachable block (ram,0x08049803)
// WARNING: Removing unreachable block (ram,0x0804996f)
// WARNING: Removing unreachable block (ram,0x08049974)
// WARNING: Removing unreachable block (ram,0x080497ac)
// WARNING: Removing unreachable block (ram,0x080497bc)
// WARNING: Removing unreachable block (ram,0x0804985e)
// WARNING: Removing unreachable block (ram,0x080498e0)
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_4ah
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Detected overlap for variable var_52h

uint8_t sym.func_1(void)
{
    uint32_t var_5ch;
    int32_t var_58h;
    int32_t var_50h;
    uint32_t var_48h;
    int32_t var_40h;
    uint32_t var_3ch;
    int32_t var_38h;
    int32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint8_t var_16h;
    uint8_t var_15h;
    uint16_t var_14h;
    char var_11h;
    uint32_t var_10h;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0x79942796;
    var_11h = 'i';
    var_14h = 0xfff7;
    var_15h = 0xf;
    var_16h = 0xff;
    var_1ch = 6;
    var_28h = 0x8385637e;
    var_8h = 0;
    while (var_8h == 0x24) {
        var_16h = var_16h | (int32_t)var_28h < -0x2ac5;
        var_1ch = (uint32_t)var_16h;
        var_28h = 0;
        var_15h = 0;
        var_10h = 0xffffffff;
        var_11h = '\x01';
        var_14h = 0xf7d5;
        var_8h = 0x25;
    }
    sym.set_var(var_8h, 0x6548aab5, var_10h, (int32_t)var_11h, (uint32_t)var_14h, (uint32_t)var_15h, (uint32_t)var_16h, 
                var_1ch, 0);
    return var_15h;
}
