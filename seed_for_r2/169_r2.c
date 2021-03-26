
// WARNING: Variable defined which should be unmapped: var_1h

uint32_t sym.func_1(void)
{
    int32_t iVar1;
    int32_t var_1h;
    
    iVar1 = sym.__x86.get_pc_thunk.ax();
    return iVar1 + 0x29cfU & 0xffff0000 | 0xff98;
}
