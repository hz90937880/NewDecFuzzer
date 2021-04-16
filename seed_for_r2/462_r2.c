
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x08049862)
// WARNING: Removing unreachable block (ram,0x080497b7)
// WARNING: Removing unreachable block (ram,0x080497d9)
// WARNING: Removing unreachable block (ram,0x0804986f)
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_39h

undefined sym.func_1(void)
{
    int32_t var_40h;
    int32_t var_38h;
    int32_t var_34h;
    uint32_t var_2ch;
    uint32_t var_28h;
    int32_t var_20h;
    uint32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0x63028ec7;
    var_10h = 0;
    while (var_10h == 5) {
        var_8h = 0;
        var_10h = 6;
    }
    sym.set_var(0xffffffee, 0x12, 0x12, var_8h, 0x6ba99949, 0x13, 0xfffe);
    return 0x13;
}
