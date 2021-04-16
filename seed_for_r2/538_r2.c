
// WARNING: Variable defined which should be unmapped: var_6h
// WARNING: Removing unreachable block (ram,0x08049874)
// WARNING: Removing unreachable block (ram,0x08049890)
// WARNING: Removing unreachable block (ram,0x0804974b)
// WARNING: Removing unreachable block (ram,0x080498de)
// WARNING: Removing unreachable block (ram,0x080498fb)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_45h
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_4h

uint32_t sym.func_1(void)
{
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_4ch;
    uint32_t var_44h;
    uint32_t var_40h;
    uint32_t var_3ch;
    uint32_t var_34h;
    int32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    undefined4 var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    uint8_t var_15h;
    int32_t var_14h;
    int16_t var_eh;
    uint32_t var_ch;
    uint32_t var_6h;
    
    sym.__x86.get_pc_thunk.ax();
    var_eh = 1;
    var_14h = 3;
    var_15h = 0x6c;
    var_1ch = 0;
    for (var_2ch = 0x18; var_2ch < 0x3a; var_2ch = var_2ch + 1) {
        for (var_eh = 0; var_eh < -3; var_eh = var_eh + -9) {
            var_14h = 0;
            var_15h = 0xfd;
            var_1ch = 1;
        }
    }
    sym.set_var(1, 0xfffffff7, 0xfffffffd, (int32_t)var_eh, var_14h, (int32_t)(char)var_15h, var_1ch, (uint32_t)var_15h
                , 0x7fbc07b3, -9, (uint32_t)((var_eh < (int16_t)(uint16_t)((var_2ch != 0) == 0xfffffff7)) < var_15h));
    return var_2ch;
}
