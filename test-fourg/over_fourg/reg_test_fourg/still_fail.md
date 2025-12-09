# clang 回归测试失败用例完整日志（29 个）

> 数据来源：`clang-check_2025-12-04_032654.xml`

## 失败用例总览

| # | 测试目录 (classname) | 测试文件 | 耗时 (s) | Exit Code |
|:-:|:----------------------|:---------|---------:|:---------|
| 1 | Clang.ASTMerge/class-template-partial-spec | test.cpp | 0.60 | 1 |
| 2 | Clang.ASTMerge/macro | test.m | 0.41 | 139 |
| 3 | Clang.Analysis | ctu-main.cpp | 0.45 | 139 |
| 4 | Clang.CodeGen | attr-error.c | 0.02 | 1 |
| 5 | Clang.CodeGen | attr-warning.c | 0.03 | 1 |
| 6 | Clang.Frontend | amdgcn-machine-analysis-remarks.cl | 0.03 | 1 |
| 7 | Clang.Frontend | optimization-remark-analysis.c | 0.18 | 1 |
| 8 | Clang.Frontend | optimization-remark-extra-analysis.c | 0.03 | 1 |
| 9 | Clang.Frontend | optimization-remark-line-directive.c | 0.03 | 1 |
| 10 | Clang.Frontend | optimization-remark-new-pm.c | 0.04 | 1 |
| 11 | Clang.Frontend | optimization-remark-options.c | 0.34 | 1 |
| 12 | Clang.Frontend | optimization-remark-with-hotness-new-pm.c | 0.05 | 1 |
| 13 | Clang.Index | TestClassDecl.m | 0.15 | 1 |
| 14 | Clang.Index | TestClassForwardDecl.m | 0.14 | 1 |
| 15 | Clang.Index | c-index-api-loadTU-test.m | 0.22 | 1 |
| 16 | Clang.Index | c-index-getCursor-test.m | 0.18 | 1 |
| 17 | Clang.Index | index-module.m | 0.62 | 1 |
| 18 | Clang.Index | targeted-cursor.m | 0.29 | 1 |
| 19 | Clang.Lexer | SourceLocationsOverflow.c | 2.09 | 1 |
| 20 | Clang.Misc | backend-optimization-failure.cpp | 0.03 | 1 |
| 21 | Clang.Modules | odr_hash.cpp | 0.18 | 1 |
| 22 | Clang.Modules | suggest-include.cpp | 0.04 | 1 |
| 23 | Clang.OpenMP | remarks_parallel_in_multiple_target_state_machines.c | 0.09 | 1 |
| 24 | Clang.OpenMP | remarks_parallel_in_target_state_machine.c | 0.08 | 1 |
| 25 | Clang.PCH | variables.c | 0.08 | 1 |
| 26 | Clang.Preprocessor | line-directive.c | 0.02 | 1 |
| 27 | Clang.Profile | misexpect-branch.c | 0.06 | 1 |
| 28 | Clang.Sema | ms-inline-asm.c | 0.03 | 1 |
| 29 | Clang.SemaCXX | cxx98-compat-pedantic.cpp | 0.03 | 1 |

## 单个用例完整 failure 日志

### 1. Clang.ASTMerge/class-template-partial-spec :: test.cpp

- 耗时：0.60 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -emit-pch -std=c++1z -o /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/class-template-partial-spec/Output/test.cpp.tmp.1.ast /root/llvm-project-msvc/clang/test/ASTMerge/class-template-partial-spec/Inputs/class-template-partial-spec1.cpp
: 'RUN: at line 2';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -emit-pch -std=c++1z -o /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/class-template-partial-spec/Output/test.cpp.tmp.2.ast /root/llvm-project-msvc/clang/test/ASTMerge/class-template-partial-spec/Inputs/class-template-partial-spec2.cpp
: 'RUN: at line 3';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -std=c++1z -ast-merge /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/class-template-partial-spec/Output/test.cpp.tmp.1.ast -ast-merge /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/class-template-partial-spec/Output/test.cpp.tmp.2.ast -fsyntax-only /root/llvm-project-msvc/clang/test/ASTMerge/class-template-partial-spec/test.cpp 2>&1 | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/ASTMerge/class-template-partial-spec/test.cpp
--
Exit Code: 1

Command Output (stderr):
--
/root/llvm-project-msvc/clang/test/ASTMerge/class-template-partial-spec/test.cpp:12:11: error: CHECK: expected string not found in input
// CHECK: class-template-partial-spec2.cpp:21:32: warning: external variable 'X1' declared with incompatible types in different translation units ('TwoOptionTemplate<int, double>' vs. 'TwoOptionTemplate<int, float>')
          ^
<stdin>:1:1: note: scanning from here
PLEASE submit a bug report to https://github.com/llvm/llvm-project/issues/ and include the crash backtrace, preprocessed source, and associated run script.
^

Input file: <stdin>
Check file: /root/llvm-project-msvc/clang/test/ASTMerge/class-template-partial-spec/test.cpp

-dump-input=help explains the following input dump.

Input was:
<<<<<<
          1: PLEASE submit a bug report to https://github.com/llvm/llvm-project/issues/ and include the crash backtrace, preprocessed source, and associated run script. 
check:12     X~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ error: no match found
          2: Stack dump: 
check:12     ~~~~~~~~~~~~
          3: 0. Program arguments: /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -std=c++1z -ast-merge /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/class-template-partial-spec/Output/test.cpp.tmp.1.ast -ast-merge /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/class-template-partial-spec/Output/test.cpp.tmp.2.ast -fsyntax-only /root/llvm-project-msvc/clang/test/ASTMerge/class-template-partial-spec/test.cpp 
check:12     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
          4:  #0 0x00005cd3b6ff5934 PrintStackTraceSignalHandler(void*) Signals.cpp:0:0 
check:12     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
          5:  #1 0x00005cd3b6ff30de SignalHandler(int) Signals.cpp:0:0 
check:12     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
          6:  #2 0x00007125f4242520 (/lib/x86_64-linux-gnu/libc.so.6+0x42520) 
check:12     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
          .
          .
          .
>>>>>>

--
```

### 2. Clang.ASTMerge/macro :: test.m

- 耗时：0.41 s
- Exit Code：139

```text
Script:
--
: 'RUN: at line 1';   rm -rf /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/macro/Output/test.m.tmp
: 'RUN: at line 2';   mkdir -p /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/macro/Output/test.m.tmp/cache
: 'RUN: at line 3';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -fmodules -fmodules-cache-path=/root/llvm-project-msvc/build/tools/clang/test/ASTMerge/macro/Output/test.m.tmp/cache -fmodule-map-file=/root/llvm-project-msvc/clang/test/ASTMerge/macro/Inputs/macro.modulemap -I/root/llvm-project-msvc/clang/test/ASTMerge/macro/Inputs -emit-pch -o /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/macro/Output/test.m.tmp.1.ast /root/llvm-project-msvc/clang/test/ASTMerge/macro/Inputs/macro1.m
: 'RUN: at line 4';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -fmodules -fmodules-cache-path=/root/llvm-project-msvc/build/tools/clang/test/ASTMerge/macro/Output/test.m.tmp/cache -fmodule-map-file=/root/llvm-project-msvc/clang/test/ASTMerge/macro/Inputs/macro.modulemap -I/root/llvm-project-msvc/clang/test/ASTMerge/macro/Inputs -emit-pch -o /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/macro/Output/test.m.tmp.2.ast /root/llvm-project-msvc/clang/test/ASTMerge/macro/Inputs/macro2.m
: 'RUN: at line 5';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -fmodules -ast-merge /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/macro/Output/test.m.tmp.1.ast -ast-merge /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/macro/Output/test.m.tmp.2.ast -fsyntax-only -verify /root/llvm-project-msvc/clang/test/ASTMerge/macro/test.m
--
Exit Code: 139

Command Output (stderr):
--
PLEASE submit a bug report to https://github.com/llvm/llvm-project/issues/ and include the crash backtrace, preprocessed source, and associated run script.
Stack dump:
0.	Program arguments: /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -fmodules -ast-merge /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/macro/Output/test.m.tmp.1.ast -ast-merge /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/macro/Output/test.m.tmp.2.ast -fsyntax-only -verify /root/llvm-project-msvc/clang/test/ASTMerge/macro/test.m
 #0 0x0000588e80a7b934 PrintStackTraceSignalHandler(void*) Signals.cpp:0:0
 #1 0x0000588e80a790de SignalHandler(int) Signals.cpp:0:0
 #2 0x000077e0a9e42520 (/lib/x86_64-linux-gnu/libc.so.6+0x42520)
 #3 0x0000588e833be1b0 clang::ASTImporter::Import(clang::SourceLocation) (/root/llvm-project-msvc/build/bin/clang+0x607a1b0)
 #4 0x0000588e833cbe53 clang::TypeSourceInfo* clang::ASTNodeImporter::importChecked<clang::TypeSourceInfo*>(llvm::Error&, clang::TypeSourceInfo* const&) (.part.0.isra.0) ASTImporter.cpp:0:0
 #5 0x0000588e833edb5b clang::ASTNodeImporter::VisitTypedefNameDecl(clang::TypedefNameDecl*, bool) (/root/llvm-project-msvc/build/bin/clang+0x60a9b5b)
 #6 0x0000588e833cf87a clang::declvisitor::Base<std::add_pointer, clang::ASTNodeImporter, llvm::Expected<clang::Decl*>>::Visit(clang::Decl*) (/root/llvm-project-msvc/build/bin/clang+0x608b87a)
 #7 0x0000588e833cfdca clang::ASTImporter::Import(clang::Decl*) (/root/llvm-project-msvc/build/bin/clang+0x608bdca)
 #8 0x0000588e8275b23a clang::ASTMergeAction::ExecuteAction() (/root/llvm-project-msvc/build/bin/clang+0x541723a)
 #9 0x0000588e8152c5e9 clang::FrontendAction::Execute() (/root/llvm-project-msvc/build/bin/clang+0x41e85e9)
#10 0x0000588e814b6ef1 clang::CompilerInstance::ExecuteAction(clang::FrontendAction&) (/root/llvm-project-msvc/build/bin/clang+0x4172ef1)
#11 0x0000588e815e4b00 clang::ExecuteCompilerInvocation(clang::CompilerInstance*) (/root/llvm-project-msvc/build/bin/clang+0x42a0b00)
#12 0x0000588e7e47261d cc1_main(llvm::ArrayRef<char const*>, char const*, void*) (/root/llvm-project-msvc/build/bin/clang+0x112e61d)
#13 0x0000588e7e46bac0 ExecuteCC1Tool(llvm::SmallVectorImpl<char const*>&) driver.cpp:0:0
#14 0x0000588e7e46e2c9 clang_main(int, char**) (/root/llvm-project-msvc/build/bin/clang+0x112a2c9)
#15 0x000077e0a9e29d90 __libc_start_call_main ./csu/../sysdeps/nptl/libc_start_call_main.h:58:16
#16 0x000077e0a9e29e40 call_init ./csu/../csu/libc-start.c:128:20
#17 0x000077e0a9e29e40 __libc_start_main ./csu/../csu/libc-start.c:379:5
#18 0x0000588e7e46b585 _start (/root/llvm-project-msvc/build/bin/clang+0x1127585)
/root/llvm-project-msvc/build/tools/clang/test/ASTMerge/macro/Output/test.m.script: line 5: 261205 Segmentation fault      (core dumped) /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -fmodules -ast-merge /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/macro/Output/test.m.tmp.1.ast -ast-merge /root/llvm-project-msvc/build/tools/clang/test/ASTMerge/macro/Output/test.m.tmp.2.ast -fsyntax-only -verify /root/llvm-project-msvc/clang/test/ASTMerge/macro/test.m

