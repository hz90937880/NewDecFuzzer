
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x08049977)
// WARNING: Removing unreachable block (ram,0x080499b3)
// WARNING: Removing unreachable block (ram,0x080499c0)
// WARNING: Removing unreachable block (ram,0x080499b9)
// WARNING: Removing unreachable block (ram,0x080499c5)
// WARNING: Removing unreachable block (ram,0x080499dd)
// WARNING: Removing unreachable block (ram,0x080499d6)
// WARNING: Removing unreachable block (ram,0x080499e2)
// WARNING: Removing unreachable block (ram,0x080497f9)
// WARNING: Removing unreachable block (ram,0x08049810)
// WARNING: Removing unreachable block (ram,0x08049802)
// WARNING: Removing unreachable block (ram,0x0804980c)
// WARNING: Removing unreachable block (ram,0x08049816)
// WARNING: Removing unreachable block (ram,0x080498a4)
// WARNING: Removing unreachable block (ram,0x080499a5)
// WARNING: Removing unreachable block (ram,0x080498b9)
// WARNING: Removing unreachable block (ram,0x080498d7)
// WARNING: Removing unreachable block (ram,0x080498c8)
// WARNING: Removing unreachable block (ram,0x080498dd)
// WARNING: Removing unreachable block (ram,0x0804990a)
// WARNING: Removing unreachable block (ram,0x080498e6)
// WARNING: Removing unreachable block (ram,0x08049903)
// WARNING: Removing unreachable block (ram,0x080498f3)
// WARNING: Removing unreachable block (ram,0x080498f9)
// WARNING: Removing unreachable block (ram,0x08049906)
// WARNING: Removing unreachable block (ram,0x08049910)
// WARNING: Removing unreachable block (ram,0x0804991a)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_24h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_4fh
// WARNING: [r2ghidra] Detected overlap for variable var_27h
// WARNING: [r2ghidra] Detected overlap for variable var_61h
// WARNING: [r2ghidra] Detected overlap for variable var_64h
// WARNING: [r2ghidra] Detected overlap for variable var_65h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint32_t uVar1;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    uint32_t var_4ch;
    int32_t var_48h;
    int32_t var_40h;
    int32_t var_38h;
    uint32_t var_34h;
    int32_t var_2ch;
    uint16_t var_26h;
    undefined4 var_24h;
    int32_t var_20h;
    uint16_t var_1ch;
    uint8_t var_19h;
    uint32_t var_18h;
    uint32_t var_14h;
    undefined4 var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0x4981ff29;
    var_10h = 0xfffffff9;
    var_14h = 0xd0336d06;
    var_18h = 0xf6251ca2;
    var_19h = 0;
    var_1ch = 0x6ff5;
    var_20h = 0x7222631;
    for (var_8h = 9; 5 < var_8h; var_8h = var_8h + -1) {
        uVar1 = (uint32_t)((int32_t)-(var_20h & 0xffffU) < 0xbbd0);
        var_ch = uVar1 + 1;
        if (var_ch < var_8h) {
            var_19h = var_19h - 1;
        } else {
            var_20h = var_20h | (uint32_t)((char)var_8h + -0x36 < 1);
            var_18h = var_18h & 0x406d;
            var_26h = 0;
            while ((var_26h < 2 && (var_18h == 0))) {
                var_26h = var_26h + 1;
            }
            var_19h = var_19h | 0xac;
            var_ch = 0;
            var_10h = 0;
            var_14h = 4;
            var_1ch = 0x98;
        }
        if (uVar1 != 0) break;
    }
    sym.set_var(var_8h, var_ch, var_10h, var_14h, -0x5f6688ca, var_18h, (uint32_t)var_19h, -0x6cad, (uint32_t)var_1ch);
    return 0xffff9353;
}
