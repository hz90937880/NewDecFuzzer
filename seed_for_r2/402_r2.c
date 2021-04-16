
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x0804979e)
// WARNING: Removing unreachable block (ram,0x080497ab)
// WARNING: Removing unreachable block (ram,0x080497b9)
// WARNING: Removing unreachable block (ram,0x080497c6)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_2fh
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t iVar1;
    uint32_t uVar2;
    uint32_t var_4ch;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_38h;
    uint32_t var_34h;
    int32_t var_2eh;
    uint32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    uint16_t var_1ch;
    uint8_t var_19h;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0xffffffff;
    var_10h = 0;
    var_14h = -0x34120570;
    var_18h = 0x1d319d7f;
    var_19h = 0;
    var_1ch = 1;
    for (var_8h = 0; (int32_t)var_8h < -0x13; var_8h = var_8h - 2) {
        var_ch = var_ch - 1;
        var_10h = 1;
        for (stack0xffffffd0 = 0; stack0xffffffd0 < -5; unique0x00000f40 = stack0xffffffd0 + -1) {
            if (var_8h == 1) {
                iVar1 = 0;
            } else {
                iVar1 = -0x3d;
            }
            if (iVar1 == -0x49a7e128) {
                uVar2 = 0x40;
            } else {
                uVar2 = 0;
            }
            var_18h = var_18h & 1;
            var_14h = ZEXT14(true < ((uVar2 != (var_8h >> 4 & 0xf)) == 0xfffffffd));
        }
        var_1ch = 0x7938;
        var_19h = var_19h + 1;
    }
    sym.set_var(var_8h, var_ch, var_10h, var_14h, var_18h, (uint32_t)var_19h, (int32_t)(int16_t)var_1ch, 0x33, 
                (uint32_t)(var_1ch < 0xb6));
    return 0xd32ffab8;
}