--
```

### 3. Clang.Analysis :: ctu-main.cpp

- 耗时：0.45 s
- Exit Code：139

```text
Script:
--
: 'RUN: at line 1';   rm -rf /root/llvm-project-msvc/build/tools/clang/test/Analysis/Output/ctu-main.cpp.tmp && mkdir /root/llvm-project-msvc/build/tools/clang/test/Analysis/Output/ctu-main.cpp.tmp
: 'RUN: at line 2';   mkdir -p /root/llvm-project-msvc/build/tools/clang/test/Analysis/Output/ctu-main.cpp.tmp/ctudir
: 'RUN: at line 3';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -std=c++14 -triple x86_64-pc-linux-gnu    -emit-pch -o /root/llvm-project-msvc/build/tools/clang/test/Analysis/Output/ctu-main.cpp.tmp/ctudir/ctu-other.cpp.ast /root/llvm-project-msvc/clang/test/Analysis/Inputs/ctu-other.cpp
: 'RUN: at line 5';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -std=c++14 -triple x86_64-pc-linux-gnu    -emit-pch -o /root/llvm-project-msvc/build/tools/clang/test/Analysis/Output/ctu-main.cpp.tmp/ctudir/ctu-chain.cpp.ast /root/llvm-project-msvc/clang/test/Analysis/Inputs/ctu-chain.cpp
: 'RUN: at line 7';   cp /root/llvm-project-msvc/clang/test/Analysis/Inputs/ctu-other.cpp.externalDefMap.ast-dump.txt /root/llvm-project-msvc/build/tools/clang/test/Analysis/Output/ctu-main.cpp.tmp/ctudir/externalDefMap.txt
: 'RUN: at line 9';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -analyze -analyzer-constraints=range -setup-static-analyzer -std=c++14 -triple x86_64-pc-linux-gnu    -analyzer-checker=core,debug.ExprInspection    -analyzer-config eagerly-assume=false    -analyzer-config experimental-enable-naive-ctu-analysis=true    -analyzer-config ctu-dir=/root/llvm-project-msvc/build/tools/clang/test/Analysis/Output/ctu-main.cpp.tmp/ctudir    -analyzer-config ctu-phase1-inlining=none    -verify=newctu /root/llvm-project-msvc/clang/test/Analysis/ctu-main.cpp
: 'RUN: at line 19';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -analyze -analyzer-constraints=range -setup-static-analyzer -std=c++14 -triple x86_64-pc-linux-gnu    -analyzer-checker=core,debug.ExprInspection    -analyzer-config eagerly-assume=false    -analyzer-config experimental-enable-naive-ctu-analysis=true    -analyzer-config ctu-dir=/root/llvm-project-msvc/build/tools/clang/test/Analysis/Output/ctu-main.cpp.tmp/ctudir    -analyzer-config ctu-phase1-inlining=all    -verify=oldctu /root/llvm-project-msvc/clang/test/Analysis/ctu-main.cpp
: 'RUN: at line 27';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -analyze -analyzer-constraints=range -setup-static-analyzer -std=c++14 -triple x86_64-pc-linux-gnu    -analyzer-checker=core,debug.ExprInspection    -analyzer-config experimental-enable-naive-ctu-analysis=true    -analyzer-config ctu-dir=/root/llvm-project-msvc/build/tools/clang/test/Analysis/Output/ctu-main.cpp.tmp/ctudir    -analyzer-config display-ctu-progress=true 2>&1 /root/llvm-project-msvc/clang/test/Analysis/ctu-main.cpp | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/Analysis/ctu-main.cpp
--
Exit Code: 139

Command Output (stderr):
--
/root/llvm-project-msvc/clang/test/Analysis/Inputs/ctu-other.cpp:105:10: warning: 'extern' variable has an initializer [-Wextern-initializer]
extern S extNonConstS = {.a = 4};
         ^
1 warning generated.
PLEASE submit a bug report to https://github.com/llvm/llvm-project/issues/ and include the crash backtrace, preprocessed source, and associated run script.
Stack dump:
0.	Program arguments: /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -analyze -analyzer-constraints=range -setup-static-analyzer -std=c++14 -triple x86_64-pc-linux-gnu -analyzer-checker=core,debug.ExprInspection -analyzer-config eagerly-assume=false -analyzer-config experimental-enable-naive-ctu-analysis=true -analyzer-config ctu-dir=/root/llvm-project-msvc/build/tools/clang/test/Analysis/Output/ctu-main.cpp.tmp/ctudir -analyzer-config ctu-phase1-inlining=none -verify=newctu /root/llvm-project-msvc/clang/test/Analysis/ctu-main.cpp
1.	<eof> parser at end of file
2.	While analyzing stack: 
	#0 Calling main()
3.	/root/llvm-project-msvc/clang/test/Analysis/ctu-main.cpp:203:23: Error evaluating statement
4.	/root/llvm-project-msvc/clang/test/Analysis/ctu-main.cpp:203:23: Error evaluating statement
 #0 0x000061ba55860934 PrintStackTraceSignalHandler(void*) Signals.cpp:0:0
 #1 0x000061ba5585e0de SignalHandler(int) Signals.cpp:0:0
 #2 0x00007cd81dc42520 (/lib/x86_64-linux-gnu/libc.so.6+0x42520)
 #3 0x000061ba581a31b0 clang::ASTImporter::Import(clang::SourceLocation) (/root/llvm-project-msvc/build/bin/clang+0x607a1b0)
 #4 0x000061ba581a28fc clang::ASTImporter::Import(clang::FileID, bool) (/root/llvm-project-msvc/build/bin/clang+0x60798fc)
 #5 0x000061ba581a30ec clang::ASTImporter::Import(clang::SourceLocation) (/root/llvm-project-msvc/build/bin/clang+0x607a0ec)
 #6 0x000061ba581d42fb clang::ASTNodeImporter::VisitDeclRefExpr(clang::DeclRefExpr*) (/root/llvm-project-msvc/build/bin/clang+0x60ab2fb)
 #7 0x000061ba581a4ef0 clang::StmtVisitorBase<std::add_pointer, clang::ASTNodeImporter, llvm::Expected<clang::Stmt*>>::Visit(clang::Stmt*) (/root/llvm-project-msvc/build/bin/clang+0x607bef0)
 #8 0x000061ba581a548c clang::ASTImporter::Import(clang::Stmt*) (/root/llvm-project-msvc/build/bin/clang+0x607c48c)
 #9 0x000061ba581d86fd clang::ASTNodeImporter::VisitImplicitCastExpr(clang::ImplicitCastExpr*) (/root/llvm-project-msvc/build/bin/clang+0x60af6fd)
#10 0x000061ba581a5008 clang::StmtVisitorBase<std::add_pointer, clang::ASTNodeImporter, llvm::Expected<clang::Stmt*>>::Visit(clang::Stmt*) (/root/llvm-project-msvc/build/bin/clang+0x607c008)
#11 0x000061ba581a548c clang::ASTImporter::Import(clang::Stmt*) (/root/llvm-project-msvc/build/bin/clang+0x607c48c)
#12 0x000061ba581a66b6 clang::Expr* clang::ASTNodeImporter::importChecked<clang::Expr*>(llvm::Error&, clang::Expr* const&) (.part.0.isra.0) ASTImporter.cpp:0:0
#13 0x000061ba581ad5cf clang::ASTNodeImporter::VisitCallExpr(clang::CallExpr*) (/root/llvm-project-msvc/build/bin/clang+0x60845cf)
#14 0x000061ba581a4edc clang::StmtVisitorBase<std::add_pointer, clang::ASTNodeImporter, llvm::Expected<clang::Stmt*>>::Visit(clang::Stmt*) (/root/llvm-project-msvc/build/bin/clang+0x607bedc)
#15 0x000061ba581a548c clang::ASTImporter::Import(clang::Stmt*) (/root/llvm-project-msvc/build/bin/clang+0x607c48c)
#16 0x000061ba581a5b16 clang::ASTNodeImporter::VisitCompoundStmt(clang::CompoundStmt*) (/root/llvm-project-msvc/build/bin/clang+0x607cb16)
#17 0x000061ba581a50be clang::StmtVisitorBase<std::add_pointer, clang::ASTNodeImporter, llvm::Expected<clang::Stmt*>>::Visit(clang::Stmt*) (/root/llvm-project-msvc/build/bin/clang+0x607c0be)
#18 0x000061ba581a548c clang::ASTImporter::Import(clang::Stmt*) (/root/llvm-project-msvc/build/bin/clang+0x607c48c)
#19 0x000061ba581a5d38 clang::ASTNodeImporter::ImportFunctionDeclBody(clang::FunctionDecl*, clang::FunctionDecl*) (/root/llvm-project-msvc/build/bin/clang+0x607cd38)
#20 0x000061ba581d7207 clang::ASTNodeImporter::VisitFunctionDecl(clang::FunctionDecl*) (/root/llvm-project-msvc/build/bin/clang+0x60ae207)
#21 0x000061ba581b46e8 clang::declvisitor::Base<std::add_pointer, clang::ASTNodeImporter, llvm::Expected<clang::Decl*>>::Visit(clang::Decl*) (/root/llvm-project-msvc/build/bin/clang+0x608b6e8)
#22 0x000061ba581b4dca clang::ASTImporter::Import(clang::Decl*) (/root/llvm-project-msvc/build/bin/clang+0x608bdca)
#23 0x000061ba575387d3 llvm::Expected<clang::FunctionDecl const*> clang::cross_tu::CrossTranslationUnitContext::importDefinitionImpl<clang::FunctionDecl>(clang::FunctionDecl const*, clang::ASTUnit*) (/root/llvm-project-msvc/build/bin/clang+0x540f7d3)
#24 0x000061ba57539097 clang::cross_tu::CrossTranslationUnitContext::getCrossTUDefinition(clang::FunctionDecl const*, llvm::StringRef, llvm::StringRef, bool) (/root/llvm-project-msvc/build/bin/clang+0x5410097)
#25 0x000061ba573e99d3 clang::ento::AnyFunctionCall::getRuntimeDefinition() const (/root/llvm-project-msvc/build/bin/clang+0x52c09d3)
#26 0x000061ba57478d9d clang::ento::ExprEngine::defaultEvalCall(clang::ento::NodeBuilder&, clang::ento::ExplodedNode*, clang::ento::CallEvent const&, clang::ento::EvalCallOptions const&) (/root/llvm-project-msvc/build/bin/clang+0x534fd9d)
#27 0x000061ba573f7333 clang::ento::CheckerManager::runCheckersForEvalCall(clang::ento::ExplodedNodeSet&, clang::ento::ExplodedNodeSet const&, clang::ento::CallEvent const&, clang::ento::ExprEngine&, clang::ento::EvalCallOptions const&) (/root/llvm-project-msvc/build/bin/clang+0x52ce333)
#28 0x000061ba574723ee clang::ento::ExprEngine::evalCall(clang::ento::ExplodedNodeSet&, clang::ento::ExplodedNode*, clang::ento::CallEvent const&) (/root/llvm-project-msvc/build/bin/clang+0x53493ee)
#29 0x000061ba574730d7 clang::ento::ExprEngine::VisitCallExpr(clang::CallExpr const*, clang::ento::ExplodedNode*, clang::ento::ExplodedNodeSet&) (/root/llvm-project-msvc/build/bin/clang+0x534a0d7)
#30 0x000061ba574483e7 clang::ento::ExprEngine::Visit(clang::Stmt const*, clang::ento::ExplodedNode*, clang::ento::ExplodedNodeSet&) (/root/llvm-project-msvc/build/bin/clang+0x531f3e7)
#31 0x000061ba5744a2f6 clang::ento::ExprEngine::ProcessStmt(clang::Stmt const*, clang::ento::ExplodedNode*) (/root/llvm-project-msvc/build/bin/clang+0x53212f6)
#32 0x000061ba5744a4d2 clang::ento::ExprEngine::processCFGElement(clang::CFGElement, clang::ento::ExplodedNode*, unsigned int, clang::ento::NodeBuilderContext*) (/root/llvm-project-msvc/build/bin/clang+0x53214d2)
#33 0x000061ba5740688f clang::ento::CoreEngine::dispatchWorkItem(clang::ento::ExplodedNode*, clang::ProgramPoint, clang::ento::WorkListUnit const&) (/root/llvm-project-msvc/build/bin/clang+0x52dd88f)
#34 0x000061ba57406abf clang::ento::CoreEngine::ExecuteWorkList(clang::LocationContext const*, unsigned int, llvm::IntrusiveRefCntPtr<clang::ento::ProgramState const>) (/root/llvm-project-msvc/build/bin/clang+0x52ddabf)
#35 0x000061ba56f9b822 (anonymous namespace)::AnalysisConsumer::HandleCode(clang::Decl*, unsigned int, clang::ento::ExprEngine::InliningModes, llvm::DenseSet<clang::Decl const*, llvm::DenseMapInfo<clang::Decl const*, void>>*) AnalysisConsumer.cpp:0:0
#36 0x000061ba56fb0668 (anonymous namespace)::AnalysisConsumer::HandleTranslationUnit(clang::ASTContext&) AnalysisConsumer.cpp:0:0
#37 0x000061ba57559059 clang::ParseAST(clang::Sema&, bool, bool) (/root/llvm-project-msvc/build/bin/clang+0x5430059)
#38 0x000061ba563115e9 clang::FrontendAction::Execute() (/root/llvm-project-msvc/build/bin/clang+0x41e85e9)
#39 0x000061ba5629bef1 clang::CompilerInstance::ExecuteAction(clang::FrontendAction&) (/root/llvm-project-msvc/build/bin/clang+0x4172ef1)
#40 0x000061ba563c9b00 clang::ExecuteCompilerInvocation(clang::CompilerInstance*) (/root/llvm-project-msvc/build/bin/clang+0x42a0b00)
#41 0x000061ba5325761d cc1_main(llvm::ArrayRef<char const*>, char const*, void*) (/root/llvm-project-msvc/build/bin/clang+0x112e61d)
#42 0x000061ba53250ac0 ExecuteCC1Tool(llvm::SmallVectorImpl<char const*>&) driver.cpp:0:0
#43 0x000061ba532532c9 clang_main(int, char**) (/root/llvm-project-msvc/build/bin/clang+0x112a2c9)
#44 0x00007cd81dc29d90 __libc_start_call_main ./csu/../sysdeps/nptl/libc_start_call_main.h:58:16
#45 0x00007cd81dc29e40 call_init ./csu/../csu/libc-start.c:128:20
#46 0x00007cd81dc29e40 __libc_start_main ./csu/../csu/libc-start.c:379:5
#47 0x000061ba53250585 _start (/root/llvm-project-msvc/build/bin/clang+0x1127585)
/root/llvm-project-msvc/build/tools/clang/test/Analysis/Output/ctu-main.cpp.script: line 8: 257415 Segmentation fault      (core dumped) /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -analyze -analyzer-constraints=range -setup-static-analyzer -std=c++14 -triple x86_64-pc-linux-gnu -analyzer-checker=core,debug.ExprInspection -analyzer-config eagerly-assume=false -analyzer-config experimental-enable-naive-ctu-analysis=true -analyzer-config ctu-dir=/root/llvm-project-msvc/build/tools/clang/test/Analysis/Output/ctu-main.cpp.tmp/ctudir -analyzer-config ctu-phase1-inlining=none -verify=newctu /root/llvm-project-msvc/clang/test/Analysis/ctu-main.cpp

