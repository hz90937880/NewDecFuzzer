
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x08049b65)
// WARNING: Removing unreachable block (ram,0x08049c82)
// WARNING: Removing unreachable block (ram,0x08049b70)
// WARNING: Removing unreachable block (ram,0x08049c8d)
// WARNING: Removing unreachable block (ram,0x08049830)
// WARNING: Removing unreachable block (ram,0x08049d16)
// WARNING: Removing unreachable block (ram,0x08049a0a)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_20h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_36h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2bh
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_33h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_37h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_71h
// WARNING: [r2ghidra] Detected overlap for variable var_92h
// WARNING: [r2ghidra] Detected overlap for variable var_93h
// WARNING: [r2ghidra] Detected overlap for variable var_8fh
// WARNING: [r2ghidra] Detected overlap for variable var_8ch

uint16_t sym.func_1(void)
{
    uint32_t var_bch;
    uint32_t var_b8h;
    uint32_t var_b4h;
    int32_t var_b0h;
    int32_t var_a0h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_8eh;
    uint32_t var_88h;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    uint32_t var_64h;
    uint32_t var_5ch;
    uint32_t var_58h;
    int32_t var_54h;
    uint32_t var_4ch;
    uint32_t var_44h;
    uint32_t var_3dh;
    int16_t var_36h;
    uint32_t var_30h;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    bool var_1ah;
    bool var_19h;
    uint32_t var_18h;
    uint8_t var_11h;
    int16_t var_10h;
    uint32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_eh._0_2_ = 0xa4a1;
    var_10h = -0x638f;
    var_11h = 1;
    var_18h = 0xfffffff7;
    var_19h = true;
    var_1ah = false;
    var_20h = 0x4983ca30;
    var_24h = 0x7d18c36e;
    for (var_36h = 0; var_36h < 0x13; var_36h = var_36h + 1) {
        var_11h = var_11h + 1;
        var_18h = SEXT24(var_36h);
        var_19h = 0x1e9a < var_18h;
        var_1ah = (char)((int16_t)(var_19h * 0x10097) >> 0xe) < 0x4e630972;
        var_20h = var_20h | (int16_t)(uint16_t)((int32_t)(uint32_t)!var_1ah < -0xb) < var_10h;
        if (var_1ah) {
            for (var_18h = 3; 0x38 < var_18h; var_18h = var_18h + 5) {
                for (var_10h = -0x10; var_10h != -10; var_10h = var_10h + 2) {
                }
            }
            if (((var_11h != 0) && (var_20h = SEXT14((char)var_10h), var_20h != 0)) && (var_18h != 0)) break;
            var_20h = 0xb;
            while (((int32_t)var_20h < -0xe && (var_24h = var_24h + 1, var_18h != 0))) {
                var_20h = var_20h - 1;
            }
        } else {
            var_eh._0_2_ = 0;
        }
    }
    sym.set_var((uint32_t)(uint16_t)var_eh, (int32_t)var_10h, (uint32_t)var_11h, var_18h, (uint32_t)var_19h, 
                (int32_t)var_1ah, var_20h, 0x30, var_24h, 0x382, var_24h, 1, 2, 0x29d10, 0x1b1dc044, 0xfffe);
    return (uint16_t)var_eh;
}
