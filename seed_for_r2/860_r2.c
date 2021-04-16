
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x080497eb)
// WARNING: Removing unreachable block (ram,0x080497a9)
// WARNING: Removing unreachable block (ram,0x08049835)
// WARNING: Removing unreachable block (ram,0x080498b3)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_13h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_27h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_ch

uint16_t sym.func_1(void)
{
    uint32_t var_64h;
    uint32_t var_60h;
    int32_t var_54h;
    uint32_t var_50h;
    int32_t var_4ch;
    uint32_t var_44h;
    uint32_t var_40h;
    uint32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    uint32_t var_2ch;
    uint8_t var_27h;
    uint16_t var_26h;
    int32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint16_t var_16h;
    uint8_t var_13h;
    uint8_t var_12h;
    char var_11h;
    uint16_t var_10h;
    uint32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 1;
    var_11h = -4;
    var_12h = 0;
    var_13h = 1;
    var_16h = 0x8a03;
    var_1ch = 0x4a8f9b1;
    var_24h = 0x5eb25383;
    var_26h = 0x6355;
    for (var_eh._0_2_ = 0; 0x35 < (uint16_t)var_eh; var_eh._0_2_ = (uint16_t)var_eh + 1) {
        var_11h = '\x01';
        for (var_27h = 0xeb; var_27h < 0x3d; var_27h = var_27h + 4) {
            var_2ch = 2;
            while (var_2ch == 0x2e) {
                var_12h = var_27h;
                var_13h = var_13h | (true < ((int32_t)(uint32_t)var_27h < -0x3a)) % 0x3a;
                var_16h = 0xc895;
                var_10h = 0;
                var_1ch = 0;
                var_24h = ZEXT14((uint16_t)var_eh == 0x2e);
                var_2ch = 0x2f;
            }
        }
        for (var_26h = 0; 3 < var_26h; var_26h = var_26h + 1) {
        }
    }
    sym.set_var(0xab1d6a56, (uint32_t)(uint16_t)var_eh, (uint32_t)var_10h, (int32_t)var_11h, 0xffffffc6, 
                (uint32_t)var_12h, (uint32_t)var_13h, (uint32_t)var_16h, var_1ch, 1, var_24h, (uint32_t)var_26h);
    return var_26h;
}
