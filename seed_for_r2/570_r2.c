
// WARNING: Removing unreachable block (ram,0x0804981a)
// WARNING: Removing unreachable block (ram,0x08049737)
// WARNING: Removing unreachable block (ram,0x0804973f)
// WARNING: Removing unreachable block (ram,0x0804973d)
// WARNING: Removing unreachable block (ram,0x08049789)
// WARNING: Removing unreachable block (ram,0x080497a4)
// WARNING: Removing unreachable block (ram,0x080497a8)
// WARNING: Removing unreachable block (ram,0x080499ca)
// WARNING: Removing unreachable block (ram,0x08049838)
// WARNING: Removing unreachable block (ram,0x08049854)
// WARNING: Removing unreachable block (ram,0x080497c4)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_36h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_9h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_2bh
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_1fh
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_50h;
    uint32_t var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    int32_t var_3ch;
    int32_t var_34h;
    uint32_t var_30h;
    uint32_t var_28h;
    uint32_t var_24h;
    uint8_t var_1fh;
    uint16_t var_1eh;
    int32_t var_1ch;
    uint16_t var_16h;
    int32_t var_14h;
    uint32_t var_10h;
    uint32_t var_8h;
    undefined4 var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_4h = 9;
    var_8h = 0x6f1860ec;
    var_14h = 0x1aac2b22;
    var_1ch = -2;
    var_1eh = 0xffff;
    var_1fh = 0x5e;
    for (var_16h = 0x1a; var_16h < 0xd; var_16h = var_16h - 1) {
        var_8h = 0xffffffff;
        if (var_16h == 0) {
            var_14h = 0;
            var_1eh = 0;
            var_1fh = var_1fh ^ (int16_t)var_1ch < 0xfa;
            var_1ch = 0;
        }
        var_4h = 0;
    }
    sym.set_var(var_4h, var_8h, 0xfa, var_1fh | 1, 0, var_14h, 
                (uint32_t)
                (uint16_t)
                ((uint64_t)(((uint16_t)var_14h | 0x7dc9) & 0xfa) % (uint64_t)(int64_t)(int32_t)(uint32_t)var_1eh));
    return 0;
}
