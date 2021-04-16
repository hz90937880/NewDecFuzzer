
// WARNING: Variable defined which should be unmapped: var_9h
// WARNING: Removing unreachable block (ram,0x080498a5)
// WARNING: Removing unreachable block (ram,0x08049795)
// WARNING: Removing unreachable block (ram,0x08049753)
// WARNING: Removing unreachable block (ram,0x08049759)
// WARNING: Removing unreachable block (ram,0x0804980f)
// WARNING: Removing unreachable block (ram,0x080499e8)
// WARNING: Removing unreachable block (ram,0x080497f6)
// WARNING: Removing unreachable block (ram,0x080498cf)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_28h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_28h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_8h

undefined4 sym.func_1(void)
{
    bool bVar1;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    uint32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    uint32_t var_54h;
    uint32_t var_50h;
    uint32_t var_48h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_34h;
    int32_t var_30h;
    uint32_t var_2ah;
    undefined4 var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    uint16_t var_14h;
    uint8_t var_11h;
    uint32_t var_10h;
    uint32_t var_9h;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0;
    var_11h = 6;
    var_14h = 0;
    var_1ch = 4;
    do {
        bVar1 = false;
        while (bVar1) {
            var_10h = var_10h + 1;
            var_11h = bVar1 <= (0xfffffff7U <
                               (uint32_t)
                               ((int32_t)(char)var_10h + (int32_t)(char)(0 / (int64_t)(int32_t)(int16_t)var_10h))) ==
                      0xfffffffa;
            if (bVar1) break;
            bVar1 = true;
        }
        var_14h = var_14h + 1;
        var_9h._0_1_ = '\0';
        while( true ) {
            if ((char)var_9h != '\x19') {
                sym.set_var(0xfffe, (int32_t)(char)var_9h, var_10h, (uint32_t)var_11h, (uint32_t)var_14h, 1, var_1ch, 
                            0x5f91b207);
                return 0xd2c8cc2a;
            }
            if (var_14h != 0) break;
            var_1ch = -0x2d6a76e1;
            var_9h._0_1_ = '\x1a';
        }
    } while( true );
}
