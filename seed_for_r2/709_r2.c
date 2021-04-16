
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x080496e6)
// WARNING: Removing unreachable block (ram,0x08049711)
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_10h
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_21h

uint32_t sym.func_1(void)
{
    int8_t iVar1;
    uint32_t arg_8h;
    char cVar2;
    int32_t var_20h;
    int32_t var_1ch;
    uint32_t var_15h;
    uint16_t var_10h;
    uint16_t var_eh;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_ch = 0xffffffff;
    var_eh = 0x31e1;
    var_10h = 0xd11d;
    var_8h = 0;
    while (var_8h == 0xffffffe2) {
        var_10h = var_10h & 0x49;
        var_ch = var_8h;
        var_eh = 0xbacd;
        var_8h = 0xffffffd9;
    }
    var_8h = var_8h & var_ch;
    if (((char)var_8h == '\0') && (var_8h == 0)) {
        cVar2 = '\0';
    } else {
        cVar2 = '\x01';
    }
    if ((var_ch == 0) || (var_ch == 0)) {
        iVar1 = 0;
    } else {
        iVar1 = 1;
    }
    cVar2 = cVar2 - ((-1 << iVar1 & 0xb6f8U) == (int32_t)(int16_t)var_10h);
    arg_8h = SEXT14((char)(cVar2 + ((char)((int16_t)(cVar2 * 0x1009d) >> 0xe) - (cVar2 >> 7)) * -0x69));
    sym.set_var(arg_8h, var_ch, (uint32_t)var_eh, var_8h & 0xff);
    return arg_8h;
}
