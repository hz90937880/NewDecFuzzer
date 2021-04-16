source_filename = "test"
target datalayout = "e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"

@global_var_804c040 = local_unnamed_addr global i8 0

define i32 @__x86.get_pc_thunk.bx(i32 %arg1) local_unnamed_addr {
dec_label_pc_8048390:
  %0 = call i32 @__decompiler_undefined_function_0()
  ret i32 %0, !insn.addr !0
}

define i32 @platform_main_begin() local_unnamed_addr {
dec_label_pc_8048456:
  %0 = call i32 @__decompiler_undefined_function_0()
  %1 = call i32 @__x86.get_pc_thunk.ax(i32 %0), !insn.addr !1
  %2 = add i32 %1, 15266, !insn.addr !2
  ret i32 %2, !insn.addr !3
}

define i32 @platform_main_end(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8048466:
  %0 = call i32 @__decompiler_undefined_function_0()
  %1 = call i32 @__x86.get_pc_thunk.ax(i32 %0), !insn.addr !4
  %2 = add i32 %1, 5230, !insn.addr !5
  %3 = inttoptr i32 %2 to i8*, !insn.addr !6
  %4 = call i32 (i8*, ...) @printf(i8* %3), !insn.addr !7
  ret i32 %4, !insn.addr !8
}

define i32 @crc32_gentab() local_unnamed_addr {
dec_label_pc_804946b:
  %storemerge5.reg2mem = alloca i32, !insn.addr !9
  %stack_var_-8.03.reg2mem = alloca i32, !insn.addr !9
  %storemerge14.reg2mem = alloca i32, !insn.addr !9
  %0 = call i32 @__decompiler_undefined_function_0()
  %1 = call i32 @__x86.get_pc_thunk.ax(i32 %0), !insn.addr !10
  %2 = add i32 %1, 11242, !insn.addr !11
  store i32 0, i32* %storemerge5.reg2mem
  br label %dec_label_pc_80494b8.preheader

dec_label_pc_804949a:                             ; preds = %dec_label_pc_80494b8.preheader, %dec_label_pc_804949a
  %stack_var_-8.03.reload = load i32, i32* %stack_var_-8.03.reg2mem
  %storemerge14.reload = load i32, i32* %storemerge14.reg2mem
  %3 = urem i32 %stack_var_-8.03.reload, 2, !insn.addr !12
  %4 = icmp eq i32 %3, 0, !insn.addr !13
  %5 = udiv i32 %stack_var_-8.03.reload, 2
  %6 = xor i32 %5, -306674912
  %storemerge2 = select i1 %4, i32 %5, i32 %6
  %7 = add nsw i32 %storemerge14.reload, -1, !insn.addr !14
  %8 = icmp eq i32 %7, 0, !insn.addr !15
  %9 = icmp eq i1 %8, false, !insn.addr !16
  store i32 %7, i32* %storemerge14.reg2mem, !insn.addr !16
  store i32 %storemerge2, i32* %stack_var_-8.03.reg2mem, !insn.addr !16
  br i1 %9, label %dec_label_pc_804949a, label %dec_label_pc_80494be, !insn.addr !16

dec_label_pc_80494be:                             ; preds = %dec_label_pc_804949a
  %10 = mul i32 %storemerge5.reload, 4, !insn.addr !11
  %11 = add i32 %2, %10, !insn.addr !11
  %12 = inttoptr i32 %11 to i32*, !insn.addr !11
  store i32 %storemerge2, i32* %12, align 4, !insn.addr !11
  %13 = add nuw nsw i32 %storemerge5.reload, 1, !insn.addr !17
  %exitcond = icmp eq i32 %13, 256
  store i32 %13, i32* %storemerge5.reg2mem, !insn.addr !18
  br i1 %exitcond, label %dec_label_pc_80494d8, label %dec_label_pc_80494b8.preheader, !insn.addr !18

dec_label_pc_80494b8.preheader:                   ; preds = %dec_label_pc_80494be, %dec_label_pc_804946b
  %storemerge5.reload = load i32, i32* %storemerge5.reg2mem
  store i32 8, i32* %storemerge14.reg2mem
  store i32 %storemerge5.reload, i32* %stack_var_-8.03.reg2mem
  br label %dec_label_pc_804949a

dec_label_pc_80494d8:                             ; preds = %dec_label_pc_80494be
  %14 = add i32 %1, 11146, !insn.addr !19
  ret i32 %14, !insn.addr !20
}

