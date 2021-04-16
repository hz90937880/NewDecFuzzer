
// WARNING: Variable defined which should be unmapped: var_ch
// WARNING: Removing unreachable block (ram,0x08049a44)
// WARNING: Removing unreachable block (ram,0x08049823)
// WARNING: Removing unreachable block (ram,0x08049890)
// WARNING: Removing unreachable block (ram,0x08049897)
// WARNING: Removing unreachable block (ram,0x0804989e)
// WARNING: Removing unreachable block (ram,0x080498a3)
// WARNING: Removing unreachable block (ram,0x0804990e)
// WARNING: Removing unreachable block (ram,0x0804996a)
// WARNING: Removing unreachable block (ram,0x08049977)
// WARNING: Removing unreachable block (ram,0x08049970)
// WARNING: Removing unreachable block (ram,0x0804997c)
// WARNING: Removing unreachable block (ram,0x080499d6)
// WARNING: Removing unreachable block (ram,0x080499e3)
// WARNING: Removing unreachable block (ram,0x080499dc)
// WARNING: Removing unreachable block (ram,0x080499e8)
// WARNING: Removing unreachable block (ram,0x080498c5)
// WARNING: Removing unreachable block (ram,0x08049a24)
// WARNING: Removing unreachable block (ram,0x08049a37)
// WARNING: Removing unreachable block (ram,0x08049a3d)
// WARNING: Removing unreachable block (ram,0x08049a49)
// WARNING: Removing unreachable block (ram,0x08049a51)
// WARNING: Removing unreachable block (ram,0x08049a5e)
// WARNING: Removing unreachable block (ram,0x08049a57)
// WARNING: Removing unreachable block (ram,0x08049a63)
// WARNING: Removing unreachable block (ram,0x08049a6d)
// WARNING: Removing unreachable block (ram,0x08049a73)
// WARNING: Removing unreachable block (ram,0x08049a7a)
// WARNING: Removing unreachable block (ram,0x08049a7f)
// WARNING: Removing unreachable block (ram,0x08049ae8)
// WARNING: Removing unreachable block (ram,0x08049b28)
// WARNING: Removing unreachable block (ram,0x08049b4a)
// WARNING: Removing unreachable block (ram,0x08049b57)
// WARNING: [r2ghidra] Failed to match type signed int for variable var_44h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Failed to match type signed int for variable var_74h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_52h
// WARNING: [r2ghidra] Detected overlap for variable var_19h
// WARNING: [r2ghidra] Detected overlap for variable var_29h
// WARNING: [r2ghidra] Detected overlap for variable var_31h
// WARNING: [r2ghidra] Detected overlap for variable var_59h
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_5ch
// WARNING: [r2ghidra] Detected overlap for variable var_48h
// WARNING: [r2ghidra] Detected overlap for variable var_6dh
// WARNING: [r2ghidra] Detected overlap for variable var_76h
// WARNING: [r2ghidra] Detected overlap for variable var_77h
// WARNING: [r2ghidra] Detected overlap for variable var_82h
// WARNING: [r2ghidra] Detected overlap for variable var_8ah
// WARNING: [r2ghidra] Detected overlap for variable var_8ch
// WARNING: [r2ghidra] Detected overlap for variable var_8eh
// WARNING: [r2ghidra] Detected overlap for variable var_96h

int32_t sym.func_1(void)
{
    int32_t var_b0h;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_a0h;
    int32_t var_9ch;
    uint32_t var_94h;
    int32_t var_88h;
    int32_t var_80h;
    int32_t var_7ch;
    undefined4 var_74h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    uint32_t var_58h;
    uint32_t var_50h;
    uint32_t var_4ah;
    int32_t var_44h;
    int32_t var_40h;
    uint8_t var_39h;
    uint32_t var_38h;
    char var_31h;
    uint32_t var_30h;
    uint8_t var_29h;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    
    sym.__x86.get_pc_thunk.ax();
    var_18h = 0x86fa66fa;
    var_29h = 0x2c;
    var_10h = 0xffffffff;
    var_31h = ')';
    var_38h = 0xfffffffa;
    var_39h = 0x98;
    var_40h = 0;
    for (var_44h = 0; 0x18 < var_44h; var_44h = var_44h + 2) {
        var_38h = 0;
        for (var_29h = 0xf2; 0x33 < var_29h; var_29h = var_29h + 1) {
            var_39h = var_39h - 1;
            var_38h = 1;
        }
        var_10h = 0xffff;
        var_18h = 0x666d709b;
        var_31h = -1;
        var_40h = var_40h + -1;
        if (var_38h != 0) break;
        var_10h = 0xffff;
        var_18h = 0x666d709b;
        var_31h = -1;
    }
    sym.set_var(0xffff94b2, 0xd926128f, 0x46bc2273, var_18h, 0x2908, 0x90, 0, -0x757d27a8, -0xbfffcb8, -6, 
                (uint32_t)var_29h, 1, var_10h, (int32_t)var_31h, var_38h, 8, (uint32_t)var_39h, var_40h);
    return var_44h;
}
