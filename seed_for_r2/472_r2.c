
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x08049a78)
// WARNING: Removing unreachable block (ram,0x08049a87)
// WARNING: Removing unreachable block (ram,0x08049877)
// WARNING: Removing unreachable block (ram,0x08049c06)
// WARNING: Removing unreachable block (ram,0x080497bb)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_28h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_34h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_69h
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_61h
// WARNING: [r2ghidra] Detected overlap for variable var_64h
// WARNING: [r2ghidra] Detected overlap for variable var_65h

uint32_t sym.func_1(void)
{
    uint32_t var_8ch;
    int32_t var_88h;
    int32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    uint32_t var_78h;
    int32_t var_70h;
    int32_t var_68h;
    int32_t var_60h;
    uint32_t var_5ch;
    uint32_t var_58h;
    uint32_t var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_40h;
    uint32_t var_3ch;
    uint32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_20h;
    uint8_t var_19h;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    uint16_t var_ah;
    uint32_t var_8h;
    undefined4 var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_8h = 4;
    var_ah = 0xfffe;
    var_10h = 0xffffffff;
    var_14h = 0x9f111191;
    var_18h = 0x16cf0574;
    var_20h = 0x4f539b47;
    var_28h = -1;
    var_2ch = 0x19c29aed;
    var_30h = 1;
    for (var_34h = -0x18; -10 < var_34h; var_34h = var_34h + 1) {
        if (var_28h <= (int32_t)(uint32_t)((int32_t)(uint32_t)((int32_t)(uint32_t)((int32_t)var_8h < 0) < -4) < var_34h)
           ) {
            sym.set_var(var_8h, 0xfffe, 1, 0xfffffffc, var_10h, var_14h, var_18h, -2, 0xf9, 1, 0x48d7427e, 0x4f539b47, 1
                       );
            return var_10h;
        }
        var_3ch = 0xea4087b3;
        for (var_28h = 3; var_28h < -0xd; var_28h = var_28h + -1) {
            if (var_8h != 0) {
                var_3ch = (uint32_t)
                          (var_28h ==
                          (var_3ch & 0xff) + ((int32_t)(char)var_28h % (int32_t)(char)('\x01' % (char)var_34h) & 0xffU))
                ;
            }
            var_2ch = var_2ch ^ 0xffffffff;
            var_10h = (uint32_t)(var_2ch < 0x644688d2);
            var_14h = var_14h & var_10h != 0;
            var_18h = var_3ch;
        }
        var_8h = 1 << ((var_18h != (int32_t)var_18h < 1) * -3 + 10U & 0x1f);
    }
    for (var_19h = 0xfc; 0x21 < var_19h; var_19h = var_19h + 1) {
        for (var_30h = 0; 0x28 < var_30h; var_30h = var_30h + 1) {
        }
    }
    var_8h = 1;
    for (var_10h = 0xfffffffc; var_10h != 0x30; var_10h = var_10h + 1) {
        if (((uint32_t)var_19h & (1 < (int32_t)var_10h / (int32_t)(var_30h | 0xed21fdf5)) - 8) == 0xc3ab) {
            var_ah = 1;
            var_8h = 0xfffd;
        } else {
            var_20h = 0;
        }
        if (var_14h != 0) break;
    }
    sym.set_var(var_8h, (uint32_t)var_ah, 1, 0xfffffffc, var_10h, var_14h, var_18h, -1, (uint32_t)var_19h, 1, 
                -0x10773459, var_20h, 1);
    return 0xef88cba7;
}
