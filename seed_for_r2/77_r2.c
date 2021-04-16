
// WARNING: Removing unreachable block (ram,0x08049718)
// WARNING: Removing unreachable block (ram,0x08049790)
// WARNING: Removing unreachable block (ram,0x0804979a)
// WARNING: Removing unreachable block (ram,0x0804979e)
// WARNING: Removing unreachable block (ram,0x080497ab)
// WARNING: Removing unreachable block (ram,0x080497a4)
// WARNING: Removing unreachable block (ram,0x080497b0)
// WARNING: Removing unreachable block (ram,0x080496f4)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_ah

int32_t sym.func_1(void)
{
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0x70feea3;
    var_14h = -1;
    for (var_8h = -3; var_8h < 0xe; var_8h = var_8h + 8) {
        for (var_14h = 6; var_14h < 0x13; var_14h = var_14h + 5) {
        }
        var_10h = 0xfffd;
    }
    sym.set_var(0x713b9102, 0xb18d4081, 0xfffffffe, var_8h, 0xfffd, var_10h);
    return var_14h;
}
