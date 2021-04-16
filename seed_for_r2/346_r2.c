
// WARNING: Variable defined which should be unmapped: var_8h
// WARNING: Removing unreachable block (ram,0x08049a99)
// WARNING: Removing unreachable block (ram,0x080498c4)
// WARNING: Could not reconcile some variable overlaps
// WARNING: [r2ghidra] Failed to match type signed int for variable var_14h to Decompiler type: Unknown type identifier
// signed
// WARNING: [r2ghidra] Detected overlap for variable var_1ah
// WARNING: [r2ghidra] Detected overlap for variable var_43h
// WARNING: [r2ghidra] Detected overlap for variable var_21h
// WARNING: [r2ghidra] Detected overlap for variable var_2ah
// WARNING: [r2ghidra] Detected overlap for variable var_39h
// WARNING: [r2ghidra] Detected overlap for variable var_40h
// WARNING: [r2ghidra] Detected overlap for variable var_59h
// WARNING: [r2ghidra] Detected overlap for variable var_41h
// WARNING: [r2ghidra] Detected overlap for variable var_62h
// WARNING: [r2ghidra] Detected overlap for variable var_64h
// WARNING: [r2ghidra] Detected overlap for variable var_66h
// WARNING: [r2ghidra] Detected overlap for variable var_67h
// WARNING: [r2ghidra] Detected overlap for variable var_76h
// WARNING: [r2ghidra] Detected overlap for variable var_7dh
// WARNING: [r2ghidra] Detected overlap for variable var_8ah
// WARNING: [r2ghidra] Failed to match type signed int for variable arg_10h to Decompiler type: Unknown type identifier
// signed

undefined4 sym.func_1(void)
{
    uint8_t uVar1;
    int32_t var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_88h;
    uint32_t var_84h;
    int32_t var_7ch;
    int32_t var_74h;
    uint32_t var_70h;
    int32_t var_6ch;
    int32_t var_60h;
    uint32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    uint32_t var_42h;
    int32_t var_38h;
    uint32_t var_34h;
    uint32_t var_30h;
    int16_t var_2ah;
    int32_t var_28h;
    char var_21h;
    uint32_t var_20h;
    uint16_t var_1ah;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    
    sym.__x86.get_pc_thunk.ax();
    var_10h = 0x55bb2c21;
    var_18h = -0x402f6f29;
    var_1ah = 0xb2a1;
    var_20h = 0xfffffffe;
    var_21h = -0x3a;
    var_28h = 1;
    var_2ah = 2;
    var_30h = 0;
    var_34h = 0xfffffff6;
    var_38h = -1;
    var_14h = 0x10;
    do {
        if (var_14h < 8) {
            sym.set_var(0, var_10h, var_14h, var_18h, (uint32_t)var_1ah, -7, 1, var_20h, (int32_t)var_21h, var_28h, 
                        (int32_t)var_2ah, var_30h);
            return 0x3b3f44eb;
        }
        uVar1 = 0x90;
        if (var_34h == 0) {
            for (var_42h._1_1_ = '\x1a'; var_42h._1_1_ != -0x1c; var_42h._1_1_ = var_42h._1_1_ + -1) {
                var_20h = 1;
                var_38h = var_38h | (uint32_t)(var_14h != 0);
            }
        } else {
            var_34h = 0xffffffec;
            while (var_34h == 0xfffffff7) {
                var_18h = (int16_t)var_14h * -9;
                if ((int32_t)(int16_t)((int16_t)((var_18h & 0xffU) << 3) * 0x10 + (int16_t)(var_18h & 0xffU) * 0xf) /
                    (int32_t)(int16_t)var_14h == 0) {
                    var_21h = (char)(0 >> (uVar1 & 0x1f));
                    var_28h = var_28h ^ 0x8b0048f2;
                    uVar1 = 0;
                    var_2ah = 0;
                } else {
                    if ((int32_t)((int64_t)(uint64_t)(uint8_t)((uint8_t)var_18h ^ 1 | 0xe9) / -0x4318) == 0) {
                        var_20h = var_20h + 1;
                    } else {
                        var_1ah = var_1ah | 0x3361;
                        if (var_1ah != 0) break;
                    }
                }
                var_34h = 0xfffffff8;
            }
        }
        var_30h = 1;
        var_10h = var_38h & 1;
        var_38h = ~var_10h;
        var_14h = var_14h + -1;
    } while( true );
}
