
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x0804987a)
// WARNING: Removing unreachable block (ram,0x0804986d)
// WARNING: Removing unreachable block (ram,0x08049904)
// WARNING: Removing unreachable block (ram,0x08049933)
// WARNING: Removing unreachable block (ram,0x08049937)
// WARNING: Removing unreachable block (ram,0x0804994e)
// WARNING: Removing unreachable block (ram,0x08049944)
// WARNING: Removing unreachable block (ram,0x0804994a)
// WARNING: Removing unreachable block (ram,0x08049954)
// WARNING: Removing unreachable block (ram,0x08049957)
// WARNING: Removing unreachable block (ram,0x08049964)
// WARNING: Removing unreachable block (ram,0x08049996)
// WARNING: Removing unreachable block (ram,0x08049ae0)
// WARNING: Removing unreachable block (ram,0x080499a0)
// WARNING: Removing unreachable block (ram,0x08049a01)
// WARNING: Removing unreachable block (ram,0x080499a9)
// WARNING: Removing unreachable block (ram,0x08049a07)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_2ch
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t iVar1;
    int32_t var_58h;
    int32_t var_50h;
    int32_t var_48h;
    uint32_t var_40h;
    int32_t var_38h;
    uint32_t var_34h;
    uint32_t var_30h;
    int32_t var_28h;
    undefined4 var_24h;
    int32_t var_20h;
    char var_19h;
    uint16_t var_18h;
    uint16_t var_16h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 0xad313dd3;
    var_10h = 0xffffffff;
    var_14h = 1;
    var_16h = 1;
    var_18h = 0xffff;
    var_19h = '\0';
    var_20h = -2;
    var_28h = -0xb9920ba;
    for (var_ch = -0x19; var_ch < 1; var_ch = var_ch + 1) {
        var_16h = var_16h + 1;
        var_18h = var_18h & ((uint16_t)(1 < var_14h) ^ (uint16_t)var_14h);
        var_10h = var_10h + 1;
        if ((int16_t)var_8h == 0) {
            var_19h = (var_8h == 0xbe8d) - (char)var_16h;
            var_20h = ZEXT14((int32_t)(var_8h | 0xe) < 0xbe8d);
code_r0x08049a82:
            if (((uint32_t)var_16h ^ (uint32_t)(uint8_t)(8 % (uint16_t)(uint8_t)var_10h)) < 0x3505ce4f) {
                iVar1 = 0x4d;
            } else {
                iVar1 = 0x4e;
            }
            var_14h = (uint32_t)var_18h * iVar1;
            var_28h = 1;
            if (var_19h != '\0') break;
        } else {
            if (var_16h == 0) {
                if (var_10h == 0) {
                    sym.set_var(var_8h, var_ch, 0, 0, 0, (uint32_t)var_18h, (int32_t)var_19h, var_20h);
                    return 0;
                }
                var_8h = 0;
                goto code_r0x08049a82;
            }
        }
    }
    sym.set_var(var_8h, 0, var_10h, var_28h, (uint32_t)var_16h, (uint32_t)var_18h, (int32_t)var_19h, var_20h);
    return 0xfffffff7;
}