--
```

### 4. Clang.CodeGen :: attr-error.c

- 耗时：0.02 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -emit-llvm -o - /root/llvm-project-msvc/clang/test/CodeGen/attr-error.c | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/CodeGen/attr-error.c
--
Exit Code: 1

Command Output (stderr):
--
/root/llvm-project-msvc/clang/test/CodeGen/attr-error.c:11:11: error: CHECK: expected string not found in input
// CHECK: [[SRCLOC]] = !{i32 {{[0-9]+}}}
          ^
<stdin>:16:43: note: scanning from here
attributes #1 = { "dontcall-error"="oh no" "frame-pointer"="none" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-features"="+cx8,+mmx,+sse,+sse2,+x87" }
                                          ^
<stdin>:16:43: note: with "SRCLOC" equal to "!2"
attributes #1 = { "dontcall-error"="oh no" "frame-pointer"="none" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-features"="+cx8,+mmx,+sse,+sse2,+x87" }
                                          ^
<stdin>:21:2: note: possible intended match here
!0 = !{i32 1, !"wchar_size", i32 4}
 ^

Input file: <stdin>
Check file: /root/llvm-project-msvc/clang/test/CodeGen/attr-error.c

-dump-input=help explains the following input dump.

Input was:
<<<<<<
            .
            .
            .
           11: } 
           12:  
           13: declare void @foo() #1 
           14:  
           15: attributes #0 = { noinline nounwind optnone "frame-pointer"="none" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-features"="+cx8,+mmx,+sse,+sse2,+x87" } 
           16: attributes #1 = { "dontcall-error"="oh no" "frame-pointer"="none" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-features"="+cx8,+mmx,+sse,+sse2,+x87" } 
check:11'0                                               X~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ error: no match found
check:11'1                                                                                                                                                                                    with "SRCLOC" equal to "!2"
           17:  
check:11'0     ~
           18: !llvm.module.flags = !{!0} 
check:11'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~
           19: !llvm.ident = !{!1} 
check:11'0     ~~~~~~~~~~~~~~~~~~~~
           20:  
check:11'0     ~
           21: !0 = !{i32 1, !"wchar_size", i32 4} 
check:11'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
check:11'2      ?                                   possible intended match
           22: !1 = !{!"clang version 15.0.7 (git@github.com:lzyoyzl/llvm-project-msvc.git 3a01228d025ba16db128a0a771d323e753f2c9f6)"} 
check:11'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           23: !2 = !{i64 123} 
check:11'0     ~~~~~~~~~~~~~~~~
>>>>>>

--
```

### 5. Clang.CodeGen :: attr-warning.c

- 耗时：0.03 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -emit-llvm -o - /root/llvm-project-msvc/clang/test/CodeGen/attr-warning.c | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/CodeGen/attr-warning.c
--
Exit Code: 1

Command Output (stderr):
--
/root/llvm-project-msvc/clang/test/CodeGen/attr-warning.c:11:11: error: CHECK: expected string not found in input
// CHECK: [[SRCLOC]] = !{i32 {{[0-9]+}}}
          ^
<stdin>:16:42: note: scanning from here
attributes #1 = { "dontcall-warn"="oh no" "frame-pointer"="none" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-features"="+cx8,+mmx,+sse,+sse2,+x87" }
                                         ^
<stdin>:16:42: note: with "SRCLOC" equal to "!2"
attributes #1 = { "dontcall-warn"="oh no" "frame-pointer"="none" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-features"="+cx8,+mmx,+sse,+sse2,+x87" }
                                         ^
<stdin>:21:2: note: possible intended match here
!0 = !{i32 1, !"wchar_size", i32 4}
 ^

Input file: <stdin>
Check file: /root/llvm-project-msvc/clang/test/CodeGen/attr-warning.c

-dump-input=help explains the following input dump.

Input was:
<<<<<<
            .
            .
            .
           11: } 
           12:  
           13: declare void @foo() #1 
           14:  
           15: attributes #0 = { noinline nounwind optnone "frame-pointer"="none" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-features"="+cx8,+mmx,+sse,+sse2,+x87" } 
           16: attributes #1 = { "dontcall-warn"="oh no" "frame-pointer"="none" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-features"="+cx8,+mmx,+sse,+sse2,+x87" } 
check:11'0                                              X~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ error: no match found
check:11'1                                                                                                                                                                                   with "SRCLOC" equal to "!2"
           17:  
check:11'0     ~
           18: !llvm.module.flags = !{!0} 
check:11'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~
           19: !llvm.ident = !{!1} 
check:11'0     ~~~~~~~~~~~~~~~~~~~~
           20:  
check:11'0     ~
           21: !0 = !{i32 1, !"wchar_size", i32 4} 
check:11'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
check:11'2      ?                                   possible intended match
           22: !1 = !{!"clang version 15.0.7 (git@github.com:lzyoyzl/llvm-project-msvc.git 3a01228d025ba16db128a0a771d323e753f2c9f6)"} 
check:11'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           23: !2 = !{i64 125} 
check:11'0     ~~~~~~~~~~~~~~~~
>>>>>>

--
```

### 6. Clang.Frontend :: amdgcn-machine-analysis-remarks.cl

- 耗时：0.03 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 2';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -triple amdgcn-amd-amdhsa -target-cpu gfx908 -Rpass-analysis=kernel-resource-usage -S -O0 -verify /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl -o /dev/null
--
Exit Code: 1

Command Output (stderr):
--
error: 'remark' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 13 (directive at /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl:4): Function Name: foo
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 13 (directive at /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl:5):     SGPRs: 9
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 13 (directive at /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl:6):     VGPRs: 10
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 13 (directive at /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl:7):     AGPRs: 12
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 13 (directive at /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl:8):     ScratchSize [bytes/lane]: 0
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 13 (directive at /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl:9):     Occupancy [waves/SIMD]: 10
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 13 (directive at /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl:10):     SGPRs Spill: 0
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 13 (directive at /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl:11):     VGPRs Spill: 0
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 13 (directive at /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl:12):     LDS Size [bytes/block]: 0
error: 'remark' diagnostics seen but not expected: 
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 17: Function Name: foo
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 17:     SGPRs: 9
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 17:     VGPRs: 10
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 17:     AGPRs: 12
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 17:     ScratchSize [bytes/lane]: 0
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 17:     Occupancy [waves/SIMD]: 10
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 17:     SGPRs Spill: 0
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 17:     VGPRs Spill: 0
  File /root/llvm-project-msvc/clang/test/Frontend/amdgcn-machine-analysis-remarks.cl Line 17:     LDS Size [bytes/block]: 0
18 errors generated.

--
```

### 7. Clang.Frontend :: optimization-remark-analysis.c

- 耗时：0.18 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   /root/llvm-project-msvc/build/bin/clang -O1 -fvectorize -target x86_64-unknown-unknown -emit-llvm -Rpass-analysis -S /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-analysis.c -o - 2>&1 | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-analysis.c --check-prefix=RPASS
: 'RUN: at line 2';   /root/llvm-project-msvc/build/bin/clang -O1 -fvectorize -target x86_64-unknown-unknown -emit-llvm -S /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-analysis.c -o - 2>&1 | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-analysis.c
--
Exit Code: 1

Command Output (stderr):
--
/root/llvm-project-msvc/clang/test/Frontend/optimization-remark-analysis.c:4:11: error: RPASS: expected string not found in input
// RPASS: {{.*}}:12:5: remark: loop not vectorized: loop contains a switch statement
          ^
<stdin>:1:1: note: scanning from here
/root/llvm-project-msvc/clang/test/Frontend/optimization-remark-analysis.c:21:2: remark: loop not vectorized: loop contains a switch statement [-Rpass-analysis]
^
<stdin>:1:71: note: possible intended match here
/root/llvm-project-msvc/clang/test/Frontend/optimization-remark-analysis.c:21:2: remark: loop not vectorized: loop contains a switch statement [-Rpass-analysis]
                                                                      ^

Input file: <stdin>
Check file: /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-analysis.c

-dump-input=help explains the following input dump.

Input was:
<<<<<<
           1: /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-analysis.c:21:2: remark: loop not vectorized: loop contains a switch statement [-Rpass-analysis] 
check:4'0     X~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ error: no match found
check:4'1                                                                           ?                                                                                           possible intended match
           2: } 
check:4'0     ~~
           3:  ^ 
check:4'0     ~~~
           4: /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-analysis.c:21:2: remark: loop not vectorized: value that could not be identified as reduction is used outside the loop [-Rpass-analysis] 
check:4'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           5: /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-analysis.c:21:2: warning: loop not vectorized: the optimizer was unable to perform the requested transformation; the transformation might be disabled or specified as part of an unsupported transformation ordering [-Wpass-failed=transform-warning] 
check:4'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           6: ; ModuleID = '/root/llvm-project-msvc/clang/test/Frontend/optimization-remark-analysis.c' 
check:4'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           .
           .
           .
>>>>>>

--
```

### 8. Clang.Frontend :: optimization-remark-extra-analysis.c

- 耗时：0.03 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 4';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-extra-analysis.c -Rpass-missed=gvn -O2 -emit-llvm-only -verify
--
Exit Code: 1

Command Output (stderr):
--
error: 'remark' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-extra-analysis.c Line 10 (directive at /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-extra-analysis.c:9): load of type i32 not eliminated
error: 'remark' diagnostics seen but not expected: 
  File /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-extra-analysis.c Line 11: load of type i32 not eliminated
2 errors generated.

--
```

### 9. Clang.Frontend :: optimization-remark-line-directive.c

- 耗时：0.03 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 7';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-line-directive.c -Rpass=inline -O1 -debug-info-kind=line-tables-only -emit-llvm-only -verify
--
Exit Code: 1

Command Output (stderr):
--
error: 'note' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-line-directive.c Line 1230 (directive at /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-line-directive.c:12): could not determine the original source location for /bad/path/to/original.c:1230:25
error: 'note' diagnostics seen but not expected: 
  File /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-line-directive.c Line 1230: could not determine the original source location for /bad/path/to/original.c:34359739598:25
2 errors generated.

--
```

### 10. Clang.Frontend :: optimization-remark-new-pm.c

- 耗时：0.04 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 4';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-new-pm.c -Rpass=inline -Rpass-analysis=inline -Rpass-missed=inline -O1 -emit-llvm-only -verify
: 'RUN: at line 5';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-new-pm.c -Rpass=inline -Rpass-analysis=inline -Rpass-missed=inline -O1 -emit-llvm-only -debug-info-kind=line-tables-only -verify
--
Exit Code: 1

Command Output (stderr):
--
error: 'remark' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-new-pm.c Line 19 (directive at /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-new-pm.c:17): 'foz' not inlined into 'bar' because it should never be inlined (cost=never)
  File /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-new-pm.c Line 19 (directive at /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-new-pm.c:18): 'foo' inlined into 'bar'
error: 'remark' diagnostics seen but not expected: 
  File /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-new-pm.c Line 20: 'foo' inlined into 'bar': always inline attribute at callsite bar:3:10;
  File /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-new-pm.c Line 20: 'foz' not inlined into 'bar' because it should never be inlined (cost=never): noinline function attribute
4 errors generated.

--
```

### 11. Clang.Frontend :: optimization-remark-options.c

- 耗时：0.34 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 2';   /root/llvm-project-msvc/build/bin/clang -O1 -fvectorize -target x86_64-unknown-unknown -mllvm -vectorize-memory-check-threshold=8 -Rpass-analysis=loop-vectorize -emit-llvm -S /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-options.c -o - 2>&1 | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-options.c
--
Exit Code: 1

Command Output (stderr):
--
/root/llvm-project-msvc/clang/test/Frontend/optimization-remark-options.c:4:11: error: CHECK: expected string not found in input
// CHECK: {{.*}}:10:11: remark: loop not vectorized: cannot prove it is safe to reorder floating-point operations; allow reordering by specifying '#pragma clang loop vectorize(enable)' before the loop or by providing the compiler option '-ffast-math'.
          ^
<stdin>:1:1: note: scanning from here
/root/llvm-project-msvc/clang/test/Frontend/optimization-remark-options.c:22:2: remark: loop not vectorized: cannot prove it is safe to reorder floating-point operations; allow reordering by specifying '#pragma clang loop vectorize(enable)' before the loop or by providing the compiler option '-ffast-math'. [-Rpass-analysis=loop-vectorize]
^
<stdin>:1:66: note: possible intended match here
/root/llvm-project-msvc/clang/test/Frontend/optimization-remark-options.c:22:2: remark: loop not vectorized: cannot prove it is safe to reorder floating-point operations; allow reordering by specifying '#pragma clang loop vectorize(enable)' before the loop or by providing the compiler option '-ffast-math'. [-Rpass-analysis=loop-vectorize]
                                                                 ^

Input file: <stdin>
Check file: /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-options.c

