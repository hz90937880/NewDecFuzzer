
// WARNING: Removing unreachable block (ram,0x080497a1)
// WARNING: Removing unreachable block (ram,0x080497e4)
// WARNING: Removing unreachable block (ram,0x080497d4)
// WARNING: Removing unreachable block (ram,0x080497f2)
// WARNING: Removing unreachable block (ram,0x08049715)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_1fh
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_30h;
    int32_t var_28h;
    int32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    uint16_t var_ah;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_4h = -1;
    var_ah = 0xfffa;
    for (var_8h = -7; -0x18 < var_8h; var_8h = var_8h + -1) {
        var_ah = var_ah ^ 0xfff8;
        var_4h = ZEXT24(var_ah);
    }
    sym.set_var(var_4h, var_8h, (uint32_t)var_ah, -0x1381bcbd, -1);
    return 0x5e;
}
