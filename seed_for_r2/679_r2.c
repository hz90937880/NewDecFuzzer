
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x080498da)
// WARNING: Removing unreachable block (ram,0x080497ea)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_9h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    int32_t iVar1;
    int32_t var_58h;
    uint32_t var_54h;
    int32_t var_50h;
    uint32_t var_4ch;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    uint32_t var_31h;
    int32_t var_2ch;
    int32_t var_28h;
    uint8_t var_22h;
    uint8_t var_21h;
    int32_t var_20h;
    int32_t var_1ch;
    uint16_t var_16h;
    uint32_t var_14h;
    uint32_t var_10h;
    uint8_t var_9h;
    int32_t var_8h;
    undefined4 var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_9h = 0xf6;
    var_10h = 0xa7084bc;
    var_14h = 0xffffffff;
    var_16h = 0x8c9a;
    var_1ch = -1;
    var_20h = 1;
    var_21h = 0x4b;
    var_22h = 1;
    for (var_8h = 0; var_8h < 2; var_8h = var_8h + 3) {
        stack0xffffffcc = -7;
        var_22h = var_22h ^ 0x4c;
        if (var_22h == 0) {
            var_14h = 0;
            while ((0x2a < var_14h && (unique0x00000f30 = -1, var_9h == 0))) {
                var_9h = 0;
                while (var_9h == 0x1d) {
                    var_20h = 0;
                    var_21h = 0;
                    var_9h = 0x1e;
                }
                var_14h = var_14h + 1;
            }
        } else {
            var_10h = (uint32_t)(uint8_t)(1 / var_9h);
            for (var_2ch = 0; var_2ch < -1; var_2ch = var_2ch + -5) {
                stack0xffffffcc = -0x347093df;
                var_14h = 0x9bdd;
                var_16h = (uint16_t)(var_10h != 0);
            }
            if ((((int32_t)(uint32_t)(uint8_t)var_16h >> ((uint8_t)((1 - var_22h & var_10h) % var_14h) & 0x1f) & 0x20U)
                 == 0) || (var_2ch == 0)) {
                iVar1 = 0;
            } else {
                iVar1 = 1;
            }
            var_1ch = (int16_t)((int16_t)(char)var_8h *
                                (int16_t)(char)((int64_t)(uint64_t)(iVar1 == 0x5352f76e) %
                                               (int64_t)(int32_t)(char)(var_9h - 1)) ^ 0xffff) + -1;
            var_9h = var_9h - 1;
        }
        if ((stack0xffffffcc != 0) || (var_10h != 0)) break;
    }
    sym.set_var(var_8h, 0x20, (uint32_t)var_9h, var_10h, var_14h, (int32_t)(int16_t)var_16h, var_1ch, var_20h, 
                (uint32_t)var_21h);
    return var_8h;
}