-dump-input=help explains the following input dump.

Input was:
<<<<<<
           1: /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-options.c:22:2: remark: loop not vectorized: cannot prove it is safe to reorder floating-point operations; allow reordering by specifying '#pragma clang loop vectorize(enable)' before the loop or by providing the compiler option '-ffast-math'. [-Rpass-analysis=loop-vectorize] 
check:4'0     X~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ error: no match found
check:4'1                                                                      ?                                                                                                                                                                                                                                                                                    possible intended match
           2: } 
check:4'0     ~~
           3:  ^ 
check:4'0     ~~~
           4: /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-options.c:18:3: remark: loop not vectorized: cannot prove it is safe to reorder memory operations; allow reordering by specifying '#pragma clang loop vectorize(enable)' before the loop. If the arrays will always be independent specify '#pragma clang loop vectorize(assume_safety)' before the loop or provide the '__restrict__' qualifier with the independent array arguments. Erroneous results will occur if these options are incorrectly applied! [-Rpass-analysis=loop-vectorize] 
check:4'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           5:  for (long i = 0; i < N; i++) { 
check:4'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           6:  ^ 
check:4'0     ~~~
           .
           .
           .
>>>>>>

--
```

### 12. Clang.Frontend :: optimization-remark-with-hotness-new-pm.c

- 耗时：0.05 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 9';   llvm-profdata merge      /root/llvm-project-msvc/clang/test/Frontend/Inputs/optimization-remark-with-hotness.proftext      -o /root/llvm-project-msvc/build/tools/clang/test/Frontend/Output/optimization-remark-with-hotness-new-pm.c.tmp.profdata
: 'RUN: at line 12';   llvm-profdata merge -sample      /root/llvm-project-msvc/clang/test/Frontend/Inputs/optimization-remark-with-hotness-sample.proftext      -o /root/llvm-project-msvc/build/tools/clang/test/Frontend/Output/optimization-remark-with-hotness-new-pm.c.tmp-sample.profdata
: 'RUN: at line 16';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -triple x86_64-apple-macosx10.9 -main-file-name      optimization-remark-with-hotness.c /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c -emit-llvm-only      -fprofile-instrument-use-path=/root/llvm-project-msvc/build/tools/clang/test/Frontend/Output/optimization-remark-with-hotness-new-pm.c.tmp.profdata -Rpass=inline      -O1      -Rpass-analysis=inline -Rpass-missed=inline      -fdiagnostics-show-hotness -verify
: 'RUN: at line 23';   /root/llvm-project-msvc/build/bin/clang -target x86_64-apple-macosx10.9 /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c -c -emit-llvm -o /dev/null      -fprofile-instr-use=/root/llvm-project-msvc/build/tools/clang/test/Frontend/Output/optimization-remark-with-hotness-new-pm.c.tmp.profdata -Rpass=inline      -O1      -Rpass-analysis=inline -Rpass-missed=inline      -fdiagnostics-show-hotness -Xclang -verify
: 'RUN: at line 28';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -triple x86_64-apple-macosx10.9 -main-file-name      optimization-remark-with-hotness.c /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c -emit-llvm-only      -fprofile-sample-use=/root/llvm-project-msvc/build/tools/clang/test/Frontend/Output/optimization-remark-with-hotness-new-pm.c.tmp-sample.profdata -Rpass=inline      -O1      -Rpass-analysis=inline -Rpass-missed=inline      -fdiagnostics-show-hotness -fdiagnostics-hotness-threshold=10      -verify
: 'RUN: at line 35';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -triple x86_64-apple-macosx10.9 -main-file-name      optimization-remark-with-hotness.c /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c -emit-llvm-only      -fprofile-instrument-use-path=/root/llvm-project-msvc/build/tools/clang/test/Frontend/Output/optimization-remark-with-hotness-new-pm.c.tmp.profdata -Rpass=inline      -O1      -Rpass-analysis=inline -Rpass-missed=inline      -fdiagnostics-show-hotness -fdiagnostics-hotness-threshold=10 -verify
: 'RUN: at line 41';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -triple x86_64-apple-macosx10.9 -main-file-name      optimization-remark-with-hotness.c /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c -emit-llvm-only      -fprofile-instrument-use-path=/root/llvm-project-msvc/build/tools/clang/test/Frontend/Output/optimization-remark-with-hotness-new-pm.c.tmp.profdata -Rpass=inline      -O1      -Rpass-analysis=inline 2>&1 | /root/llvm-project-msvc/build/bin/FileCheck -check-prefix=HOTNESS_OFF /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c
: 'RUN: at line 46';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -triple x86_64-apple-macosx10.9 -main-file-name      optimization-remark-with-hotness.c /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c -emit-llvm-only      -fprofile-instrument-use-path=/root/llvm-project-msvc/build/tools/clang/test/Frontend/Output/optimization-remark-with-hotness-new-pm.c.tmp.profdata -Rpass=inline      -O1      -Rpass-analysis=inline -Rno-pass-with-hotness 2>&1 | /root/llvm-project-msvc/build/bin/FileCheck      -check-prefix=HOTNESS_OFF /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c
: 'RUN: at line 52';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -triple x86_64-apple-macosx10.9 -main-file-name      optimization-remark-with-hotness.c /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c -emit-llvm-only      -fprofile-instrument-use-path=/root/llvm-project-msvc/build/tools/clang/test/Frontend/Output/optimization-remark-with-hotness-new-pm.c.tmp.profdata -Rpass=inline      -Rpass-analysis=inline -fdiagnostics-show-hotness      -fdiagnostics-hotness-threshold=100  2>&1      | /root/llvm-project-msvc/build/bin/FileCheck -allow-empty -check-prefix=THRESHOLD /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c
: 'RUN: at line 58';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -triple x86_64-apple-macosx10.9 -main-file-name      optimization-remark-with-hotness.c /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c -emit-llvm-only      -Rpass=inline -Rpass-analysis=inline      -fdiagnostics-show-hotness -fdiagnostics-hotness-threshold=10 2>&1      | /root/llvm-project-msvc/build/bin/FileCheck -check-prefix=NO_PGO /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c
--
Exit Code: 1

Command Output (stderr):
--
error: 'remark' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c Line 77 (directive at /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c:76): 'foo' inlined into 'bar': always inline attribute at callsite bar:8:10; (hotness:
  File /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c Line 83 (directive at /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c:82): 'bar' inlined into 'main' with
error: 'remark' diagnostics seen but not expected: 
  File /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c Line 85: 'foo' inlined into 'bar': always inline attribute at callsite bar:8:10; (hotness: 30)
  File /root/llvm-project-msvc/clang/test/Frontend/optimization-remark-with-hotness-new-pm.c Line 85: 'bar' inlined into 'main' with (cost=-10, threshold=45) at callsite main:3:5; (hotness: 16)
4 errors generated.

--
```

### 13. Clang.Index :: TestClassDecl.m

- 耗时：0.15 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   /root/llvm-project-msvc/build/bin/c-index-test -write-pch /root/llvm-project-msvc/build/tools/clang/test/Index/Output/TestClassDecl.m.tmp.ast -fobjc-nonfragile-abi -fblocks -x objective-c /root/llvm-project-msvc/clang/test/Index/TestClassDecl.m
: 'RUN: at line 2';   /root/llvm-project-msvc/build/bin/c-index-test -test-file-scan /root/llvm-project-msvc/build/tools/clang/test/Index/Output/TestClassDecl.m.tmp.ast /root/llvm-project-msvc/clang/test/Index/TestClassDecl.m | /root/llvm-project-msvc/build/bin/FileCheck -check-prefix=CHECK-scan /root/llvm-project-msvc/clang/test/Index/TestClassDecl.m
: 'RUN: at line 3';   /root/llvm-project-msvc/build/bin/c-index-test -test-load-tu /root/llvm-project-msvc/build/tools/clang/test/Index/Output/TestClassDecl.m.tmp.ast local | /root/llvm-project-msvc/build/bin/FileCheck -check-prefix=CHECK-load /root/llvm-project-msvc/clang/test/Index/TestClassDecl.m
--
Exit Code: 1

Command Output (stderr):
--
/root/llvm-project-msvc/clang/test/Index/TestClassDecl.m:25:16: error: CHECK-scan: expected string not found in input
// CHECK-scan: [13:15 - 13:18] ObjCClassRef=Foo:10:12
               ^
<stdin>:7:65: note: scanning from here
// CHECK: [13:1 - 13:15] FunctionDecl=function:13:6 (Definition)
                                                                ^
<stdin>:8:8: note: possible intended match here
// CHECK: [13:15 - 13:24] ParmDecl=arg:13:21 (Definition)
       ^

Input file: <stdin>
Check file: /root/llvm-project-msvc/clang/test/Index/TestClassDecl.m

-dump-input=help explains the following input dump.

Input was:
<<<<<<
            1: // CHECK: [1:1 - 8:1] Invalid Cursor => NoDeclFound 
            2: // CHECK: [8:1 - 8:8] ObjCInterfaceDecl=Foo:8:8 
            3: // CHECK: [8:8 - 8:11] ObjCClassRef=Foo:10:12 
            4: // CHECK: [8:11 - 10:1] Invalid Cursor => NoDeclFound 
            5: // CHECK: [10:1 - 11:5] ObjCInterfaceDecl=Foo:10:12 
            6: // CHECK: [11:5 - 13:1] Invalid Cursor => NoDeclFound 
            7: // CHECK: [13:1 - 13:15] FunctionDecl=function:13:6 (Definition) 
check:25'0                                                                     X error: no match found
            8: // CHECK: [13:15 - 13:24] ParmDecl=arg:13:21 (Definition) 
check:25'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
check:25'1            ?                                                   possible intended match
            9: // CHECK: [13:24 - 14:1] FunctionDecl=function:13:6 (Definition) 
check:25'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           10: // CHECK: [14:1 - 16:2] CompoundStmt= 
check:25'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           11: // CHECK: [16:2 - 34:2] Invalid Cursor => NoDeclFound 
check:25'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
>>>>>>

--
```

### 14. Clang.Index :: TestClassForwardDecl.m

- 耗时：0.14 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   /root/llvm-project-msvc/build/bin/c-index-test -write-pch /root/llvm-project-msvc/build/tools/clang/test/Index/Output/TestClassForwardDecl.m.tmp.ast -arch x86_64 -mmacosx-version-min=10.6 /root/llvm-project-msvc/clang/test/Index/TestClassForwardDecl.m
: 'RUN: at line 2';   /root/llvm-project-msvc/build/bin/c-index-test -test-file-scan /root/llvm-project-msvc/build/tools/clang/test/Index/Output/TestClassForwardDecl.m.tmp.ast /root/llvm-project-msvc/clang/test/Index/TestClassForwardDecl.m | /root/llvm-project-msvc/build/bin/FileCheck -check-prefix=CHECK-scan /root/llvm-project-msvc/clang/test/Index/TestClassForwardDecl.m
: 'RUN: at line 3';   /root/llvm-project-msvc/build/bin/c-index-test -test-load-tu /root/llvm-project-msvc/build/tools/clang/test/Index/Output/TestClassForwardDecl.m.tmp.ast local | /root/llvm-project-msvc/build/bin/FileCheck -check-prefix=CHECK-load /root/llvm-project-msvc/clang/test/Index/TestClassForwardDecl.m
--
Exit Code: 1

Command Output (stderr):
--
/root/llvm-project-msvc/clang/test/Index/TestClassForwardDecl.m:20:16: error: CHECK-scan: expected string not found in input
// CHECK-scan: [10:15 - 10:18] ObjCClassRef=Foo:8:8
               ^
<stdin>:5:65: note: scanning from here
// CHECK: [10:1 - 10:15] FunctionDecl=function:10:6 (Definition)
                                                                ^
<stdin>:6:8: note: possible intended match here
// CHECK: [10:15 - 10:24] ParmDecl=arg:10:21 (Definition)
       ^

Input file: <stdin>
Check file: /root/llvm-project-msvc/clang/test/Index/TestClassForwardDecl.m

-dump-input=help explains the following input dump.

Input was:
<<<<<<
            1: // CHECK: [1:1 - 8:1] Invalid Cursor => NoDeclFound 
            2: // CHECK: [8:1 - 8:8] ObjCInterfaceDecl=Foo:8:8 
            3: // CHECK: [8:8 - 8:11] ObjCClassRef=Foo:8:8 
            4: // CHECK: [8:11 - 10:1] Invalid Cursor => NoDeclFound 
            5: // CHECK: [10:1 - 10:15] FunctionDecl=function:10:6 (Definition) 
check:20'0                                                                     X error: no match found
            6: // CHECK: [10:15 - 10:24] ParmDecl=arg:10:21 (Definition) 
check:20'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
check:20'1            ?                                                   possible intended match
            7: // CHECK: [10:24 - 11:1] FunctionDecl=function:10:6 (Definition) 
check:20'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            8: // CHECK: [11:1 - 13:2] CompoundStmt= 
check:20'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            9: // CHECK: [13:2 - 42:2] Invalid Cursor => NoDeclFound 
check:20'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
>>>>>>

--
```

### 15. Clang.Index :: c-index-api-loadTU-test.m

