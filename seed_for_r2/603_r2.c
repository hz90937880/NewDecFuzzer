
// WARNING: Variable defined which should be unmapped: var_8h
// WARNING: Removing unreachable block (ram,0x080497d8)
// WARNING: Removing unreachable block (ram,0x080497a1)
// WARNING: Removing unreachable block (ram,0x080497e7)
// WARNING: Removing unreachable block (ram,0x080497cb)
// WARNING: Removing unreachable block (ram,0x080497ee)
// WARNING: Removing unreachable block (ram,0x08049896)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_28h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2ah to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_33h
// WARNING: [r2ghidra] Detected overlap for variable var_34h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_37h
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_66h

undefined4 sym.func_1(void)
{
    uint32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_64h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_30h;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    uint16_t var_1ah;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = -8;
    var_1ah = 0;
    for (var_14h = 0; var_14h < 0x10; var_14h = var_14h + 1) {
        var_ch = 0xd5493e;
    }
    for (var_28h = 0; var_28h < 0x12; var_28h = var_28h + 1) {
        var_1ah = 0xfff9;
    }
    sym.set_var(var_ch, -1, 1, var_14h, 0x5e0c0a10, 0x4fef, 8, -1, 0xec24, (uint32_t)var_1ah);
    return 0x4fef;
}
