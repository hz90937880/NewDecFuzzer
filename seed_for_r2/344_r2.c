
// WARNING: Removing unreachable block (ram,0x080497b3)
// WARNING: Removing unreachable block (ram,0x0804986e)
// WARNING: Removing unreachable block (ram,0x08049872)
// WARNING: Removing unreachable block (ram,0x080497fc)
// WARNING: Removing unreachable block (ram,0x0804985e)
// WARNING: Removing unreachable block (ram,0x0804981a)
// WARNING: Removing unreachable block (ram,0x08049864)
// WARNING: Removing unreachable block (ram,0x08049878)
// WARNING: Removing unreachable block (ram,0x0804987b)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_3dh
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    uint32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    uint32_t var_18h;
    int32_t var_14h;
    undefined4 var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_4h = 0xfffffffd;
    var_8h = -0xeedb0ff;
    var_14h = 1;
    var_18h = 0xffffffff;
    var_2ch = -0x19897ba7;
    for (var_ch = 1; -0xe < var_ch; var_ch = var_ch + -1) {
        var_8h = var_14h + -1;
        var_2ch = var_2ch ^ 0xfffffffd;
        var_4h = var_2ch | 0xc9fb37b0;
        var_18h = var_18h ^ 0xa8629341 < var_14h + 0x11U;
        var_14h = var_8h;
    }
    sym.set_var(var_4h, var_8h, var_ch, -0x3604c850, var_14h, var_18h, -1, 0x266d991, -4);
    return var_2ch;
}