- 耗时：0.22 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   /root/llvm-project-msvc/build/bin/c-index-test -write-pch /root/llvm-project-msvc/build/tools/clang/test/Index/Output/c-index-api-loadTU-test.m.tmp.ast -arch x86_64 -mmacosx-version-min=10.6 -fblocks -x objective-c /root/llvm-project-msvc/clang/test/Index/c-index-api-loadTU-test.m
: 'RUN: at line 2';   /root/llvm-project-msvc/build/bin/c-index-test -test-load-tu /root/llvm-project-msvc/build/tools/clang/test/Index/Output/c-index-api-loadTU-test.m.tmp.ast all > /root/llvm-project-msvc/build/tools/clang/test/Index/Output/c-index-api-loadTU-test.m.tmp 2>&1 && /root/llvm-project-msvc/build/bin/FileCheck --input-file=/root/llvm-project-msvc/build/tools/clang/test/Index/Output/c-index-api-loadTU-test.m.tmp /root/llvm-project-msvc/clang/test/Index/c-index-api-loadTU-test.m
--
Exit Code: 1

Command Output (stderr):
--
/root/llvm-project-msvc/clang/test/Index/c-index-api-loadTU-test.m:107:11: error: CHECK: expected string not found in input
// CHECK: c-index-api-loadTU-test.m:38:4: ObjCClassRef=Foo:4:12 Extent=[38:4 - 38:7]
          ^
/root/llvm-project-msvc/build/tools/clang/test/Index/Output/c-index-api-loadTU-test.m.tmp:425:104: note: scanning from here
// CHECK: c-index-api-loadTU-test.m:38:11: ObjCInstanceMethodDecl=bazMethod:38:11 Extent=[38:1 - 38:21]
                                                                                                       ^
/root/llvm-project-msvc/build/tools/clang/test/Index/Output/c-index-api-loadTU-test.m.tmp:448:11: note: possible intended match here
// CHECK: c-index-api-loadTU-test.m:49:17: ObjCClassRef=Foo:4:12 Extent=[49:17 - 49:20]
          ^

Input file: /root/llvm-project-msvc/build/tools/clang/test/Index/Output/c-index-api-loadTU-test.m.tmp
Check file: /root/llvm-project-msvc/clang/test/Index/c-index-api-loadTU-test.m

-dump-input=help explains the following input dump.

Input was:
<<<<<<
             .
             .
             .
           420: // CHECK: c-index-api-loadTU-test.m:33:12: ObjCInterfaceDecl=Baz:33:12 Extent=[33:1 - 40:5] 
           421: // CHECK: c-index-api-loadTU-test.m:33:18: ObjCSuperClassRef=Bar:14:12 Extent=[33:18 - 33:21] 
           422: // CHECK: c-index-api-loadTU-test.m:33:18: ObjCClassRef=Bar:14:12 Extent=[33:18 - 33:21] 
           423: // CHECK: c-index-api-loadTU-test.m:33:23: ObjCProtocolRef=SubP:29:11 Extent=[33:23 - 33:27] 
           424: // CHECK: c-index-api-loadTU-test.m:35:9: ObjCIvarDecl=_anIVar:35:9 (Definition) Extent=[35:5 - 35:16] 
           425: // CHECK: c-index-api-loadTU-test.m:38:11: ObjCInstanceMethodDecl=bazMethod:38:11 Extent=[38:1 - 38:21] 
check:107'0                                                                                                            X error: no match found
           426: // CHECK: <invalid loc>:0:0: ObjCClassRef=Foo:4:12 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           427: // CHECK: c-index-api-loadTU-test.m:42:1: EnumDecl=:42:1 (Definition) Extent=[42:1 - 44:2] 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           428: // CHECK: c-index-api-loadTU-test.m:43:3: EnumConstantDecl=someEnum:43:3 (Definition) Extent=[43:3 - 43:11] 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           429: // CHECK: c-index-api-loadTU-test.m:46:5: FunctionDecl=main:46:5 (Definition) Extent=[46:1 - 55:2] 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           430: // CHECK: c-index-api-loadTU-test.m:46:15: ParmDecl=argc:46:15 (Definition) Extent=[46:11 - 46:19] 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
             .
             .
             .
           443: // CHECK: c-index-api-loadTU-test.m:49:12: VarDecl=c:49:12 (Definition) Extent=[49:2 - 49:26] 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           444: // CHECK: c-index-api-loadTU-test.m:49:2: TypeRef=id:0:0 Extent=[49:2 - 49:4] 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           445: // CHECK: <invalid loc>:0:0: ObjCProtocolRef=SubP:29:11 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           446: // CHECK: c-index-api-loadTU-test.m:49:16: UnexposedExpr=fooC:10:3 Extent=[49:16 - 49:26] 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           447: // CHECK: c-index-api-loadTU-test.m:49:16: ObjCMessageExpr=fooC:10:3 Extent=[49:16 - 49:26] 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           448: // CHECK: c-index-api-loadTU-test.m:49:17: ObjCClassRef=Foo:4:12 Extent=[49:17 - 49:20] 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
check:107'1               ?                                                                              possible intended match
           449: // CHECK: c-index-api-loadTU-test.m:50:2: DeclStmt= Extent=[50:2 - 50:15] 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           450: // CHECK: c-index-api-loadTU-test.m:50:13: VarDecl=d:50:13 (Definition) Extent=[50:2 - 50:14] 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           451: // CHECK: c-index-api-loadTU-test.m:50:2: TypeRef=id:0:0 Extent=[50:2 - 50:4] 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           452: // CHECK: <invalid loc>:0:0: ObjCProtocolRef=Proto:25:11 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           453: // CHECK: c-index-api-loadTU-test.m:51:2: BinaryOperator= Extent=[51:2 - 51:7] 
check:107'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
             .
             .
             .
>>>>>>

--
```

### 16. Clang.Index :: c-index-getCursor-test.m

- 耗时：0.18 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   /root/llvm-project-msvc/build/bin/c-index-test -write-pch /root/llvm-project-msvc/build/tools/clang/test/Index/Output/c-index-getCursor-test.m.tmp.ast -arch x86_64 -mmacosx-version-min=10.6 -fblocks -x objective-c /root/llvm-project-msvc/clang/test/Index/c-index-getCursor-test.m
: 'RUN: at line 2';   /root/llvm-project-msvc/build/bin/c-index-test -test-file-scan /root/llvm-project-msvc/build/tools/clang/test/Index/Output/c-index-getCursor-test.m.tmp.ast /root/llvm-project-msvc/clang/test/Index/c-index-getCursor-test.m > /root/llvm-project-msvc/build/tools/clang/test/Index/Output/c-index-getCursor-test.m.tmp 2>&1 && /root/llvm-project-msvc/build/bin/FileCheck --input-file=/root/llvm-project-msvc/build/tools/clang/test/Index/Output/c-index-getCursor-test.m.tmp /root/llvm-project-msvc/clang/test/Index/c-index-getCursor-test.m
--
Exit Code: 1

Command Output (stderr):
--
/root/llvm-project-msvc/clang/test/Index/c-index-getCursor-test.m:100:11: error: CHECK: expected string not found in input
// CHECK: [36:1 - 36:4] ObjCInstanceMethodDecl=bazMethod:36:1
          ^
/root/llvm-project-msvc/build/tools/clang/test/Index/Output/c-index-getCursor-test.m.tmp:38:53: note: scanning from here
// CHECK: [33:16 - 36:1] ObjCInterfaceDecl=Baz:31:12
                                                    ^
/root/llvm-project-msvc/build/tools/clang/test/Index/Output/c-index-getCursor-test.m.tmp:39:11: note: possible intended match here
// CHECK: [36:1 - 36:21] ObjCInstanceMethodDecl=bazMethod:36:11
          ^

Input file: /root/llvm-project-msvc/build/tools/clang/test/Index/Output/c-index-getCursor-test.m.tmp
Check file: /root/llvm-project-msvc/clang/test/Index/c-index-getCursor-test.m

-dump-input=help explains the following input dump.

Input was:
<<<<<<
             .
             .
             .
            33: // CHECK: [31:18 - 31:21] ObjCSuperClassRef=Bar:12:12 
            34: // CHECK: [31:21 - 31:23] ObjCInterfaceDecl=Baz:31:12 
            35: // CHECK: [31:23 - 31:27] ObjCProtocolRef=SubP:27:11 
            36: // CHECK: [31:27 - 33:5] ObjCInterfaceDecl=Baz:31:12 
            37: // CHECK: [33:5 - 33:16] ObjCIvarDecl=_anIVar:33:9 (Definition) 
            38: // CHECK: [33:16 - 36:1] ObjCInterfaceDecl=Baz:31:12 
check:100'0                                                         X error: no match found
            39: // CHECK: [36:1 - 36:21] ObjCInstanceMethodDecl=bazMethod:36:11 
check:100'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
check:100'1               ?                                                      possible intended match
            40: // CHECK: [36:21 - 38:5] ObjCInterfaceDecl=Baz:31:12 
check:100'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            41: // CHECK: [38:5 - 40:1] Invalid Cursor => NoDeclFound 
check:100'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            42: // CHECK: [40:1 - 41:3] EnumDecl=:40:1 (Definition) 
check:100'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            43: // CHECK: [41:3 - 41:11] EnumConstantDecl=someEnum:41:3 (Definition) 
check:100'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            44: // CHECK: [41:11 - 42:2] EnumDecl=:40:1 (Definition) 
check:100'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
             .
             .
             .
>>>>>>

--
```

### 17. Clang.Index :: index-module.m

- 耗时：0.62 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 6';   rm -rf /root/llvm-project-msvc/build/tools/clang/test/Index/Output/index-module.m.tmp.cache /root/llvm-project-msvc/build/tools/clang/test/Index/Output/index-module.m.tmp.cache.sys
: 'RUN: at line 7';   /root/llvm-project-msvc/build/bin/c-index-test -index-file /root/llvm-project-msvc/clang/test/Index/index-module.m -fmodules-cache-path=/root/llvm-project-msvc/build/tools/clang/test/Index/Output/index-module.m.tmp.cache -fmodules -F /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs       -Xclang -fdisable-module-hash | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/Index/index-module.m
: 'RUN: at line 9';   /root/llvm-project-msvc/build/bin/c-index-test -index-file /root/llvm-project-msvc/clang/test/Index/index-module.m -fmodules-cache-path=/root/llvm-project-msvc/build/tools/clang/test/Index/Output/index-module.m.tmp.cache.sys -fmodules -iframework /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs       -Xclang -fdisable-module-hash | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/Index/index-module.m
: 'RUN: at line 11';   /root/llvm-project-msvc/build/bin/c-index-test -index-file /root/llvm-project-msvc/clang/test/Index/index-module.m -fmodules-cache-path=/root/llvm-project-msvc/build/tools/clang/test/Index/Output/index-module.m.tmp.cache -fmodules -gmodules -F /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs       -Xclang -fdisable-module-hash | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/Index/index-module.m
: 'RUN: at line 22';   /root/llvm-project-msvc/build/bin/c-index-test -index-tu /root/llvm-project-msvc/build/tools/clang/test/Index/Output/index-module.m.tmp.cache/DependsOnModule.pcm | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/Index/index-module.m -check-prefix=CHECK-DMOD
: 'RUN: at line 23';   /root/llvm-project-msvc/build/bin/c-index-test -index-tu /root/llvm-project-msvc/build/tools/clang/test/Index/Output/index-module.m.tmp.cache.sys/DependsOnModule.pcm | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/Index/index-module.m -check-prefix=CHECK-DMOD-AST
: 'RUN: at line 44';   /root/llvm-project-msvc/build/bin/c-index-test -index-tu /root/llvm-project-msvc/build/tools/clang/test/Index/Output/index-module.m.tmp.cache/Module.pcm | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/Index/index-module.m -check-prefix=CHECK-TMOD
--
Exit Code: 1

Command Output (stderr):
--
/root/llvm-project-msvc/clang/test/Index/index-module.m:61:21: error: CHECK-TMOD-NEXT: expected string not found in input
// CHECK-TMOD-NEXT: [indexEntityReference]: kind: typedef | name: FILE | {{.*}} | loc: [[TMOD_MODULE_H]]:32:8
                    ^
<stdin>:15:214: note: scanning from here
[indexDeclaration]: kind: variable | name: myFile | USR: c:@myFile | lang: C | cursor: VarDecl=myFile:32:14 | loc: /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs/Module.framework/Headers/Module.h:32:14 | semantic-container: [TU] | lexical-container: [TU] | isRedecl: 0 | isDef: 0 | isContainer: 0 | isImplicit: 0
                                                                                                                                                                                                                     ^
<stdin>:15:214: note: with "TMOD_MODULE_H" equal to "/root/llvm-project-msvc/clang/test/Index/\\.\\./Modules/Inputs/Module\\.framework/Headers/Module\\.h"
[indexDeclaration]: kind: variable | name: myFile | USR: c:@myFile | lang: C | cursor: VarDecl=myFile:32:14 | loc: /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs/Module.framework/Headers/Module.h:32:14 | semantic-container: [TU] | lexical-container: [TU] | isRedecl: 0 | isDef: 0 | isContainer: 0 | isImplicit: 0
                                                                                                                                                                                                                     ^

Input file: <stdin>
Check file: /root/llvm-project-msvc/clang/test/Index/index-module.m

-dump-input=help explains the following input dump.