define i32 @crc32_byte(i32 %arg1) local_unnamed_addr {
dec_label_pc_80494db:
  %0 = call i32 @__decompiler_undefined_function_0()
  %1 = call i32 @__x86.get_pc_thunk.ax(i32 %0), !insn.addr !21
  %2 = add i32 %1, 11033, !insn.addr !22
  %3 = add i32 %1, 11065, !insn.addr !23
  %4 = inttoptr i32 %3 to i32*, !insn.addr !23
  %5 = load i32, i32* %4, align 4, !insn.addr !23
  %6 = udiv i32 %5, 256, !insn.addr !24
  %7 = xor i32 %5, %arg1, !insn.addr !25
  %8 = mul i32 %7, 4, !insn.addr !26
  %9 = and i32 %8, 1020, !insn.addr !27
  %10 = add i32 %1, 11129, !insn.addr !27
  %11 = add i32 %10, %9, !insn.addr !27
  %12 = inttoptr i32 %11 to i32*, !insn.addr !27
  %13 = load i32, i32* %12, align 4, !insn.addr !27
  %14 = xor i32 %13, %6, !insn.addr !28
  store i32 %14, i32* %4, align 4, !insn.addr !29
  ret i32 %2, !insn.addr !30
}

define i32 @crc32_8bytes(i32 %arg1) local_unnamed_addr {
dec_label_pc_8049522:
  %0 = call i32 @__decompiler_undefined_function_0()
  %1 = call i32 @__x86.get_pc_thunk.ax(i32 %0), !insn.addr !31
  %2 = urem i32 %arg1, 256, !insn.addr !32
  %3 = call i32 @crc32_byte(i32 %2), !insn.addr !33
  %4 = udiv i32 %arg1, 256, !insn.addr !34
  %5 = urem i32 %4, 256, !insn.addr !35
  %6 = call i32 @crc32_byte(i32 %5), !insn.addr !36
  %7 = udiv i32 %arg1, 65536, !insn.addr !37
  %8 = urem i32 %7, 256, !insn.addr !38
  %9 = call i32 @crc32_byte(i32 %8), !insn.addr !39
  %10 = udiv i32 %arg1, 16777216, !insn.addr !40
  %11 = call i32 @crc32_byte(i32 %10), !insn.addr !41
  ret i32 %11, !insn.addr !42
}

define i32 @transparent_crc(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_8049577:
  %eax.0.reg2mem = alloca i32, !insn.addr !43
  %0 = call i32 @__decompiler_undefined_function_0()
  %1 = call i32 @__x86.get_pc_thunk.bx(i32 %0), !insn.addr !44
  %2 = call i32 @crc32_8bytes(i32 %arg1), !insn.addr !45
  %3 = icmp eq i32 %arg3, 0, !insn.addr !46
  store i32 %2, i32* %eax.0.reg2mem, !insn.addr !47
  br i1 %3, label %dec_label_pc_80495b8, label %dec_label_pc_804959a, !insn.addr !47

dec_label_pc_804959a:                             ; preds = %dec_label_pc_8049577
  %4 = add i32 %0, 877, !insn.addr !48
  %5 = inttoptr i32 %4 to i8*, !insn.addr !49
  %6 = call i32 (i8*, ...) @printf(i8* %5), !insn.addr !50
  store i32 %6, i32* %eax.0.reg2mem, !insn.addr !51
  br label %dec_label_pc_80495b8, !insn.addr !51

dec_label_pc_80495b8:                             ; preds = %dec_label_pc_804959a, %dec_label_pc_8049577
  %eax.0.reload = load i32, i32* %eax.0.reg2mem
  ret i32 %eax.0.reload, !insn.addr !52
}

