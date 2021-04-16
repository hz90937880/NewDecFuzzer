
// WARNING: Removing unreachable block (ram,0x0804970a)
// WARNING: Removing unreachable block (ram,0x0804973e)
// WARNING: Removing unreachable block (ram,0x08049742)
// WARNING: Removing unreachable block (ram,0x08049748)
// WARNING: Removing unreachable block (ram,0x08049755)
// WARNING: Removing unreachable block (ram,0x0804974e)
// WARNING: Removing unreachable block (ram,0x0804975a)
// WARNING: Removing unreachable block (ram,0x0804977e)
// WARNING: Removing unreachable block (ram,0x08049792)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_6h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_1bh
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t var_1ah;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_20h;
    uint16_t var_12h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_12h = 0x688;
    stack0xffffffe4 = 0xffffffff;
    for (var_4h = 0xb; var_4h < 1; var_4h = var_4h + -1) {
        stack0xffffffe4 = 0xd149febb;
        var_12h = var_12h | 1;
    }
    sym.set_var(var_4h, 0xa6f, stack0xffffffe4, 1, (int32_t)(int16_t)var_12h, 0);
    return var_4h;
}
