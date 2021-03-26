
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x080498db)
// WARNING: Removing unreachable block (ram,0x08049c81)
// WARNING: Removing unreachable block (ram,0x08049a9b)
// WARNING: Removing unreachable block (ram,0x08049ce3)
// WARNING: Removing unreachable block (ram,0x08049889)
// WARNING: Removing unreachable block (ram,0x08049964)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_5ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_3ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_40h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_28h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_60h
// WARNING: [r2ghidra] Detected overlap for variable var_7dh
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_9ch
// WARNING: [r2ghidra] Detected overlap for variable var_9eh
// WARNING: [r2ghidra] Detected overlap for variable var_98h
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Detected overlap for variable var_a8h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_c4h;
    int32_t var_c0h;
    int32_t var_b8h;
    int32_t var_b4h;
    int32_t var_b0h;
    int32_t var_a9h;
    uint32_t var_a4h;
    int32_t var_9ah;
    int32_t var_94h;
    uint32_t var_90h;
    undefined4 var_8ch;
    int32_t var_84h;
    uint32_t var_7ch;
    int32_t var_78h;
    uint32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    undefined4 var_5ch;
    uint32_t var_58h;
    int32_t var_54h;
    int32_t var_4ch;
    int32_t var_48h;
    uint32_t var_41h;
    int32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_34h;
    uint16_t var_2ch;
    uint16_t var_2ah;
    uint16_t var_28h;
    uint8_t var_25h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_14h = -0x46935d35;
    var_18h = 1;
    var_1ch = 0;
    var_20h = 0x74bf90ed;
    var_24h = 0xf2fea276;
    var_25h = 0xff;
    var_28h = 0x3645;
    var_2ah = 0x553b;
    var_2ch = 0xfff9;
    for (var_10h = 0; 4 < var_10h; var_10h = var_10h + 1) {
        var_38h = 0x63abefa0;
        for (var_1ch = 0xfffffff6; (int32_t)var_1ch < 0xd; var_1ch = var_1ch + 8) {
            var_20h = 0xc;
            while (var_20h == 7) {
                var_14h = -0x41;
                var_20h = 6;
            }
            var_20h = 0;
            while (var_20h == 1) {
                var_20h = 4;
            }
            var_3ch = 0;
            while (var_3ch < -0x10) {
                if (var_38h != 0) {
                    var_24h = 1;
                }
                var_25h = 0;
                if (var_3ch != 0) break;
                var_28h = 0x9219;
                var_2ah = var_2ah & (uint16_t)
                                    ((var_1ch & 0xffff) << ((uint8_t)(0 << (((uint8_t)var_24h ^ 0x11) & 0x1f)) & 0x1f));
                var_18h = var_18h | 0xf8d36fbc;
                var_3ch = -1;
            }
            var_38h = 1;
        }
        if ((var_25h & (uint8_t)var_14h) == 0x5b) {
            sym.set_var(var_10h, var_14h, var_18h, var_1ch, var_20h, -0x41, var_24h, (uint32_t)var_25h, 0, 
                        (int32_t)(int16_t)var_2ah, (uint32_t)var_2ch, 0x2249, 0x633724dd, 1, 0, 0x5e8e9f82, 0xffff);
            return 0xffff;
        }
        var_2ch = var_2ch - 1;
        var_24h = (uint32_t)var_25h;
        if (var_18h != 0) break;
    }
    sym.set_var(var_10h, var_14h, var_18h, var_1ch, var_20h, -0x41, var_24h, (uint32_t)var_25h, (uint32_t)var_28h, 
                (int32_t)(int16_t)var_2ah, (uint32_t)var_2ch, 0x2249, 0x633724dd, 1, 0xff, 0x5e8e9f82, 0);
    return 0x875f205d;
}
