
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049b3e)
// WARNING: Removing unreachable block (ram,0x08049956)
// WARNING: Removing unreachable block (ram,0x08049b1a)
// WARNING: Removing unreachable block (ram,0x0804991e)
// WARNING: Removing unreachable block (ram,0x08049989)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_38h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_3ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_44h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_31h
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint32_t uVar1;
    int32_t var_78h;
    int32_t var_74h;
    uint32_t var_6ch;
    uint32_t var_64h;
    uint32_t var_60h;
    int32_t var_58h;
    uint32_t var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_46h;
    int32_t var_40h;
    undefined4 var_3ch;
    int32_t var_38h;
    uint8_t var_31h;
    uint32_t var_30h;
    int32_t var_28h;
    uint32_t var_20h;
    uint32_t var_18h;
    uint8_t var_11h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_11h = 0x96;
    var_18h = 1;
    var_28h = -0x608bce31;
    var_30h = 0xfffffffe;
    var_31h = 0xfe;
    var_10h = 0xffffffe3;
    do {
        if (0x1d < (int32_t)var_10h) {
            sym.set_var(var_10h, 1, (uint32_t)var_11h, var_18h, 1, -0x40c508e2, 0xfff9, var_28h, 0, var_30h, 
                        (uint32_t)var_31h);
            return 0xfffffff7;
        }
        if ((int32_t)var_10h < 3) {
            var_11h = 0xfa;
        } else {
            var_11h = 0xfb;
        }
        var_18h = (uint32_t)var_11h;
        for (var_38h = -3; -8 < var_38h; var_38h = var_38h + -1) {
            var_11h = 0;
            if (1 / 0 != 0) {
                sym.set_var(var_10h, 1, 0, var_18h, 1, -0x40c40881, 0xfff9, var_28h, 0, var_30h, (uint32_t)var_31h);
                return 1;
            }
            if ((var_38h == 0) || (var_38h == 0)) {
                uVar1 = 0;
            } else {
                uVar1 = 1;
            }
            var_28h = var_28h | uVar1;
            var_30h = var_10h;
            var_31h = (char)var_38h - (var_18h != 0);
        }
        var_10h = var_10h + 1;
    } while( true );
}
