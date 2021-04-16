
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x080497fe)
// WARNING: Removing unreachable block (ram,0x080498d2)
// WARNING: Removing unreachable block (ram,0x080498d8)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_48h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_60h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_31h
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_27h
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_3dh
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_61h

undefined4 sym.func_1(void)
{
    int32_t var_70h;
    uint32_t var_6ch;
    uint32_t var_68h;
    undefined4 var_60h;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    undefined4 var_48h;
    int32_t var_44h;
    int32_t var_38h;
    uint32_t var_30h;
    int32_t var_2ch;
    uint8_t var_27h;
    uint16_t var_26h;
    int32_t var_24h;
    uint8_t var_1dh;
    uint32_t var_1ch;
    uint8_t var_15h;
    uint32_t var_14h;
    uint32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_15h = 0x5d;
    var_1ch = 0xd98a9a26;
    var_1dh = 0xb7;
    var_24h = 1;
    var_26h = 0;
    var_27h = 0xff;
    var_dh._0_1_ = 0xfc;
    for (var_14h = 0xffffffe3; var_14h != 0x14; var_14h = var_14h + 1) {
        var_15h = var_15h & 9;
        if ((char)(uint8_t)var_dh < '\x01') {
            var_27h = var_27h | 0x9e;
        } else {
            for (var_2ch = -7; var_2ch < -0xf; var_2ch = var_2ch + -1) {
                var_1ch = var_1ch + 1;
                var_dh._0_1_ = ((uint8_t)var_14h | 0xfa) ^ 0x11;
                var_1dh = ((uint8_t)var_dh == 0x30) + 6;
                var_24h = -0x3a % (int32_t)(char)var_1ch;
            }
            var_26h = var_26h | (uint16_t)((int32_t)(0x3142U % 0 & 0xff) >> (var_1dh & 0x1f)) ^ 0x4c;
        }
    }
    sym.set_var(0xa32b1cec, 0x30, (int32_t)(char)(uint8_t)var_dh, 0x14, (uint32_t)var_15h, -1, 0, var_1ch, 
                (uint32_t)var_1dh, var_24h, (uint32_t)var_26h, (uint32_t)var_27h);
    return 0xa32b1cec;
}
