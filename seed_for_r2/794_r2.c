
// WARNING: Variable defined which should be unmapped: var_eh
// WARNING: Removing unreachable block (ram,0x0804998a)
// WARNING: Removing unreachable block (ram,0x080499a4)
// WARNING: Removing unreachable block (ram,0x08049998)
// WARNING: Removing unreachable block (ram,0x080499ab)
// WARNING: Removing unreachable block (ram,0x08049852)
// WARNING: Removing unreachable block (ram,0x08049842)
// WARNING: Removing unreachable block (ram,0x0804984b)
// WARNING: Removing unreachable block (ram,0x08049857)
// WARNING: Removing unreachable block (ram,0x0804986f)
// WARNING: Removing unreachable block (ram,0x08049873)
// WARNING: Removing unreachable block (ram,0x0804988c)
// WARNING: Removing unreachable block (ram,0x08049899)
// WARNING: Removing unreachable block (ram,0x08049ae6)
// WARNING: Removing unreachable block (ram,0x0804997d)
// WARNING: Removing unreachable block (ram,0x08049ae4)
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_fh
// WARNING: [r2ghidra] Detected overlap for variable var_16h
// WARNING: [r2ghidra] Detected overlap for variable var_24h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_2dh
// WARNING: [r2ghidra] Detected overlap for variable var_30h
// WARNING: [r2ghidra] Detected overlap for variable var_36h
// WARNING: [r2ghidra] Detected overlap for variable var_37h
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_ch
// WARNING: [r2ghidra] Detected overlap for variable var_4eh
// WARNING: [r2ghidra] Detected overlap for variable var_55h
// WARNING: [r2ghidra] Detected overlap for variable var_1ch
// WARNING: [r2ghidra] Detected overlap for variable var_66h

undefined4 sym.func_1(void)
{
    uint16_t uVar1;
    undefined4 uVar2;
    bool bVar3;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    uint32_t var_74h;
    int32_t var_70h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_54h;
    int32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_40h;
    uint32_t var_3ch;
    int32_t var_34h;
    int32_t var_2ch;
    int32_t var_28h;
    uint32_t var_20h;
    int32_t var_14h;
    uint32_t var_eh;
    
    sym.__x86.get_pc_thunk.ax();
    if (3 / 0 < 0x48) {
        bVar3 = ((0x4fU % 0 & 0xff) * 3 == 0) == 0x4fec;
        uVar1 = (uint16_t)bVar3;
        sym.set_var((int32_t)(int16_t)uVar1, 3, 0xffffffaa, 0, (uint32_t)bVar3, (int32_t)(int16_t)uVar1, 0xffffe255, 
                    0xc1b2, -0x765b8c0f, 7, 1, -1, -0xdd3, 7, 0x3e70, 0);
        uVar2 = 0xfffffffa;
    } else {
        uVar2 = 0x3710;
        sym.set_var(0, 3, 0xffffffaa, 9, 0x3ab76a10, 0xffffb728, 0xffffe255, 0xc1b2, -0x765b8c0f, 0x3710, 1, -1, -0xdd3
                    , 7, 0x3e70, 0xff);
    }
    return uVar2;
}
