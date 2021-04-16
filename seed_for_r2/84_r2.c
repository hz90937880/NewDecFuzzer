
// WARNING: Variable defined which should be unmapped: var_8h
// WARNING: Removing unreachable block (ram,0x08049a11)
// WARNING: Removing unreachable block (ram,0x08049a92)
// WARNING: Removing unreachable block (ram,0x08049aa2)
// WARNING: Removing unreachable block (ram,0x08049ab6)
// WARNING: Removing unreachable block (ram,0x08049abd)
// WARNING: Removing unreachable block (ram,0x08049ac2)
// WARNING: Removing unreachable block (ram,0x08049b13)
// WARNING: Removing unreachable block (ram,0x08049b23)
// WARNING: Removing unreachable block (ram,0x08049b1c)
// WARNING: Removing unreachable block (ram,0x08049b28)
// WARNING: Removing unreachable block (ram,0x08049a3c)
// WARNING: Removing unreachable block (ram,0x08049b53)
// WARNING: Removing unreachable block (ram,0x08049c05)
// WARNING: Removing unreachable block (ram,0x08049b5e)
// WARNING: Removing unreachable block (ram,0x08049bd0)
// WARNING: Removing unreachable block (ram,0x08049bbb)
// WARNING: Removing unreachable block (ram,0x08049bd5)
// WARNING: Removing unreachable block (ram,0x08049c10)
// WARNING: Removing unreachable block (ram,0x08049c1a)
// WARNING: Removing unreachable block (ram,0x08049c79)
// WARNING: Removing unreachable block (ram,0x08049c23)
// WARNING: Removing unreachable block (ram,0x08049c5f)
// WARNING: Removing unreachable block (ram,0x08049c63)
// WARNING: Removing unreachable block (ram,0x08049c7f)
// WARNING: Removing unreachable block (ram,0x08049922)
// WARNING: Removing unreachable block (ram,0x08049914)
// WARNING: Removing unreachable block (ram,0x0804992e)
// WARNING: Removing unreachable block (ram,0x08049934)
// WARNING: Removing unreachable block (ram,0x0804996c)
// WARNING: Removing unreachable block (ram,0x080499a0)
// WARNING: Removing unreachable block (ram,0x08049999)
// WARNING: Removing unreachable block (ram,0x080499a5)
// WARNING: Removing unreachable block (ram,0x080499ac)
// WARNING: Removing unreachable block (ram,0x080499b9)
// WARNING: Removing unreachable block (ram,0x080499b2)
// WARNING: Removing unreachable block (ram,0x080499be)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_18h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_12h
// WARNING: [r2ghidra] Detected overlap for variable var_1eh
// WARNING: [r2ghidra] Detected overlap for variable var_26h
// WARNING: [r2ghidra] Detected overlap for variable var_2eh
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_5eh
// WARNING: [r2ghidra] Detected overlap for variable var_60h
// WARNING: [r2ghidra] Detected overlap for variable var_61h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_83h
// WARNING: [r2ghidra] Detected overlap for variable var_8eh
// WARNING: [r2ghidra] Detected overlap for variable var_a5h
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_ch to Decompiler type: Unknown type identifier
// signed

int16_t sym.func_1(void)
{
    int32_t var_b0h;
    int32_t var_ach;
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_8ch;
    uint32_t var_88h;
    int32_t var_80h;
    int32_t var_78h;
    int32_t var_70h;
    int32_t var_68h;
    int32_t var_5ch;
    int32_t var_54h;
    int32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_40h;
    uint32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_34h;
    int16_t var_2eh;
    int32_t var_2ch;
    uint32_t var_24h;
    uint16_t var_1eh;
    int32_t var_1ch;
    undefined4 var_18h;
    uint16_t var_12h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = -7;
    var_12h = 0xfffa;
    var_1ch = 3;
    var_1eh = 0xb7b8;
    var_24h = 0xb03be465;
    var_2eh = 0x282c;
    var_38h = 1;
    var_ch = 0;
    do {
        if (var_ch < 10) {
            sym.set_var(var_ch, var_10h, (uint32_t)var_12h, 0x43260389, var_1ch, (uint32_t)var_1eh, var_24h, 0, 1, 
                        -0x2d19ee55, (int32_t)var_2eh, 8, 0x10f87bc);
            return var_2eh;
        }
        var_40h = 4;
        for (var_10h = 0; -0x18 < var_10h; var_10h = var_10h + -1) {
            if (var_10h == 0) {
                var_1eh = var_1eh - 1;
                var_40h = (~var_38h & 0xffff) % (uint32_t)var_1eh;
            } else {
                var_12h = var_12h ^ 1;
                var_38h = (uint32_t)(var_12h < 0x94);
            }
            if (((uint8_t)((uint8_t)var_40h & (uint8_t)var_1eh) >> 2 == 0) && (var_12h == 0)) {
                var_24h = 0;
            } else {
                var_24h = 1;
            }
            if (var_24h == 0) {
                var_2eh = (int16_t)var_10h;
                var_1ch = (int32_t)var_2eh ^ 0xae0b;
            } else {
                var_38h = 0x43260389;
                var_1ch = 1;
                if (var_24h != 0) break;
            }
        }
        var_ch = var_ch + 9;
    } while( true );
}
