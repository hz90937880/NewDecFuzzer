
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x080498a7)
// WARNING: Removing unreachable block (ram,0x080498ad)
// WARNING: Removing unreachable block (ram,0x080498bd)
// WARNING: Removing unreachable block (ram,0x080498c4)
// WARNING: Removing unreachable block (ram,0x080498c9)
// WARNING: Removing unreachable block (ram,0x08049986)
// WARNING: Removing unreachable block (ram,0x0804999e)
// WARNING: Removing unreachable block (ram,0x080499a2)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_38h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_40h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_28h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_47h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_50h
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_59h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_75h
// WARNING: [r2ghidra] Detected overlap for variable var_81h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_90h;
    uint32_t var_80h;
    uint32_t var_7ch;
    int32_t var_74h;
    int32_t var_70h;
    uint32_t var_6ch;
    uint32_t var_68h;
    int32_t var_60h;
    int32_t var_58h;
    uint32_t var_54h;
    int32_t var_4ch;
    uint8_t var_45h;
    uint32_t var_44h;
    uint32_t var_40h;
    uint8_t var_39h;
    uint32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    uint32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    uint8_t var_19h;
    uint32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_39h = 3;
    var_40h = 0x7030fc35;
    var_44h = 1;
    var_45h = 0x5c;
    var_10h = -0x2dbd13df;
    var_14h = 0x27df68d3;
    var_19h = 0xff;
    for (var_38h = 0; (int32_t)var_38h < -0x1e; var_38h = var_38h - 1) {
        if (var_38h == 0) {
            for (var_40h = -10; -0x19 < (int32_t)var_40h; var_40h = var_40h + -1) {
                var_45h = var_39h;
                for (var_28h = 1; var_28h < -8; var_28h = var_28h + -5) {
                    var_10h = var_10h + 1;
                }
            }
            var_14h = var_14h + 1;
            var_19h = (uint8_t)var_44h;
            var_40h = ~(uint32_t)(var_44h == 0) ^ 0x45c000;
        } else {
            var_39h = 1;
            var_44h = var_44h & var_38h != (int32_t)(char)var_40h * (int32_t)(char)((var_38h >> 1 & 0x7fff) / 0x2cbb);
        }
    }
    sym.set_var(var_38h, (uint32_t)var_39h, var_40h, var_44h, (int32_t)(char)var_45h, -0x2d, var_10h, 0x78, -10, 7, 1, 
                0x3a8b8e48, -1, var_14h, 0, (uint32_t)var_19h);
    return 0;
}
