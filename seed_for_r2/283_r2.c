
// WARNING: Variable defined which should be unmapped: var_4h
// WARNING: Removing unreachable block (ram,0x0804972e)
// WARNING: Removing unreachable block (ram,0x08049739)
// WARNING: Removing unreachable block (ram,0x08049746)
// WARNING: Removing unreachable block (ram,0x0804973f)
// WARNING: Removing unreachable block (ram,0x0804974b)
// WARNING: Removing unreachable block (ram,0x08049789)
// WARNING: Removing unreachable block (ram,0x0804978f)
// WARNING: Removing unreachable block (ram,0x08049796)
// WARNING: Removing unreachable block (ram,0x0804979b)
// WARNING: Removing unreachable block (ram,0x080497cc)
// WARNING: Removing unreachable block (ram,0x080497c5)
// WARNING: Removing unreachable block (ram,0x080497d1)
// WARNING: Removing unreachable block (ram,0x08049803)
// WARNING: Removing unreachable block (ram,0x08049809)
// WARNING: Removing unreachable block (ram,0x08049810)
// WARNING: Removing unreachable block (ram,0x08049815)
// WARNING: Removing unreachable block (ram,0x08049842)
// WARNING: Removing unreachable block (ram,0x0804985e)
// WARNING: Removing unreachable block (ram,0x0804986b)
// WARNING: Removing unreachable block (ram,0x08049864)
// WARNING: Removing unreachable block (ram,0x08049870)
// WARNING: Removing unreachable block (ram,0x080498a5)
// WARNING: Removing unreachable block (ram,0x080498a9)
// WARNING: Removing unreachable block (ram,0x080498ba)
// WARNING: Removing unreachable block (ram,0x08049714)
// WARNING: [r2ghidra] Detected overlap for variable var_9h
// WARNING: [r2ghidra] Detected overlap for variable var_ah
// WARNING: [r2ghidra] Detected overlap for variable var_22h
// WARNING: [r2ghidra] Detected overlap for variable var_23h
// WARNING: [r2ghidra] Detected overlap for variable var_32h
// WARNING: [r2ghidra] Detected overlap for variable var_38h

int32_t sym.func_1(void)
{
    int32_t var_44h;
    int32_t var_40h;
    uint32_t var_39h;
    int32_t var_30h;
    int32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    uint32_t var_8h;
    int32_t var_4h;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 1;
    var_14h = 9;
    for (var_18h = 0xf; var_18h < 0x2d; var_18h = var_18h + 1) {
        var_10h = -1;
        var_14h = 0xffffffff;
    }
    sym.set_var(0x73838a1f, 0, 0xffffffff, 0x40, var_10h, var_14h, var_18h, 0xb618);
    return var_10h;
}
