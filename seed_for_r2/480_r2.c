
// WARNING: Variable defined which should be unmapped: var_8h
// WARNING: Removing unreachable block (ram,0x08049794)
// WARNING: Removing unreachable block (ram,0x08049786)
// WARNING: Removing unreachable block (ram,0x0804986b)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ah to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_12h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_13h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2ah to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_13h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_1ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_2ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_38h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    int32_t var_55h;
    int32_t var_4ch;
    uint32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_28h;
    uint32_t var_24h;
    int32_t var_20h;
    int32_t var_18h;
    uint16_t var_12h;
    uint32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0xffffffff;
    var_12h = 0x9cd4;
    for (var_ch = 3; 0x12 < var_ch; var_ch = var_ch + 1) {
        var_12h = var_12h - 1;
        var_10h = 1;
    }
    sym.set_var(var_ch, 0x256915a0, (int32_t)(int16_t)(uint16_t)(((int32_t)var_10h < 0) < 0xb5d3), var_10h, 
                (uint32_t)var_12h, 0x2d, -0x19cc8da8, -0x2973d502, -0x57700899, 0, 5, -0xba492b1, 1, -6, 0x4d85d5fc);
    return 0xa61860f4;
}
