
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x08049bba)
// WARNING: Removing unreachable block (ram,0x08049949)
// WARNING: Removing unreachable block (ram,0x0804986e)
// WARNING: Removing unreachable block (ram,0x0804997a)
// WARNING: Removing unreachable block (ram,0x08049897)
// WARNING: Removing unreachable block (ram,0x08049970)
// WARNING: Removing unreachable block (ram,0x08049909)
// WARNING: Removing unreachable block (ram,0x08049919)
// WARNING: Removing unreachable block (ram,0x0804993c)
// WARNING: Removing unreachable block (ram,0x08049942)
// WARNING: Removing unreachable block (ram,0x0804994e)
// WARNING: Removing unreachable block (ram,0x08049976)
// WARNING: Removing unreachable block (ram,0x08049984)
// WARNING: Removing unreachable block (ram,0x080497e2)
// WARNING: Removing unreachable block (ram,0x0804983e)
// WARNING: Removing unreachable block (ram,0x08049ab3)
// WARNING: Removing unreachable block (ram,0x08049766)
// WARNING: Removing unreachable block (ram,0x0804978f)
// WARNING: Removing unreachable block (ram,0x08049794)
// WARNING: Removing unreachable block (ram,0x08049bfd)
// WARNING: Removing unreachable block (ram,0x08049c14)
// WARNING: Removing unreachable block (ram,0x08049ac6)
// WARNING: Removing unreachable block (ram,0x08049b5a)
// WARNING: Removing unreachable block (ram,0x08049ae3)
// WARNING: Removing unreachable block (ram,0x08049af1)
// WARNING: Removing unreachable block (ram,0x08049af6)
// WARNING: Removing unreachable block (ram,0x080499bc)
// WARNING: Removing unreachable block (ram,0x08049a3d)
// WARNING: Removing unreachable block (ram,0x08049b04)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_10h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_30h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_7ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_39h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_8ch to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_42h
// WARNING: [r2ghidra] Detected overlap for variable var_9h
// WARNING: [r2ghidra] Detected overlap for variable var_15h
// WARNING: [r2ghidra] Detected overlap for variable var_18h
// WARNING: [r2ghidra] Detected overlap for variable var_49h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_56h
// WARNING: [r2ghidra] Detected overlap for variable var_58h
// WARNING: [r2ghidra] Detected overlap for variable var_5ah
// WARNING: [r2ghidra] Detected overlap for variable var_61h
// WARNING: [r2ghidra] Detected overlap for variable var_6ah
// WARNING: [r2ghidra] Detected overlap for variable var_72h
// WARNING: [r2ghidra] Detected overlap for variable var_74h
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_8dh
// WARNING: [r2ghidra] Detected overlap for variable var_90h
// WARNING: [r2ghidra] Detected overlap for variable var_92h
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined sym.func_1(void)
{
    uint8_t uVar1;
    undefined4 var_8ch;
    int32_t var_88h;
    int32_t var_80h;
    undefined4 var_7ch;
    int32_t var_78h;
    int32_t var_70h;
    uint32_t var_68h;
    int32_t var_60h;
    int32_t var_54h;
    int32_t var_50h;
    uint32_t var_48h;
    uint32_t var_40h;
    uint32_t var_38h;
    uint32_t var_34h;
    undefined4 var_30h;
    uint32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_14h;
    undefined4 var_10h;
    undefined4 var_8h;
    uint32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    if (0x4e18 / 0 == 0) {
        uVar1 = 0xfe;
    } else {
        uVar1 = 0xff;
    }
    sym.set_var(1, 0, 1 << (uVar1 & 0x1f) ^ 3, 0, 0, -1, 0xfffffffb, 3, 0, 0x4e18, 0x73d745d2, -0x124c7871);
    return 0xfd;
}
