
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049a78)
// WARNING: Removing unreachable block (ram,0x080498c6)
// WARNING: Removing unreachable block (ram,0x0804985e)
// WARNING: Removing unreachable block (ram,0x080497cc)
// WARNING: Removing unreachable block (ram,0x080498ae)
// WARNING: Removing unreachable block (ram,0x080497aa)
// WARNING: Removing unreachable block (ram,0x080498d7)
// WARNING: Removing unreachable block (ram,0x080497c2)
// WARNING: Removing unreachable block (ram,0x080498da)
// WARNING: Removing unreachable block (ram,0x080497f7)
// WARNING: Removing unreachable block (ram,0x08049a69)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_44h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_1fh
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_2bh
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_67h
// WARNING: [r2ghidra] Detected overlap for variable var_6ch
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

uint32_t sym.func_1(void)
{
    int32_t var_90h;
    uint32_t var_8ch;
    int32_t var_84h;
    uint32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    uint32_t var_6eh;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    uint32_t var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    int32_t var_48h;
    uint32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    uint16_t var_2ah;
    int32_t var_28h;
    uint32_t var_24h;
    uint8_t var_1fh;
    uint8_t var_1eh;
    int32_t var_1ch;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_1eh = 0xab;
    var_1fh = 0x28;
    var_2ah = 0xbe38;
    var_3ch = -1;
    var_50h = 0x70bfa85f;
    var_14h = 0xfffffff4;
    var_10h = 0xa8c6a53d;
    var_24h = 0xfffffffa;
    var_44h = 0;
    while( true ) {
        if ((int32_t)var_44h < 8) {
            sym.set_var(var_10h, (uint32_t)
                                 ((uint64_t)((uint32_t)var_2ah <= (var_44h & 1)) %
                                 (uint64_t)(int64_t)(int32_t)(char)var_2ah), 0x60bc, -2, 0xffffff90, (uint32_t)var_1eh, 
                        (uint32_t)var_1fh, var_24h, 0, (uint32_t)var_2ah, 100, 1, -0x6b6e4d61, -6, var_3ch);
            return 0xffffffff;
        }
        var_2ah = 0x32;
        if ((int32_t)var_10h < 0x32) {
            for (var_1fh = 0xea; 0x21 < var_1fh; var_1fh = var_1fh + 1) {
                for (var_14h = 0; 3 < (int32_t)var_14h; var_14h = var_14h + 3) {
                }
            }
        } else {
            var_24h = 0;
            var_10h = var_1fh == 1 ^ 8;
        }
        var_50h = var_50h | 1;
        if (var_50h == 0) break;
        var_1eh = 0xff;
        var_3ch = var_3ch | (uint32_t)(1 < var_1fh);
        var_24h = (uint32_t)((var_3ch ^ 100U) % 0x4a484df5 < 9);
        var_14h = 0xff;
        var_44h = var_44h + 1;
    }
    sym.set_var(var_10h, var_14h, 0x60bc, -2, 0xffffff90, (uint32_t)var_1eh, (uint32_t)var_1fh, var_24h, 0, 0x32, 100, 1
                , -0x6b6e4d61, -6, var_3ch);
    return var_10h;
}
