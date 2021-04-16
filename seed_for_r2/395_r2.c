
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049926)
// WARNING: Removing unreachable block (ram,0x080498d8)
// WARNING: Removing unreachable block (ram,0x08049919)
// WARNING: Removing unreachable block (ram,0x08049934)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_28h
// WARNING: [r2ghidra] Detected overlap for variable var_4dh
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_50h
// WARNING: [r2ghidra] Detected overlap for variable var_51h
// WARNING: [r2ghidra] Detected overlap for variable var_31h
// WARNING: [r2ghidra] Detected overlap for variable var_3ah
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_5ch
// WARNING: [r2ghidra] Detected overlap for variable var_5eh
// WARNING: [r2ghidra] Detected overlap for variable var_7dh
// WARNING: [r2ghidra] Detected overlap for variable var_8ah
// WARNING: [r2ghidra] Detected overlap for variable var_8bh
// WARNING: [r2ghidra] Detected overlap for variable var_8eh
// WARNING: [r2ghidra] Detected overlap for variable var_5fh
// WARNING: [r2ghidra] Detected overlap for variable var_70h

uint16_t sym.func_1(void)
{
    uint8_t uVar1;
    uint32_t uVar2;
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_88h;
    uint32_t var_84h;
    uint32_t var_7ch;
    uint32_t var_78h;
    int32_t var_71h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_58h;
    undefined4 var_4ch;
    int32_t var_46h;
    uint32_t var_40h;
    uint16_t var_3ah;
    int32_t var_38h;
    char var_31h;
    int32_t var_30h;
    int32_t var_2ch;
    uint16_t var_28h;
    uint16_t var_26h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint16_t var_16h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_16h = 0x9d62;
    var_20h = 0x162a9717;
    var_24h = 0x453f201f;
    var_26h = 0xffff;
    var_28h = 0x765;
    var_2ch = 1;
    var_30h = 0x5bb51090;
    var_31h = -1;
    var_38h = 0x7596e128;
    var_40h = 0x9e1a0e1c;
    stack0xffffffb8 = 0xf891d985;
    var_3ah = 0xfffb;
    while( true ) {
        if (0x2f < var_3ah) {
            var_26h = var_26h - 1;
            if (((var_40h & 0x5286) == (uint32_t)(uint16_t)(var_3ah | (var_3ah & 0xff) + 0xe7) * (uint32_t)var_26h) <
                0x162a9718 == true) {
                for (stack0xffffffb8 = 0; stack0xffffffb8 != -9; unique0x00000f40 = stack0xffffffb8 + -9) {
                    uVar1 = (uint8_t)var_20h & ((uint8_t)var_26h | 1);
                    var_30h = (int32_t)(char)uVar1;
                    var_20h = 0x863d3f51;
                    var_28h = var_28h & (int16_t)(char)uVar1;
                    if (var_24h <= (uint32_t)(int32_t)(int16_t)var_28h == true) {
                        uVar2 = 0x10;
                    } else {
                        uVar2 = 0;
                    }
                    var_31h = 0xe33710a0 < (uVar2 ^ 0xffffffce);
                    var_38h = var_38h | 1;
                    var_26h = var_26h & 0xfff7;
                    var_16h = var_16h | 0x5f46;
                }
            } else {
                var_2ch = 2;
            }
            sym.set_var(0, 0xffffffff, (int32_t)(int16_t)var_16h, 0x2ef5ead4, var_20h, var_24h, (uint32_t)var_26h, 
                        (int32_t)(int16_t)var_28h, 0x71dc8d5a, -3, -0x61, 0x515e, -9, var_2ch, var_30h, -0x494f2b78, 
                        (int32_t)var_31h, var_38h);
            return var_3ah;
        }
        if (var_3ah == 0) break;
        var_40h = 1;
        var_26h = var_26h ^ (uint16_t)var_24h;
        unique0x00000f30 = stack0xffffffb8 | 1;
        var_28h = var_28h | 0x5286 < (0x2ef5ead4 <
                                      ((int32_t)(char)((uint8_t)(0xffff <<
                                                                ((uint8_t)var_3ah &
                                                                (int32_t)((uint32_t)var_26h | unique0x00000f30) < 0x5ff7
                                                                == 0x162a9717)) & 0x17) - 0x3fU ^ 0x53ca6afe) ==
                                     0x162a9717);
        var_3ah = var_3ah + 1;
        var_24h = var_24h - 1;
    }
    sym.set_var(0, 0xfffffffc, (int32_t)(int16_t)(uint16_t)((int32_t)var_40h < 0), 1, 0x162a9717, var_24h, 
                (uint32_t)var_26h, (int32_t)(int16_t)var_28h, 0x71dc8d5a, -3, -0x61, 0x515e, -9, 1, 0x5bb51090, 
                -0x494f2b78, -1, 0x7596e128);
    return 1;
}