Input was:
<<<<<<
           .
           .
           .
          10: [indexDeclaration]: kind: objc-class-method | name: version | USR: c:objc(cs)Module(cm)version | lang: ObjC | cursor: ObjCClassMethodDecl=version:16:16 | loc: /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs/Module.framework/Headers/Module.h:16:16 | semantic-container: [Module:15:12] | lexical-container: [Module:15:12] | isRedecl: 0 | isDef: 0 | isContainer: 0 | isImplicit: 0 
          11: [indexDeclaration]: kind: objc-class-method | name: alloc | USR: c:objc(cs)Module(cm)alloc | lang: ObjC | cursor: ObjCClassMethodDecl=alloc:17:2 | loc: /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs/Module.framework/Headers/Module.h:17:2 | semantic-container: [Module:15:12] | lexical-container: [Module:15:12] | isRedecl: 0 | isDef: 0 | isContainer: 0 | isImplicit: 0 
          12: [indexDeclaration]: kind: typedef | name: FILE | USR: c:Module.h@T@FILE | lang: C | cursor: TypedefDecl=FILE:30:3 (Definition) | loc: /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs/Module.framework/Headers/Module.h:30:3 | semantic-container: [TU] | lexical-container: [TU] | isRedecl: 0 | isDef: 1 | isContainer: 0 | isImplicit: 0 
          13: [indexDeclaration]: kind: struct | name: __sFILE | USR: c:@S@__sFILE | lang: C | cursor: StructDecl=__sFILE:28:16 (Definition) | loc: /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs/Module.framework/Headers/Module.h:28:16 | semantic-container: [TU] | lexical-container: [TU] | isRedecl: 0 | isDef: 1 | isContainer: 1 | isImplicit: 0 
          14: [indexDeclaration]: kind: field | name: _offset | USR: c:@S@__sFILE@FI@_offset | lang: C | cursor: FieldDecl=_offset:29:7 (Definition) | loc: /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs/Module.framework/Headers/Module.h:29:7 | semantic-container: [__sFILE:28:16] | lexical-container: [__sFILE:28:16] | isRedecl: 0 | isDef: 1 | isContainer: 0 | isImplicit: 0 
          15: [indexDeclaration]: kind: variable | name: myFile | USR: c:@myFile | lang: C | cursor: VarDecl=myFile:32:14 | loc: /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs/Module.framework/Headers/Module.h:32:14 | semantic-container: [TU] | lexical-container: [TU] | isRedecl: 0 | isDef: 0 | isContainer: 0 | isImplicit: 0 
next:61'0                                                                                                                                                                                                                          X~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ error: no match found
next:61'1                                                                                                                                                                                                                                                                                                                                           with "TMOD_MODULE_H" equal to "/root/llvm-project-msvc/clang/test/Index/\\.\\./Modules/Inputs/Module\\.framework/Headers/Module\\.h"
          16: [indexDeclaration]: kind: variable | name: Module_Sub | USR: c:@Module_Sub | lang: C | cursor: VarDecl=Module_Sub:2:6 | loc: /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs/Module.framework/Headers/Sub.h:2:6 | semantic-container: [TU] | lexical-container: [TU] | isRedecl: 0 | isDef: 1 | isContainer: 0 | isImplicit: 0 
next:61'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
          17: [indexDeclaration]: kind: variable | name: Module_Sub2 | USR: c:@Module_Sub2 | lang: C | cursor: VarDecl=Module_Sub2:1:6 | loc: /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs/Module.framework/Headers/Sub2.h:1:6 | semantic-container: [TU] | lexical-container: [TU] | isRedecl: 0 | isDef: 1 | isContainer: 0 | isImplicit: 0 
next:61'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
          18: [indexDeclaration]: kind: variable | name: Buried_Treasure | USR: c:@Buried_Treasure | lang: C | cursor: VarDecl=Buried_Treasure:1:11 | loc: /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs/Module.framework/Headers/Buried/Treasure.h:1:11 | semantic-container: [TU] | lexical-container: [TU] | isRedecl: 0 | isDef: 1 | isContainer: 0 | isImplicit: 0 
next:61'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
          19: [indexDeclaration]: kind: variable | name: module_subframework | USR: c:@module_subframework | lang: C | cursor: VarDecl=module_subframework:4:7 | loc: /root/llvm-project-msvc/clang/test/Index/../Modules/Inputs/Module.framework/Frameworks/SubFramework.framework/Headers/SubFramework.h:4:7 | semantic-container: [TU] | lexical-container: [TU] | isRedecl: 0 | isDef: 1 | isContainer: 0 | isImplicit: 0 
next:61'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
>>>>>>

--
```

### 18. Clang.Index :: targeted-cursor.m

- 耗时：0.29 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 3';   /root/llvm-project-msvc/build/bin/c-index-test -write-pch /root/llvm-project-msvc/build/tools/clang/test/Index/Output/targeted-cursor.m.tmp.h.pch -target x86_64-apple-macosx10.7 -x objective-c-header /root/llvm-project-msvc/clang/test/Index/targeted-cursor.m.h -Xclang -detailed-preprocessing-record
: 'RUN: at line 4';   /root/llvm-project-msvc/build/bin/c-index-test -cursor-at=/root/llvm-project-msvc/clang/test/Index/targeted-cursor.m.h:5:13 /root/llvm-project-msvc/clang/test/Index/targeted-cursor.m -target x86_64-apple-macosx10.7 -include /root/llvm-project-msvc/build/tools/clang/test/Index/Output/targeted-cursor.m.tmp.h | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/Index/targeted-cursor.m
--
Exit Code: 1

Command Output (stderr):
--
/root/llvm-project-msvc/clang/test/Index/targeted-cursor.m:6:11: error: CHECK: expected string not found in input
// CHECK: ObjCClassRef=I:2:12
          ^
<stdin>:1:1: note: scanning from here
5:16 ParmDecl=i:5:16 (Definition) Extent=[5:13 - 5:17] Spelling=i ([5:16 - 5:17])
^

Input file: <stdin>
Check file: /root/llvm-project-msvc/clang/test/Index/targeted-cursor.m

-dump-input=help explains the following input dump.

Input was:
<<<<<<
         1: 5:16 ParmDecl=i:5:16 (Definition) Extent=[5:13 - 5:17] Spelling=i ([5:16 - 5:17]) 
check:6     X~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ error: no match found
         2: Completion string: {ResultType I *}{TypedText i} 
check:6     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
>>>>>>

--
```

### 19. Clang.Lexer :: SourceLocationsOverflow.c

- 耗时：2.09 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   not /root/llvm-project-msvc/build/bin/clang /root/llvm-project-msvc/clang/test/Lexer/SourceLocationsOverflow.c -S -o - 2>&1 | /root/llvm-project-msvc/build/bin/FileCheck /root/llvm-project-msvc/clang/test/Lexer/SourceLocationsOverflow.c
--
Exit Code: 1

Command Output (stderr):
--
/root/llvm-project-msvc/clang/test/Lexer/SourceLocationsOverflow.c:2:11: error: CHECK: expected string not found in input
// CHECK: In file included from {{.*}}SourceLocationsOverflow.c
          ^
<stdin>:1:1: note: scanning from here
 .text
^
<stdin>:2:2: note: possible intended match here
 .file "SourceLocationsOverflow.c"
 ^

Input file: <stdin>
Check file: /root/llvm-project-msvc/clang/test/Lexer/SourceLocationsOverflow.c

-dump-input=help explains the following input dump.

Input was:
<<<<<<
           1:  .text 
check:2'0     X~~~~~~ error: no match found
           2:  .file "SourceLocationsOverflow.c" 
check:2'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
check:2'1      ?                                  possible intended match
           3:  .ident "clang version 15.0.7 (git@github.com:lzyoyzl/llvm-project-msvc.git 3a01228d025ba16db128a0a771d323e753f2c9f6)" 
check:2'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           4:  .section ".note.GNU-stack","",@progbits 
check:2'0     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
           5:  .addrsig 
check:2'0     ~~~~~~~~~~
>>>>>>

--
```

### 20. Clang.Misc :: backend-optimization-failure.cpp

- 耗时：0.03 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -triple x86_64-unknown-unknown /root/llvm-project-msvc/clang/test/Misc/backend-optimization-failure.cpp -O3 -emit-llvm -debug-info-kind=line-tables-only -S -verify -o /dev/null
--
Exit Code: 1

Command Output (stderr):
--
error: 'warning' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/Misc/backend-optimization-failure.cpp Line 9 (directive at /root/llvm-project-msvc/clang/test/Misc/backend-optimization-failure.cpp:10): loop not vectorized: the optimizer was unable to perform the requested transformation; the transformation might be disabled or specified as part of an unsupported transformation ordering
error: 'warning' diagnostics seen but not expected: 
  File /root/llvm-project-msvc/clang/test/Misc/backend-optimization-failure.cpp Line 21: loop not vectorized: the optimizer was unable to perform the requested transformation; the transformation might be disabled or specified as part of an unsupported transformation ordering
2 errors generated.

--
```

### 21. Clang.Modules :: odr_hash.cpp

- 耗时：0.18 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 2';   rm -rf /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp
: 'RUN: at line 3';   mkdir /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp
: 'RUN: at line 4';   mkdir /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/cache
: 'RUN: at line 5';   mkdir /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs
: 'RUN: at line 8';   echo "#define FIRST" >> /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs/first.h
: 'RUN: at line 9';   cat /root/llvm-project-msvc/clang/test/Modules/odr_hash.cpp               >> /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs/first.h
: 'RUN: at line 12';   echo "#define SECOND" >> /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs/second.h
: 'RUN: at line 13';   cat /root/llvm-project-msvc/clang/test/Modules/odr_hash.cpp                >> /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs/second.h
: 'RUN: at line 16';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -fsyntax-only -x c++ -std=c++1z /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs/first.h
: 'RUN: at line 17';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -fsyntax-only -x c++ -std=c++1z /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs/second.h
: 'RUN: at line 20';   echo "module FirstModule {"     >> /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs/module.map
: 'RUN: at line 21';   echo "    header \"first.h\""   >> /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs/module.map
: 'RUN: at line 22';   echo "}"                        >> /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs/module.map
: 'RUN: at line 23';   echo "module SecondModule {"    >> /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs/module.map
: 'RUN: at line 24';   echo "    header \"second.h\""  >> /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs/module.map
: 'RUN: at line 25';   echo "}"                        >> /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs/module.map
: 'RUN: at line 28';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -triple x86_64-linux-gnu -x c++ -std=c++1z    -fmodules -fimplicit-module-maps -fmodules-cache-path=/root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/cache    -I/root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs -verify /root/llvm-project-msvc/clang/test/Modules/odr_hash.cpp
--
Exit Code: 1

Command Output (stderr):
--
error: 'error' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs/second.h Line * (directive at /root/llvm-project-msvc/clang/test/Modules/odr_hash.cpp:4605): 'FunctionDecl::F7' has different definitions in different modules; definition in module 'SecondModule' first difference is return type is 'int'
error: 'error' diagnostics seen but not expected: 
  Line 0: 'FunctionDecl::F7' has different definitions in different modules; definition in module 'SecondModule' first difference is return type is 'int'
error: 'note' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/odr_hash.cpp.tmp/Inputs/first.h Line * (directive at /root/llvm-project-msvc/clang/test/Modules/odr_hash.cpp:4606): but in 'FirstModule' found different return type 'FunctionDecl::I' (aka 'int')
error: 'note' diagnostics seen but not expected: 
  Line 0: but in 'FirstModule' found different return type 'FunctionDecl::I' (aka 'int')
4 errors generated.

--
```

### 22. Clang.Modules :: suggest-include.cpp

- 耗时：0.04 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   rm -rf /root/llvm-project-msvc/build/tools/clang/test/Modules/Output/suggest-include.cpp.tmp
: 'RUN: at line 2';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -fmodules -fmodules-cache-path=/root/llvm-project-msvc/build/tools/clang/test/Modules/Output/suggest-include.cpp.tmp -fimplicit-module-maps -I/root/llvm-project-msvc/clang/test/Modules/Inputs/suggest-include /root/llvm-project-msvc/clang/test/Modules/suggest-include.cpp -verify
--
Exit Code: 1

Command Output (stderr):
--
error: 'error' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/Modules/suggest-include.cpp Line 16: missing '#include "usetextual1.h"'
error: 'error' diagnostics seen but not expected: 
  File /root/llvm-project-msvc/clang/test/Modules/suggest-include.cpp Line 16: declaration of 'usetextual1' must be imported from module 'X.A' before it is required
error: 'note' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/Modules/Inputs/suggest-include/usetextual1.h Line 2 (directive at /root/llvm-project-msvc/clang/test/Modules/suggest-include.cpp:6): here
error: 'note' diagnostics seen but not expected: 
  Line 0: declaration here is not visible
4 errors generated.

--
```

### 23. Clang.OpenMP :: remarks_parallel_in_multiple_target_state_machines.c

