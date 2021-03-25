
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049831)
// WARNING: Removing unreachable block (ram,0x0804993f)
// WARNING: Removing unreachable block (ram,0x08049845)
// WARNING: Removing unreachable block (ram,0x0804992a)
// WARNING: Removing unreachable block (ram,0x0804985d)
// WARNING: Removing unreachable block (ram,0x08049875)
// WARNING: Removing unreachable block (ram,0x080498f7)
// WARNING: Removing unreachable block (ram,0x08049904)
// WARNING: Removing unreachable block (ram,0x080498fd)
// WARNING: Removing unreachable block (ram,0x08049909)
// WARNING: Removing unreachable block (ram,0x0804994b)
// WARNING: Removing unreachable block (ram,0x080499fb)
// WARNING: Removing unreachable block (ram,0x08049987)
// WARNING: Removing unreachable block (ram,0x080499a3)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_40h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_1bh
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_25h
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_57h
// WARNING: [r2ghidra] Detected overlap for variable var_5dh
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Detected overlap for variable var_7ah

undefined4 sym.func_1(void)
{
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_68h;
    uint32_t var_64h;
    int32_t var_5ch;
    int32_t var_54h;
    int32_t var_4ch;
    uint32_t var_48h;
    undefined4 var_40h;
    uint32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    int32_t var_2ch;
    int32_t var_20h;
    uint8_t var_19h;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_19h = 0;
    var_30h = 0;
    var_10h = 0x10;
    while (var_10h == 0xf) {
        for (var_18h = 0xffffffe9; var_18h != 0x19; var_18h = var_18h + 8) {
            var_19h = var_19h | (uint8_t)var_30h;
            var_30h = 1;
        }
        var_10h = 0xe;
    }
    sym.set_var(0, 3, 0, (int32_t)(char)var_19h, -0x629463d3, -0x7b1a56bb, -0x35937b70, 0, 6, 0xe75fcaa, 0, 
                (int32_t)(int16_t)(uint16_t)((int32_t)(uint32_t)(uint8_t)(3 / (uint8_t)var_30h) < -0x35937b6f), 0xbe, 
                0x3a677434);
    return 0x7d50;
}
