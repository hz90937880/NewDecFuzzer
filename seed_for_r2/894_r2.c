
// WARNING: Variable defined which should be unmapped: var_8h
// WARNING: Removing unreachable block (ram,0x080498ab)
// WARNING: Removing unreachable block (ram,0x080499fd)
// WARNING: Removing unreachable block (ram,0x08049a0a)
// WARNING: Removing unreachable block (ram,0x0804996c)
// WARNING: Removing unreachable block (ram,0x08049979)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_30h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_17h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_50h
// WARNING: [r2ghidra] Detected overlap for variable var_51h

uint32_t sym.func_1(void)
{
    int32_t var_58h;
    uint32_t var_4ch;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_38h;
    int32_t var_34h;
    undefined4 var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_24h;
    uint8_t var_1eh;
    char var_1dh;
    uint32_t var_1ch;
    uint8_t var_17h;
    uint8_t var_16h;
    uint8_t var_15h;
    uint32_t var_14h;
    uint32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0xa5d6c05b;
    var_10h = 9;
    var_15h = 0x56;
    var_16h = 0xd5;
    var_17h = 0xfb;
    var_1ch = 1;
    var_1dh = -6;
    var_1eh = 7;
    var_14h = 0;
    while (var_14h != 0xfffffff8) {
        var_17h = (uint8_t)var_14h;
        var_16h = var_17h;
        for (var_15h = 0xf1; var_15h < 0x31; var_15h = var_15h + 1) {
            var_10h = (uint32_t)
                      ((uint32_t)
                       (((uint32_t)((uint32_t)(int32_t)(char)var_17h < 0xf3e63d4e) << (var_16h & 0x1f) & 1) * 0x800 +
                        (uint32_t)(var_ch != 0) != 0) <= 0xffff0001 / var_15h);
            var_1dh = '\x01';
            var_1ch = 0xc718fe3b;
            var_16h = (var_ch != 0 || (int32_t)(char)var_16h <= (int32_t)(uint32_t)((var_14h & 0xff) + 0x42 < var_10h))
                      << (var_17h & 0x1f) & 0x3b;
            var_ch = 1;
        }
        if (var_14h != 0) break;
        var_1eh = var_1eh + 1;
        var_14h = 0xffffffff;
    }
    sym.set_var(var_ch, var_10h, var_14h, (uint32_t)var_15h, (int32_t)(char)var_16h, (int32_t)(char)var_17h, var_1ch, 
                (int32_t)var_1dh, (uint32_t)var_1eh);
    return var_1ch;
}