- 耗时：0.09 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc                                 -verify=host      -Rpass=openmp-opt -Rpass-analysis=openmp-opt -fopenmp -x c++ -triple powerpc64le-unknown-unknown -fopenmp-targets=nvptx64-nvidia-cuda -emit-llvm-bc /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c -o /root/llvm-project-msvc/build/tools/clang/test/OpenMP/Output/remarks_parallel_in_multiple_target_state_machines.c.tmp-ppc-host.bc
: 'RUN: at line 2';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc                                 -verify=all,safe  -Rpass=openmp-opt -Rpass-analysis=openmp-opt -fopenmp -O2 -x c++ -triple nvptx64-unknown-unknown -fopenmp-targets=nvptx64-nvidia-cuda -emit-llvm /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c -fopenmp-is-device -fopenmp-host-ir-file-path /root/llvm-project-msvc/build/tools/clang/test/OpenMP/Output/remarks_parallel_in_multiple_target_state_machines.c.tmp-ppc-host.bc -o /root/llvm-project-msvc/build/tools/clang/test/OpenMP/Output/remarks_parallel_in_multiple_target_state_machines.c.tmp.out
: 'RUN: at line 3';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -verify=all,safe  -Rpass=openmp-opt -Rpass-analysis=openmp-opt -fopenmp -O2 -x c++ -triple nvptx64-unknown-unknown -fopenmp-targets=nvptx64-nvidia-cuda -emit-llvm /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c -fopenmp-is-device -fopenmp-host-ir-file-path /root/llvm-project-msvc/build/tools/clang/test/OpenMP/Output/remarks_parallel_in_multiple_target_state_machines.c.tmp-ppc-host.bc -o /root/llvm-project-msvc/build/tools/clang/test/OpenMP/Output/remarks_parallel_in_multiple_target_state_machines.c.tmp.out
--
Exit Code: 1

Command Output (stderr):
--
error: 'remark' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 10 (directive at /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c:11): Parallel region is used in unknown ways. Will not attempt to rewrite the state machine. [OMP101]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 16 (directive at /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c:17): Parallel region is used in unknown ways. Will not attempt to rewrite the state machine. [OMP101]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 23 (directive at /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c:24): Rewriting generic-mode kernel with a customized state machine. [OMP131]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 27: Value has potential side effects preventing SPMD-mode execution. Add `__attribute__((assume("ompx_spmd_amenable")))` to the called function to override. [OMP121]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 39 (directive at /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c:40): Rewriting generic-mode kernel with a customized state machine. [OMP131]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 42: Value has potential side effects preventing SPMD-mode execution. Add `__attribute__((assume("ompx_spmd_amenable")))` to the called function to override. [OMP121]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 57 (directive at /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c:58): Rewriting generic-mode kernel with a customized state machine. [OMP131]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 60: Value has potential side effects preventing SPMD-mode execution. Add `__attribute__((assume("ompx_spmd_amenable")))` to the called function to override. [OMP121]
error: 'remark' diagnostics seen but not expected: 
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 86: Value has potential side effects preventing SPMD-mode execution. Add `__attribute__((assume("ompx_spmd_amenable")))` to the called function to override. [OMP121]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 86: Rewriting generic-mode kernel with a customized state machine. [OMP131]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 86: Value has potential side effects preventing SPMD-mode execution. Add `__attribute__((assume("ompx_spmd_amenable")))` to the called function to override. [OMP121]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 86: Rewriting generic-mode kernel with a customized state machine. [OMP131]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 86: Value has potential side effects preventing SPMD-mode execution. Add `__attribute__((assume("ompx_spmd_amenable")))` to the called function to override. [OMP121]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 86: Rewriting generic-mode kernel with a customized state machine. [OMP131]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 86: Parallel region is used in unknown ways. Will not attempt to rewrite the state machine. [OMP101]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_multiple_target_state_machines.c Line 86: Parallel region is used in unknown ways. Will not attempt to rewrite the state machine. [OMP101]
16 errors generated.

--
```

### 24. Clang.OpenMP :: remarks_parallel_in_target_state_machine.c

- 耗时：0.08 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc                                 -verify=host -Rpass=openmp-opt -Rpass-analysis=openmp-opt -fopenmp -x c++ -triple powerpc64le-unknown-unknown -fopenmp-targets=nvptx64-nvidia-cuda -emit-llvm-bc /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_target_state_machine.c -o /root/llvm-project-msvc/build/tools/clang/test/OpenMP/Output/remarks_parallel_in_target_state_machine.c.tmp-ppc-host.bc
: 'RUN: at line 2';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -verify      -Rpass=openmp-opt -Rpass-analysis=openmp-opt -fopenmp -O2 -x c++ -triple nvptx64-unknown-unknown -fopenmp-targets=nvptx64-nvidia-cuda -emit-llvm /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_target_state_machine.c -fopenmp-is-device -fopenmp-host-ir-file-path /root/llvm-project-msvc/build/tools/clang/test/OpenMP/Output/remarks_parallel_in_target_state_machine.c.tmp-ppc-host.bc -o /root/llvm-project-msvc/build/tools/clang/test/OpenMP/Output/remarks_parallel_in_target_state_machine.c.tmp.out
--
Exit Code: 1

Command Output (stderr):
--
error: 'remark' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_target_state_machine.c Line 9: Parallel region is used in unknown ways. Will not attempt to rewrite the state machine. [OMP101]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_target_state_machine.c Line 16 (directive at /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_target_state_machine.c:17): Rewriting generic-mode kernel with a customized state machine. [OMP131]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_target_state_machine.c Line 19: Value has potential side effects preventing SPMD-mode execution. Add `__attribute__((assume("ompx_spmd_amenable")))` to the called function to override. [OMP121]
error: 'remark' diagnostics seen but not expected: 
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_target_state_machine.c Line 42: Value has potential side effects preventing SPMD-mode execution. Add `__attribute__((assume("ompx_spmd_amenable")))` to the called function to override. [OMP121]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_target_state_machine.c Line 42: Rewriting generic-mode kernel with a customized state machine. [OMP131]
  File /root/llvm-project-msvc/clang/test/OpenMP/remarks_parallel_in_target_state_machine.c Line 42: Parallel region is used in unknown ways. Will not attempt to rewrite the state machine. [OMP101]
6 errors generated.

--
```

### 25. Clang.PCH :: variables.c

- 耗时：0.08 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 2';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -include /root/llvm-project-msvc/clang/test/PCH/variables.c -fsyntax-only -verify /root/llvm-project-msvc/clang/test/PCH/variables.c
: 'RUN: at line 5';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -emit-pch -o /root/llvm-project-msvc/build/tools/clang/test/PCH/Output/variables.c.tmp /root/llvm-project-msvc/clang/test/PCH/variables.c
: 'RUN: at line 6';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -include-pch /root/llvm-project-msvc/build/tools/clang/test/PCH/Output/variables.c.tmp -fsyntax-only -verify /root/llvm-project-msvc/clang/test/PCH/variables.c
--
Exit Code: 1

Command Output (stderr):
--
error: 'note' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/PCH/variables.c Line 19 (directive at /root/llvm-project-msvc/clang/test/PCH/variables.c:37): previous definition is here
error: 'note' diagnostics seen but not expected: 
  Line 0: previous definition is here
2 errors generated.

--
```

### 26. Clang.Preprocessor :: line-directive.c

- 耗时：0.02 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -std=c99 -fsyntax-only -verify -pedantic /root/llvm-project-msvc/clang/test/Preprocessor/line-directive.c
: 'RUN: at line 2';   not /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -E /root/llvm-project-msvc/clang/test/Preprocessor/line-directive.c 2>&1 | grep 'blonk.c:92:2: error: ABC'
: 'RUN: at line 3';   not /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -E /root/llvm-project-msvc/clang/test/Preprocessor/line-directive.c 2>&1 | grep 'blonk.c:93:2: error: DEF'
: 'RUN: at line 4';   not /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -E /root/llvm-project-msvc/clang/test/Preprocessor/line-directive.c 2>&1 | grep 'line-directive.c:11:2: error: MAIN7'
: 'RUN: at line 5';   not /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -E /root/llvm-project-msvc/clang/test/Preprocessor/line-directive.c 2>&1 | grep 'enter-1:118:2: error: ENTER1'
: 'RUN: at line 6';   not /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -E /root/llvm-project-msvc/clang/test/Preprocessor/line-directive.c 2>&1 | grep 'main:121:2: error: MAIN2'
--
Exit Code: 1

Command Output (stderr):
--
error: 'warning' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/Preprocessor/line-directive.c Line 2147483647: C requires #line number to be less than 2147483648, allowed as extension
1 error generated.

--
```

### 27. Clang.Profile :: misexpect-branch.c

- 耗时：0.06 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 4';   llvm-profdata merge /root/llvm-project-msvc/clang/test/Profile/Inputs/misexpect-branch.proftext -o /root/llvm-project-msvc/build/tools/clang/test/Profile/Output/misexpect-branch.c.tmp.profdata
: 'RUN: at line 5';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc /root/llvm-project-msvc/clang/test/Profile/misexpect-branch.c -O2 -o - -emit-llvm -fprofile-instrument-use-path=/root/llvm-project-msvc/build/tools/clang/test/Profile/Output/misexpect-branch.c.tmp.profdata -verify=imprecise -Wmisexpect
: 'RUN: at line 6';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc /root/llvm-project-msvc/clang/test/Profile/misexpect-branch.c -O2 -o - -emit-llvm -fprofile-instrument-use-path=/root/llvm-project-msvc/build/tools/clang/test/Profile/Output/misexpect-branch.c.tmp.profdata -verify=exact -Wmisexpect -debug-info-kind=line-tables-only
: 'RUN: at line 9';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc /root/llvm-project-msvc/clang/test/Profile/misexpect-branch.c -O2 -o - -emit-llvm -fprofile-instrument-use-path=/root/llvm-project-msvc/build/tools/clang/test/Profile/Output/misexpect-branch.c.tmp.profdata -verify=foo -fdiagnostics-misexpect-tolerance=10 -Wmisexpect -debug-info-kind=line-tables-only
: 'RUN: at line 10';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc /root/llvm-project-msvc/clang/test/Profile/misexpect-branch.c -O2 -o - -disable-llvm-passes -emit-llvm -fprofile-instrument-use-path=/root/llvm-project-msvc/build/tools/clang/test/Profile/Output/misexpect-branch.c.tmp.profdata -verify=foo
: 'RUN: at line 13';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc /root/llvm-project-msvc/clang/test/Profile/misexpect-branch.c -O2 -o - -emit-llvm  -fdiagnostics-misexpect-tolerance=10 -Wmisexpect -debug-info-kind=line-tables-only 2>&1 | /root/llvm-project-msvc/build/bin/FileCheck -check-prefix=NO_PGO /root/llvm-project-msvc/clang/test/Profile/misexpect-branch.c
--
Exit Code: 1

Command Output (stdout):
--
; ModuleID = '/root/llvm-project-msvc/clang/test/Profile/misexpect-branch.c'
source_filename = "/root/llvm-project-msvc/clang/test/Profile/misexpect-branch.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@inner_loop = local_unnamed_addr constant i32 100, align 4
@outer_loop = local_unnamed_addr constant i32 2000, align 4

; Function Attrs: nounwind
define dso_local i32 @bar() local_unnamed_addr #0 !prof !39 {
entry:
  %call = tail call i32 (...) @buzz() #2
  %rem = srem i32 %call, 200000
  %cmp = icmp eq i32 %rem, 0
  br i1 %cmp, label %if.then, label %if.else, !prof !40

if.then:                                          ; preds = %entry
  %call2 = tail call i32 @baz(i32 noundef %call) #2
  br label %if.end

if.else:                                          ; preds = %entry
  %call3 = tail call i32 @foo(i32 noundef 50) #2
  br label %if.end

if.end:                                           ; preds = %if.else, %if.then
  %x.0 = phi i32 [ %call2, %if.then ], [ %call3, %if.else ]
  ret i32 %x.0
}

declare i32 @buzz(...) local_unnamed_addr #1

declare i32 @baz(i32 noundef) local_unnamed_addr #1

declare i32 @foo(i32 noundef) local_unnamed_addr #1

; Function Attrs: nounwind
define dso_local i32 @fizz() local_unnamed_addr #0 !prof !39 {
entry:
  %call = tail call i32 (...) @buzz() #2
  %rem = srem i32 %call, 200000
  %cmp = icmp eq i32 %rem, 0
  br i1 %cmp, label %if.then, label %if.else, !prof !41

if.then:                                          ; preds = %entry
  %call2 = tail call i32 @baz(i32 noundef %call) #2
  br label %if.end

if.else:                                          ; preds = %entry
  %call3 = tail call i32 @foo(i32 noundef 50) #2
  br label %if.end

if.end:                                           ; preds = %if.else, %if.then
  %x.0 = phi i32 [ %call2, %if.then ], [ %call3, %if.else ]
  ret i32 %x.0
}

attributes #0 = { nounwind "frame-pointer"="none" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-features"="+cx8,+mmx,+sse,+sse2,+x87" }
attributes #1 = { "frame-pointer"="none" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-features"="+cx8,+mmx,+sse,+sse2,+x87" }
attributes #2 = { nounwind }

!llvm.module.flags = !{!0, !29, !30}
!llvm.ident = !{!38}

