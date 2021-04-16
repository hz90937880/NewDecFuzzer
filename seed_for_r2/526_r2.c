
// WARNING: Variable defined which should be unmapped: var_dh
// WARNING: Removing unreachable block (ram,0x080499e2)
// WARNING: Removing unreachable block (ram,0x080499e8)
// WARNING: Removing unreachable block (ram,0x080499bd)
// WARNING: Removing unreachable block (ram,0x080499ef)
// WARNING: Removing unreachable block (ram,0x080499f4)
// WARNING: Removing unreachable block (ram,0x08049a13)
// WARNING: Removing unreachable block (ram,0x08049a20)
// WARNING: Removing unreachable block (ram,0x08049a97)
// WARNING: Removing unreachable block (ram,0x08049938)
// WARNING: Removing unreachable block (ram,0x08049963)
// WARNING: Removing unreachable block (ram,0x08049882)
// WARNING: Removing unreachable block (ram,0x08049915)
// WARNING: Removing unreachable block (ram,0x08049be3)
// WARNING: Removing unreachable block (ram,0x08049bff)
// WARNING: Removing unreachable block (ram,0x08049bec)
// WARNING: Removing unreachable block (ram,0x0804996a)
// WARNING: Removing unreachable block (ram,0x0804996f)
// WARNING: Removing unreachable block (ram,0x08049b3f)
// WARNING: Removing unreachable block (ram,0x08049b4d)
// WARNING: Removing unreachable block (ram,0x08049b5b)
// WARNING: Removing unreachable block (ram,0x08049b54)
// WARNING: Removing unreachable block (ram,0x08049b60)
// WARNING: Removing unreachable block (ram,0x08049acf)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_50h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_62h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_27h
// WARNING: [r2ghidra] Detected overlap for variable var_28h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_3eh
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_63h

undefined4 sym.func_1(void)
{
    int32_t var_98h;
    uint32_t var_94h;
    int32_t var_90h;
    uint32_t var_80h;
    uint32_t var_7ch;
    int32_t var_78h;
    uint32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    uint32_t var_60h;
    uint32_t var_5ch;
    uint32_t var_54h;
    undefined4 var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_3ch;
    uint32_t var_34h;
    uint32_t var_30h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint16_t var_1ch;
    uint16_t var_1ah;
    uint32_t var_18h;
    int32_t var_14h;
    char var_eh;
    uint32_t var_dh;
    
    sym.__x86.get_pc_thunk.ax();
    var_eh = '\x06';
    var_14h = 0;
    var_18h = 0x56d20a2e;
    var_1ah = 0xffff;
    var_1ch = 0xffff;
    var_20h = 0xffffffff;
    for (var_dh._0_1_ = 0xed; 0x1a < (uint8_t)var_dh; var_dh._0_1_ = (uint8_t)var_dh + 5) {
        var_eh = -0x76;
        var_14h = -0x10;
        var_18h = 0x8a >> ((uint8_t)var_dh & 0x1f) | 9;
        var_1ah = 0;
        var_1ch = var_1ch & 0xd3f7;
        var_20h = var_20h - 1;
    }
    var_dh._0_1_ = (uint8_t)var_dh ^ 1;
    sym.set_var(0x88d0d3f7, (uint32_t)(uint8_t)var_dh, (int32_t)var_eh, var_14h, var_18h, (uint32_t)var_1ah, 
                (uint32_t)var_1ch, 1, var_20h, 
                (uint32_t)
                (SBORROW4((uint32_t)(var_1ah != 0), (uint32_t)(uint8_t)var_dh * 2) ==
                (int32_t)((uint32_t)(var_1ah != 0) + (uint32_t)(uint8_t)var_dh * -2) < 0), 
                (int32_t)(int16_t)((uint16_t)~(uint16_t)((uint32_t)((char)var_18h + 0x30) >> 0x10) >> 0xf), -0x2c, 1, 1
                , 0xd4);
    return 5;
}
