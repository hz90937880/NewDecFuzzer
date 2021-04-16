
// WARNING: Removing unreachable block (ram,0x08049834)
// WARNING: Removing unreachable block (ram,0x0804992c)
// WARNING: Removing unreachable block (ram,0x08049878)
// WARNING: Removing unreachable block (ram,0x0804986c)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_20h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_68h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_7h
// WARNING: [r2ghidra] Detected overlap for variable var_4h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_5eh
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_68h

uint32_t sym.func_1(void)
{
    int32_t var_6ch;
    int32_t var_64h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    uint32_t var_50h;
    int32_t var_48h;
    int32_t var_40h;
    int32_t var_3ch;
    uint32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    uint32_t var_28h;
    undefined4 var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    undefined4 var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    uint32_t var_6h;
    
    sym.__x86.get_pc_thunk.ax();
    var_6h._0_2_ = 7;
    var_ch = 0x9a984365;
    var_10h = 0x392fb38a;
    stack0xfffffff8 = 0xf91a6653;
    var_14h = 0x80bbc097;
    var_1ch = 8;
code_r0x0804973b:
    var_28h = 0x4f3d4e67;
    var_20h = -0x12;
    while (var_20h == -0x1b) {
        var_28h = (uint32_t)((uint32_t)(uint16_t)var_6h == 0x51eaU % (uint32_t)(uint16_t)var_6h);
        if (1 / 0 != 0) {
            for (var_10h = 0; -0x1c < var_10h; var_10h = var_10h + -1) {
            }
            var_6h._0_2_ = 0x12;
            unique0x00000f30 = stack0xfffffff8 | 0x7ef0;
        }
        var_14h = 0;
        var_ch = 0xfffffffa;
        var_20h = -0x1c;
    }
    var_1ch = var_1ch + 1;
    var_20h = 0xf;
    do {
        if (-7 < var_20h) {
            sym.set_var((uint32_t)(uint16_t)var_6h, (int32_t)(var_28h != 0), 0, var_ch, var_10h, 0x8915cc6, 
                        stack0xfffffff8, var_14h, 0xfffe, var_20h, -0x5f8fbf34, var_1ch);
            return var_14h;
        }
        for (var_6h._0_2_ = 0xffff; (uint16_t)var_6h < 0x14; var_6h._0_2_ = (uint16_t)var_6h + 1) {
            if (var_ch != 0) goto code_r0x0804973b;
            var_14h = 0x6366c436;
        }
        var_20h = var_20h + -1;
    } while( true );
}