!0 = !{i32 1, !"ProfileSummary", !1}
!1 = !{!2, !3, !4, !5, !6, !7, !8, !9, !10, !11}
!2 = !{!"ProfileFormat", !"InstrProf"}
!3 = !{!"TotalCount", i64 598000}
!4 = !{!"MaxCount", i64 200000}
!5 = !{!"MaxInternalCount", i64 180000}
!6 = !{!"MaxFunctionCount", i64 200000}
!7 = !{!"NumCounts", i64 4}
!8 = !{!"NumFunctions", i64 2}
!9 = !{!"IsPartialProfile", i64 0}
!10 = !{!"PartialProfileRatio", double 0.000000e+00}
!11 = !{!"DetailedSummary", !12}
!12 = !{!13, !14, !15, !16, !17, !18, !19, !20, !21, !22, !23, !24, !25, !26, !27, !28}
!13 = !{i32 10000, i64 200000, i32 2}
!14 = !{i32 100000, i64 200000, i32 2}
!15 = !{i32 200000, i64 200000, i32 2}
!16 = !{i32 300000, i64 200000, i32 2}
!17 = !{i32 400000, i64 200000, i32 2}
!18 = !{i32 500000, i64 200000, i32 2}
!19 = !{i32 600000, i64 200000, i32 2}
!20 = !{i32 700000, i64 180000, i32 3}
!21 = !{i32 800000, i64 180000, i32 3}
!22 = !{i32 900000, i64 180000, i32 3}
!23 = !{i32 950000, i64 180000, i32 3}
!24 = !{i32 990000, i64 18000, i32 4}
!25 = !{i32 999000, i64 18000, i32 4}
!26 = !{i32 999900, i64 18000, i32 4}
!27 = !{i32 999990, i64 18000, i32 4}
!28 = !{i32 999999, i64 18000, i32 4}
!29 = !{i32 1, !"wchar_size", i32 4}
!30 = !{i32 5, !"CG Profile", !31}
!31 = distinct !{!32, !33, !34, !35, !36, !37}
!32 = !{ptr @bar, ptr @buzz, i64 200000}
!33 = !{ptr @bar, ptr @baz, i64 199900}
!34 = !{ptr @bar, ptr @foo, i64 100}
!35 = !{ptr @fizz, ptr @buzz, i64 200000}
!36 = !{ptr @fizz, ptr @baz, i64 100}
!37 = !{ptr @fizz, ptr @foo, i64 199900}
!38 = !{!"clang version 15.0.7 (git@github.com:lzyoyzl/llvm-project-msvc.git 3a01228d025ba16db128a0a771d323e753f2c9f6)"}
!39 = !{!"function_entry_count", i64 200000}
!40 = !{!"branch_weights", i32 2000, i32 1}
!41 = !{!"branch_weights", i32 1, i32 2000}
; ModuleID = '/root/llvm-project-msvc/clang/test/Profile/misexpect-branch.c'
source_filename = "/root/llvm-project-msvc/clang/test/Profile/misexpect-branch.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@inner_loop = local_unnamed_addr constant i32 100, align 4
@outer_loop = local_unnamed_addr constant i32 2000, align 4

; Function Attrs: nounwind
define dso_local i32 @bar() local_unnamed_addr #0 !dbg !42 !prof !46 {
entry:
  %call = tail call i32 (...) @buzz() #2, !dbg !47
  %rem = srem i32 %call, 200000, !dbg !48
  %cmp = icmp eq i32 %rem, 0, !dbg !48
  br i1 %cmp, label %if.then, label %if.else, !dbg !48, !prof !49

if.then:                                          ; preds = %entry
  %call2 = tail call i32 @baz(i32 noundef %call) #2, !dbg !50
  br label %if.end, !dbg !51

if.else:                                          ; preds = %entry
  %call3 = tail call i32 @foo(i32 noundef 50) #2, !dbg !52
  br label %if.end

if.end:                                           ; preds = %if.else, %if.then
  %x.0 = phi i32 [ %call2, %if.then ], [ %call3, %if.else ], !dbg !53
  ret i32 %x.0, !dbg !54
}

declare i32 @buzz(...) local_unnamed_addr #1

declare i32 @baz(i32 noundef) local_unnamed_addr #1

declare i32 @foo(i32 noundef) local_unnamed_addr #1

; Function Attrs: nounwind
define dso_local i32 @fizz() local_unnamed_addr #0 !dbg !55 !prof !46 {
entry:
  %call = tail call i32 (...) @buzz() #2, !dbg !56
  %rem = srem i32 %call, 200000, !dbg !57
  %cmp = icmp eq i32 %rem, 0, !dbg !57
  br i1 %cmp, label %if.then, label %if.else, !dbg !57, !prof !58

if.then:                                          ; preds = %entry
  %call2 = tail call i32 @baz(i32 noundef %call) #2, !dbg !59
  br label %if.end, !dbg !60

if.else:                                          ; preds = %entry
  %call3 = tail call i32 @foo(i32 noundef 50) #2, !dbg !61
  br label %if.end

if.end:                                           ; preds = %if.else, %if.then
  %x.0 = phi i32 [ %call2, %if.then ], [ %call3, %if.else ], !dbg !62
  ret i32 %x.0, !dbg !63
}

attributes #0 = { nounwind "frame-pointer"="none" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-features"="+cx8,+mmx,+sse,+sse2,+x87" }
attributes #1 = { "frame-pointer"="none" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-features"="+cx8,+mmx,+sse,+sse2,+x87" }
attributes #2 = { nounwind }

!llvm.dbg.cu = !{!0}
!llvm.module.flags = !{!2, !31, !32, !33}
!llvm.ident = !{!41}

!0 = distinct !DICompileUnit(language: DW_LANG_C99, file: !1, producer: "clang version 15.0.7 (git@github.com:lzyoyzl/llvm-project-msvc.git 3a01228d025ba16db128a0a771d323e753f2c9f6)", isOptimized: true, runtimeVersion: 0, emissionKind: LineTablesOnly, splitDebugInlining: false, nameTableKind: None)
!1 = !DIFile(filename: "/root/llvm-project-msvc/clang/test/Profile/<stdin>", directory: "/root/llvm-project-msvc/build/tools/clang/test/Profile")
!2 = !{i32 1, !"ProfileSummary", !3}
!3 = !{!4, !5, !6, !7, !8, !9, !10, !11, !12, !13}
!4 = !{!"ProfileFormat", !"InstrProf"}
!5 = !{!"TotalCount", i64 598000}
!6 = !{!"MaxCount", i64 200000}
!7 = !{!"MaxInternalCount", i64 180000}
!8 = !{!"MaxFunctionCount", i64 200000}
!9 = !{!"NumCounts", i64 4}
!10 = !{!"NumFunctions", i64 2}
!11 = !{!"IsPartialProfile", i64 0}
!12 = !{!"PartialProfileRatio", double 0.000000e+00}
!13 = !{!"DetailedSummary", !14}
!14 = !{!15, !16, !17, !18, !19, !20, !21, !22, !23, !24, !25, !26, !27, !28, !29, !30}
!15 = !{i32 10000, i64 200000, i32 2}
!16 = !{i32 100000, i64 200000, i32 2}
!17 = !{i32 200000, i64 200000, i32 2}
!18 = !{i32 300000, i64 200000, i32 2}
!19 = !{i32 400000, i64 200000, i32 2}
!20 = !{i32 500000, i64 200000, i32 2}
!21 = !{i32 600000, i64 200000, i32 2}
!22 = !{i32 700000, i64 180000, i32 3}
!23 = !{i32 800000, i64 180000, i32 3}
!24 = !{i32 900000, i64 180000, i32 3}
!25 = !{i32 950000, i64 180000, i32 3}
!26 = !{i32 990000, i64 18000, i32 4}
!27 = !{i32 999000, i64 18000, i32 4}
!28 = !{i32 999900, i64 18000, i32 4}
!29 = !{i32 999990, i64 18000, i32 4}
!30 = !{i32 999999, i64 18000, i32 4}
!31 = !{i32 2, !"Debug Info Version", i32 3}
!32 = !{i32 1, !"wchar_size", i32 4}
!33 = !{i32 5, !"CG Profile", !34}
!34 = distinct !{!35, !36, !37, !38, !39, !40}
!35 = !{ptr @bar, ptr @buzz, i64 200000}
!36 = !{ptr @bar, ptr @baz, i64 199900}
!37 = !{ptr @bar, ptr @foo, i64 100}
!38 = !{ptr @fizz, ptr @buzz, i64 200000}
!39 = !{ptr @fizz, ptr @baz, i64 100}
!40 = !{ptr @fizz, ptr @foo, i64 199900}
!41 = !{!"clang version 15.0.7 (git@github.com:lzyoyzl/llvm-project-msvc.git 3a01228d025ba16db128a0a771d323e753f2c9f6)"}
!42 = distinct !DISubprogram(name: "bar", scope: !43, file: !43, line: 29, type: !44, scopeLine: 29, spFlags: DISPFlagDefinition | DISPFlagOptimized, unit: !0, retainedNodes: !45)
!43 = !DIFile(filename: "clang/test/Profile/misexpect-branch.c", directory: "/root/llvm-project-msvc")
!44 = !DISubroutineType(types: !45)
!45 = !{}
!46 = !{!"function_entry_count", i64 200000}
!47 = !DILocation(line: 30, column: 15, scope: !42)
!48 = !DILocation(line: 32, column: 7, scope: !42)
!49 = !{!"branch_weights", i32 2000, i32 1}
!50 = !DILocation(line: 33, column: 9, scope: !42)
!51 = !DILocation(line: 34, column: 3, scope: !42)
!52 = !DILocation(line: 35, column: 9, scope: !42)
!53 = !DILocation(line: 0, scope: !42)
!54 = !DILocation(line: 37, column: 3, scope: !42)
!55 = distinct !DISubprogram(name: "fizz", scope: !43, file: !43, line: 40, type: !44, scopeLine: 40, spFlags: DISPFlagDefinition | DISPFlagOptimized, unit: !0, retainedNodes: !45)
!56 = !DILocation(line: 41, column: 15, scope: !55)
!57 = !DILocation(line: 43, column: 7, scope: !55)
!58 = !{!"branch_weights", i32 1, i32 2000}
!59 = !DILocation(line: 44, column: 9, scope: !55)
!60 = !DILocation(line: 45, column: 3, scope: !55)
!61 = !DILocation(line: 46, column: 9, scope: !55)
!62 = !DILocation(line: 0, scope: !55)
!63 = !DILocation(line: 48, column: 3, scope: !55)

--
Command Output (stderr):
--
error: 'warning' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/Profile/misexpect-branch.c Line 43: Potential performance regression from use of __builtin_expect(): Annotation was correct on {{.+}}% ({{[0-9]+ / [0-9]+}}) of profiled executions.
error: 'warning' diagnostics seen but not expected: 
  File /root/llvm-project-msvc/clang/test/Profile/misexpect-branch.c Line 49: Potential performance regression from use of __builtin_expect(): Annotation was correct on 91.00% (182001 / 200002) of profiled executions.
2 errors generated.

--
```

### 28. Clang.Sema :: ms-inline-asm.c

- 耗时：0.03 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 2';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc /root/llvm-project-msvc/clang/test/Sema/ms-inline-asm.c -triple i386-apple-darwin10 -fms-extensions -fasm-blocks -Wno-microsoft -Wunused-label -verify -fsyntax-only
--
Exit Code: 1

Command Output (stderr):
--
error: 'error' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/Sema/ms-inline-asm.c Line 16: unknown token in expression
  File /root/llvm-project-msvc/clang/test/Sema/ms-inline-asm.c Line 20: unknown token in expression
error: 'error' diagnostics seen but not expected: 
  Line 0: unknown token in expression
  Line 0: unknown token in expression
4 errors generated.

--
```

### 29. Clang.SemaCXX :: cxx98-compat-pedantic.cpp

- 耗时：0.03 s
- Exit Code：1

```text
Script:
--
: 'RUN: at line 1';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -fsyntax-only -std=c++1y -DCXX1Y -Wc++98-compat-pedantic -verify /root/llvm-project-msvc/clang/test/SemaCXX/cxx98-compat-pedantic.cpp -DCXX1Y2
: 'RUN: at line 2';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -fsyntax-only -std=c++1y -DCXX1Y -Wc++98-compat -Werror /root/llvm-project-msvc/clang/test/SemaCXX/cxx98-compat-pedantic.cpp -DCXX1Y2
: 'RUN: at line 3';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -fsyntax-only -std=c++11 -Wc++98-compat-pedantic -verify /root/llvm-project-msvc/clang/test/SemaCXX/cxx98-compat-pedantic.cpp
: 'RUN: at line 4';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -fsyntax-only -std=c++11 -Wc++98-compat -Werror /root/llvm-project-msvc/clang/test/SemaCXX/cxx98-compat-pedantic.cpp
: 'RUN: at line 5';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -fsyntax-only -std=c++98 -Werror /root/llvm-project-msvc/clang/test/SemaCXX/cxx98-compat-pedantic.cpp -DCXX98
: 'RUN: at line 7';   /root/llvm-project-msvc/build/bin/clang -cc1 -internal-isystem /root/llvm-project-msvc/build/lib/clang/15.0.7/include -nostdsysteminc -fsyntax-only -std=c++1y -Wc++98-compat-pedantic -verify /root/llvm-project-msvc/clang/test/SemaCXX/cxx98-compat-pedantic.cpp -Wno-pre-c++14-compat-pedantic -DCXX1Y2
--
Exit Code: 1

Command Output (stderr):
--
error: 'warning' diagnostics expected but not seen: 
  File /root/llvm-project-msvc/clang/test/SemaCXX/cxx98-compat-pedantic.cpp Line 32767: #line number greater than 32767 is incompatible with C++98
1 error generated.

--
```
