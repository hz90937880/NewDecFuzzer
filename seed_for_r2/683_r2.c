
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x0804989d)
// WARNING: Removing unreachable block (ram,0x0804994d)
// WARNING: Removing unreachable block (ram,0x080498a9)
// WARNING: Removing unreachable block (ram,0x080498dc)
// WARNING: Removing unreachable block (ram,0x080498e9)
// WARNING: Removing unreachable block (ram,0x080498e2)
// WARNING: Removing unreachable block (ram,0x080498ee)
// WARNING: Removing unreachable block (ram,0x08049957)
// WARNING: Removing unreachable block (ram,0x0804984a)
// WARNING: Removing unreachable block (ram,0x08049874)
// WARNING: Removing unreachable block (ram,0x0804973a)
// WARNING: Removing unreachable block (ram,0x0804972d)
// WARNING: Removing unreachable block (ram,0x08049965)
// WARNING: Removing unreachable block (ram,0x0804974f)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_38h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah

undefined4 sym.func_1(void)
{
    bool bVar1;
    int32_t var_34h;
    int32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    undefined4 var_1ch;
    undefined4 var_14h;
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    bVar1 = (-(int32_t)(int16_t)(uint16_t)((uint16_t)((uint16_t)(1 % 0) >> 4) != 0) | 1U) == 0xd4;
    sym.set_var(0xc75b57fd, 5, (uint32_t)(bVar1 < 0x45), 3, (uint32_t)bVar1, 0, -1);
    return 3;
}