define i32 @set_var(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5, i32 %arg6, i32 %arg7, i32 %arg8, i32 %arg9, i32 %arg10) local_unnamed_addr {
dec_label_pc_8049626:
  %0 = call i32 @__decompiler_undefined_function_0()
  %1 = call i32 @__x86.get_pc_thunk.ax(i32 %0), !insn.addr !53
  %2 = trunc i32 %arg1 to i8, !insn.addr !54
  %3 = add i32 %1, 10739, !insn.addr !54
  %4 = inttoptr i32 %3 to i8*, !insn.addr !54
  store i8 %2, i8* %4, align 1, !insn.addr !54
  %5 = trunc i32 %arg2 to i16, !insn.addr !55
  %6 = add i32 %1, 10741, !insn.addr !55
  %7 = inttoptr i32 %6 to i16*, !insn.addr !55
  store i16 %5, i16* %7, align 2, !insn.addr !55
  %8 = add i32 %1, 10743, !insn.addr !56
  %9 = inttoptr i32 %8 to i32*, !insn.addr !56
  store i32 %arg3, i32* %9, align 4, !insn.addr !56
  ret i32 0, !insn.addr !57
}

define i32 @func_1() local_unnamed_addr {
dec_label_pc_8049668:
  %0 = call i32 @__decompiler_undefined_function_0()
  %1 = call i32 @__x86.get_pc_thunk.ax(i32 %0), !insn.addr !58
  %2 = call i32 @set_var(i32 2, i32 0, i32 1, i32 688957498, i32 568377024, i32 -3, i32 0, i32 0, i32 1181811001, i32 4), !insn.addr !59
  ret i32 2, !insn.addr !60
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_8049754:
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !61
  %0 = call i32 @__decompiler_undefined_function_0()
  %1 = call i32 @__decompiler_undefined_function_0()
  %stack_var_4 = alloca i8**, align 4
  store i8** %argv, i8*** %stack_var_4, align 4
  %2 = ptrtoint i8*** %stack_var_4 to i32, !insn.addr !62
  %3 = call i32 @__x86.get_pc_thunk.bx(i32 %2), !insn.addr !63
  %4 = load i8**, i8*** %stack_var_4, align 4, !insn.addr !64
  %5 = icmp eq i8** %4, inttoptr (i32 2 to i8**), !insn.addr !64
  %6 = icmp eq i1 %5, false, !insn.addr !65
  store i32 0, i32* %stack_var_-20.0.reg2mem, !insn.addr !65
  br i1 %6, label %dec_label_pc_80497a5, label %dec_label_pc_804977f, !insn.addr !65

dec_label_pc_804977f:                             ; preds = %dec_label_pc_8049754
  %7 = add i32 %1, 4, !insn.addr !66
  %8 = inttoptr i32 %7 to i32*, !insn.addr !67
  %9 = load i32, i32* %8, align 4, !insn.addr !67
  %10 = add i32 %0, 463, !insn.addr !68
  %11 = inttoptr i32 %10 to i8*, !insn.addr !69
  %12 = inttoptr i32 %9 to i8*, !insn.addr !70
  %13 = call i32 @strcmp(i8* %12, i8* %11), !insn.addr !71
  %14 = icmp eq i32 %13, 0, !insn.addr !72
  %spec.select = zext i1 %14 to i32
  store i32 %spec.select, i32* %stack_var_-20.0.reg2mem
  br label %dec_label_pc_80497a5

dec_label_pc_80497a5:                             ; preds = %dec_label_pc_804977f, %dec_label_pc_8049754
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  %15 = call i32 @platform_main_begin(), !insn.addr !73
  %16 = call i32 @crc32_gentab(), !insn.addr !74
  %17 = call i32 @func_1(), !insn.addr !75
  %18 = add i32 %0, 465, !insn.addr !76
  %19 = call i32 @transparent_crc(i32 22968, i32 %18, i32 %stack_var_-20.0.reload), !insn.addr !77
  %20 = add i32 %0, 10425, !insn.addr !78
  %21 = inttoptr i32 %20 to i8*, !insn.addr !78
  %22 = load i8, i8* %21, align 1, !insn.addr !78
  %23 = zext i8 %22 to i32, !insn.addr !78
  %24 = add i32 %0, 469, !insn.addr !79
  %25 = call i32 @transparent_crc(i32 %23, i32 %24, i32 %stack_var_-20.0.reload), !insn.addr !80
  %26 = add i32 %0, 10427, !insn.addr !81
  %27 = inttoptr i32 %26 to i16*, !insn.addr !81
  %28 = load i16, i16* %27, align 2, !insn.addr !81
  %29 = zext i16 %28 to i32, !insn.addr !81
  %30 = add i32 %0, 474, !insn.addr !82
  %31 = call i32 @transparent_crc(i32 %29, i32 %30, i32 %stack_var_-20.0.reload), !insn.addr !83
  %32 = add i32 %0, 10429, !insn.addr !84
  %33 = inttoptr i32 %32 to i32*, !insn.addr !84
  %34 = load i32, i32* %33, align 4, !insn.addr !84
  %35 = add i32 %0, 479, !insn.addr !85
  %36 = call i32 @transparent_crc(i32 %34, i32 %35, i32 %stack_var_-20.0.reload), !insn.addr !86
  %37 = add i32 %0, 10421, !insn.addr !87
  %38 = inttoptr i32 %37 to i32*, !insn.addr !87
  %39 = load i32, i32* %38, align 4, !insn.addr !87
  %40 = sub i32 0, %39
  %41 = sub i32 %40, 1
  %42 = call i32 @platform_main_end(i32 %41, i32 %stack_var_-20.0.reload), !insn.addr !88
  ret i32 0, !insn.addr !89
}

