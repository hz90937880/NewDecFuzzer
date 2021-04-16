
// WARNING: [r2ghidra] Failed to match type signed int for variable var_4h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_4h

uint32_t sym.func_1(void)
{
    int32_t var_5h;
    
    sym.__x86.get_pc_thunk.ax();
    do {
        stack0xfffffff8 = 8;
        while( true ) {
            if (0x1b < (uint32_t)stack0xfffffff8) {
                return stack0xfffffff8;
            }
            if (stack0xfffffff8 != 0) break;
            unique0x00000f40 = 3;
        }
    } while( true );
}
