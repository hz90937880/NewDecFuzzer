
// WARNING: Removing unreachable block (ram,0x080497c6)
// WARNING: Removing unreachable block (ram,0x080497e2)
// WARNING: Removing unreachable block (ram,0x08049800)
// WARNING: Removing unreachable block (ram,0x08049845)
// WARNING: Removing unreachable block (ram,0x08049858)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_38h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1dh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_6h
// WARNING: [r2ghidra] Detected overlap for variable var_8h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_1dh
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

uint32_t sym.func_1(void)
{
    int32_t iVar1;
    int32_t var_54h;
    int32_t var_50h;
    uint32_t var_4ch;
    int32_t var_48h;
    uint32_t var_40h;
    undefined4 var_38h;
    int32_t var_32h;
    int32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_24h;
    uint8_t var_1dh;
    uint32_t var_1ch;
    uint32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    uint32_t var_ch;
    int16_t var_6h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_6h = -0x961;
    var_ch = 0x8f9611ca;
    var_10h = 0xa73bc0e3;
    var_14h = 0;
    var_18h = 0x15b38d6a;
    var_1ch = 0x77138bf9;
    var_4h = 0;
    do {
        if (-0xd < (int32_t)var_4h) {
            for (var_10h = 0; (int32_t)var_10h < 2; var_10h = var_10h + 7) {
                var_14h = var_14h + 1;
            }
            sym.set_var(var_4h, (int32_t)var_6h, 1, var_ch, 0xfffffffb, 0x6275f98a, var_10h, var_14h);
            return 0xba2d3c5e;
        }
        var_24h = 0xd3624b67;
        var_6h = 1;
        for (var_1dh = 0xe3; (char)var_1dh < '\0'; var_1dh = var_1dh + 1) {
            if (var_1dh != 0) {
                var_24h = var_24h & 1;
            }
            var_ch = (uint32_t)
                     (var_4h <=
                     (uint32_t)((int32_t)(int16_t)var_24h % (int32_t)(int16_t)var_4h - (int32_t)(char)var_1dh)) <<
                     (var_1dh & 0x1f);
        }
        if (var_ch == 8) {
            if (0x6275f98a < (var_4h != 1)) {
                sym.set_var(var_4h, 1, 1, 9, 0xfffffffb, 0x6275f98a, var_10h, 0);
                return var_18h;
            }
            var_1ch = var_1ch & 1;
            var_ch = (uint32_t)((int32_t)(var_18h | 0xe96c9f93) < (int32_t)(uint32_t)(var_1ch != 0xc)) * -5;
            var_10h = (int16_t)(uint16_t)((var_24h & 1 < (int32_t)(var_ch & 0xe96c9f93)) != 0) * -5;
        } else {
            var_2ch = -1;
            stack0xffffffcc = 0xf2fe87a7;
            for (var_28h = 0x15; -0x1e < (int32_t)var_28h; var_28h = var_28h - 1) {
                unique0x00000f30 = ~var_2ch;
                var_2ch = unique0x00000f30;
            }
            var_18h = var_18h & var_4h & 0xffff;
            iVar1 = ((int32_t)((uint64_t)var_18h % (uint64_t)(int64_t)(int32_t)(var_10h & 0xffff)) - stack0xffffffcc) +
                    -1;
            var_ch = (uint32_t)(2 < (int32_t)(iVar1 + (uint32_t)(0x9e < (uint8_t)iVar1) * 0x61 & 0xff | 0xfffffffb));
        }
        var_4h = var_4h - 1;
    } while( true );
}
