
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x080498bb)
// WARNING: Removing unreachable block (ram,0x08049984)
// WARNING: Removing unreachable block (ram,0x08049993)
// WARNING: Removing unreachable block (ram,0x0804998c)
// WARNING: Removing unreachable block (ram,0x08049998)
// WARNING: Removing unreachable block (ram,0x080499a6)
// WARNING: Removing unreachable block (ram,0x080499ac)
// WARNING: Removing unreachable block (ram,0x080499b3)
// WARNING: Removing unreachable block (ram,0x080499b8)
// WARNING: Removing unreachable block (ram,0x080499dc)
// WARNING: Removing unreachable block (ram,0x080499e9)
// WARNING: Removing unreachable block (ram,0x080499e2)
// WARNING: Removing unreachable block (ram,0x080499ee)
// WARNING: Removing unreachable block (ram,0x08049a06)
// WARNING: Removing unreachable block (ram,0x08049a2c)
// WARNING: Removing unreachable block (ram,0x08049a3a)
// WARNING: Removing unreachable block (ram,0x08049a6c)
// WARNING: Removing unreachable block (ram,0x08049a72)
// WARNING: Removing unreachable block (ram,0x08049a79)
// WARNING: Removing unreachable block (ram,0x08049a7e)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_20h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_88h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_eh
// WARNING: [r2ghidra] Detected overlap for variable var_fh
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_35h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_38h
// WARNING: [r2ghidra] Detected overlap for variable var_65h
// WARNING: [r2ghidra] Detected overlap for variable var_71h
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_58h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    undefined4 uVar1;
    int32_t var_8ch;
    undefined4 var_88h;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    uint32_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    uint32_t var_64h;
    uint32_t var_60h;
    int32_t var_5ah;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_34h;
    uint32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    uint8_t var_21h;
    int32_t var_20h;
    uint8_t var_1ah;
    uint32_t var_18h;
    int32_t var_14h;
    uint8_t var_fh;
    uint16_t var_eh;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 2;
    var_eh = 6;
    var_fh = 0x85;
    var_14h = -8;
    var_18h = 0x198232c3;
    var_1ah = 0;
    var_20h = -9;
    var_21h = 7;
    for (var_ch = -0x1e; var_ch != -0x1e; var_ch = var_ch + 8) {
        if (var_ch == 0) {
            var_eh = 1;
        }
        if (0 % (int32_t)(char)var_ch == 0) {
            var_21h = var_21h + 1;
            for (var_eh = 0xffe8; 0x33 < var_eh; var_eh = var_eh + 8) {
                var_14h = 0x7567;
            }
        } else {
            var_fh = (int32_t)(uint32_t)(var_eh < 0xfff9) <= var_ch;
            var_8h = (uint32_t)((char)var_fh < -0x67d03652);
            var_eh = 5;
        }
        var_18h = (uint32_t)
                  ((int32_t)var_18h <= (int32_t)(0x29fe0d49 - (uint32_t)((int32_t)var_18h < 0xd40 << (var_fh & 0x1f))));
        var_1ah = var_1ah - 1;
        if ((((int32_t)(char)var_14h - (int32_t)(5 < var_21h) == 0x29fe0d49) == true) < 0x29fe0d49) {
            var_20h = 4;
        } else {
            var_20h = 0;
        }
    }
    if (var_20h == 0) {
        sym.set_var(var_8h, 1, 0xffffffe2, (uint32_t)var_eh, 1, (int32_t)(char)var_fh, var_14h, 0, 0x7c, 
                    (uint32_t)var_1ah, -2);
        uVar1 = 1;
    } else {
        sym.set_var(var_8h, 1, 0xffffffe2, (uint32_t)var_eh, 1, (int32_t)(char)var_fh, var_14h, var_18h, 0x7c, 
                    (uint32_t)var_1ah, -1);
        uVar1 = 0x71a01fb8;
    }
    return uVar1;
}
