
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x08049a03)
// WARNING: Removing unreachable block (ram,0x08049885)
// WARNING: Removing unreachable block (ram,0x080498e7)
// WARNING: Removing unreachable block (ram,0x080498b2)
// WARNING: Removing unreachable block (ram,0x080498e5)
// WARNING: Removing unreachable block (ram,0x08049942)
// WARNING: Removing unreachable block (ram,0x08049949)
// WARNING: Removing unreachable block (ram,0x0804994e)
// WARNING: Removing unreachable block (ram,0x08049955)
// WARNING: Removing unreachable block (ram,0x0804995b)
// WARNING: Removing unreachable block (ram,0x08049962)
// WARNING: Removing unreachable block (ram,0x08049967)
// WARNING: Removing unreachable block (ram,0x080499d2)
// WARNING: Removing unreachable block (ram,0x08049a0a)
// WARNING: Removing unreachable block (ram,0x08049a0f)
// WARNING: Removing unreachable block (ram,0x08049a1b)
// WARNING: Removing unreachable block (ram,0x08049a14)
// WARNING: Removing unreachable block (ram,0x08049a20)
// WARNING: Removing unreachable block (ram,0x08049987)
// WARNING: Removing unreachable block (ram,0x0804979d)
// WARNING: Removing unreachable block (ram,0x080497bc)
// WARNING: Removing unreachable block (ram,0x080497d6)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_13h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_5bh
// WARNING: [r2ghidra] Detected overlap for variable var_5ch
// WARNING: [r2ghidra] Detected overlap for variable var_61h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_6dh

uint32_t sym.func_1(void)
{
    int32_t var_80h;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_6ch;
    uint32_t var_68h;
    int32_t var_60h;
    int32_t var_58h;
    int32_t var_54h;
    uint32_t var_4ch;
    int32_t var_48h;
    uint32_t var_40h;
    int32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_1ch;
    uint8_t var_13h;
    uint32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_13h = 0xa7;
    var_1ch = 0x2945289e;
    var_28h = 0x47eb93d7;
    var_2ch = 9;
    var_30h = 0xeb00d6;
    for (var_dh._0_1_ = '\x16'; -0x1c < (char)var_dh; var_dh._0_1_ = (char)var_dh + -1) {
        var_13h = (char)var_dh != '\t';
        for (var_1ch = 0; var_1ch < 6; var_1ch = var_1ch + 1) {
            var_28h = 1;
            var_30h = 0x960;
            var_2ch = ZEXT14(var_1ch != 0);
        }
    }
    sym.set_var(0xea75c96, (int32_t)(char)var_dh, 1, 0xffffc7d2, 0x374f, (uint32_t)var_13h, 0xa247, var_1ch, 0, 
                0x32c37782, var_28h, var_2ch, var_30h);
    return var_1ch;
}
