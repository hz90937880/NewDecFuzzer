
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049ae4)
// WARNING: Removing unreachable block (ram,0x08049bfe)
// WARNING: Removing unreachable block (ram,0x08049a22)
// WARNING: Removing unreachable block (ram,0x08049b20)
// WARNING: Removing unreachable block (ram,0x08049a2c)
// WARNING: Removing unreachable block (ram,0x08049a3f)
// WARNING: Removing unreachable block (ram,0x08049a38)
// WARNING: Removing unreachable block (ram,0x08049a44)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_34h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_68h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_35h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_20h
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_27h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_2fh
// WARNING: [r2ghidra] Detected overlap for variable var_48h
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_59h
// WARNING: [r2ghidra] Detected overlap for variable var_5ch
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_75h
// WARNING: [r2ghidra] Detected overlap for variable var_78h
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_44h
// WARNING: [r2ghidra] Detected overlap for variable var_79h
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_83h
// WARNING: [r2ghidra] Detected overlap for variable var_86h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

undefined2 sym.func_1(void)
{
    uint16_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    int32_t var_ach;
    uint32_t var_a8h;
    uint32_t var_a4h;
    uint32_t var_a0h;
    int32_t var_90h;
    int32_t var_8ch;
    uint32_t var_80h;
    int32_t var_74h;
    int32_t var_70h;
    undefined4 var_68h;
    int32_t var_64h;
    int32_t var_60h;
    uint32_t var_58h;
    int32_t var_54h;
    uint32_t var_50h;
    uint32_t var_45h;
    uint32_t var_40h;
    uint32_t var_3ch;
    char var_35h;
    uint32_t var_34h;
    uint8_t var_2fh;
    uint16_t var_2eh;
    int32_t var_2ch;
    uint8_t var_27h;
    uint16_t var_26h;
    uint32_t var_24h;
    uint16_t var_20h;
    uint16_t var_1eh;
    uint32_t var_1ch;
    uint16_t var_16h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_16h = 0x39e3;
    var_1ch = 0x1791e6e4;
    var_1eh = 0x79c9;
    var_20h = 0xc2a9;
    var_24h = 0xad4a2b52;
    var_26h = 0;
    var_27h = 8;
    var_2ch = -0x153c4d9d;
    var_2eh = 0x85bf;
    var_2fh = 0xec;
    var_34h = 0x9796a0b5;
    for (var_14h = 0; var_14h < -0x19; var_14h = var_14h + -1) {
        uVar1 = var_16h + 1;
        if (var_16h != 0) {
            var_1ch = (uint32_t)((int32_t)var_34h < var_14h);
            var_1eh = 0;
        }
        var_20h = 1;
        var_34h = (uint32_t)(var_1ch != 0) - (uint32_t)uVar1;
        if (var_34h == 0) {
            for (var_16h = 0; 0xf < var_16h; var_16h = var_16h + 1) {
                var_34h = 1;
                var_20h = var_16h;
                var_24h = 0;
            }
            var_27h = var_27h - 1;
            stack0xffffffb8 = -0x5a4c9d8a;
            for (var_35h = '\x0e'; '\b' < var_35h; var_35h = var_35h + -7) {
                var_24h = (uint32_t)var_26h;
                if (var_24h == 0) {
                    var_2ch = 2;
                } else {
                    var_2ch = 0;
                }
                var_2eh = var_2eh + 1;
                var_34h = var_34h ^ (int32_t)var_35h - 1U;
                stack0xffffffb8 = 2;
                if (var_20h != 0) break;
            }
            var_2fh = 2;
            if ((uint32_t)var_2eh == var_2ch) {
                uVar2 = 0x138;
            } else {
                uVar2 = 0x130;
            }
            if ((var_14h == 0) < uVar2) {
                uVar3 = 3;
            } else {
                uVar3 = 2;
            }
            var_2ch = ZEXT14(uVar3 < 0xfa);
            if (stack0xffffffb8 != 0) break;
            var_2eh = 0xffff;
            var_24h = 3;
        } else {
            for (var_1ch = 0x14; var_16h = uVar1, var_1ch < 0x3c; var_1ch = var_1ch + 4) {
                var_26h = var_26h - 1;
            }
        }
        var_16h = var_16h - 1;
    }
    sym.set_var(-10, var_14h, (uint32_t)var_16h, var_1ch, (uint32_t)var_1eh, (uint32_t)var_20h, var_24h, 
                (uint32_t)var_26h, (uint32_t)var_27h, var_2ch, 0, (uint32_t)var_2eh, (uint32_t)var_2fh, 0x525c, 0x60);
    return 0x4a54;
}
