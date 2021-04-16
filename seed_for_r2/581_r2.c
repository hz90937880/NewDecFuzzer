
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049a1d)
// WARNING: Removing unreachable block (ram,0x08049b10)
// WARNING: Removing unreachable block (ram,0x08049a75)
// WARNING: Removing unreachable block (ram,0x08049b00)
// WARNING: Removing unreachable block (ram,0x08049a87)
// WARNING: Removing unreachable block (ram,0x08049a9b)
// WARNING: Removing unreachable block (ram,0x08049aab)
// WARNING: Removing unreachable block (ram,0x08049aa4)
// WARNING: Removing unreachable block (ram,0x08049ab0)
// WARNING: Removing unreachable block (ram,0x08049b06)
// WARNING: Removing unreachable block (ram,0x08049893)
// WARNING: Removing unreachable block (ram,0x08049945)
// WARNING: Removing unreachable block (ram,0x0804995d)
// WARNING: Removing unreachable block (ram,0x08049962)
// WARNING: Removing unreachable block (ram,0x080498a5)
// WARNING: Removing unreachable block (ram,0x080499f7)
// WARNING: Removing unreachable block (ram,0x08049a10)
// WARNING: Removing unreachable block (ram,0x08049862)
// WARNING: Removing unreachable block (ram,0x080498aa)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_20h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_27h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2dh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_2eh to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_a0h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_43h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_27h
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_4ch
// WARNING: [r2ghidra] Detected overlap for variable var_59h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_74h
// WARNING: [r2ghidra] Detected overlap for variable var_75h
// WARNING: [r2ghidra] Detected overlap for variable var_8eh
// WARNING: [r2ghidra] Detected overlap for variable var_90h
// WARNING: [r2ghidra] Detected overlap for variable var_81h
// WARNING: [r2ghidra] Detected overlap for variable var_82h

uint16_t sym.func_1(void)
{
    uint32_t var_a4h;
    undefined4 var_a0h;
    uint32_t var_94h;
    uint32_t var_8ch;
    int32_t var_88h;
    int32_t var_80h;
    int32_t var_7ch;
    uint32_t var_70h;
    int32_t var_68h;
    int32_t var_60h;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    uint32_t var_48h;
    uint32_t var_42h;
    uint32_t var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    char var_2eh;
    int32_t var_2ch;
    char var_27h;
    uint16_t var_26h;
    uint8_t var_21h;
    undefined4 var_20h;
    int32_t var_1ch;
    uint8_t var_15h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0xdb3ae355;
    var_15h = 0xd7;
    var_21h = 199;
    var_26h = 0xfffb;
    var_27h = '\x06';
    var_2ch = -4;
    var_14h = 0;
    while (var_14h == 0xc) {
        if (var_10h == 0) {
            for (var_2eh = '\0'; -0x1e < var_2eh; var_2eh = var_2eh + -7) {
                var_21h = 0x4f;
            }
            var_10h = 0xffff0000;
            var_26h = 0xe0;
        } else {
            var_15h = var_15h - 1;
        }
        var_2ch = var_2ch + 1;
        for (var_27h = '\0'; '\n' < var_27h; var_27h = var_27h + '\x06') {
            var_10h = 1;
        }
        var_14h = 0xd;
    }
    sym.set_var(var_10h, var_14h, 0xffffa04f, (uint32_t)var_15h, 0x6b, 0, -0x147e7071, (uint32_t)var_21h, -0x264a, 
                (uint32_t)var_26h, (int32_t)var_27h, 0x3f3f2c75, var_2ch, 6);
    return var_26h;
}