define i32 @__x86.get_pc_thunk.ax(i32 %arg1) local_unnamed_addr {
dec_label_pc_8049854:
  ret i32 %arg1, !insn.addr !90
}

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @__decompiler_undefined_function_0() local_unnamed_addr

!0 = !{i64 134513555}
!1 = !{i64 134513753}
!2 = !{i64 134513758}
!3 = !{i64 134513765}
!4 = !{i64 134513773}
!5 = !{i64 134513789}
!6 = !{i64 134513795}
!7 = !{i64 134513798}
!8 = !{i64 134513811}
!9 = !{i64 134517867}
!10 = !{i64 134517873}
!11 = !{i64 134517956}
!12 = !{i64 134517917}
!13 = !{i64 134517920}
!14 = !{i64 134517940}
!15 = !{i64 134517944}
!16 = !{i64 134517948}
!17 = !{i64 134517963}
!18 = !{i64 134517974}
!19 = !{i64 134517878}
!20 = !{i64 134517978}
!21 = !{i64 134517986}
!22 = !{i64 134517991}
!23 = !{i64 134518002}
!24 = !{i64 134518010}
!25 = !{i64 134518023}
!26 = !{i64 134518025}
!27 = !{i64 134518028}
!28 = !{i64 134518035}
!29 = !{i64 134518037}
!30 = !{i64 134518049}
!31 = !{i64 134518053}
!32 = !{i64 134518066}
!33 = !{i64 134518070}
!34 = !{i64 134518081}
!35 = !{i64 134518084}
!36 = !{i64 134518088}
!37 = !{i64 134518099}
!38 = !{i64 134518102}
!39 = !{i64 134518106}
!40 = !{i64 134518117}
!41 = !{i64 134518124}
!42 = !{i64 134518134}
!43 = !{i64 134518135}
!44 = !{i64 134518142}
!45 = !{i64 134518156}
!46 = !{i64 134518164}
!47 = !{i64 134518168}
!48 = !{i64 134518185}
!49 = !{i64 134518191}
!50 = !{i64 134518192}
!51 = !{i64 134518197}
!52 = !{i64 134518205}
!53 = !{i64 134518316}
!54 = !{i64 134518343}
!55 = !{i64 134518353}
!56 = !{i64 134518363}
!57 = !{i64 134518375}
!58 = !{i64 134518382}
!59 = !{i64 134518598}
!60 = !{i64 134518611}
!61 = !{i64 134518612}
!62 = !{i64 134518626}
!63 = !{i64 134518630}
!64 = !{i64 134518650}
!65 = !{i64 134518653}
!66 = !{i64 134518658}
!67 = !{i64 134518661}
!68 = !{i64 134518666}
!69 = !{i64 134518672}
!70 = !{i64 134518673}
!71 = !{i64 134518674}
!72 = !{i64 134518682}
!73 = !{i64 134518693}
!74 = !{i64 134518698}
!75 = !{i64 134518703}
!76 = !{i64 134518720}
!77 = !{i64 134518728}
!78 = !{i64 134518736}
!79 = !{i64 134518752}
!80 = !{i64 134518760}
!81 = !{i64 134518768}
!82 = !{i64 134518784}
!83 = !{i64 134518792}
!84 = !{i64 134518800}
!85 = !{i64 134518814}
!86 = !{i64 134518822}
!87 = !{i64 134518830}
!88 = !{i64 134518845}
!89 = !{i64 134518867}
!90 = !{i64 134518871}
