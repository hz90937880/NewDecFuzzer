
// WARNING: Variable defined which should be unmapped: var_5h
// WARNING: Removing unreachable block (ram,0x080499f3)
// WARNING: Removing unreachable block (ram,0x0804992a)
// WARNING: Removing unreachable block (ram,0x08049934)
// WARNING: Removing unreachable block (ram,0x080499ca)
// WARNING: Removing unreachable block (ram,0x08049947)
// WARNING: Removing unreachable block (ram,0x080499d4)
// WARNING: Removing unreachable block (ram,0x08049a64)
// WARNING: Removing unreachable block (ram,0x080499d9)
// WARNING: Removing unreachable block (ram,0x08049a2c)
// WARNING: Removing unreachable block (ram,0x080499e0)
// WARNING: Removing unreachable block (ram,0x080499e6)
// WARNING: Removing unreachable block (ram,0x080499ec)
// WARNING: Removing unreachable block (ram,0x080499f8)
// WARNING: Removing unreachable block (ram,0x0804986b)
// WARNING: Removing unreachable block (ram,0x08049787)
// WARNING: Removing unreachable block (ram,0x08049731)
// WARNING: Removing unreachable block (ram,0x08049754)
// WARNING: Removing unreachable block (ram,0x080497ef)
// WARNING: Removing unreachable block (ram,0x08049b44)
// WARNING: Removing unreachable block (ram,0x08049b4b)
// WARNING: Removing unreachable block (ram,0x080498bc)
// WARNING: Removing unreachable block (ram,0x08049801)
// WARNING: Removing unreachable block (ram,0x080497b2)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_6h
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_4h
// WARNING: [r2ghidra] Detected overlap for variable var_31h
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_3dh
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_5dh

undefined4 sym.func_1(void)
{
    int32_t var_5ch;
    uint32_t var_58h;
    int32_t var_50h;
    uint32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_30h;
    uint32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ah;
    undefined4 var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    uint8_t var_6h;
    uint32_t var_5h;
    
    sym.__x86.get_pc_thunk.ax();
    var_6h = 1;
    var_ch = 0xffffffd1;
    for (var_5h._0_1_ = 0; 0x38 < (uint8_t)var_5h; var_5h._0_1_ = (uint8_t)var_5h + 8) {
        var_ch = var_ch ^ 0x9d776076;
    }
    for (stack0xffffffe4 = 0; stack0xffffffe4 != -8; unique0x00000f40 = stack0xffffffe4 + -1) {
        var_6h = var_6h | 0x3a;
    }
    sym.set_var(0xf06, (uint32_t)(uint8_t)((uint8_t)var_5h - 1), 0xba5e0b2f, (int32_t)(char)var_6h, 
                (uint32_t)(uint8_t)var_5h << 7, var_ch, 0x58fb5c4b, 2);
    return 0x58fb5c4b;
}
