
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049a03)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_19h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ah to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_1bh
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_27h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_38h
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_3ch
// WARNING: [r2ghidra] Detected overlap for variable var_54h
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_76h
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

int32_t sym.func_1(void)
{
    char cVar1;
    int32_t var_80h;
    uint32_t var_74h;
    int32_t var_70h;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_5ch;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_3dh;
    int16_t var_38h;
    uint16_t var_36h;
    uint32_t var_34h;
    uint32_t var_30h;
    int16_t var_2ah;
    uint8_t var_27h;
    uint8_t var_26h;
    uint8_t var_25h;
    int32_t var_24h;
    uint16_t var_1eh;
    uint8_t var_1bh;
    char var_1ah;
    uint8_t var_19h;
    uint32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0x2c03342e;
    var_14h = 1;
    var_19h = 0xff;
    var_1ah = -1;
    var_1bh = 0x39;
    var_1eh = 0xbb0c;
    var_25h = 0xc9;
    var_26h = 0xff;
    var_27h = 0x31;
    var_30h = 0xfffffffd;
    for (var_18h = 2; 8 < (int32_t)var_18h; var_18h = var_18h + 1) {
        var_36h._0_1_ = -0x7f;
        cVar1 = (char)var_36h;
        var_36h._0_1_ = -0x7f;
        if (0xffffffffU % var_18h == 0) {
            var_36h._0_1_ = cVar1;
            if (var_19h == 0) {
                var_36h._0_1_ = '\0';
                while ((char)var_36h == '\x02') {
                    var_1bh = var_1bh - 1;
                    var_19h = (int32_t)(uint32_t)var_1bh <
                              (int32_t)((int64_t)(uint64_t)var_19h / (int64_t)(int32_t)-var_18h);
                    for (var_38h = 0x17; var_38h != 0x15; var_38h = var_38h + -1) {
                        var_1eh = 0xfffd;
                    }
                    var_36h._0_1_ = '\v';
                }
            }
            for (var_1ah = '\x1b'; var_1ah < '\n'; var_1ah = var_1ah + -1) {
            }
        } else {
            var_2ah = -0xf;
            while (var_2ah == 10) {
                var_19h = 0;
                var_30h = 0xa121;
                var_2ah = 0xd;
            }
        }
        var_25h = var_25h ^ -(char)var_36h;
        for (var_36h = 0; 8 < var_36h; var_36h = var_36h + 7) {
            var_26h = var_19h;
            var_27h = var_19h;
            if ((-(((int32_t)(uint32_t)var_1bh >> (var_19h & 0x1f) & 0xffffU) / (uint32_t)var_1eh) & 0xff) != 0) {
                var_10h = -1;
            }
        }
        var_14h = ~var_14h;
    }
    sym.set_var(var_10h, var_14h, var_18h, (uint32_t)var_19h, (int32_t)var_1ah, (uint32_t)var_1bh, (uint32_t)var_1eh, 
                var_30h, (uint32_t)var_25h, (uint32_t)var_26h, (int32_t)(char)(var_27h ^ 0xf6));
    return (int32_t)(char)(var_27h ^ 0xf6);
}
