
// WARNING: Variable defined which should be unmapped: var_9h
// WARNING: Removing unreachable block (ram,0x080497f1)
// WARNING: Removing unreachable block (ram,0x08049825)
// WARNING: Removing unreachable block (ram,0x080497e5)
// WARNING: Removing unreachable block (ram,0x0804981e)
// WARNING: Removing unreachable block (ram,0x0804982a)
// WARNING: Removing unreachable block (ram,0x080497ef)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_34h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_28h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_38h

undefined4 sym.func_1(void)
{
    undefined4 var_34h;
    int32_t var_2eh;
    undefined4 var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_18h;
    int32_t var_14h;
    int16_t var_eh;
    int16_t var_ch;
    uint32_t var_9h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0;
    var_eh = 0;
    stack0xffffffd0 = 0xb6890635;
    for (var_24h = 0; var_24h < -0x16; var_24h = var_24h + -1) {
        var_ch = 1;
        var_eh = (int16_t)(1 % (uint64_t)(int64_t)(int32_t)(stack0xffffffd0 & 0xffU | 1)) + 5;
        unique0x100000d1 = stack0xffffffd0 | 1;
    }
    sym.set_var(1, (int32_t)var_ch, (int32_t)var_eh, 0x887, -2, 2, 0xfb, 1);
    return 0xfe6e3245;
}
