
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049d01)
// WARNING: Removing unreachable block (ram,0x08049d11)
// WARNING: Removing unreachable block (ram,0x08049bda)
// WARNING: Removing unreachable block (ram,0x08049be0)
// WARNING: Removing unreachable block (ram,0x08049860)
// WARNING: Removing unreachable block (ram,0x08049866)
// WARNING: Removing unreachable block (ram,0x08049e97)
// WARNING: Removing unreachable block (ram,0x08049d47)
// WARNING: Removing unreachable block (ram,0x08049d76)
// WARNING: Removing unreachable block (ram,0x08049e87)
// WARNING: Removing unreachable block (ram,0x08049f05)
// WARNING: Removing unreachable block (ram,0x08049f13)
// WARNING: Removing unreachable block (ram,0x08049894)
// WARNING: Removing unreachable block (ram,0x0804989a)
// WARNING: Removing unreachable block (ram,0x08049e95)
// WARNING: Removing unreachable block (ram,0x08049ab3)
// WARNING: Removing unreachable block (ram,0x08049ac3)
// WARNING: Removing unreachable block (ram,0x08049ad0)
// WARNING: Removing unreachable block (ram,0x08049ac9)
// WARNING: Removing unreachable block (ram,0x08049ad5)
// WARNING: Removing unreachable block (ram,0x08049c15)
// WARNING: Removing unreachable block (ram,0x08049ae3)
// WARNING: Removing unreachable block (ram,0x08049b33)
// WARNING: Removing unreachable block (ram,0x08049b39)
// WARNING: Removing unreachable block (ram,0x08049b40)
// WARNING: Removing unreachable block (ram,0x08049b45)
// WARNING: Removing unreachable block (ram,0x08049c45)
// WARNING: Removing unreachable block (ram,0x08049ebe)
// WARNING: Removing unreachable block (ram,0x08049f54)
// WARNING: Removing unreachable block (ram,0x08049ed7)
// WARNING: Removing unreachable block (ram,0x08049f45)
// WARNING: Removing unreachable block (ram,0x08049f3e)
// WARNING: Removing unreachable block (ram,0x08049f4a)
// WARNING: Removing unreachable block (ram,0x08049f5e)
// WARNING: Removing unreachable block (ram,0x08049a1c)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_1ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_54h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_11h
// WARNING: [r2ghidra] Detected overlap for variable var_14h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_46h
// WARNING: [r2ghidra] Detected overlap for variable var_6eh
// WARNING: [r2ghidra] Detected overlap for variable var_7ah
// WARNING: [r2ghidra] Detected overlap for variable var_95h
// WARNING: [r2ghidra] Detected overlap for variable var_59h
// WARNING: [r2ghidra] Detected overlap for variable var_9dh
// WARNING: [r2ghidra] Detected overlap for variable var_81h
// WARNING: [r2ghidra] Detected overlap for variable var_c5h
// WARNING: [r2ghidra] Detected overlap for variable var_eeh
// WARNING: [r2ghidra] Detected overlap for variable var_f4h
// WARNING: [r2ghidra] Detected overlap for variable var_b2h
// WARNING: [r2ghidra] Detected overlap for variable var_b3h
// WARNING: [r2ghidra] Detected overlap for variable var_bch
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_8h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint32_t var_104h;
    uint32_t var_100h;
    int32_t var_fch;
    int32_t var_f6h;
    int32_t var_ech;
    uint32_t var_e8h;
    int32_t var_e4h;
    int32_t var_e0h;
    int32_t var_dch;
    int32_t var_d8h;
    uint32_t var_d4h;
    int32_t var_d0h;
    int32_t var_cch;
    int32_t var_c4h;
    int32_t var_beh;
    uint32_t var_b8h;
    int32_t var_b0h;
    int32_t var_ach;
    int32_t var_a8h;
    uint32_t var_a4h;
    int32_t var_9ch;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    int32_t var_88h;
    int32_t var_80h;
    uint32_t var_78h;
    uint32_t var_74h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_60h;
    uint32_t var_5ch;
    int32_t var_58h;
    undefined4 var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    uint32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    uint8_t var_21h;
    uint32_t var_20h;
    undefined4 var_1ch;
    uint32_t var_18h;
    uint16_t var_14h;
    uint8_t var_11h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_11h = 0x3d;
    var_14h = 0xf746;
    var_18h = 0x6718e503;
    var_20h = 0xffffffff;
    var_21h = 8;
    var_28h = 0xedd67940;
    for (var_10h = 0; (int32_t)var_10h < 0xe; var_10h = var_10h + 2) {
        var_11h = (uint8_t)var_10h;
        var_14h = 0xfffd;
        var_18h = 0;
        var_20h = var_20h ^ (0x1135 < (var_10h & 0xff) * 0xea) < 0xfffe;
        var_21h = var_20h != 0x1135;
        if (var_21h == 0x495e) {
            var_28h = 200;
        } else {
            var_28h = 0xc9;
        }
    }
    sym.set_var((uint32_t)(0x652a1fb9 < (int32_t)((uint32_t)(var_20h < 0x6b841ae9) << ((uint8_t)var_20h & 0x1f))), 
                (uint32_t)(uint8_t)((uint8_t)(1 / var_21h) ^ var_11h ^ 0x5c), (uint32_t)var_14h, var_18h, -0x4642, 0, 0
                , (uint32_t)var_21h, var_28h, 0x6b841ae9, 1, 6, 0, 1, 0, 1, 0x64733226, -0x480ee7a3, -0x72ec7770, 1);
    return 0;
}
