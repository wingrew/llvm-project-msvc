### 命中详单（自动生成 | 仅lib目录 | 覆盖扩展风险）

| ID | 模块 | 文件 | 行 | 符号/函数 | 角色 | 风险名称 | 片段 | 建议动作 | 状态 |
|---:|---|---|---:|---|---|---|---|---|---|
| 1 | ExtractAPI/ExtractAPIConsumer | ./lib/ExtractAPI/ExtractAPIConsumer.cpp | 266 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context.getSourceManager().getPresumedLoc(Decl->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2 | ExtractAPI/ExtractAPIConsumer | ./lib/ExtractAPI/ExtractAPIConsumer.cpp | 327 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context.getSourceManager().getPresumedLoc(Decl->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3 | ExtractAPI/ExtractAPIConsumer | ./lib/ExtractAPI/ExtractAPIConsumer.cpp | 368 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context.getSourceManager().getPresumedLoc(Decl->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4 | ExtractAPI/ExtractAPIConsumer | ./lib/ExtractAPI/ExtractAPIConsumer.cpp | 409 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context.getSourceManager().getPresumedLoc(Decl->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 5 | ExtractAPI/ExtractAPIConsumer | ./lib/ExtractAPI/ExtractAPIConsumer.cpp | 443 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context.getSourceManager().getPresumedLoc(Decl->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 6 | ExtractAPI/ExtractAPIConsumer | ./lib/ExtractAPI/ExtractAPIConsumer.cpp | 490 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context.getSourceManager().getPresumedLoc(Decl->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 7 | ExtractAPI/ExtractAPIConsumer | ./lib/ExtractAPI/ExtractAPIConsumer.cpp | 525 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context.getSourceManager().getPresumedLoc(Decl->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 8 | ExtractAPI/ExtractAPIConsumer | ./lib/ExtractAPI/ExtractAPIConsumer.cpp | 551 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context.getSourceManager().getPresumedLoc(Decl->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 9 | ExtractAPI/ExtractAPIConsumer | ./lib/ExtractAPI/ExtractAPIConsumer.cpp | 620 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context.getSourceManager().getPresumedLoc(Constant->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 10 | ExtractAPI/ExtractAPIConsumer | ./lib/ExtractAPI/ExtractAPIConsumer.cpp | 647 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context.getSourceManager().getPresumedLoc(Field->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 11 | ExtractAPI/ExtractAPIConsumer | ./lib/ExtractAPI/ExtractAPIConsumer.cpp | 677 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context.getSourceManager().getPresumedLoc(Method->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 12 | ExtractAPI/ExtractAPIConsumer | ./lib/ExtractAPI/ExtractAPIConsumer.cpp | 704 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context.getSourceManager().getPresumedLoc(Property->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 13 | ExtractAPI/ExtractAPIConsumer | ./lib/ExtractAPI/ExtractAPIConsumer.cpp | 747 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context.getSourceManager().getPresumedLoc(Ivar->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 14 | ExtractAPI/ExtractAPIConsumer | ./lib/ExtractAPI/ExtractAPIConsumer.cpp | 844 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc Loc = SM.getPresumedLoc(PM.MacroNameToken.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 15 | AST/OSLog | ./lib/AST/OSLog.cpp | 24 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> Size;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 16 | AST/CommentLexer | ./lib/AST/CommentLexer.cpp | 262 |  | 计算 | 指针差值落入32位 | `const unsigned TokLen = TokEnd - BufferPtr;` | 用 uint64_t 接收指针差值 | TODO |
| 17 | AST/CommentLexer | ./lib/AST/CommentLexer.cpp | 409 | CommandRange | 比较/实现 | 关键函数相关（需复核） | `SourceRange CommandRange(Loc.getLocWithOffset(1), EndLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 18 | AST/CommentLexer | ./lib/AST/CommentLexer.cpp | 850 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = SourceMgr.getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 19 | AST/ASTStructuralEquivalence | ./lib/AST/ASTStructuralEquivalence.cpp | 1437 | if | 声明/容器 | 容器承载32位位置 | `if (Optional<unsigned> Index1 =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 20 | AST/ASTStructuralEquivalence | ./lib/AST/ASTStructuralEquivalence.cpp | 1439 | if | 声明/容器 | 容器承载32位位置 | `if (Optional<unsigned> Index2 =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 21 | AST/ASTStructuralEquivalence | ./lib/AST/ASTStructuralEquivalence.cpp | 2111 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 22 | AST/ExprCXX | ./lib/AST/ExprCXX.cpp | 209 | arraySizeOffset | 比较/实现 | 关键函数相关（需复核） | `getTrailingObjects<Stmt *>()[arraySizeOffset()] = *ArraySize;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 23 | AST/ExprCXX | ./lib/AST/ExprCXX.cpp | 211 | initExprOffset | 比较/实现 | 关键函数相关（需复核） | `getTrailingObjects<Stmt *>()[initExprOffset()] = Initializer;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 24 | AST/ExprCXX | ./lib/AST/ExprCXX.cpp | 213 | placementNewArgsOffset | 比较/实现 | 关键函数相关（需复核） | `getTrailingObjects<Stmt *>()[placementNewArgsOffset() + I] =` | 检查实现是否用 64 位位置/偏移 | TODO |
| 25 | AST/ExprCXX | ./lib/AST/ExprCXX.cpp | 374 |  | 计算 | 指针差值落入32位 | `unsigned NumResults = End - Begin;` | 用 uint64_t 接收指针差值 | TODO |
| 26 | AST/ExprCXX | ./lib/AST/ExprCXX.cpp | 374 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned NumResults = End - Begin;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 27 | AST/ExprCXX | ./lib/AST/ExprCXX.cpp | 390 |  | 计算 | 指针差值落入32位 | `unsigned NumResults = End - Begin;` | 用 uint64_t 接收指针差值 | TODO |
| 28 | AST/ExprCXX | ./lib/AST/ExprCXX.cpp | 390 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned NumResults = End - Begin;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 29 | AST/ExprCXX | ./lib/AST/ExprCXX.cpp | 424 |  | 计算 | 指针差值落入32位 | `unsigned NumResults = End - Begin;` | 用 uint64_t 接收指针差值 | TODO |
| 30 | AST/ExprCXX | ./lib/AST/ExprCXX.cpp | 424 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned NumResults = End - Begin;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 31 | AST/ExprCXX | ./lib/AST/ExprCXX.cpp | 547 |  | 计算 | 强制收窄为32位 | `(CXXOperatorCallExprBits.OperatorKind == static_cast<unsigned>(OpKind)) &&` | 改为 uint64_t / 移除收窄 | TODO |
| 32 | AST/ExprCXX | ./lib/AST/ExprCXX.cpp | 1507 |  | 计算 | 指针差值落入32位 | `unsigned NumResults = End - Begin;` | 用 uint64_t 接收指针差值 | TODO |
| 33 | AST/ExprCXX | ./lib/AST/ExprCXX.cpp | 1507 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned NumResults = End - Begin;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 34 | AST/ExprCXX | ./lib/AST/ExprCXX.cpp | 1562 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> Length,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 35 | AST/ExprCXX | ./lib/AST/ExprCXX.cpp | 1680 | assert | 计算 | 强制收窄为32位 | `assert(static_cast<unsigned>(Kind) == TypeTraitExprBits.Kind &&` | 改为 uint64_t / 移除收窄 | TODO |
| 36 | AST/ItaniumMangle | ./lib/AST/ItaniumMangle.cpp | 1561 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> DeviceNumber =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 37 | AST/ItaniumMangle | ./lib/AST/ItaniumMangle.cpp | 2009 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> DeviceNumber =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 38 | AST/ItaniumMangle | ./lib/AST/ItaniumMangle.cpp | 5803 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits Offset = V.getLValueOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 39 | AST/ItaniumMangle | ./lib/AST/ItaniumMangle.cpp | 5895 | mangleNumber | 比较/实现 | 关键函数相关（需复核） | `mangleNumber(V.getLValueOffset().getQuantity());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 40 | AST/ItaniumMangle | ./lib/AST/ItaniumMangle.cpp | 5902 | if | 比较/实现 | 关键函数相关（需复核） | `if (!V.getLValueOffset().isZero())` | 检查实现是否用 64 位位置/偏移 | TODO |
| 41 | AST/ItaniumMangle | ./lib/AST/ItaniumMangle.cpp | 5903 | mangleNumber | 比较/实现 | 关键函数相关（需复核） | `mangleNumber(V.getLValueOffset().getQuantity());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 42 | AST/ItaniumMangle | ./lib/AST/ItaniumMangle.cpp | 6071 | find | 声明/局部 | 无关键词的32位位置变量（需复核） | `llvm::DenseMap<uintptr_t, unsigned>::iterator I = Substitutions.find(Ptr);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 43 | AST/ItaniumMangle | ./lib/AST/ItaniumMangle.cpp | 6506 | getStream | 比较/实现 | 关键函数相关（需复核） | `Mangler.getStream() << Offset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 44 | AST/ItaniumMangle | ./lib/AST/ItaniumMangle.cpp | 6561 |  | 声明/容器 | 容器承载32位位置 | `[](ASTContext &, const NamedDecl *) -> llvm::Optional<unsigned> {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 45 | AST/NestedNameSpecifier | ./lib/AST/NestedNameSpecifier.cpp | 396 | LoadSourceLocation | 声明/局部 | 仅命名可疑需复核 | `static SourceLocation LoadSourceLocation(void *Data, unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 46 | AST/NestedNameSpecifier | ./lib/AST/NestedNameSpecifier.cpp | 404 | LoadPointer | 声明/局部 | 仅命名可疑需复核 | `static void *LoadPointer(void *Data, unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 47 | AST/NestedNameSpecifier | ./lib/AST/NestedNameSpecifier.cpp | 426 | getDataLength | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = getDataLength(Qualifier->getPrefix());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 48 | AST/NestedNameSpecifier | ./lib/AST/NestedNameSpecifier.cpp | 459 | getDataLength | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = getDataLength(Qualifier->getPrefix());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 49 | AST/NestedNameSpecifier | ./lib/AST/NestedNameSpecifier.cpp | 472 | sizeof | 计算 | 强制收窄为32位 | `(unsigned)(BufferCapacity ? BufferCapacity * 2 : sizeof(void *) * 2),` | 改为 uint64_t / 移除收窄 | TODO |
| 50 | AST/NestedNameSpecifier | ./lib/AST/NestedNameSpecifier.cpp | 473 | max | 计算 | 强制收窄为32位 | `unsigned NewCapacity = std::max( (unsigned)(BufferCapacity ? BufferCapacity * 2 : sizeof(void *) * 2), (unsigned)(BufferSize + (End - Star…` | 改为 uint64_t / 移除收窄 | TODO |
| 51 | AST/NestedNameSpecifier | ./lib/AST/NestedNameSpecifier.cpp | 473 | max | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned NewCapacity = std::max( (unsigned)(BufferCapacity ? BufferCapacity * 2 : sizeof(void *) * 2), (unsigned)(BufferSize + (End - Star…` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 52 | AST/NestedNameSpecifier | ./lib/AST/NestedNameSpecifier.cpp | 473 | max | 计算 | 复杂指针差值收窄 | `unsigned NewCapacity = std::max( (unsigned)(BufferCapacity ? BufferCapacity * 2 : sizeof(void *) * 2), (unsigned)(BufferSize + (End - Star…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 53 | AST/Type | ./lib/AST/Type.cpp | 3405 | assert | 计算 | 强制收窄为32位 | `assert(!(unsigned(epi.Variadic) & ~1) &&` | 改为 uint64_t / 移除收窄 | TODO |
| 54 | AST/Type | ./lib/AST/Type.cpp | 3406 | unsigned | 计算 | 强制收窄为32位 | `!(unsigned(epi.RefQualifier) & ~3) &&` | 改为 uint64_t / 移除收窄 | TODO |
| 55 | AST/Type | ./lib/AST/Type.cpp | 3407 | unsigned | 计算 | 强制收窄为32位 | `!(unsigned(epi.ExceptionSpec.Type) & ~15) &&` | 改为 uint64_t / 移除收窄 | TODO |
| 56 | AST/Type | ./lib/AST/Type.cpp | 3409 | AddInteger | 计算 | 强制收窄为32位 | `ID.AddInteger(unsigned(epi.Variadic) +` | 改为 uint64_t / 移除收窄 | TODO |
| 57 | AST/JSONNodeDumper | ./lib/AST/JSONNodeDumper.cpp | 233 | writeIncludeStack | 比较/实现 | 关键函数相关（需复核） | `writeIncludeStack(SM.getPresumedLoc(Loc.getIncludeLoc()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 58 | AST/JSONNodeDumper | ./lib/AST/JSONNodeDumper.cpp | 243 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc Presumed = SM.getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 59 | AST/JSONNodeDumper | ./lib/AST/JSONNodeDumper.cpp | 244 | getSpellingLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned ActualLine = IsSpelling ? SM.getSpellingLineNumber(Loc)` | 确认是否参与源位置运算；非则忽略 | TODO |
| 60 | AST/JSONNodeDumper | ./lib/AST/JSONNodeDumper.cpp | 275 | writeIncludeStack | 比较/实现 | 关键函数相关（需复核） | `writeIncludeStack(SM.getPresumedLoc(Presumed.getIncludeLoc()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 61 | AST/JSONNodeDumper | ./lib/AST/JSONNodeDumper.cpp | 281 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation Spelling = SM.getSpellingLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 62 | AST/JSONNodeDumper | ./lib/AST/JSONNodeDumper.cpp | 282 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation Expansion = SM.getExpansionLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 63 | AST/JSONNodeDumper | ./lib/AST/JSONNodeDumper.cpp | 718 | if | 声明/容器 | 容器承载32位位置 | `if (llvm::Optional<unsigned> N = PET->getNumExpansions())` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 64 | AST/JSONNodeDumper | ./lib/AST/JSONNodeDumper.cpp | 1700 | try_emplace | 计算 | 强制收窄为32位 | `Ret.try_emplace(#NAME, static_cast<unsigned>(FPO.get##NAME##Override()));` | 改为 uint64_t / 移除收窄 | TODO |
| 65 | AST/TypePrinter | ./lib/AST/TypePrinter.cpp | 1366 | getASTContext | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = D->getASTContext().getSourceManager().getPresumedLoc(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 66 | AST/ASTImporter | ./lib/AST/ASTImporter.cpp | 3873 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned int> FriendPosition;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 67 | AST/ASTImporter | ./lib/AST/ASTImporter.cpp | 7673 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> Length;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 68 | AST/ASTImporter | ./lib/AST/ASTImporter.cpp | 8406 | getFieldIndex | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> ASTImporter::getFieldIndex(Decl *F) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 69 | AST/ASTImporter | ./lib/AST/ASTImporter.cpp | 9359 | Import | 比较/实现 | 关键函数相关（需复核） | `ExpectedSLoc ToSpLoc = Import(FromEx.getSpellingLoc());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 70 | AST/ASTImporter | ./lib/AST/ASTImporter.cpp | 9777 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits Offset = FromValue.getLValueOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 71 | AST/PrintfFormatString | ./lib/AST/PrintfFormatString.cpp | 396 |  | 计算 | 指针差值落入32位 | `unsigned Len = I - Start;` | 用 uint64_t 接收指针差值 | TODO |
| 72 | AST/PrintfFormatString | ./lib/AST/PrintfFormatString.cpp | 396 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Len = I - Start;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 73 | AST/OpenMPClause | ./lib/AST/OpenMPClause.cpp | 1746 | unsigned | 计算 | 强制收窄为32位 | `unsigned(Node->getDefaultKind()))` | 改为 uint64_t / 移除收窄 | TODO |
| 74 | AST/OpenMPClause | ./lib/AST/OpenMPClause.cpp | 1753 | unsigned | 计算 | 强制收窄为32位 | `unsigned(Node->getProcBindKind()))` | 改为 uint64_t / 移除收窄 | TODO |
| 75 | AST/OpenMPClause | ./lib/AST/OpenMPClause.cpp | 2402 | getOpenMPSimpleClauseTypeName | 计算 | 强制收窄为32位 | `<< getOpenMPSimpleClauseTypeName(OMPC_bind, unsigned(Node->getBindKind()))` | 改为 uint64_t / 移除收窄 | TODO |
| 76 | AST/OpenMPClause | ./lib/AST/OpenMPClause.cpp | 2513 | unsigned | 计算 | 强制收窄为32位 | `OS << '$' << 'S' << unsigned(Set.Kind);` | 改为 uint64_t / 移除收窄 | TODO |
| 77 | AST/OpenMPClause | ./lib/AST/OpenMPClause.cpp | 2520 | unsigned | 计算 | 强制收窄为32位 | `OS << '$' << 's' << unsigned(Selector.Kind);` | 改为 uint64_t / 移除收窄 | TODO |
| 78 | AST/SelectorLocationsKind | ./lib/AST/SelectorLocationsKind.cpp | 31 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return EndLoc.getLocWithOffset(-Len);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 79 | AST/SelectorLocationsKind | ./lib/AST/SelectorLocationsKind.cpp | 41 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return ArgLoc.getLocWithOffset(-Len);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 80 | AST/SelectorLocationsKind | ./lib/AST/SelectorLocationsKind.cpp | 60 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return Loc.getLocWithOffset(-1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 81 | AST/CommentParser | ./lib/AST/CommentParser.cpp | 68 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `const unsigned CharNo = Pos.BufferPtr - Pos.BufferStart;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 82 | AST/CommentParser | ./lib/AST/CommentParser.cpp | 69 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return Pos.BufferStartLoc.getLocWithOffset(CharNo);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 83 | AST/CommentParser | ./lib/AST/CommentParser.cpp | 415 | Diag | 比较/实现 | 关键函数相关（需复核） | `Diag(CommandTok.getEndLocation().getLocWithOffset(1),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 84 | AST/ExternalASTSource | ./lib/AST/ExternalASTSource.cpp | 43 | FindFileRegionDecls | 声明/局部 | 仅命名可疑需复核 | `void ExternalASTSource::FindFileRegionDecls(FileID File, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 85 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 544 |  | 声明/类型别名 | 可疑别名32位 | `typedef std::pair<const void *, unsigned> MapKeyTy;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 86 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 556 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 2> TempVersionStack = {1};` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 87 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 1426 | getMostDerivedArraySize | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(getMostDerivedArraySize());` | 改为 uint64_t / 移除收窄 | TODO |
| 88 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 1553 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits &getLValueOffset() { return Offset; }` | 检查实现是否用 64 位位置/偏移 | TODO |
| 89 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 1554 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `const CharUnits &getLValueOffset() const { return Offset; }` | 检查实现是否用 64 位位置/偏移 | TODO |
| 90 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 1574 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `Offset = V.getLValueOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 91 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 2464 | unsigned | 计算 | 强制收窄为32位 | `<< unsigned(Info.HeapAllocs.size() - 1);` | 改为 uint64_t / 移除收窄 | TODO |
| 92 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 2473 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `Result = !Value.getLValueOffset().isZero();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 93 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 3060 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Result.Offset -= Layout.getVBaseClassOffset(Base);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 94 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 3062 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Result.Offset -= Layout.getBaseClassOffset(Base);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 95 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 3078 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `Obj.getLValueOffset() += RL->getBaseClassOffset(Base);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 96 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 3103 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `Obj.getLValueOffset() += Layout.getVBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 97 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 3147 | adjustOffset | 比较/实现 | 关键函数相关（需复核） | `LVal.adjustOffset(Info.Ctx.toCharUnitsFromBits(RL->getFieldOffset(I)));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 98 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 6825 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<Optional<unsigned char>, 32> Bytes;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 99 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 6899 | visitInt | 比较/实现 | 关键函数相关（需复核） | `return visitInt(Val.getInt(), Ty, Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 100 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 6901 | visitFloat | 比较/实现 | 关键函数相关（需复核） | `return visitFloat(Val.getFloat(), Ty, Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 101 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 6939 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Layout.getBaseClassOffset(BaseDecl) + Offset))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 102 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 6953 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t FieldOffsetBits = Layout.getFieldOffset(FieldIdx);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 103 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 6960 | if | 比较/实现 | 关键函数相关（需复核） | `if (!visit(Val.getStructField(FieldIdx), FieldTy, FieldOffset))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 104 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 6980 | if | 比较/实现 | 关键函数相关（需复核） | `if (!visit(SubObj, CAT->getElementType(), Offset + I * ElemWidth))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 105 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 6988 | if | 比较/实现 | 关键函数相关（需复核） | `if (!visit(Filler, CAT->getElementType(), Offset + I * ElemWidth))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 106 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 7004 | Bytes | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned char, 8> Bytes(Width / 8);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 107 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 7143 | getType | 比较/实现 | 关键函数相关（需复核） | `BS.getType(), Layout.getBaseClassOffset(BaseDecl) + Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 108 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 7161 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t FieldOffsetBits = Layout.getFieldOffset(FieldIdx);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 109 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 7196 | visitType | 比较/实现 | 关键函数相关（需复核） | `visitType(Ty->getElementType(), Offset + I * ElementWidth);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 110 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 7215 | visit | 比较/实现 | 关键函数相关（需复核） | `return visit(cast<Class##Type>(Can.getTypePtr()), Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 111 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 7656 | if | 比较/实现 | 关键函数相关（需复核） | `if (!CalleeLV.getLValueOffset().isZero())` | 检查实现是否用 64 位位置/偏移 | TODO |
| 112 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 7856 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<uint32_t, 4> Indices;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 113 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 9131 | if | 比较/实现 | 关键函数相关（需复核） | `if (!EvaluateInteger(E->getArg(2), Offset, Info))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 114 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 9425 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t SrcOffset = Src.getLValueOffset().getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 115 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 9426 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t DestOffset = Dest.getLValueOffset().getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 116 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 11374 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `return LV.getLValueOffset().isZero();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 117 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 11649 | getBytesReturnedByAllocSizeCall | 比较/实现 | 关键函数相关（需复核） | `getBytesReturnedByAllocSizeCall(Info.Ctx, LVal, APEndOffset))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 118 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 11674 | getBytesReturnedByAllocSizeCall | 比较/实现 | 关键函数相关（需复核） | `getBytesReturnedByAllocSizeCall(Info.Ctx, LVal, APEndOffset))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 119 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 11701 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `EndOffset = LVal.getLValueOffset() + BytesPerElem * ElemsRemaining;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 120 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 11735 | if | 比较/实现 | 关键函数相关（需复核） | `if (LVal.getLValueOffset().isNegative()) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 121 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 11741 | if | 比较/实现 | 关键函数相关（需复核） | `if (!determineEndOffset(Info, E->getExprLoc(), Type, LVal, EndOffset))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 122 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 11746 | if | 比较/实现 | 关键函数相关（需复核） | `if (EndOffset <= LVal.getLValueOffset())` | 检查实现是否用 64 位位置/偏移 | TODO |
| 123 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 11749 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `Size = (EndOffset - LVal.getLValueOffset()).getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 124 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 12423 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `return LV.getLValueOffset() == Size;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 125 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 12590 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits &Offset = LVal.getLValueOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 126 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 12657 | if | 比较/实现 | 关键函数相关（需复核） | `if (!LHSVal.getLValueOffset().isZero() \|\|` | 检查实现是否用 64 位位置/偏移 | TODO |
| 127 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 12658 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `!RHSVal.getLValueOffset().isZero())` | 检查实现是否用 64 位位置/偏移 | TODO |
| 128 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 12927 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `const CharUnits &LHSOffset = LHSValue.getLValueOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 129 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 12928 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `const CharUnits &RHSOffset = RHSValue.getLValueOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 130 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 13185 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `const CharUnits &LHSOffset = LHSValue.getLValueOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 131 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 13186 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `const CharUnits &RHSOffset = RHSValue.getLValueOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 132 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 13328 | toCharUnitsFromBits | 比较/实现 | 关键函数相关（需复核） | `Result += Info.Ctx.toCharUnitsFromBits(RL.getFieldOffset(i));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 133 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 13356 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Result += RL.getBaseClassOffset(cast<CXXRecordDecl>(BaseRT->getDecl()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 134 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 13770 | getWidth | 计算 | 复杂指针差值收窄 | `unsigned ShiftBW = LHSSema.getWidth() - (unsigned)LHSSema.hasUnsignedPadding(); unsigned Amt = RHSVal.getLimitedValue(ShiftBW - 1);` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 135 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 13771 | getWidth | 计算 | 复杂指针差值收窄 | `LHSSema.getWidth() - (unsigned)LHSSema.hasUnsignedPadding(); unsigned Amt = RHSVal.getLimitedValue(ShiftBW - 1); // Embedded-C 4.1.6.2.2:` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 136 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 13772 | getLimitedValue | 计算 | 复杂指针差值收窄 | `unsigned Amt = RHSVal.getLimitedValue(ShiftBW - 1); // Embedded-C 4.1.6.2.2: // The right operand must be nonnegative and less than the to…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 137 | AST/ExprConstant | ./lib/AST/ExprConstant.cpp | 15875 | begin | 计算 | 指针差值落入32位 | `unsigned Idx = I - Args.begin();` | 用 uint64_t 接收指针差值 | TODO |
| 138 | AST/ComparisonCategories | ./lib/AST/ComparisonCategories.cpp | 145 | for | 计算 | 强制收窄为32位 | `for (unsigned I = static_cast<unsigned>(CCT::First),` | 改为 uint64_t / 移除收窄 | TODO |
| 139 | AST/ComparisonCategories | ./lib/AST/ComparisonCategories.cpp | 146 |  | 计算 | 强制收窄为32位 | `End = static_cast<unsigned>(CCT::Last);` | 改为 uint64_t / 移除收窄 | TODO |
| 140 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 117 |  | 声明/类型别名 | 可疑别名32位 | `typedef llvm::DenseMap<const CXXRecordDecl *, unsigned> SubobjectCountMapTy;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 141 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 248 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `NonVirtualOffset += Layout.getBaseClassOffset(Base);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 142 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 342 | make_pair | 比较/实现 | 关键函数相关（需复核） | `SubobjectOffsets[std::make_pair(RD, SubobjectNumber)] = Base.getBaseOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 143 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 360 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `BaseOffset = MostDerivedClassLayout.getVBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 144 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 362 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `LayoutClassLayout.getVBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 145 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 365 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits Offset = Layout.getBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 146 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 367 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `BaseOffset = Base.getBaseOffset() + Offset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 147 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 397 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `BaseOffset = MostDerivedClassLayout.getVBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 148 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 399 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `BaseOffset = Layout.getBaseClassOffset(BaseDecl) + Base.getBaseOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 149 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 408 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `Out << Base.getBaseOffset().getQuantity() << ")\n";` | 检查实现是否用 64 位位置/偏移 | TODO |
| 150 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 416 | getOverrider | 比较/实现 | 关键函数相关（需复核） | `OverriderInfo Overrider = getOverrider(MD, Base.getBaseOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 151 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 462 | offset | 比较/实现 | 关键函数相关（需复核） | `/// getVCallOffsetOffset - Returns the vcall offset offset (relative to the` | 检查实现是否用 64 位位置/偏移 | TODO |
| 152 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 464 | getVCallOffsetOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits getVCallOffsetOffset(const CXXMethodDecl *MD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 153 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 522 | getVCallOffsetOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits VCallOffsetMap::getVCallOffsetOffset(const CXXMethodDecl *MD) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 154 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 584 |  | 比较/实现 | 关键函数相关（需复核） | `/// getCurrentOffsetOffset - Get the current vcall or vbase offset offset in` | 检查实现是否用 64 位位置/偏移 | TODO |
| 155 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 586 | getCurrentOffsetOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits getCurrentOffsetOffset() const;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 156 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 636 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(Layout.getVBaseClassOffset(PrimaryBase).isZero() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 157 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 643 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `MostDerivedClassLayout.getVBaseClassOffset(PrimaryBase);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 158 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 645 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(Layout.getBaseClassOffset(PrimaryBase).isZero() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 159 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 648 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `PrimaryBaseOffset = Base.getBaseOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 160 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 656 | AddVBaseOffsets | 比较/实现 | 关键函数相关（需复核） | `AddVBaseOffsets(Base.getBase(), RealBaseOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 161 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 663 | getCurrentOffsetOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits VCallAndVBaseOffsetBuilder::getCurrentOffsetOffset() const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 162 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 692 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(Layout.getBaseClassOffset(PrimaryBase).isZero() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 163 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 695 | AddVCallOffsets | 比较/实现 | 关键函数相关（需复核） | `AddVCallOffsets(BaseSubobject(PrimaryBase, Base.getBaseOffset()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 164 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 705 | getCurrentOffsetOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits OffsetOffset = getCurrentOffsetOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 165 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 717 | getOverrider | 比较/实现 | 关键函数相关（需复核） | `Overriders->getOverrider(MD, Base.getBaseOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 166 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 738 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits BaseOffset = Base.getBaseOffset() +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 167 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 739 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Layout.getBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 168 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 759 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `LayoutClassLayout.getVBaseClassOffset(BaseDecl) - OffsetInLayoutClass;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 169 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 765 | getCurrentOffsetOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits VBaseOffsetOffset = getCurrentOffsetOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 170 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1125 | getOverrider | 比较/实现 | 关键函数相关（需复核） | `Overriders.getOverrider(MD, MethodInfo.BaseOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 171 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1198 | getVirtualBaseOffsetOffset | 比较/实现 | 关键函数相关（需复核） | `VTables.getVirtualBaseOffsetOffset(Offset.DerivedClass,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 172 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1236 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `LayoutClassLayout.getVBaseClassOffset(Offset.VirtualBase);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 173 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1240 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `OffsetToBaseSubobject += Derived.getBaseOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 174 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1244 | if | 比较/实现 | 关键函数相关（需复核） | `if (OffsetToBaseSubobject == Base.getBaseOffset()) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 175 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1295 | getVCallOffsetOffset | 比较/实现 | 关键函数相关（需复核） | `VCallOffsets.getVCallOffsetOffset(MD).getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 176 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1382 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(Layout.getVBaseClassOffset(PrimaryBase).isZero() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 177 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1390 | if | 比较/实现 | 关键函数相关（需复核） | `if (LayoutClassLayout.getVBaseClassOffset(PrimaryBase) !=` | 检查实现是否用 64 位位置/偏移 | TODO |
| 178 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1396 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(Layout.getBaseClassOffset(PrimaryBase).isZero() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 179 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1455 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(Layout.getVBaseClassOffset(PrimaryBase).isZero() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 180 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1462 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `MostDerivedClassLayout.getVBaseClassOffset(PrimaryBase);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 181 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1468 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `LayoutClassLayout.getVBaseClassOffset(PrimaryBase);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 182 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1470 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(Layout.getBaseClassOffset(PrimaryBase).isZero() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 183 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1473 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `PrimaryBaseOffset = Base.getBaseOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 184 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1498 | getOverrider | 比较/实现 | 关键函数相关（需复核） | `Overriders.getOverrider(MD, Base.getBaseOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 185 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1513 | MethodInfo | 比较/实现 | 关键函数相关（需复核） | `MethodInfo MethodInfo(Base.getBaseOffset(), BaseOffsetInLayoutClass,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 186 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1581 | getOverrider | 比较/实现 | 关键函数相关（需复核） | `Overriders.getOverrider(MD, Base.getBaseOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 187 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1584 | MethodInfo | 比较/实现 | 关键函数相关（需复核） | `MethodInfo MethodInfo(Base.getBaseOffset(), BaseOffsetInLayoutClass,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 188 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1703 |  | 序列化 | 序列化位置读写（需复核） | `VTableLayout::AddressPointLocation{` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 189 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1704 | unsigned | 计算 | 强制收窄为32位 | `unsigned(VTableIndices.size() - 1),` | 改为 uint64_t / 移除收窄 | TODO |
| 190 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1705 | unsigned | 计算 | 强制收窄为32位 | `unsigned(AddressPoint - VTableIndex)}));` | 改为 uint64_t / 移除收窄 | TODO |
| 191 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1719 | if | 比较/实现 | 关键函数相关（需复核） | `if (LayoutClassLayout.getVBaseClassOffset(PrimaryBase) !=` | 检查实现是否用 64 位位置/偏移 | TODO |
| 192 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1768 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits RelativeBaseOffset = Layout.getBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 193 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1769 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits BaseOffset = Base.getBaseOffset() + RelativeBaseOffset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 194 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1810 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `LayoutClassLayout.getVBaseClassOffset(PrimaryBase);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 195 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1837 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `LayoutClassLayout.getVBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 196 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1840 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `OffsetInLayoutClass + Layout.getBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 197 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1864 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `MostDerivedClassLayout.getVBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 198 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1869 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `LayoutClassLayout.getVBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 199 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1927 | getVCallOffset | 比较/实现 | 关键函数相关（需复核） | `<< Component.getVCallOffset().getQuantity()` | 检查实现是否用 64 位位置/偏移 | TODO |
| 200 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 1933 | getVBaseOffset | 比较/实现 | 关键函数相关（需复核） | `<< Component.getVBaseOffset().getQuantity()` | 检查实现是否用 64 位位置/偏移 | TODO |
| 201 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 2052 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `Out << ", " << Base.getBaseOffset().getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 202 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 2056 | lower_bound | 比较/实现 | 关键函数相关（需复核） | `AddressPointsByIndex.lower_bound(NextIndex)->second.getBaseOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 203 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 2062 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(I.second.getBaseOffset() == BaseOffset &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 204 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 2221 |  | 序列化 | 序列化位置读写（需复核） | `// Multiple BaseSubobjects can map to the same AddressPointLocation, but` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 205 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 2286 | getVirtualBaseOffsetOffset | 比较/实现 | 关键函数相关（需复核） | `ItaniumVTableContext::getVirtualBaseOffsetOffset(const CXXRecordDecl *RD,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 206 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 2342 |  | 比较/实现 | 关键函数相关（需复核） | `// getVirtualBaseOffsetOffset will compute it separately without computing` | 检查实现是否用 64 位位置/偏移 | TODO |
| 207 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 2735 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Overrider.Offset + OverriderRDLayout.getVBaseClassOffset(CurRD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 208 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 2737 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `ThisOffset += Layout.getBaseClassOffset(CurRD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 209 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 2893 | getVBPtrOffset | 比较/实现 | 关键函数相关（需复核） | `MostDerivedClassLayout.getVBPtrOffset()).getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 210 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 2912 |  | 声明/类型别名 | 可疑别名32位 | `typedef llvm::DenseMap<DeclarationName, unsigned> VisitedGroupIndicesTy;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 211 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 2959 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `NextBaseOffset = MostDerivedClassLayout.getVBaseClassOffset(NextBase);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 212 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 2962 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `Base.getBaseOffset() + Layout.getBaseClassOffset(NextBase);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 213 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 2968 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `NextBaseOffset = Base.getBaseOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 214 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 2992 | getOverrider | 比较/实现 | 关键函数相关（需复核） | `Overriders.getOverrider(MD, Base.getBaseOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 215 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 3053 | if | 比较/实现 | 关键函数相关（需复核） | `} else if (Base.getBaseOffset() != WhichVFPtr.FullOffsetInMDC \|\|` | 检查实现是否用 64 位位置/偏移 | TODO |
| 216 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 3085 | getASTRecordLayout | 比较/实现 | 关键函数相关（需复核） | `Context.getASTRecordLayout(ReturnAdjustmentOffset.DerivedClass);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 217 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 3087 | getVBPtrOffset | 比较/实现 | 关键函数相关（需复核） | `DerivedLayout.getVBPtrOffset().getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 218 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 3089 | getVBTableIndex | 比较/实现 | 关键函数相关（需复核） | `VTables.getVBTableIndex(ReturnAdjustmentOffset.DerivedClass,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 219 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 3345 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `P->NonVirtualOffset += Layout.getBaseClassOffset(Base);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 220 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 3350 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `P->FullOffsetInMDC += Layout.getVBaseClassOffset(VB);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 221 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 3437 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `? MostDerivedLayout.getVBaseClassOffset(Base)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 222 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 3438 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `: Offset + Layout.getBaseClassOffset(Base);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 223 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 3484 | isVirtual | 比较/实现 | 关键函数相关（需复核） | `Offset = BaseBS->isVirtual() ? MostDerivedLayout.getVBaseClassOffset(Base)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 224 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 3485 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `: Offset + Layout.getBaseClassOffset(Base);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 225 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 3520 | getOverrider | 比较/实现 | 关键函数相关（需复核） | `Overriders.getOverrider(MD->getCanonicalDecl(), BaseOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 226 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 3592 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `L += Layout.getVBaseClassOffset(LHS.VBase);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 227 | AST/VTableBuilder | ./lib/AST/VTableBuilder.cpp | 3594 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `R += Layout.getVBaseClassOffset(RHS.VBase);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 228 | AST/DeclTemplate | ./lib/AST/DeclTemplate.cpp | 134 | if | 声明/容器 | 容器承载32位位置 | `if (Optional<unsigned> Expansions = getExpandedPackSize(P)) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 229 | AST/DeclTemplate | ./lib/AST/DeclTemplate.cpp | 633 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpanded) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 230 | AST/APValue | ./lib/AST/APValue.cpp | 346 | setLValue | 比较/实现 | 关键函数相关（需复核） | `setLValue(RHS.getLValueBase(), RHS.getLValueOffset(), RHS.getLValuePath(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 231 | AST/APValue | ./lib/AST/APValue.cpp | 349 | setLValue | 比较/实现 | 关键函数相关（需复核） | `setLValue(RHS.getLValueBase(), RHS.getLValueOffset(), NoLValuePath(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 232 | AST/APValue | ./lib/AST/APValue.cpp | 595 | AddInteger | 比较/实现 | 关键函数相关（需复核） | `ID.AddInteger(getLValueOffset().getQuantity());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 233 | AST/APValue | ./lib/AST/APValue.cpp | 755 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `<< getLValueOffset().getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 234 | AST/APValue | ./lib/AST/APValue.cpp | 758 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `<< getLValueOffset().getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 235 | AST/APValue | ./lib/AST/APValue.cpp | 765 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits O = getLValueOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 236 | AST/APValue | ./lib/AST/APValue.cpp | 957 | MakeIntValue | 比较/实现 | 关键函数相关（需复核） | `Result = Ctx.MakeIntValue(getLValueOffset().getQuantity(), SrcTy);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 237 | AST/APValue | ./lib/AST/APValue.cpp | 974 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits &APValue::getLValueOffset() {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 238 | AST/ScanfFormatString | ./lib/AST/ScanfFormatString.cpp | 214 |  | 计算 | 指针差值落入32位 | `unsigned Len = I - Beg;` | 用 uint64_t 接收指针差值 | TODO |
| 239 | AST/ComputeDependence | ./lib/AST/ComputeDependence.cpp | 440 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned I = 0, End = E->numOfIterators(); I < End; ++I) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 240 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 321 |  | 声明/类型别名 | 可疑别名32位 | `typedef llvm::DenseMap<const void *, unsigned> ArgBackRefMap;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 241 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 483 | uint32_t | 计算 | 强制收窄为32位 | `uint32_t TruncatedHash = uint32_t(xxHash64(FE->getName()));` | 改为 uint64_t / 移除收窄 | TODO |
| 242 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 675 | getASTContext | 比较/实现 | 关键函数相关（需复核） | `FieldOffset = getASTContext().getFieldOffset(VD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 243 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 747 | getVBPtrOffset | 比较/实现 | 关键函数相关（需复核） | `VBPtrOffset = Layout.getVBPtrOffset().getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 244 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 768 | mangleNumber | 计算 | 强制收窄为32位 | `mangleNumber(static_cast<uint32_t>(NVOffset));` | 改为 uint64_t / 移除收窄 | TODO |
| 245 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 1733 | mangleNumber | 比较/实现 | 关键函数相关（需复核） | `mangleNumber(V.getLValueOffset().getQuantity());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 246 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 3444 |  | 计算 | 强制收窄为32位 | `static_cast<uint32_t>(Adjustment.Virtual.Microsoft.VBPtrOffset));` | 改为 uint64_t / 移除收窄 | TODO |
| 247 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 3446 |  | 计算 | 强制收窄为32位 | `static_cast<uint32_t>(Adjustment.Virtual.Microsoft.VBOffsetOffset));` | 改为 uint64_t / 移除收窄 | TODO |
| 248 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 3448 |  | 计算 | 强制收窄为32位 | `static_cast<uint32_t>(Adjustment.Virtual.Microsoft.VtordispOffset));` | 改为 uint64_t / 移除收窄 | TODO |
| 249 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 3449 | mangleNumber | 计算 | 强制收窄为32位 | `Mangler.mangleNumber(static_cast<uint32_t>(Adjustment.NonVirtual));` | 改为 uint64_t / 移除收窄 | TODO |
| 250 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 3453 |  | 计算 | 强制收窄为32位 | `static_cast<uint32_t>(Adjustment.Virtual.Microsoft.VtordispOffset));` | 改为 uint64_t / 移除收窄 | TODO |
| 251 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 3454 | mangleNumber | 计算 | 强制收窄为32位 | `Mangler.mangleNumber(-static_cast<uint32_t>(Adjustment.NonVirtual));` | 改为 uint64_t / 移除收窄 | TODO |
| 252 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 3469 | mangleNumber | 计算 | 强制收窄为32位 | `Mangler.mangleNumber(-static_cast<uint32_t>(Adjustment.NonVirtual));` | 改为 uint64_t / 移除收窄 | TODO |
| 253 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 3658 | getStream | 比较/实现 | 关键函数相关（需复核） | `Mangler.getStream() << NVOffset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 254 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 3661 | getStream | 比较/实现 | 关键函数相关（需复核） | `Mangler.getStream() << NVOffset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 255 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 3662 | getStream | 比较/实现 | 关键函数相关（需复核） | `Mangler.getStream() << VBPtrOffset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 256 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 3899 | getCodeUnit | 计算 | 复杂指针差值收窄 | `return static_cast<char>(0); uint32_t CodeUnit = SL->getCodeUnit(Index / CharByteWidth); unsigned OffsetInCodeUnit = (CharByteWidth - 1) -…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 257 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 3900 | getCodeUnit | 计算 | 复杂指针差值收窄 | `uint32_t CodeUnit = SL->getCodeUnit(Index / CharByteWidth); unsigned OffsetInCodeUnit = (CharByteWidth - 1) - (Index % CharByteWidth); ret…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 258 | AST/MicrosoftMangle | ./lib/AST/MicrosoftMangle.cpp | 3901 |  | 计算 | 复杂指针差值收窄 | `unsigned OffsetInCodeUnit = (CharByteWidth - 1) - (Index % CharByteWidth); return static_cast<char>((CodeUnit >> (8 * OffsetInCodeUnit)) &…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 259 | AST/RawCommentList | ./lib/AST/RawCommentList.cpp | 163 |  | 计算 | 指针差值落入32位 | `const unsigned Length = EndOffset - BeginOffset;` | 用 uint64_t 接收指针差值 | TODO |
| 260 | AST/RawCommentList | ./lib/AST/RawCommentList.cpp | 284 |  | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> Loc =` | 确认是否参与源位置运算；非则忽略 | TODO |
| 261 | AST/RawCommentList | ./lib/AST/RawCommentList.cpp | 288 |  | 声明/局部 | 仅命名可疑需复核 | `const unsigned CommentOffset = Loc.second;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 262 | AST/RawCommentList | ./lib/AST/RawCommentList.cpp | 341 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset) const {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 263 | AST/RawCommentList | ./lib/AST/RawCommentList.cpp | 345 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `const unsigned Line = SourceMgr.getLineNumber(File, Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 264 | AST/RawCommentList | ./lib/AST/RawCommentList.cpp | 345 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `const unsigned Line = SourceMgr.getLineNumber(File, Offset);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 265 | AST/RawCommentList | ./lib/AST/RawCommentList.cpp | 350 | getCommentEndOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned RawCommentList::getCommentEndOffset(RawComment *C) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 266 | AST/RawCommentList | ./lib/AST/RawCommentList.cpp | 354 |  | 声明/局部 | 仅命名可疑需复核 | `const unsigned Offset =` | 确认是否参与源位置运算；非则忽略 | TODO |
| 267 | AST/RawCommentList | ./lib/AST/RawCommentList.cpp | 421 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc Loc = SourceMgr.getPresumedLoc(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 268 | AST/RawCommentList | ./lib/AST/RawCommentList.cpp | 457 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `SourceMgr.getPresumedLoc(Tok.getLocation().getLocWithOffset(SkipLen));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 269 | AST/RawCommentList | ./lib/AST/RawCommentList.cpp | 463 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc End = SourceMgr.getPresumedLoc(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 270 | AST/RawCommentList | ./lib/AST/RawCommentList.cpp | 472 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc End = SourceMgr.getPresumedLoc(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 271 | AST/Stmt | ./lib/AST/Stmt.cpp | 991 | varOffset | 比较/实现 | 关键函数相关（需复核） | `getTrailingObjects<Stmt *>()[varOffset()] = nullptr;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 272 | AST/Stmt | ./lib/AST/Stmt.cpp | 996 | varOffset | 比较/实现 | 关键函数相关（需复核） | `getTrailingObjects<Stmt *>()[varOffset()] = new (Ctx)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 273 | AST/Stmt | ./lib/AST/Stmt.cpp | 1109 | varOffset | 比较/实现 | 关键函数相关（需复核） | `getTrailingObjects<Stmt *>()[varOffset()] = nullptr;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 274 | AST/Stmt | ./lib/AST/Stmt.cpp | 1114 | varOffset | 比较/实现 | 关键函数相关（需复核） | `getTrailingObjects<Stmt *>()[varOffset()] = new (Ctx)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 275 | AST/Stmt | ./lib/AST/Stmt.cpp | 1170 | varOffset | 比较/实现 | 关键函数相关（需复核） | `getTrailingObjects<Stmt *>()[varOffset()] = nullptr;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 276 | AST/Stmt | ./lib/AST/Stmt.cpp | 1175 | varOffset | 比较/实现 | 关键函数相关（需复核） | `getTrailingObjects<Stmt *>()[varOffset()] = new (Ctx)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 277 | AST/TextNodeDumper | ./lib/AST/TextNodeDumper.cpp | 623 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation SpellingLoc = SM->getSpellingLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 278 | AST/TextNodeDumper | ./lib/AST/TextNodeDumper.cpp | 627 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM->getPresumedLoc(SpellingLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 279 | AST/CommentSema | ./lib/AST/CommentSema.cpp | 315 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `SmallVector<unsigned, 2> Position;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 280 | AST/CommentSema | ./lib/AST/CommentSema.cpp | 315 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 2> Position;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 281 | AST/CommentSema | ./lib/AST/CommentSema.cpp | 399 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc.getLocWithOffset(1 + CommandName.size()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 282 | AST/CommentSema | ./lib/AST/CommentSema.cpp | 423 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `TextBegin.getLocWithOffset(Text.size()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 283 | AST/CommentSema | ./lib/AST/CommentSema.cpp | 1049 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `SmallVectorImpl<unsigned> *Position) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 284 | AST/CommentSema | ./lib/AST/CommentSema.cpp | 1074 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `SmallVectorImpl<unsigned> *Position) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 285 | AST/VTTBuilder | ./lib/AST/VTTBuilder.cpp | 71 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits BaseOffset = Base.getBaseOffset() +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 286 | AST/VTTBuilder | ./lib/AST/VTTBuilder.cpp | 72 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Layout.getBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 287 | AST/VTTBuilder | ./lib/AST/VTTBuilder.cpp | 114 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `BaseOffset = MostDerivedClassLayout.getVBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 288 | AST/VTTBuilder | ./lib/AST/VTTBuilder.cpp | 119 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `BaseOffset = Base.getBaseOffset() +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 289 | AST/VTTBuilder | ./lib/AST/VTTBuilder.cpp | 120 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Layout.getBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 290 | AST/VTTBuilder | ./lib/AST/VTTBuilder.cpp | 167 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `MostDerivedClassLayout.getVBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 291 | AST/RecordLayout | ./lib/AST/RecordLayout.cpp | 82 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(getVBaseClassOffset(PrimaryBase).isZero() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 292 | AST/RecordLayout | ./lib/AST/RecordLayout.cpp | 86 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(getBaseClassOffset(PrimaryBase).isZero() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 293 | AST/Expr | ./lib/AST/Expr.cpp | 216 | if | 比较/实现 | 关键函数相关（需复核） | `if (Value.isLValue() && Value.getLValueOffset().isZero())` | 检查实现是否用 64 位位置/偏移 | TODO |
| 294 | AST/Expr | ./lib/AST/Expr.cpp | 565 |  | 声明/容器 | 容器承载32位位置 | `const NamedDecl *ND) -> llvm::Optional<unsigned> {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 295 | AST/Expr | ./lib/AST/Expr.cpp | 1256 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation StrTokSpellingLoc = SM.getSpellingLoc(StrTokLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 296 | AST/Expr | ./lib/AST/Expr.cpp | 1286 | getOffsetOfStringByte | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = SLP.getOffsetOfStringByte(TheTok, ByteNo);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 297 | AST/Expr | ./lib/AST/Expr.cpp | 1606 | assert | 计算 | 强制收窄为32位 | `assert(static_cast<unsigned>(ExprKind) == UnaryExprOrTypeTraitExprBits.Kind &&` | 改为 uint64_t / 移除收窄 | TODO |
| 298 | AST/Expr | ./lib/AST/Expr.cpp | 2185 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = Ctx.getSourceManager().getPresumedLoc(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 299 | AST/Expr | ./lib/AST/Expr.cpp | 2657 | if | 计算 | 复杂指针差值收窄 | `if (unsigned NumArgs = CE->getNumArgs()) R2 = SourceRange(CE->getArg(0)->getBeginLoc(), CE->getArg(NumArgs - 1)->getEndLoc());` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 300 | AST/Expr | ./lib/AST/Expr.cpp | 2693 | if | 计算 | 复杂指针差值收窄 | `if (unsigned NumArgs = CE->getNumArgs()) R2 = SourceRange(CE->getArg(0)->getBeginLoc(), CE->getArg(NumArgs - 1)->getEndLoc());` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 301 | AST/Expr | ./lib/AST/Expr.cpp | 4423 |  | 计算 | 指针差值落入32位 | `unsigned NumNewDesignators = Last - First;` | 用 uint64_t 接收指针差值 | TODO |
| 302 | AST/Expr | ./lib/AST/Expr.cpp | 4908 | setAssignmentLoc | 声明/局部 | 仅命名可疑需复核 | `void OMPIteratorExpr::setAssignmentLoc(unsigned I, SourceLocation Loc) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 303 | AST/Expr | ./lib/AST/Expr.cpp | 4916 | setIteratorRange | 声明/局部 | 无关键词的32位位置变量（需复核） | `void OMPIteratorExpr::setIteratorRange(unsigned I, Expr *Begin,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 304 | AST/Expr | ./lib/AST/Expr.cpp | 4922 |  | 比较/实现 | 关键函数相关（需复核） | `getTrailingObjects<Expr *>()[I * static_cast<int>(RangeExprOffset::Total) +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 305 | AST/Expr | ./lib/AST/Expr.cpp | 4925 |  | 比较/实现 | 关键函数相关（需复核） | `getTrailingObjects<Expr *>()[I * static_cast<int>(RangeExprOffset::Total) +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 306 | AST/Expr | ./lib/AST/Expr.cpp | 4927 |  | 比较/实现 | 关键函数相关（需复核） | `getTrailingObjects<Expr *>()[I * static_cast<int>(RangeExprOffset::Total) +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 307 | AST/Decl | ./lib/AST/Decl.cpp | 2759 | toCharUnitsFromBits | 比较/实现 | 关键函数相关（需复核） | `Ctx.toCharUnitsFromBits(RL.getFieldOffset(RL.getFieldCount() - 1));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 308 | AST/Decl | ./lib/AST/Decl.cpp | 3188 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> *AlignmentParam, bool *IsNothrow) const {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 309 | AST/Decl | ./lib/AST/Decl.cpp | 3624 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `!SM.isBeforeInTranslationUnit(RTRange.getEnd(), Boundary))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 310 | AST/Decl | ./lib/AST/Decl.cpp | 5123 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `return SM.getSpellingLoc(TTLoc) == SM.getSpellingLoc(TDLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 311 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 199 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `return SourceMgr.getExpansionLoc(DeclLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 312 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 239 | if | 比较/实现 | 关键函数相关（需复核） | `if (SourceMgr.getLineNumber(DeclLocDecomp.first, DeclLocDecomp.second) ==` | 检查实现是否用 64 位位置/偏移 | TODO |
| 313 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 263 | getCommentEndOffset | 比较/实现 | 关键函数相关（需复核） | `Comments.getCommentEndOffset(CommentBeforeDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 314 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 794 | getNumExpansionParameters | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned>(TTP->getNumExpansionParameters()) : None);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 315 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 1183 | addLazyModuleInitializers | 声明/容器 | 容器承载32位位置 | `void ASTContext::addLazyModuleInitializers(Module *M, ArrayRef<uint32_t> IDs) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 316 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 1815 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t Offset = Layout.getFieldOffset(Field->getFieldIndex());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 317 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 1821 |  | 计算 | 强制收窄为32位 | `FieldAlign = static_cast<unsigned>(LowBitOfOffset);` | 改为 uint64_t / 移除收窄 | TODO |
| 318 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 2306 | min | 计算 | 强制收窄为32位 | `std::min(static_cast<unsigned>(std::max(` | 改为 uint64_t / 移除收窄 | TODO |
| 319 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 2418 |  | 计算 | 强制收窄为32位 | `Align = static_cast<unsigned>(Width);` | 改为 uint64_t / 移除收窄 | TODO |
| 320 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 2526 |  | 计算 | 强制收窄为32位 | `unsigned PreferredAlign = static_cast<unsigned>(` | 改为 uint64_t / 移除收窄 | TODO |
| 321 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 2578 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Offset += Layout->getBaseClassOffset(Base);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 322 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 2595 | getASTRecordLayout | 比较/实现 | 关键函数相关（需复核） | `ThisAdjustment += getASTRecordLayout(Derived).getBaseClassOffset(Base);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 323 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 2673 | getSubobjectOffset | 比较/实现 | 关键函数相关（需复核） | `static int64_t getSubobjectOffset(const FieldDecl *Field,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 324 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 2676 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `return Context.getFieldOffset(Field);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 325 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 2679 | getSubobjectOffset | 比较/实现 | 关键函数相关（需复核） | `static int64_t getSubobjectOffset(const CXXRecordDecl *RD,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 326 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 2682 | toBits | 比较/实现 | 关键函数相关（需复核） | `return Context.toBits(Layout.getBaseClassOffset(RD));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 327 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 2738 | getSubobjectOffset | 比较/实现 | 关键函数相关（需复核） | `int64_t Offset = getSubobjectOffset(Subobject, Context, Layout);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 328 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 2766 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `return Layout.getBaseClassOffset(L) < Layout.getBaseClassOffset(R);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 329 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 5157 | TemplateArgument | 声明/容器 | 容器承载32位位置 | `Arg = TemplateArgument(TemplateName(TTP), Optional<unsigned>());` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 330 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 5178 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 331 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 7204 | if | 计算 | 强制收窄为32位 | `if (static_cast<unsigned>(CFRuntime) <` | 改为 uint64_t / 移除收窄 | TODO |
| 332 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 7205 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(LangOptions::CoreFoundationABI::Swift)) {` | 改为 uint64_t / 移除收窄 | TODO |
| 333 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 8006 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `Offset = RL.getFieldOffset(FD->getFieldIndex());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 334 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 8432 | toBits | 比较/实现 | 关键函数相关（需复核） | `uint64_t offs = toBits(layout.getBaseClassOffset(base));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 335 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 8443 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t offs = layout.getFieldOffset(i);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 336 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 8454 | toBits | 比较/实现 | 关键函数相关（需复核） | `uint64_t offs = toBits(layout.getVBaseClassOffset(base));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 337 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 9038 |  | 计算 | 指针差值落入32位 | `unsigned size = End - Begin;` | 用 uint64_t 接收指针差值 | TODO |
| 338 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 9038 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned size = End - Begin;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 339 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 11142 | strtoul | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned NumElements = strtoul(Str, &End, 10);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 340 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 11155 | strtoul | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned NumElements = strtoul(Str, &End, 10);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 341 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 11171 | strtoul | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned NumElements = strtoul(Str, &End, 10);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 342 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 11233 | strtoul | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned AddrSpace = strtoul(Str, &End, 10);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 343 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 11778 |  | 声明/容器 | 容器承载32位位置 | `[](ASTContext &, const NamedDecl *ND) -> llvm::Optional<unsigned> {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 344 | AST/ASTContext | ./lib/AST/ASTContext.cpp | 12258 | getTypeSize | 计算 | 强制收窄为32位 | `static_cast<unsigned>(getTypeSize(Ty)), getFixedPointScale(Ty), isSigned,` | 改为 uint64_t / 移除收窄 | TODO |
| 345 | AST/TemplateBase | ./lib/AST/TemplateBase.cpp | 274 | getNumTemplateExpansions | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> TemplateArgument::getNumTemplateExpansions() const {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 346 | AST/DeclObjC | ./lib/AST/DeclObjC.cpp | 1020 | if | 计算 | 强制收窄为32位 | `if (family != static_cast<unsigned>(InvalidObjCMethodFamily))` | 改为 uint64_t / 移除收窄 | TODO |
| 347 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 80 | getExternalFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t getExternalFieldOffset(const FieldDecl *FD) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 348 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 86 | getExternalNVBaseOffset | 比较/实现 | 关键函数相关（需复核） | `bool getExternalNVBaseOffset(const CXXRecordDecl *RD, CharUnits &BaseOffset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 349 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 94 | getExternalVBaseOffset | 比较/实现 | 关键函数相关（需复核） | `bool getExternalVBaseOffset(const CXXRecordDecl *RD, CharUnits &BaseOffset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 350 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 143 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `getFieldOffset(const ASTRecordLayout &Layout, unsigned FieldNo) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 351 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 144 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t FieldOffset = Layout.getFieldOffset(FieldNo);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 352 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 286 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits BaseOffset = Offset + Layout.getBaseClassOffset(Base->Class);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 353 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 308 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits FieldOffset = Offset + getFieldOffset(Layout, FieldNo);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 354 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 336 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits BaseOffset = Offset + Layout.getBaseClassOffset(Base->Class);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 355 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 355 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits FieldOffset = Offset + getFieldOffset(Layout, FieldNo);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 356 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 397 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits BaseOffset = Offset + Layout.getBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 357 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 407 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits VBaseOffset = Offset + Layout.getVBaseClassOffset(VBaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 358 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 420 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits FieldOffset = Offset + getFieldOffset(Layout, FieldNo);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 359 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 508 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits BaseOffset = Offset + Layout.getBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 360 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 518 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits VBaseOffset = Offset + Layout.getVBaseClassOffset(VBaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 361 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 531 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits FieldOffset = Offset + getFieldOffset(Layout, FieldNo);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 362 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 1139 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits BaseOffset = Offset + Layout.getBaseClassOffset(Base->Class);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 363 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 1216 | getExternalVBaseOffset | 比较/实现 | 关键函数相关（需复核） | `HasExternalLayout = External.getExternalVBaseOffset(Base->Class, Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 364 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 1218 | getExternalNVBaseOffset | 比较/实现 | 关键函数相关（需复核） | `HasExternalLayout = External.getExternalNVBaseOffset(Base->Class, Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 365 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 1307 | setSize | 比较/实现 | 关键函数相关（需复核） | `setSize(std::max(getSize(), Offset + Layout.getSize()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 366 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 2231 | getExternalFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t ExternalFieldOffset = External.getExternalFieldOffset(Field);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 367 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 2276 |  | 计算 | 指针差值落入32位 | `unsigned PadSize = Offset - UnpaddedOffset;` | 用 uint64_t 接收指针差值 | TODO |
| 368 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 2276 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned PadSize = Offset - UnpaddedOffset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 369 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 2872 | getVBPtrOffset | 比较/实现 | 关键函数相关（需复核） | `VBPtrOffset = Bases[SharedVBPtrBase] + Layout.getVBPtrOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 370 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 2909 | getExternalNVBaseOffset | 比较/实现 | 关键函数相关（需复核） | `FoundBase = External.getExternalNVBaseOffset(BaseDecl, BaseOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 371 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 2947 | toCharUnitsFromBits | 比较/实现 | 关键函数相关（需复核） | `Context.toCharUnitsFromBits(External.getExternalFieldOffset(FD));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 372 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 2979 | getExternalFieldOffset | 比较/实现 | 关键函数相关（需复核） | `auto FieldBitOffset = External.getExternalFieldOffset(FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 373 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3131 | if | 比较/实现 | 关键函数相关（需复核） | `if (!External.getExternalVBaseOffset(BaseDecl, BaseOffset))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 374 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3403 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `static uint64_t getFieldOffset(const ASTContext &C, const FieldDecl *FD) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 375 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3405 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `return Layout.getFieldOffset(FD->getFieldIndex());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 376 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3408 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t ASTContext::getFieldOffset(const ValueDecl *VD) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 377 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3411 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `OffsetInBits = ::getFieldOffset(*this, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 378 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3417 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `OffsetInBits += ::getFieldOffset(*this, cast<FieldDecl>(ND));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 379 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3456 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `return RL->getFieldOffset(Index);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 380 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3512 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Begin, unsigned Width,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 381 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3582 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `return Layout.getBaseClassOffset(L) < Layout.getBaseClassOffset(R);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 382 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3587 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits BaseOffset = Offset + Layout.getBaseClassOffset(Base);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 383 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3596 | PrintOffset | 比较/实现 | 关键函数相关（需复核） | `PrintOffset(OS, Offset + Layout.getVBPtrOffset(), IndentLevel);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 384 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3606 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t LocalFieldOffsetInBits = Layout.getFieldOffset(FieldNo);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 385 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3612 | DumpRecordLayout | 比较/实现 | 关键函数相关（需复核） | `DumpRecordLayout(OS, RT->getDecl(), C, FieldOffset, IndentLevel,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 386 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3621 |  | 计算 | 指针差值落入32位 | `unsigned Begin = LocalFieldOffsetInBits - LocalFieldByteOffsetInBits;` | 用 uint64_t 接收指针差值 | TODO |
| 387 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3621 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Begin = LocalFieldOffsetInBits - LocalFieldByteOffsetInBits;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 388 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3642 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits VBaseOffset = Offset + Layout.getVBaseClassOffset(VBase);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 389 | AST/RecordLayoutBuilder | ./lib/AST/RecordLayoutBuilder.cpp | 3710 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `OS << Info.getFieldOffset(i);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 390 | AST/Interp | ./lib/AST/Interp/Interp.h | 188 | getByteOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned VL = LHS.getByteOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 391 | AST/Interp | ./lib/AST/Interp/Interp.h | 189 | getByteOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned VR = RHS.getByteOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 392 | AST/Interp | ./lib/AST/Interp/Interp.h | 210 | getByteOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned VL = LHS.getByteOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 393 | AST/Interp | ./lib/AST/Interp/Interp.h | 211 | getByteOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned VR = RHS.getByteOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 394 | AST/Interp | ./lib/AST/Interp/Interp.h | 519 | GetPtrField | 声明/局部 | 仅命名可疑需复核 | `inline bool GetPtrField(InterpState &S, CodePtr OpPC, uint32_t Off) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 395 | AST/Interp | ./lib/AST/Interp/Interp.h | 531 | GetPtrThisField | 声明/局部 | 仅命名可疑需复核 | `inline bool GetPtrThisField(InterpState &S, CodePtr OpPC, uint32_t Off) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 396 | AST/Interp | ./lib/AST/Interp/Interp.h | 541 | GetPtrActiveField | 声明/局部 | 仅命名可疑需复核 | `inline bool GetPtrActiveField(InterpState &S, CodePtr OpPC, uint32_t Off) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 397 | AST/Interp | ./lib/AST/Interp/Interp.h | 554 | GetPtrActiveThisField | 声明/局部 | 仅命名可疑需复核 | `inline bool GetPtrActiveThisField(InterpState &S, CodePtr OpPC, uint32_t Off) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 398 | AST/Interp | ./lib/AST/Interp/Interp.h | 567 | GetPtrBase | 声明/局部 | 仅命名可疑需复核 | `inline bool GetPtrBase(InterpState &S, CodePtr OpPC, uint32_t Off) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 399 | AST/Interp | ./lib/AST/Interp/Interp.h | 575 | GetPtrThisBase | 声明/局部 | 仅命名可疑需复核 | `inline bool GetPtrThisBase(InterpState &S, CodePtr OpPC, uint32_t Off) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 400 | AST/Interp | ./lib/AST/Interp/Interp.h | 730 | from | 比较/实现 | 关键函数相关（需复核） | `T Index = T::from(Ptr.getIndex(), Offset.bitWidth());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 401 | AST/Interp | ./lib/AST/Interp/Interp.h | 742 | getNumElems | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned MaxIndex = Ptr.getNumElems();` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 402 | AST/Interp | ./lib/AST/Interp/Interp.h | 746 | bitWidth | 声明/局部 | 仅命名可疑需复核 | `const unsigned Bits = Offset.bitWidth();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 403 | AST/Interp | ./lib/AST/Interp/Interp.h | 753 |  | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(MaxIndex);` | 改为 uint64_t / 移除收窄 | TODO |
| 404 | AST/Interp | ./lib/AST/Interp/Interp.h | 764 | getIndex | 计算 | 指针差值落入32位 | `unsigned MaxOffset = MaxIndex - Ptr.getIndex();` | 用 uint64_t 接收指针差值 | TODO |
| 405 | AST/Interp | ./lib/AST/Interp/Interp.h | 764 | getIndex | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned MaxOffset = MaxIndex - Ptr.getIndex();` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 406 | AST/Interp | ./lib/AST/Interp/Interp.h | 774 | atIndex | 计算 | 强制收窄为32位 | `S.Stk.push<Pointer>(Ptr.atIndex(static_cast<unsigned>(Result)));` | 改为 uint64_t / 移除收窄 | TODO |
| 407 | AST/Interp | ./lib/AST/Interp/Interp.h | 858 |  | 计算 | 强制收窄为32位 | `return static_cast<unsigned>(V);` | 改为 uint64_t / 移除收窄 | TODO |
| 408 | AST/Interp | ./lib/AST/Interp/ByteCodeEmitter.h | 34 |  | 声明/类型别名 | 可疑别名32位 | `using LabelTy = uint32_t;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 409 | AST/Interp | ./lib/AST/Interp/ByteCodeEmitter.h | 90 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<LabelTy, llvm::SmallVector<unsigned, 5>> LabelRelocs;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 410 | AST/Interp | ./lib/AST/Interp/ByteCodeEmitter.h | 97 | getOffset | 比较/实现 | 关键函数相关（需复核） | `int32_t getOffset(LabelTy Label);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 411 | AST/Interp | ./lib/AST/Interp/Integral.h | 44 |  | 声明/类型别名 | 可疑别名32位 | `template <> struct Repr<32, false> { using Type = uint32_t; };` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 412 | AST/Interp | ./lib/AST/Interp/Integral.h | 91 |  | 计算 | 强制收窄为32位 | `return V >= 0 && static_cast<unsigned>(V) > RHS;` | 改为 uint64_t / 移除收窄 | TODO |
| 413 | AST/Interp | ./lib/AST/Interp/Integral.h | 102 | unsigned | 计算 | 强制收窄为32位 | `explicit operator unsigned() const { return V; }` | 改为 uint64_t / 移除收窄 | TODO |
| 414 | AST/Interp | ./lib/AST/Interp/Function.h | 37 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 415 | AST/Interp | ./lib/AST/Interp/Function.h | 80 | getParamDescriptor | 比较/实现 | 关键函数相关（需复核） | `ParamDescriptor getParamDescriptor(unsigned Offset) const;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 416 | AST/Interp | ./lib/AST/Interp/Function.h | 80 | getParamDescriptor | 声明/局部 | 仅命名可疑需复核 | `ParamDescriptor getParamDescriptor(unsigned Offset) const;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 417 | AST/Interp | ./lib/AST/Interp/Function.h | 115 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<unsigned, ParamDescriptor> &&Params);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 418 | AST/Interp | ./lib/AST/Interp/Function.h | 150 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<unsigned, ParamDescriptor> Params;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 419 | AST/Interp | ./lib/AST/Interp/ByteCodeEmitter.cpp | 30 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<unsigned, Function::ParamDescriptor> ParamDescriptors;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 420 | AST/Interp | ./lib/AST/Interp/ByteCodeEmitter.cpp | 83 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Location = NextLocalOffset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 421 | AST/Interp | ./lib/AST/Interp/ByteCodeEmitter.cpp | 105 | getOffset | 比较/实现 | 关键函数相关（需复核） | `int32_t ByteCodeEmitter::getOffset(LabelTy Label) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 422 | AST/Interp | ./lib/AST/Interp/ByteCodeEmitter.cpp | 173 | emitJt | 比较/实现 | 关键函数相关（需复核） | `return emitJt(getOffset(Label), SourceInfo{});` | 检查实现是否用 64 位位置/偏移 | TODO |
| 423 | AST/Interp | ./lib/AST/Interp/ByteCodeEmitter.cpp | 177 | emitJf | 比较/实现 | 关键函数相关（需复核） | `return emitJf(getOffset(Label), SourceInfo{});` | 检查实现是否用 64 位位置/偏移 | TODO |
| 424 | AST/Interp | ./lib/AST/Interp/ByteCodeEmitter.cpp | 181 | emitJmp | 比较/实现 | 关键函数相关（需复核） | `return emitJmp(getOffset(Label), SourceInfo{});` | 检查实现是否用 64 位位置/偏移 | TODO |
| 425 | AST/Interp | ./lib/AST/Interp/Pointer.h | 58 | elemSize | 声明/局部 | 仅命名可疑需复核 | `unsigned Off = Idx * elemSize();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 426 | AST/Interp | ./lib/AST/Interp/Pointer.h | 67 | atField | 声明/局部 | 仅命名可疑需复核 | `Pointer atField(unsigned Off) const {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 427 | AST/Interp | ./lib/AST/Interp/Pointer.h | 68 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Field = Offset + Off;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 428 | AST/Interp | ./lib/AST/Interp/Pointer.h | 129 | getInlineDesc | 计算 | 指针差值落入32位 | `unsigned Next = Base - getInlineDesc()->Offset;` | 用 uint64_t 接收指针差值 | TODO |
| 429 | AST/Interp | ./lib/AST/Interp/Pointer.h | 129 | getInlineDesc | 比较/实现 | 关键函数相关（需复核） | `unsigned Next = Base - getInlineDesc()->Offset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 430 | AST/Interp | ./lib/AST/Interp/Pointer.h | 129 | getInlineDesc | 声明/局部 | 仅命名可疑需复核 | `unsigned Next = Base - getInlineDesc()->Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 431 | AST/Interp | ./lib/AST/Interp/Pointer.h | 154 | getInlineDesc | 计算 | 指针差值落入32位 | `unsigned NewBase = Base - getInlineDesc()->Offset;` | 用 uint64_t 接收指针差值 | TODO |
| 432 | AST/Interp | ./lib/AST/Interp/Pointer.h | 154 | getInlineDesc | 比较/实现 | 关键函数相关（需复核） | `unsigned NewBase = Base - getInlineDesc()->Offset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 433 | AST/Interp | ./lib/AST/Interp/Pointer.h | 154 | getInlineDesc | 声明/局部 | 仅命名可疑需复核 | `unsigned NewBase = Base - getInlineDesc()->Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 434 | AST/Interp | ./lib/AST/Interp/Pointer.h | 187 | getOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned getOffset() const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 435 | AST/Interp | ./lib/AST/Interp/Pointer.h | 249 | getDeclID | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> getDeclID() const { return Pointee->getDeclID(); }` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 436 | AST/Interp | ./lib/AST/Interp/Pointer.h | 252 | getByteOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned getByteOffset() const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 437 | AST/Interp | ./lib/AST/Interp/Pointer.h | 264 | getOffset | 比较/实现 | 关键函数相关（需复核） | `return getOffset() / ElemSize;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 438 | AST/Interp | ./lib/AST/Interp/Pointer.h | 270 | isElementPastEnd | 比较/实现 | 关键函数相关（需复核） | `return isElementPastEnd() \|\| getSize() == getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 439 | AST/Interp | ./lib/AST/Interp/Pointer.h | 313 | Pointer | 声明/局部 | 仅命名可疑需复核 | `Pointer(Block *Pointee, unsigned Base, unsigned Offset);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 440 | AST/Interp | ./lib/AST/Interp/Pointer.h | 319 | getDescriptor | 比较/实现 | 关键函数相关（需复核） | `InlineDescriptor *getDescriptor(unsigned Offset) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 441 | AST/Interp | ./lib/AST/Interp/Pointer.h | 319 | getDescriptor | 声明/局部 | 仅命名可疑需复核 | `InlineDescriptor *getDescriptor(unsigned Offset) const {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 442 | AST/Interp | ./lib/AST/Interp/Pointer.h | 334 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 443 | AST/Interp | ./lib/AST/Interp/ByteCodeExprGen.h | 155 | allocateLocal | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> allocateLocal(DeclTy &&Decl,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 444 | AST/Interp | ./lib/AST/Interp/ByteCodeExprGen.h | 207 | getGlobalIdx | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> getGlobalIdx(const VarDecl *VD);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 445 | AST/Interp | ./lib/AST/Interp/ByteCodeExprGen.h | 303 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> Idx;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 446 | AST/Interp | ./lib/AST/Interp/Function.cpp | 20 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<unsigned, ParamDescriptor> &&Params)` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 447 | AST/Interp | ./lib/AST/Interp/Function.cpp | 28 | getParamDescriptor | 比较/实现 | 关键函数相关（需复核） | `Function::ParamDescriptor Function::getParamDescriptor(unsigned Offset) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 448 | AST/Interp | ./lib/AST/Interp/Function.cpp | 28 | getParamDescriptor | 声明/局部 | 仅命名可疑需复核 | `Function::ParamDescriptor Function::getParamDescriptor(unsigned Offset) const {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 449 | AST/Interp | ./lib/AST/Interp/Function.cpp | 35 | getCodeBegin | 计算 | 指针差值落入32位 | `unsigned Offset = PC - getCodeBegin();` | 用 uint64_t 接收指针差值 | TODO |
| 450 | AST/Interp | ./lib/AST/Interp/Function.cpp | 35 | getCodeBegin | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = PC - getCodeBegin();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 451 | AST/Interp | ./lib/AST/Interp/Function.cpp | 36 |  | 声明/类型别名 | 可疑别名32位 | `using Elem = std::pair<unsigned, SourceInfo>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 452 | AST/Interp | ./lib/AST/Interp/EvalEmitter.h | 38 |  | 声明/类型别名 | 可疑别名32位 | `using LabelTy = uint32_t;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 453 | AST/Interp | ./lib/AST/Interp/EvalEmitter.h | 94 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<unsigned, std::unique_ptr<char[]>> Locals;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 454 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 63 | getFrameOffset | 比较/实现 | 关键函数相关（需复核） | `size_t getFrameOffset() const { return FrameOffset; }` | 检查实现是否用 64 位位置/偏移 | TODO |
| 455 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 66 | getLocal | 比较/实现 | 关键函数相关（需复核） | `template <typename T> const T &getLocal(unsigned Offset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 456 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 66 | getLocal | 声明/局部 | 仅命名可疑需复核 | `template <typename T> const T &getLocal(unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 457 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 71 | setLocal | 声明/局部 | 仅命名可疑需复核 | `template <typename T> void setLocal(unsigned Offset, const T &Value) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 458 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 76 | getLocalPointer | 比较/实现 | 关键函数相关（需复核） | `Pointer getLocalPointer(unsigned Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 459 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 76 | getLocalPointer | 声明/局部 | 仅命名可疑需复核 | `Pointer getLocalPointer(unsigned Offset);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 460 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 79 | getParam | 比较/实现 | 关键函数相关（需复核） | `template <typename T> const T &getParam(unsigned Offset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 461 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 79 | getParam | 声明/局部 | 仅命名可疑需复核 | `template <typename T> const T &getParam(unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 462 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 89 | setParam | 声明/局部 | 仅命名可疑需复核 | `template <typename T> void setParam(unsigned Offset, const T &Value) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 463 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 90 | getParamPointer | 比较/实现 | 关键函数相关（需复核） | `getParamPointer(Offset).deref<T>() = Value;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 464 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 94 | getParamPointer | 比较/实现 | 关键函数相关（需复核） | `Pointer getParamPointer(unsigned Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 465 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 94 | getParamPointer | 声明/局部 | 仅命名可疑需复核 | `Pointer getParamPointer(unsigned Offset);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 466 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 115 | stackRef | 声明/局部 | 仅命名可疑需复核 | `template <typename T> const T &stackRef(unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 467 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 120 | localRef | 声明/局部 | 仅命名可疑需复核 | `template <typename T> T &localRef(unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 468 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 121 | get | 比较/实现 | 关键函数相关（需复核） | `return *reinterpret_cast<T *>(Locals.get() + Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 469 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 125 | localBlock | 声明/局部 | 仅命名可疑需复核 | `void *localBlock(unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 470 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 126 | get | 比较/实现 | 关键函数相关（需复核） | `return Locals.get() + Offset - sizeof(Block);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 471 | AST/Interp | ./lib/AST/Interp/InterpFrame.h | 147 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<unsigned, std::unique_ptr<char[]>> Params;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 472 | AST/Interp | ./lib/AST/Interp/Descriptor.h | 48 |  | 声明/类型别名 | 可疑别名32位 | `using InterpSize = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 473 | AST/Interp | ./lib/AST/Interp/Descriptor.h | 165 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 474 | AST/Interp | ./lib/AST/Interp/Boolean.h | 44 |  | 计算 | 强制收窄为32位 | `bool operator>(unsigned RHS) const { return static_cast<unsigned>(V) > RHS; }` | 改为 uint64_t / 移除收窄 | TODO |
| 475 | AST/Interp | ./lib/AST/Interp/Boolean.h | 49 | unsigned | 计算 | 强制收窄为32位 | `explicit operator unsigned() const { return V; }` | 改为 uint64_t / 移除收窄 | TODO |
| 476 | AST/Interp | ./lib/AST/Interp/InterpFrame.cpp | 120 | hasRVO | 声明/局部 | 仅命名可疑需复核 | `unsigned Off = Func->hasRVO() ? primSize(PT_Ptr) : 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 477 | AST/Interp | ./lib/AST/Interp/InterpFrame.cpp | 155 | getLocalPointer | 比较/实现 | 关键函数相关（需复核） | `Pointer InterpFrame::getLocalPointer(unsigned Offset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 478 | AST/Interp | ./lib/AST/Interp/InterpFrame.cpp | 155 | getLocalPointer | 声明/局部 | 仅命名可疑需复核 | `Pointer InterpFrame::getLocalPointer(unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 479 | AST/Interp | ./lib/AST/Interp/InterpFrame.cpp | 158 | get | 比较/实现 | 关键函数相关（需复核） | `reinterpret_cast<Block *>(Locals.get() + Offset - sizeof(Block)));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 480 | AST/Interp | ./lib/AST/Interp/InterpFrame.cpp | 161 | getParamPointer | 声明/局部 | 仅命名可疑需复核 | `Pointer InterpFrame::getParamPointer(unsigned Off) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 481 | AST/Interp | ./lib/AST/Interp/ByteCodeExprGen.cpp | 436 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 482 | AST/Interp | ./lib/AST/Interp/ByteCodeExprGen.cpp | 473 | if | 声明/容器 | 容器承载32位位置 | `if (Optional<unsigned> Idx = getGlobalIdx(VD)) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 483 | AST/Interp | ./lib/AST/Interp/ByteCodeExprGen.cpp | 483 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 484 | AST/Interp | ./lib/AST/Interp/ByteCodeExprGen.cpp | 534 | if | 声明/容器 | 容器承载32位位置 | `if (Optional<unsigned> I = P.createGlobal(VD)) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 485 | AST/Interp | ./lib/AST/Interp/Program.h | 45 | getOrCreateNativePointer | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned getOrCreateNativePointer(const void *Ptr);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 486 | AST/Interp | ./lib/AST/Interp/Program.h | 63 | getGlobal | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> getGlobal(const ValueDecl *VD);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 487 | AST/Interp | ./lib/AST/Interp/Program.h | 66 | getOrCreateGlobal | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> getOrCreateGlobal(const ValueDecl *VD);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 488 | AST/Interp | ./lib/AST/Interp/Program.h | 69 | getOrCreateDummy | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> getOrCreateDummy(const ParmVarDecl *PD);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 489 | AST/Interp | ./lib/AST/Interp/Program.h | 72 | createGlobal | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> createGlobal(const ValueDecl *VD);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 490 | AST/Interp | ./lib/AST/Interp/Program.h | 75 | createGlobal | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> createGlobal(const Expr *E);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 491 | AST/Interp | ./lib/AST/Interp/Program.h | 127 | getCurrentDecl | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> getCurrentDecl() const {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 492 | AST/Interp | ./lib/AST/Interp/Program.h | 129 |  | 声明/容器 | 容器承载32位位置 | `return llvm::Optional<unsigned>{};` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 493 | AST/Interp | ./lib/AST/Interp/Program.h | 136 | createGlobal | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> createGlobal(const DeclTy &D, QualType Ty,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 494 | AST/Interp | ./lib/AST/Interp/Program.h | 147 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<const FunctionDecl *, std::vector<unsigned>> Relocs;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 495 | AST/Interp | ./lib/AST/Interp/Source.h | 84 |  | 声明/类型别名 | 可疑别名32位 | `using SourceMap = std::vector<std::pair<unsigned, SourceInfo>>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 496 | AST/Interp | ./lib/AST/Interp/State.cpp | 138 | unsigned | 计算 | 强制收窄为32位 | `<< unsigned(ActiveCalls - Limit);` | 改为 uint64_t / 移除收窄 | TODO |
| 497 | AST/Interp | ./lib/AST/Interp/EvalEmitter.cpp | 58 | size | 声明/局部 | 仅命名可疑需复核 | `unsigned Off = Locals.size();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 498 | AST/Interp | ./lib/AST/Interp/EvalEmitter.cpp | 138 | isBaseClass | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned NV = Ptr.isBaseClass() ? 0 : Record->getNumVirtualBases();` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 499 | AST/Interp | ./lib/AST/Interp/Record.h | 28 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 500 | AST/Interp | ./lib/AST/Interp/Record.h | 35 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 501 | AST/Interp | ./lib/AST/Interp/Pointer.cpp | 27 | Pointer | 声明/局部 | 仅命名可疑需复核 | `Pointer::Pointer(Block *Pointee, unsigned Base, unsigned Offset)` | 确认是否参与源位置运算；非则忽略 | TODO |
| 502 | AST/Interp | ./lib/AST/Interp/InterpBlock.h | 38 | Block | 声明/容器 | 容器承载32位位置 | `Block(const llvm::Optional<unsigned> &DeclID, Descriptor *Desc,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 503 | AST/Interp | ./lib/AST/Interp/InterpBlock.h | 59 | getDeclID | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> getDeclID() const { return DeclID; }` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 504 | AST/Interp | ./lib/AST/Interp/InterpBlock.h | 95 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> DeclID;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 505 | AST/Interp | ./lib/AST/Interp/Interp.cpp | 38 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(S.Current->getFrameOffset() == S.Stk.size() && "Invalid frame");` | 检查实现是否用 64 位位置/偏移 | TODO |
| 506 | AST/Interp | ./lib/AST/Interp/Interp.cpp | 59 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(S.Current->getFrameOffset() == S.Stk.size() && "Invalid frame");` | 检查实现是否用 64 位位置/偏移 | TODO |
| 507 | AST/Interp | ./lib/AST/Interp/Interp.cpp | 131 | atField | 比较/实现 | 关键函数相关（需复核） | `const Pointer &Field = U.atField(R->getField(I)->Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 508 | AST/Interp | ./lib/AST/Interp/Program.cpp | 21 | getOrCreateNativePointer | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Program::getOrCreateNativePointer(const void *Ptr) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 509 | AST/Interp | ./lib/AST/Interp/Program.cpp | 102 | getGlobal | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> Program::getGlobal(const ValueDecl *VD) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 510 | AST/Interp | ./lib/AST/Interp/Program.cpp | 108 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> Index;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 511 | AST/Interp | ./lib/AST/Interp/Program.cpp | 126 | getOrCreateGlobal | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> Program::getOrCreateGlobal(const ValueDecl *VD) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 512 | AST/Interp | ./lib/AST/Interp/Program.cpp | 137 | getOrCreateDummy | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> Program::getOrCreateDummy(const ParmVarDecl *PD) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 513 | AST/Interp | ./lib/AST/Interp/Program.cpp | 156 | createGlobal | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> Program::createGlobal(const ValueDecl *VD) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 514 | AST/Interp | ./lib/AST/Interp/Program.cpp | 173 | createGlobal | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> Program::createGlobal(const Expr *E) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 515 | AST/Interp | ./lib/AST/Interp/Program.cpp | 177 | createGlobal | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> Program::createGlobal(const DeclTy &D, QualType Ty,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 516 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 24 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return SourceMgr.isBeforeInTranslationUnit(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 517 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 84 |  | 声明/局部 | 仅命名可疑需复核 | `const FormatToken &Tok, unsigned Offset, unsigned ReplaceChars,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 518 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 89 | getStartOfNonWhitespace | 比较/实现 | 关键函数相关（需复核） | `SourceLocation Start = Tok.getStartOfNonWhitespace().getLocWithOffset(Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 519 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 92 | SourceRange | 比较/实现 | 关键函数相关（需复核） | `SourceRange(Start, Start.getLocWithOffset(ReplaceChars)), Spaces,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 520 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 126 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `SourceMgr.getFileOffset(OriginalWhitespaceStart);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 521 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 128 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `SourceMgr.getFileOffset(PreviousOriginalWhitespaceEnd);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 522 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 275 | AlignTokenSequence | 声明/局部 | 无关键词的32位位置变量（需复核） | `AlignTokenSequence(const FormatStyle &Style, unsigned Start, unsigned End,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 523 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 276 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Column, bool RightJustify, F &&Matches,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 524 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 301 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 16> ScopeStack;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 525 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 303 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned i = Start; i != End; ++i) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 526 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 312 |  | 计算 | 指针差值落入32位 | `unsigned PreviousNonComment = i - 1;` | 用 uint64_t 接收指针差值 | TODO |
| 527 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1006 | alignTrailingComments | 声明/局部 | 无关键词的32位位置变量（需复核） | `void WhitespaceManager::alignTrailingComments(unsigned Start, unsigned End,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 528 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1007 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Column) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 529 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1008 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned i = Start; i != End; ++i) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 530 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1048 | alignEscapedNewlines | 声明/局部 | 无关键词的32位位置变量（需复核） | `void WhitespaceManager::alignEscapedNewlines(unsigned Start, unsigned End,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 531 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1049 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Column) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 532 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1050 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned i = Start; i < End; ++i) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 533 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1086 | alignArrayInitializers | 声明/局部 | 无关键词的32位位置变量（需复核） | `void WhitespaceManager::alignArrayInitializers(unsigned Start, unsigned End) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 534 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1222 | getCells | 声明/局部 | 无关键词的32位位置变量（需复核） | `WhitespaceManager::CellDescriptions WhitespaceManager::getCells(unsigned Start,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 535 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1223 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned End) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 536 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1227 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned> CellCounts;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 537 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1233 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned i = Start; i < End; ++i) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 538 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1341 | calculateCellWidth | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned WhitespaceManager::calculateCellWidth(unsigned Start, unsigned End,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 539 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1353 | alignToStartOfCell | 声明/局部 | 无关键词的32位位置变量（需复核） | `void WhitespaceManager::alignToStartOfCell(unsigned Start, unsigned End) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 540 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1410 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned WhitespaceLength = SourceMgr.getFileOffset(Range.getEnd()) -` | 检查实现是否用 64 位位置/偏移 | TODO |
| 541 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1410 | getFileOffset | 声明/局部 | 仅命名可疑需复核 | `unsigned WhitespaceLength = SourceMgr.getFileOffset(Range.getEnd()) -` | 确认是否参与源位置运算；非则忽略 | TODO |
| 542 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.cpp | 1411 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `SourceMgr.getFileOffset(Range.getBegin());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 543 | Format/TokenAnnotator | ./lib/Format/TokenAnnotator.cpp | 139 | getStartOfNonWhitespace | 比较/实现 | 关键函数相关（需复核） | `CurrentToken->Next->getStartOfNonWhitespace().getLocWithOffset(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 544 | Format/TokenAnnotator | ./lib/Format/TokenAnnotator.cpp | 2671 | maxNestingDepth | 声明/局部 | 仅命名可疑需复核 | `static unsigned maxNestingDepth(const AnnotatedLine &Line) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 545 | Format/TokenAnnotator | ./lib/Format/TokenAnnotator.cpp | 2959 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned IndentLevel = Line.Level;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 546 | Format/TokenAnnotator | ./lib/Format/TokenAnnotator.cpp | 3032 | splitPenalty | 声明/局部 | 仅命名可疑需复核 | `unsigned TokenAnnotator::splitPenalty(const AnnotatedLine &Line,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 547 | Format/TokenAnalyzer | ./lib/Format/TokenAnalyzer.cpp | 68 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation Start = StartOfFile.getLocWithOffset(Range.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 548 | Format/TokenAnalyzer | ./lib/Format/TokenAnalyzer.cpp | 69 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation End = Start.getLocWithOffset(Range.getLength());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 549 | Format/FormatToken | ./lib/Format/FormatToken.h | 872 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 8> ColumnSizes;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 550 | Format/FormatToken | ./lib/Format/FormatToken.h | 884 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 8> ItemLengths;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 551 | Format/FormatToken | ./lib/Format/FormatToken.cpp | 129 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Column = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 552 | Format/FormatToken | ./lib/Format/FormatToken.cpp | 167 | CodePointsBetween | 声明/局部 | 无关键词的32位位置变量（需复核） | `static unsigned CodePointsBetween(const FormatToken *Begin,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 553 | Format/FormatToken | ./lib/Format/FormatToken.cpp | 205 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 8> EndOfLineItemLength;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 554 | Format/FormatToken | ./lib/Format/FormatToken.cpp | 267 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned> MinSizeInColumn;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 555 | Format/FormatToken | ./lib/Format/FormatToken.cpp | 276 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Column = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 556 | Format/Format | ./lib/Format/Format.cpp | 967 |  | 计算 | 强制收窄为32位 | `Space.Maximum = static_cast<unsigned>(signedMaximum);` | 改为 uint64_t / 移除收窄 | TODO |
| 557 | Format/Format | ./lib/Format/Format.cpp | 1979 | Replace | 比较/实现 | 关键函数相关（需复核） | `Replace(FormatTok->Tok.getEndLoc().getLocWithOffset(-1), 1,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 558 | Format/Format | ./lib/Format/Format.cpp | 1992 | Replace | 比较/实现 | 关键函数相关（需复核） | `Replace(Start.getLocWithOffset(i), 1, "");` | 检查实现是否用 64 位位置/偏移 | TODO |
| 559 | Format/Format | ./lib/Format/Format.cpp | 2001 | Replace | 比较/实现 | 关键函数相关（需复核） | `Replace(Start.getLocWithOffset(i), 0, "\\");` | 检查实现是否用 64 位位置/偏移 | TODO |
| 560 | Format/Format | ./lib/Format/Format.cpp | 2197 | getLocation | 比较/实现 | 关键函数相关（需复核） | `Prev->Tok.getLocation().getLocWithOffset(Prev->TokenText.size());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 561 | Format/Format | ./lib/Format/Format.cpp | 2292 | size | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned InitLine = CurrentLine, End = AnnotatedLines.size();` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 562 | Format/Format | ./lib/Format/Format.cpp | 2403 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned St = Idx, End = Idx;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 563 | Format/Format | ./lib/Format/Format.cpp | 2429 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return SM.isBeforeInTranslationUnit(LHS->Tok.getLocation(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 564 | Format/Format | ./lib/Format/Format.cpp | 2579 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 565 | Format/Format | ./lib/Format/Format.cpp | 2587 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 566 | Format/Format | ./lib/Format/Format.cpp | 2595 | affectsRange | 声明/局部 | 无关键词的32位位置变量（需复核） | `static bool affectsRange(ArrayRef<tooling::Range> Ranges, unsigned Start,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 567 | Format/Format | ./lib/Format/Format.cpp | 2596 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned End) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 568 | Format/Format | ./lib/Format/Format.cpp | 2598 | if | 比较/实现 | 关键函数相关（需复核） | `if (Range.getOffset() < End &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 569 | Format/Format | ./lib/Format/Format.cpp | 2599 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Range.getOffset() + Range.getLength() > Start) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 570 | Format/Format | ./lib/Format/Format.cpp | 2619 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Start = Includes[Indices[i]].Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 571 | Format/Format | ./lib/Format/Format.cpp | 2619 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Start = Includes[Indices[i]].Offset;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 572 | Format/Format | ./lib/Format/Format.cpp | 2620 | size | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned End = Start + Includes[Indices[i]].Text.size();` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 573 | Format/Format | ./lib/Format/Format.cpp | 2669 | front | 声明/局部 | 仅命名可疑需复核 | `const unsigned IncludesBeginOffset = Includes.front().Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 574 | Format/Format | ./lib/Format/Format.cpp | 2672 |  | 计算 | 指针差值落入32位 | `const unsigned IncludesBlockSize = IncludesEndOffset - IncludesBeginOffset;` | 用 uint64_t 接收指针差值 | TODO |
| 575 | Format/Format | ./lib/Format/Format.cpp | 2675 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 16> Indices =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 576 | Format/Format | ./lib/Format/Format.cpp | 2904 | front | 声明/局部 | 仅命名可疑需复核 | `unsigned ImportsBeginOffset = Imports.front().Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 577 | Format/Format | ./lib/Format/Format.cpp | 2907 |  | 计算 | 指针差值落入32位 | `unsigned ImportsBlockSize = ImportsEndOffset - ImportsBeginOffset;` | 用 uint64_t 接收指针差值 | TODO |
| 578 | Format/Format | ./lib/Format/Format.cpp | 2911 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 16> Indices =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 579 | Format/Format | ./lib/Format/Format.cpp | 2913 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 16> JavaImportGroups;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 580 | Format/Format | ./lib/Format/Format.cpp | 3111 | getOffset | 比较/实现 | 关键函数相关（需复核） | `return Replace.getOffset() == UINT_MAX && Replace.getLength() == 0 &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 581 | Format/Format | ./lib/Format/Format.cpp | 3117 | getOffset | 比较/实现 | 关键函数相关（需复核） | `return Replace.getOffset() == UINT_MAX && Replace.getLength() == 1;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 582 | Format/Format | ./lib/Format/Format.cpp | 3137 | if | 比较/实现 | 关键函数相关（需复核） | `} else if (R.getOffset() == UINT_MAX) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 583 | Format/Format | ./lib/Format/Format.cpp | 3181 | getShiftedCodePosition | 比较/实现 | 关键函数相关（需复核） | `Result.getShiftedCodePosition(Replace->getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 584 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.h | 41 | FormatTokenLexer | 声明/局部 | 仅命名可疑需复核 | `FormatTokenLexer(const SourceManager &SourceMgr, FileID ID, unsigned Column,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 585 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.h | 104 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Column;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 586 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.h | 134 | resetLexer | 声明/局部 | 仅命名可疑需复核 | `void resetLexer(unsigned Offset);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 587 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 653 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Spaces = Current.SpacesRequiredBefore + ExtraSpaces;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 588 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 691 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned FirstColonPos = State.Column + Spaces + Current.ColumnWidth;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 589 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 691 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned FirstColonPos = State.Column + Spaces + Current.ColumnWidth;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 590 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 1813 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned StartColumn = State.Column - Current.ColumnWidth;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 591 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 1813 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned StartColumn = State.Column - Current.ColumnWidth;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 592 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 1905 | getLocation | 比较/实现 | 关键函数相关（需复核） | `Current.Tok.getLocation().getLocWithOffset(2);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 593 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 1916 | getLocation | 比较/实现 | 关键函数相关（需复核） | `Current.Tok.getLocation().getLocWithOffset(Current.TokenText.size() -` | 检查实现是否用 64 位位置/偏移 | TODO |
| 594 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 1927 | getLocation | 比较/实现 | 关键函数相关（需复核） | `Current.Tok.getLocation().getLocWithOffset(OldPrefixSize);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 595 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 1930 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceMgr, OriginLoc.getLocWithOffset(Fix.getOffset()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 596 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 1958 | addMultilineToken | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned ContinuationIndenter::addMultilineToken(const FormatToken &Current,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 597 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 1964 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned ColumnsUsed = State.Column;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 598 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 1974 | handleEndOfLine | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned ContinuationIndenter::handleEndOfLine(const FormatToken &Current,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 599 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 2022 | getColumnLimit | 声明/局部 | 仅命名可疑需复核 | `unsigned ExcessCharacters = State.Column - getColumnLimit(State);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 600 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 2070 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned StartColumn = State.Column - Current.ColumnWidth;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 601 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 2070 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned StartColumn = State.Column - Current.ColumnWidth;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 602 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 2177 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned StartColumn = State.Column - Current.ColumnWidth;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 603 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 2177 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned StartColumn = State.Column - Current.ColumnWidth;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 604 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 2178 | isStringLiteral | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned NewBreakPenalty = Current.isStringLiteral()` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 605 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 2201 | getRemainingLength | 比较/实现 | 关键函数相关（需复核） | `Token->getRemainingLength(0, TailOffset, ContentStartColumn);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 606 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 2231 | getSplit | 比较/实现 | 关键函数相关（需复核） | `Token->getSplit(LineIndex, TailOffset, ColumnLimit,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 607 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 2278 | getRemainingLength | 比较/实现 | 关键函数相关（需复核） | `ToNextSplitColumns = Token->getRemainingLength(LineIndex, TailOffset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 608 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 2428 | getSplit | 比较/实现 | 关键函数相关（需复核） | `Token->getSplit(NextLineIndex, TailOffset, ColumnLimit,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 609 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.cpp | 2492 | getSplitAfterLastLine | 比较/实现 | 关键函数相关（需复核） | `Token->getSplitAfterLastLine(TailOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 610 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 26 |  | 声明/局部 | 仅命名可疑需复核 | `const SourceManager &SourceMgr, FileID ID, unsigned Column,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 611 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 522 | resetLexer | 比较/实现 | 关键函数相关（需复核） | `resetLexer(SourceMgr.getFileOffset(Lex->getSourceLocation(Offset)));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 612 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 643 | resetLexer | 比较/实现 | 关键函数相关（需复核） | `resetLexer(SourceMgr.getFileOffset(Lex->getSourceLocation(Offset + 1)));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 613 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 670 | for | 比较/实现 | 关键函数相关（需复核） | `for (; Offset != Lex->getBuffer().end(); ++Offset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 614 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 677 | if | 比较/实现 | 关键函数相关（需复核） | `} else if (Offset + 1 < Lex->getBuffer().end() && Offset[0] == '$' &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 615 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 708 | getSourceLocation | 比较/实现 | 关键函数相关（需复核） | `? Lex->getSourceLocation(Offset + 1)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 616 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 710 | resetLexer | 比较/实现 | 关键函数相关（需复核） | `resetLexer(SourceMgr.getFileOffset(loc));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 617 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 731 | resetLexer | 比较/实现 | 关键函数相关（需复核） | `resetLexer(SourceMgr.getFileOffset(Loc));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 618 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 842 | getLocation | 比较/实现 | 关键函数相关（需复核） | `FormatTok->Tok.getLocation().getLocWithOffset(Tok.getLength() - 1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 619 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 860 | resetLexer | 比较/实现 | 关键函数相关（需复核） | `resetLexer(SourceMgr.getFileOffset(Lex->getSourceLocation(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 620 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 876 | bytes_begin | 声明/局部 | 无关键词的32位位置变量（需复核） | `const unsigned char *const Begin = Text.bytes_begin();` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 621 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 877 | bytes_end | 声明/局部 | 无关键词的32位位置变量（需复核） | `const unsigned char *const End = Text.bytes_end();` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 622 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 878 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `const unsigned char *Cur = Begin;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 623 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 913 | getLocation | 比较/实现 | 关键函数相关（需复核） | `FormatTok->Tok.getLocation().getLocWithOffset(-TrailingWhitespace);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 624 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 1026 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `WhitespaceStart, WhitespaceStart.getLocWithOffset(WhitespaceLength));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 625 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 1149 | seek | 比较/实现 | 关键函数相关（需复核） | `Lex->seek(Lex->getCurrentBufferOffset() + Len, /*IsAtStartofline=*/false);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 626 | Format/FormatTokenLexer | ./lib/Format/FormatTokenLexer.cpp | 1190 | resetLexer | 声明/局部 | 仅命名可疑需复核 | `void FormatTokenLexer::resetLexer(unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 627 | Format/SortJavaScriptImports | ./lib/Format/SortJavaScriptImports.cpp | 251 | substr | 比较/实现 | 关键函数相关（需复核） | `return FileContents.substr(SM.getFileOffset(Begin),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 628 | Format/SortJavaScriptImports | ./lib/Format/SortJavaScriptImports.cpp | 252 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `SM.getFileOffset(End) - SM.getFileOffset(Begin));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 629 | Format/SortJavaScriptImports | ./lib/Format/SortJavaScriptImports.cpp | 389 | getEndLoc | 比较/实现 | 关键函数相关（需复核） | `Start = Current->Tok.getEndLoc().getLocWithOffset(1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 630 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.h | 83 | replaceWhitespaceInToken | 声明/局部 | 仅命名可疑需复核 | `void replaceWhitespaceInToken(const FormatToken &Tok, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 631 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.h | 199 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned> CellCounts;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 632 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.h | 240 | alignTrailingComments | 声明/局部 | 仅命名可疑需复核 | `void alignTrailingComments(unsigned Start, unsigned End, unsigned Column);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 633 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.h | 240 | alignTrailingComments | 声明/局部 | 无关键词的32位位置变量（需复核） | `void alignTrailingComments(unsigned Start, unsigned End, unsigned Column);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 634 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.h | 247 | alignEscapedNewlines | 声明/局部 | 仅命名可疑需复核 | `void alignEscapedNewlines(unsigned Start, unsigned End, unsigned Column);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 635 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.h | 247 | alignEscapedNewlines | 声明/局部 | 无关键词的32位位置变量（需复核） | `void alignEscapedNewlines(unsigned Start, unsigned End, unsigned Column);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 636 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.h | 254 | alignArrayInitializers | 声明/局部 | 无关键词的32位位置变量（需复核） | `void alignArrayInitializers(unsigned Start, unsigned End);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 637 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.h | 265 | calculateCellWidth | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned calculateCellWidth(unsigned Start, unsigned End,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 638 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.h | 270 | getCells | 声明/局部 | 无关键词的32位位置变量（需复核） | `CellDescriptions getCells(unsigned Start, unsigned End);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 639 | Format/WhitespaceManager | ./lib/Format/WhitespaceManager.h | 329 | alignToStartOfCell | 声明/局部 | 无关键词的32位位置变量（需复核） | `void alignToStartOfCell(unsigned Start, unsigned End);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 640 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 78 |  | 计算 | 指针差值落入32位 | `unsigned MaxSplit = ColumnLimit - ContentStartColumn + 1;` | 用 uint64_t 接收指针差值 | TODO |
| 641 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 178 |  | 计算 | 指针差值落入32位 | `unsigned MaxSplit = ColumnLimit - UsedColumns;` | 用 uint64_t 接收指针差值 | TODO |
| 642 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 247 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 643 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 255 | getRemainingLength | 比较/实现 | 关键函数相关（需复核） | `BreakableStringLiteral::getRemainingLength(unsigned LineIndex, unsigned Offset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 644 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 255 | getRemainingLength | 声明/局部 | 仅命名可疑需复核 | `BreakableStringLiteral::getRemainingLength(unsigned LineIndex, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 645 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 282 | getStringSplit | 比较/实现 | 关键函数相关（需复核） | `return getStringSplit(Line.substr(TailOffset), ContentStartColumn,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 646 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 305 | getSplit | 比较/实现 | 关键函数相关（需复核） | `BreakableComment::getSplit(unsigned LineIndex, unsigned TailOffset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 647 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 311 | getCommentSplit | 比较/实现 | 关键函数相关（需复核） | `return getCommentSplit(Content[LineIndex].substr(TailOffset),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 648 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 401 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(ContentColumn[1]) == StartColumn) {` | 改为 uint64_t / 移除收窄 | TODO |
| 649 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 499 | getCommentSplit | 比较/实现 | 关键函数相关（需复核） | `return getCommentSplit(Content[LineIndex].substr(TailOffset),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 650 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 542 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 651 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 551 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 652 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 555 | getRangeLength | 比较/实现 | 关键函数相关（需复核） | `getRangeLength(LineIndex, Offset, StringRef::npos, StartColumn);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 653 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 640 | find_first_not_of | 计算 | 复杂指针差值收窄 | `size_t Trimmed = Content[LineIndex].find_first_not_of(Blanks); if (LineIndex) { unsigned PreviousContentIndent = getContentIndent(LineInde…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 654 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 641 | if | 计算 | 复杂指针差值收窄 | `if (LineIndex) { unsigned PreviousContentIndent = getContentIndent(LineIndex - 1); if (PreviousContentIndent && Trimmed != StringRef::npos…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 655 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 642 | getContentIndent | 计算 | 复杂指针差值收窄 | `unsigned PreviousContentIndent = getContentIndent(LineIndex - 1); if (PreviousContentIndent && Trimmed != StringRef::npos && Trimmed != Pr…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 656 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 726 | getSplitAfterLastLine | 比较/实现 | 关键函数相关（需复核） | `BreakableBlockComment::getSplitAfterLastLine(unsigned TailOffset) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 657 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 820 | if | 计算 | 强制收窄为32位 | `} else if (static_cast<unsigned>(SpacesInPrefix) >` | 改为 uint64_t / 移除收窄 | TODO |
| 658 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 900 | getRangeLength | 比较/实现 | 关键函数相关（需复核） | `BreakableLineCommentSection::getRangeLength(unsigned LineIndex, unsigned Offset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 659 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 900 | getRangeLength | 声明/局部 | 仅命名可疑需复核 | `BreakableLineCommentSection::getRangeLength(unsigned LineIndex, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 660 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 963 | data | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = Lines[LineIndex - 1].data() +` | 确认是否参与源位置运算；非则忽略 | TODO |
| 661 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 965 | data | 计算 | 复杂指针差值收窄 | `unsigned Offset = Lines[LineIndex - 1].data() + Lines[LineIndex - 1].size() - tokenAt(LineIndex - 1).TokenText.data();` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 662 | Format/BreakableToken | ./lib/Format/BreakableToken.cpp | 979 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset =` | 确认是否参与源位置运算；非则忽略 | TODO |
| 663 | Format/UnwrappedLineFormatter | ./lib/Format/UnwrappedLineFormatter.cpp | 59 | getIndentOffset | 比较/实现 | 关键函数相关（需复核） | `Offset = getIndentOffset(*Line.First);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 664 | Format/UnwrappedLineFormatter | ./lib/Format/UnwrappedLineFormatter.cpp | 89 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned LevelIndent = Line.First->OriginalColumn;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 665 | Format/UnwrappedLineFormatter | ./lib/Format/UnwrappedLineFormatter.cpp | 104 | getIndentOffset | 比较/实现 | 关键函数相关（需复核） | `int getIndentOffset(const FormatToken &RootToken) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 666 | Format/UnwrappedLineFormatter | ./lib/Format/UnwrappedLineFormatter.cpp | 212 | tryFitMultipleLinesInOne | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned MergedLines = tryFitMultipleLinesInOne(IndentTracker, Next, End);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 667 | Format/UnwrappedLineFormatter | ./lib/Format/UnwrappedLineFormatter.cpp | 929 | formatLine | 声明/局部 | 仅命名可疑需复核 | `virtual unsigned formatLine(const AnnotatedLine &Line, unsigned FirstIndent,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 668 | Format/UnwrappedLineFormatter | ./lib/Format/UnwrappedLineFormatter.cpp | 1041 | formatLine | 声明/局部 | 仅命名可疑需复核 | `unsigned formatLine(const AnnotatedLine &Line, unsigned FirstIndent,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 669 | Format/UnwrappedLineFormatter | ./lib/Format/UnwrappedLineFormatter.cpp | 1067 | formatLine | 声明/局部 | 仅命名可疑需复核 | `unsigned formatLine(const AnnotatedLine &Line, unsigned FirstIndent,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 670 | Format/UnwrappedLineFormatter | ./lib/Format/UnwrappedLineFormatter.cpp | 1092 | formatLine | 声明/局部 | 仅命名可疑需复核 | `unsigned formatLine(const AnnotatedLine &Line, unsigned FirstIndent,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 671 | Format/UnwrappedLineFormatter | ./lib/Format/UnwrappedLineFormatter.cpp | 1118 |  | 声明/类型别名 | 可疑别名32位 | `typedef std::pair<unsigned, unsigned> OrderedPenalty;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 672 | Format/UnwrappedLineParser | ./lib/Format/UnwrappedLineParser.cpp | 62 | setPosition | 声明/局部 | 无关键词的32位位置变量（需复核） | `virtual FormatToken *setPosition(unsigned Position) = 0;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 673 | Format/UnwrappedLineParser | ./lib/Format/UnwrappedLineParser.cpp | 160 | setPosition | 声明/局部 | 无关键词的32位位置变量（需复核） | `FormatToken *setPosition(unsigned Position) override {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 674 | Format/UnwrappedLineParser | ./lib/Format/UnwrappedLineParser.cpp | 858 |  | 声明/局部 | 仅命名可疑需复核 | `const unsigned InitialLevel = Line->Level;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 675 | Format/UnwrappedLineParser | ./lib/Format/UnwrappedLineParser.cpp | 2964 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned OldLineLevel = Line->Level;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 676 | Format/UnwrappedLineParser | ./lib/Format/UnwrappedLineParser.cpp | 3999 | getType | 计算 | 强制收窄为32位 | `<< "T=" << static_cast<unsigned>(Node.Tok->getType())` | 改为 uint64_t / 移除收窄 | TODO |
| 677 | Format/UnwrappedLineParser | ./lib/Format/UnwrappedLineParser.cpp | 4304 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(-LevelDifference) <= Line->Level) &&` | 改为 uint64_t / 移除收窄 | TODO |
| 678 | Format/UnwrappedLineParser | ./lib/Format/UnwrappedLineParser.cpp | 4304 |  | 声明/局部 | 仅命名可疑需复核 | `static_cast<unsigned>(-LevelDifference) <= Line->Level) &&` | 确认是否参与源位置运算；非则忽略 | TODO |
| 679 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.h | 111 | reformatRawStringLiteral | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned reformatRawStringLiteral(const FormatToken &Current,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 680 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.h | 118 | handleEndOfLine | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned handleEndOfLine(const FormatToken &Current, LineState &State,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 681 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.h | 144 | breakProtrudingToken | 声明/局部 | 无关键词的32位位置变量（需复核） | `std::pair<unsigned, bool> breakProtrudingToken(const FormatToken &Current,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 682 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.h | 182 | addMultilineToken | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned addMultilineToken(const FormatToken &Current, LineState &State);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 683 | Format/ContinuationIndenter | ./lib/Format/ContinuationIndenter.h | 417 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Column;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 684 | Format/TokenAnnotator | ./lib/Format/TokenAnnotator.h | 171 | splitPenalty | 声明/局部 | 仅命名可疑需复核 | `unsigned splitPenalty(const AnnotatedLine &Line, const FormatToken &Tok,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 685 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 92 |  | 声明/类型别名 | 可疑别名32位 | `typedef std::pair<StringRef::size_type, unsigned> Split;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 686 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 107 | getRangeLength | 比较/实现 | 关键函数相关（需复核） | `virtual unsigned getRangeLength(unsigned LineIndex, unsigned Offset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 687 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 107 | getRangeLength | 声明/局部 | 仅命名可疑需复核 | `virtual unsigned getRangeLength(unsigned LineIndex, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 688 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 123 | getRemainingLength | 比较/实现 | 关键函数相关（需复核） | `virtual unsigned getRemainingLength(unsigned LineIndex, unsigned Offset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 689 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 123 | getRemainingLength | 声明/局部 | 仅命名可疑需复核 | `virtual unsigned getRemainingLength(unsigned LineIndex, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 690 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 125 | getRangeLength | 比较/实现 | 关键函数相关（需复核） | `return getRangeLength(LineIndex, Offset, StringRef::npos, StartColumn);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 691 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 156 | getSplit | 比较/实现 | 关键函数相关（需复核） | `virtual Split getSplit(unsigned LineIndex, unsigned TailOffset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 692 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 215 | getSplitAfterLastLine | 比较/实现 | 关键函数相关（需复核） | `virtual Split getSplitAfterLastLine(unsigned TailOffset) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 693 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 224 | insertBreak | 比较/实现 | 关键函数相关（需复核） | `insertBreak(getLineCount() - 1, TailOffset, SplitAfterLastLine,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 694 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 256 | getSplit | 比较/实现 | 关键函数相关（需复核） | `Split getSplit(unsigned LineIndex, unsigned TailOffset, unsigned ColumnLimit,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 695 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 265 | getRangeLength | 比较/实现 | 关键函数相关（需复核） | `unsigned getRangeLength(unsigned LineIndex, unsigned Offset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 696 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 265 | getRangeLength | 声明/局部 | 仅命名可疑需复核 | `unsigned getRangeLength(unsigned LineIndex, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 697 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 268 | getRemainingLength | 比较/实现 | 关键函数相关（需复核） | `unsigned getRemainingLength(unsigned LineIndex, unsigned Offset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 698 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 268 | getRemainingLength | 声明/局部 | 仅命名可疑需复核 | `unsigned getRemainingLength(unsigned LineIndex, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 699 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 299 | getSplit | 比较/实现 | 关键函数相关（需复核） | `Split getSplit(unsigned LineIndex, unsigned TailOffset, unsigned ColumnLimit,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 700 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 364 | getSplit | 比较/实现 | 关键函数相关（需复核） | `Split getSplit(unsigned LineIndex, unsigned TailOffset, unsigned ColumnLimit,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 701 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 367 | getRangeLength | 比较/实现 | 关键函数相关（需复核） | `unsigned getRangeLength(unsigned LineIndex, unsigned Offset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 702 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 367 | getRangeLength | 声明/局部 | 仅命名可疑需复核 | `unsigned getRangeLength(unsigned LineIndex, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 703 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 370 | getRemainingLength | 比较/实现 | 关键函数相关（需复核） | `unsigned getRemainingLength(unsigned LineIndex, unsigned Offset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 704 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 370 | getRemainingLength | 声明/局部 | 仅命名可疑需复核 | `unsigned getRemainingLength(unsigned LineIndex, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 705 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 384 | getSplitAfterLastLine | 比较/实现 | 关键函数相关（需复核） | `Split getSplitAfterLastLine(unsigned TailOffset) const override;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 706 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 442 | getRangeLength | 比较/实现 | 关键函数相关（需复核） | `unsigned getRangeLength(unsigned LineIndex, unsigned Offset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 707 | Format/BreakableToken | ./lib/Format/BreakableToken.h | 442 | getRangeLength | 声明/局部 | 仅命名可疑需复核 | `unsigned getRangeLength(unsigned LineIndex, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 708 | Format/AffectedRangeManager | ./lib/Format/AffectedRangeManager.cpp | 64 | if | 比较/实现 | 关键函数相关（需复核） | `if (!SourceMgr.isBeforeInTranslationUnit(Range.getEnd(), R.getBegin()) &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 709 | Format/AffectedRangeManager | ./lib/Format/AffectedRangeManager.cpp | 65 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `!SourceMgr.isBeforeInTranslationUnit(R.getEnd(), Range.getBegin())) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 710 | Format/AffectedRangeManager | ./lib/Format/AffectedRangeManager.cpp | 77 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Start = Start.getLocWithOffset(First.LastNewlineOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 711 | Format/AffectedRangeManager | ./lib/Format/AffectedRangeManager.cpp | 79 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `End = End.getLocWithOffset(Last.TokenText.size());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 712 | Format/AffectedRangeManager | ./lib/Format/AffectedRangeManager.cpp | 87 | getBegin | 比较/实现 | 关键函数相关（需复核） | `Tok.WhitespaceRange.getBegin().getLocWithOffset(Tok.LastNewlineOffset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 713 | Format/QualifierAlignmentFixer | ./lib/Format/QualifierAlignmentFixer.cpp | 93 | substr | 比较/实现 | 关键函数相关（需复核） | `StringRef OriginalCode = Code.substr(Fix.getOffset(), Fix.getLength());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 714 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/StdLibraryFunctionsChecker.cpp | 96 |  | 声明/类型别名 | 可疑别名32位 | `typedef uint32_t ArgNo;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 715 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/StdLibraryFunctionsChecker.cpp | 361 | getDynamicExtentWithOffset | 比较/实现 | 关键函数相关（需复核） | `SVal BufDynSize = getDynamicExtentWithOffset(State, BufV);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 716 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/StdLibraryFunctionsChecker.cpp | 1780 | lookupTy | I/O | 平台I/O偏移需复核 | `Optional<QualType> Off_tTy = lookupTy("off_t");` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 717 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/StdLibraryFunctionsChecker.cpp | 1782 | truncate | I/O | 平台I/O偏移需复核 | `// int truncate(const char *path, off_t length);` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 718 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/StdLibraryFunctionsChecker.cpp | 1813 | lockf | I/O | 平台I/O偏移需复核 | `// int lockf(int fd, int cmd, off_t len);` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 719 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/StdLibraryFunctionsChecker.cpp | 2211 | fseeko | I/O | 平台I/O偏移需复核 | `// int fseeko(FILE *stream, off_t offset, int whence);` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 720 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/StdLibraryFunctionsChecker.cpp | 2213 |  | I/O | 平台I/O偏移需复核 | `"fseeko",` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 721 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/StdLibraryFunctionsChecker.cpp | 2219 | ftello | I/O | 平台I/O偏移需复核 | `// off_t ftello(FILE *stream);` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 722 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/StdLibraryFunctionsChecker.cpp | 2221 | Signature | I/O | 平台I/O偏移需复核 | `"ftello", Signature(ArgTypes{FilePtrTy}, RetType{Off_tTy}),` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 723 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/StdLibraryFunctionsChecker.cpp | 2225 |  | I/O | 平台I/O偏移需复核 | `// off_t offset);` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 724 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/StdLibraryFunctionsChecker.cpp | 2257 | lseek | I/O | 平台I/O偏移需复核 | `// off_t lseek(int fildes, off_t offset, int whence);` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 725 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/StdLibraryFunctionsChecker.cpp | 2263 | Signature | I/O | 平台I/O偏移需复核 | `"lseek", Signature(ArgTypes{IntTy, Off_tTy, IntTy}, RetType{Off_tTy}),` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 726 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ArrayBoundCheckerV2.cpp | 59 | getByteOffset | 比较/实现 | 关键函数相关（需复核） | `NonLoc getByteOffset() const { return byteOffset.castAs<NonLoc>(); }` | 检查实现是否用 64 位位置/偏移 | TODO |
| 727 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ArrayBoundCheckerV2.cpp | 138 | getByteOffset | 比较/实现 | 关键函数相关（需复核） | `NonLoc rawOffsetVal = rawOffset.getByteOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 728 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ArrayBoundCheckerV2.cpp | 149 | getSimplifiedOffsets | 比较/实现 | 关键函数相关（需复核） | `getSimplifiedOffsets(rawOffset.getByteOffset(), *ConcreteNV,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 729 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ArrayBoundCheckerV2.cpp | 187 | getSimplifiedOffsets | 比较/实现 | 关键函数相关（需复核） | `getSimplifiedOffsets(rawOffset.getByteOffset(), *ConcreteSize,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 730 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ArrayBoundCheckerV2.cpp | 207 | getByteOffset | 比较/实现 | 关键函数相关（需复核） | `SVal ByteOffset = rawOffset.getByteOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 731 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ArrayBoundCheckerV2.cpp | 269 | getRegion | 比较/实现 | 关键函数相关（需复核） | `os << "raw_offset_v2{" << getRegion() << ',' << getByteOffset() << '}';` | 检查实现是否用 64 位位置/偏移 | TODO |
| 732 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/PaddingChecker.cpp | 194 | toCharUnitsFromBits | 比较/实现 | 关键函数相关（需复核） | `CharUnits Offset = ASTContext.toCharUnitsFromBits(RL.getFieldOffset(0));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 733 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/PaddingChecker.cpp | 206 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `auto FieldOffsetBits = RL.getFieldOffset(FD->getFieldIndex());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 734 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/PaddingChecker.cpp | 211 | getSize | 比较/实现 | 关键函数相关（需复核） | `PaddingSum += RL.getSize() - Offset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 735 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/PaddingChecker.cpp | 271 | toCharUnitsFromBits | 比较/实现 | 关键函数相关（需复核） | `CharUnits NewOffset = ASTContext.toCharUnitsFromBits(RL.getFieldOffset(0));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 736 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/STLAlgorithmModeling.cpp | 131 | SymbolVal | 比较/实现 | 关键函数相关（需复核） | `nonloc::SymbolVal(NewPos->getOffset()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 737 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/STLAlgorithmModeling.cpp | 132 | SymbolVal | 比较/实现 | 关键函数相关（需复核） | `nonloc::SymbolVal(Pos->getOffset()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 738 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/STLAlgorithmModeling.cpp | 153 | SymbolVal | 比较/实现 | 关键函数相关（需复核） | `nonloc::SymbolVal(NewPos->getOffset()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 739 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/STLAlgorithmModeling.cpp | 154 | SymbolVal | 比较/实现 | 关键函数相关（需复核） | `nonloc::SymbolVal(Pos->getOffset()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 740 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/CStringChecker.cpp | 1111 | getAsOffset | 比较/实现 | 关键函数相关（需复核） | `RegionOffset Offset = MR->getAsOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 741 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/CStringChecker.cpp | 1124 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Offset.getOffset() == 0) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 742 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/DebugIteratorModeling.cpp | 106 | SymbolVal | 比较/实现 | 关键函数相关（需复核） | `return nonloc::SymbolVal(P->getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 743 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/UnreachableCodeChecker.cpp | 37 |  | 声明/类型别名 | 可疑别名32位 | `typedef llvm::SmallSet<unsigned, 32> CFGBlocksSet;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 744 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/NSErrorChecker.cpp | 179 |  | 声明/类型别名 | 可疑别名32位 | `typedef llvm::ImmutableMap<SymbolRef, unsigned> ErrorOutFlag;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 745 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/Iterator.h | 44 | getOffset | 比较/实现 | 关键函数相关（需复核） | `SymbolRef getOffset() const { return Offset; }` | 检查实现是否用 64 位位置/偏移 | TODO |
| 746 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/GenericTaintChecker.cpp | 575 | Prop | I/O | 平台I/O偏移需复核 | `{{"pread"}, TR::Prop({{0, 1, 2, 3}}, {{1, ReturnValueIndex}})},` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 747 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/MallocOverflowSecurityChecker.cpp | 161 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `return Context.getSourceManager().isBeforeInTranslationUnit(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 748 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/NullabilityChecker.cpp | 808 | getFilename | 比较/实现 | 关键函数相关（需复核） | `StringRef FilePath = SM.getFilename(SM.getSpellingLoc(Decl->getBeginLoc()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 749 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/LocalizationChecker.cpp | 890 | for | 计算 | 强制收窄为32位 | `for (unsigned i = 0, ei = std::min(static_cast<unsigned>(formals.size()),` | 改为 uint64_t / 移除收窄 | TODO |
| 750 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/LocalizationChecker.cpp | 1139 | getExpansion | 比较/实现 | 关键函数相关（需复核） | `SL = SE.getExpansion().getSpellingLoc();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 751 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/IteratorModeling.cpp | 307 | getOffset | 比较/实现 | 关键函数相关（需复核） | `const auto Offset = Reg.second.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 752 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/IteratorModeling.cpp | 315 | getOffset | 比较/实现 | 关键函数相关（需复核） | `const auto Offset = Sym.second.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 753 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/IteratorModeling.cpp | 504 | processComparison | 比较/实现 | 关键函数相关（需复核） | `processComparison(C, State, LPos->getOffset(), RPos->getOffset(), RetVal, Op);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 754 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/IteratorModeling.cpp | 649 | getLValue | 比较/实现 | 关键函数相关（需复核） | `NewVal = State->getLValue(ElementType, Offset, OldVal);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 755 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/IteratorModeling.cpp | 653 | getLValue | 比较/实现 | 关键函数相关（需复核） | `NewVal = State->getLValue(ElementType, NegatedOffset, OldVal);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 756 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/IteratorModeling.cpp | 727 | getOffset | 比较/实现 | 关键函数相关（需复核） | `return PosBefore->getOffset() == PosAfter->getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 757 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/IteratorModeling.cpp | 749 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Pos.getOffset()->dumpToStream(Out);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 758 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/IteratorModeling.cpp | 762 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Pos.getOffset()->dumpToStream(Out);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 759 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 578 | invalidateIteratorPositions | 比较/实现 | 关键函数相关（需复核） | `State = invalidateIteratorPositions(State, Pos->getOffset(), BO_GE);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 760 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 610 | invalidateIteratorPositions | 比较/实现 | 关键函数相关（需复核） | `State = invalidateIteratorPositions(State, Pos->getOffset(), BO_GE);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 761 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 619 | invalidateIteratorPositions | 比较/实现 | 关键函数相关（需复核） | `State = invalidateIteratorPositions(State, Pos->getOffset(), BO_EQ);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 762 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 645 | invalidateIteratorPositions | 比较/实现 | 关键函数相关（需复核） | `State = invalidateIteratorPositions(State, Pos1->getOffset(), BO_GE);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 763 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 654 | invalidateIteratorPositions | 比较/实现 | 关键函数相关（需复核） | `State = invalidateIteratorPositions(State, Pos1->getOffset(), BO_GE,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 764 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 655 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Pos2->getOffset(), BO_LT);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 765 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 674 | SymbolVal | 比较/实现 | 关键函数相关（需复核） | `nonloc::SymbolVal(Pos->getOffset()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 766 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 676 | getType | 比较/实现 | 关键函数相关（需复核） | `SymMgr.getType(Pos->getOffset())).getAsSymbol();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 767 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 690 | invalidateIteratorPositions | 比较/实现 | 关键函数相关（需复核） | `State = invalidateIteratorPositions(State, Pos1->getOffset(), BO_GT,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 768 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 691 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Pos2->getOffset(), BO_LT);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 769 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 938 | compare | 比较/实现 | 关键函数相关（需复核） | `!compare(State, Pos.getOffset(), Offset, Opc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 770 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 950 | compare | 比较/实现 | 关键函数相关（需复核） | `return compare(State, Pos.getOffset(), Offset, Opc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 771 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 964 | compare | 比较/实现 | 关键函数相关（需复核） | `return compare(State, Pos.getOffset(), Offset1, Opc1) &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 772 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 965 | compare | 比较/实现 | 关键函数相关（需复核） | `compare(State, Pos.getOffset(), Offset2, Opc2);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 773 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 992 | compare | 比较/实现 | 关键函数相关（需复核） | `!compare(State, Pos.getOffset(), Offset, Opc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 774 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 1007 | compare | 比较/实现 | 关键函数相关（需复核） | `return compare(State, Pos.getOffset(), CondSym, Opc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 775 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/ContainerModeling.cpp | 1010 | setTo | 比较/实现 | 关键函数相关（需复核） | `return Pos.setTo(rebaseSymbol(State, SVB, Pos.getOffset(), OldSym,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 776 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/MallocChecker.cpp | 2029 | getAsOffset | 比较/实现 | 关键函数相关（需复核） | `RegionOffset Offset = R->getAsOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 777 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/MallocChecker.cpp | 2032 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Offset.getOffset() != 0) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 778 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/MallocChecker.cpp | 2373 | getAsOffset | 比较/实现 | 关键函数相关（需复核） | `RegionOffset Offset = MR->getAsOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 779 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/MallocChecker.cpp | 2376 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Offset.getOffset() != 0) &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 780 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/MallocChecker.cpp | 2379 | getOffset | 比较/实现 | 关键函数相关（需复核） | `int offsetBytes = Offset.getOffset() / C.getASTContext().getCharWidth();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 781 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/Iterator.cpp | 252 | SymbolVal | 比较/实现 | 关键函数相关（需复核） | `nonloc::SymbolVal(Pos->getOffset()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 782 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/Iterator.cpp | 253 | getType | 比较/实现 | 关键函数相关（需复核） | `IntDist, SymMgr.getType(Pos->getOffset()))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 783 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/AnalyzerStatsChecker.cpp | 92 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc Loc = SM.getPresumedLoc(D->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 784 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/IteratorRangeChecker.cpp | 313 | if | 比较/实现 | 关键函数相关（需复核） | `if (isEqual(State, Pos.getOffset(), End)) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 785 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/IteratorRangeChecker.cpp | 329 | if | 比较/实现 | 关键函数相关（需复核） | `if (isLess(State, Pos.getOffset(), Beg)) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 786 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/IteratorRangeChecker.cpp | 345 | if | 比较/实现 | 关键函数相关（需复核） | `if (isGreater(State, Pos.getOffset(), End)) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 787 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/CheckPlacementNew.cpp | 67 | getDynamicExtentWithOffset | 比较/实现 | 关键函数相关（需复核） | `return getDynamicExtentWithOffset(C.getState(), C.getSVal(Place));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 788 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/CheckPlacementNew.cpp | 217 | getAsOffset | 比较/实现 | 关键函数相关（需复核） | `RegionOffset TheOffsetRegion = R->getAsOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 789 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/CheckPlacementNew.cpp | 221 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset =` | 确认是否参与源位置运算；非则忽略 | TODO |
| 790 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/CheckPlacementNew.cpp | 222 | getOffset | 比较/实现 | 关键函数相关（需复核） | `TheOffsetRegion.getOffset() / C.getASTContext().getCharWidth();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 791 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/CheckPlacementNew.cpp | 223 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned AddressAlign = Offset % AllocatedTAlign;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 792 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/CheckPlacementNew.cpp | 247 | getAsOffset | 比较/实现 | 关键函数相关（需复核） | `RegionOffset Offset = R->getAsOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 793 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/CheckPlacementNew.cpp | 252 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Offset.getOffset() / C.getASTContext().getCharWidth();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 794 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/StreamChecker.cpp | 166 |  | 声明/类型别名 | 可疑别名32位 | `using ArgNoTy = unsigned int;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 795 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/RetainCountChecker/RetainCountDiagnostics.cpp | 169 | findArgIdxOfSymbol | 声明/容器 | 容器承载32位位置 | `static Optional<unsigned> findArgIdxOfSymbol(ProgramStateRef CurrSt,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 796 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/RetainCountChecker/RetainCountChecker.h | 112 | Cnt | 计算 | 强制收窄为32位 | `: Cnt(cnt), ACnt(acnt), T(t), RawKind(static_cast<unsigned>(k)),` | 改为 uint64_t / 移除收窄 | TODO |
| 797 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/RetainCountChecker/RetainCountChecker.h | 113 | RawObjectKind | 计算 | 强制收窄为32位 | `RawObjectKind(static_cast<unsigned>(o)),` | 改为 uint64_t / 移除收窄 | TODO |
| 798 | StaticAnalyzer/Checkers | ./lib/StaticAnalyzer/Checkers/RetainCountChecker/RetainCountChecker.h | 114 | RawIvarAccessHistory | 计算 | 强制收窄为32位 | `RawIvarAccessHistory(static_cast<unsigned>(IvarAccess)) {` | 改为 uint64_t / 移除收窄 | TODO |
| 799 | StaticAnalyzer/Frontend | ./lib/StaticAnalyzer/Frontend/AnalysisConsumer.cpp | 78 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned AnalysisMode;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 800 | StaticAnalyzer/Frontend | ./lib/StaticAnalyzer/Frontend/AnalysisConsumer.cpp | 199 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc Loc = SM.getPresumedLoc(D->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 801 | StaticAnalyzer/Frontend | ./lib/StaticAnalyzer/Frontend/AnalysisConsumer.cpp | 644 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `return SM.getExpansionLoc(SL);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 802 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 157 |  | 声明/容器 | 容器承载32位位置 | `class ArrowMap : public std::vector<unsigned> {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 803 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 158 |  | 声明/类型别名 | 可疑别名32位 | `using Base = std::vector<unsigned>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 804 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 158 |  | 声明/容器 | 容器承载32位位置 | `using Base = std::vector<unsigned>;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 805 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 252 | L | 比较/实现 | 关键函数相关（需复核） | `FullSourceLoc L(SMgr.getExpansionLoc(UPDLoc.isValid()` | 检查实现是否用 64 位位置/偏移 | TODO |
| 806 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 297 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SMgr.getExpansionLoc(path.back()->getLocation().asLocation()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 807 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 299 | FunL | 比较/实现 | 关键函数相关（需复核） | `FullSourceLoc FunL(SMgr.getExpansionLoc(Body->getBeginLoc()), SMgr);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 808 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 327 | back | 比较/实现 | 关键函数相关（需复核） | `path.back()->getLocation().asLocation().getExpansionLoc().getFileID();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 809 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 375 | getLocation | 比较/实现 | 关键函数相关（需复核） | `FileID FID = I->getLocation().asLocation().getExpansionLoc().getFileID();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 810 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 431 | back | 比较/实现 | 关键函数相关（需复核） | `path.back()->getLocation().asLocation().getExpansionLoc().getFileID();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 811 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 650 | L | 比较/实现 | 关键函数相关（需复核） | `FullSourceLoc L(SMgr.getExpansionLoc(UPDLoc.isValid()` | 检查实现是否用 64 位位置/偏移 | TODO |
| 812 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 785 |  | 计算 | 指针差值落入32位 | `unsigned TotalRegularPieces = TotalPieces - TotalNotePieces - PopUpPieceCount;` | 用 uint64_t 接收指针差值 | TODO |
| 813 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 889 | getDecomposedExpansionLoc | 声明/局部 | 无关键词的32位位置变量（需复核） | `std::pair<FileID, unsigned> LPosInfo = SM.getDecomposedExpansionLoc(Pos);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 814 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 899 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned ColNo = SM.getColumnNumber(LPosInfo.first, LPosInfo.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 815 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 900 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `const char *TokInstantiationPtr =Pos.getExpansionLoc().getCharacterData();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 816 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 1025 | getLocation | 比较/实现 | 关键函数相关（需复核） | `FullSourceLoc L = MP->getLocation().asLocation().getExpansionLoc();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 817 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 1083 |  | 计算 | 指针差值落入32位 | `unsigned DisplayPos = LineEnd - FileStart;` | 用 uint64_t 接收指针差值 | TODO |
| 818 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 1085 | getLocForStartOfFile | 比较/实现 | 关键函数相关（需复核） | `SM.getLocForStartOfFile(LPosInfo.first).getLocWithOffset(DisplayPos);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 819 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 1239 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation InstantiationStart = SM.getExpansionLoc(Range.getBegin());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 820 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 1242 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation InstantiationEnd = SM.getExpansionLoc(Range.getEnd());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 821 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp | 1265 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `InstantiationEnd.getLocWithOffset(EndColNo - OldEndColNo);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 822 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/SarifDiagnostics.cpp | 149 | distance | 计算 | 强制收窄为32位 | `auto Index = static_cast<unsigned>(std::distance(Artifacts.begin(), I));` | 改为 uint64_t / 移除收窄 | TODO |
| 823 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/SarifDiagnostics.cpp | 156 | adjustColumnPos | 声明/局部 | 仅命名可疑需复核 | `static unsigned int adjustColumnPos(const SourceManager &SM, SourceLocation Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 824 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/SarifDiagnostics.cpp | 160 | getDecomposedExpansionLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = SM.getDecomposedExpansionLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 825 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/SarifDiagnostics.cpp | 171 | getExpansionColumnNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned int Off = LocInfo.second - (SM.getExpansionColumnNumber(Loc) - 1);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 826 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/SarifDiagnostics.cpp | 266 | asLocation | 比较/实现 | 关键函数相关（需复核） | `*P.asLocation().getExpansionLoc().getFileEntry(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 827 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/SarifDiagnostics.cpp | 297 | getLocation | 比较/实现 | 关键函数相关（需复核） | `*Diag.getLocation().asLocation().getExpansionLoc().getFileEntry(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 828 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporterVisitors.cpp | 282 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> TLInfo = SM.getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 829 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporterVisitors.cpp | 3180 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `Loc = Loc.getSpellingLoc();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 830 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 64 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(getOffset() == offset && "Failed to store offset");` | 检查实现是否用 64 位位置/偏移 | TODO |
| 831 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 75 | getOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t getOffset() const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 832 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 116 | getAsOffset | 比较/实现 | 关键函数相关（需复核） | `const RegionOffset &RO = R->getAsOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 833 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 120 | BindingKey | 比较/实现 | 关键函数相关（需复核） | `return BindingKey(RO.getRegion(), RO.getOffset(), k);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 834 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 129 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Out << K.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 835 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 431 | getSValFromStringLiteral | 比较/实现 | 关键函数相关（需复核） | `SVal getSValFromStringLiteral(const StringLiteral *SL, uint64_t Offset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 836 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 880 | if | 比较/实现 | 关键函数相关（需复核） | `if (NextKey.getOffset() > TopKey.getOffset() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 837 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 881 | getOffset | 比较/实现 | 关键函数相关（需复核） | `NextKey.getOffset() - TopKey.getOffset() < Length) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 838 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 886 | if | 比较/实现 | 关键函数相关（需复核） | `} else if (NextKey.getOffset() == TopKey.getOffset()) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 839 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 1175 | getAsOffset | 比较/实现 | 关键函数相关（需复核） | `const RegionOffset &RO = baseR->getAsOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 840 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 1185 | getOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t LowerOffset = RO.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 841 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 1202 | hasSymbolicOffset | 比较/实现 | 关键函数相关（需复核） | `BK.hasSymbolicOffset() ? Optional<uint64_t>() : BK.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 842 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 1833 | getSValFromStringLiteral | 比较/实现 | 关键函数相关（需复核） | `return getSValFromStringLiteral(SL, Offset, ElemT);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 843 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 1841 | getInit | 比较/实现 | 关键函数相关（需复核） | `const Expr *E = ILE->getInit(Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 844 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 1887 | getLength | 比较/实现 | 关键函数相关（需复核） | `uint32_t Code = (Offset >= SL->getLength()) ? 0 : SL->getCodeUnit(Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 845 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 1887 | getLength | 声明/局部 | 仅命名可疑需复核 | `uint32_t Code = (Offset >= SL->getLength()) ? 0 : SL->getCodeUnit(Offset);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 846 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/RegionStore.cpp | 1953 | getAsArrayOffset | 比较/实现 | 关键函数相关（需复核） | `const RegionRawOffset &O = R->getAsArrayOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 847 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 1574 | ExpansionRange | 比较/实现 | 关键函数相关（需复核） | `SourceRange ExpansionRange(SM.getExpansionLoc(Range.getBegin()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 848 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 1585 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned BeginOffset = SM.getFileOffset(ExpansionRange.getBegin());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 849 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 1586 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned EndOffset = SM.getFileOffset(ExpansionRange.getEnd());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 850 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 1587 | getBuffer | 比较/实现 | 关键函数相关（需复核） | `StringRef Snippet = Buffer->getBuffer().slice(BeginOffset, EndOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 851 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 1718 | if | 比较/实现 | 关键函数相关（需复核） | `if (SM.isBeforeInTranslationUnit(SecondLoc, FirstLoc))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 852 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 1968 | getLocation | 比较/实现 | 关键函数相关（需复核） | `FullSourceLoc Loc = P->getLocation().asLocation().getExpansionLoc();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 853 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 1970 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned LineNo = Loc.getLineNumber();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 854 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 1970 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned LineNo = Loc.getLineNumber();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 855 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 2510 |  | 声明/类型别名 | 可疑别名32位 | `using PriorityMapTy = llvm::DenseMap<const ExplodedNode *, unsigned>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 856 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 2699 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SM.getExpansionLoc(Loc) :` | 检查实现是否用 64 位位置/偏移 | TODO |
| 857 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 2721 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SM.getExpansionLoc(Loc) :` | 检查实现是否用 64 位位置/偏移 | TODO |
| 858 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 3143 | getExpansionLineNumber | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned StartLine = SM.getExpansionLineNumber(Start);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 859 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 3144 | getExpansionLineNumber | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned EndLine = SM.getExpansionLineNumber(End);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 860 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 3146 | getFileID | 比较/实现 | 关键函数相关（需复核） | `FileID FID = SM.getFileID(SM.getExpansionLoc(Start));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 861 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 3147 | for | 声明/局部 | 仅命名可疑需复核 | `for (unsigned Line = StartLine; Line <= EndLine; Line++)` | 确认是否参与源位置运算；非则忽略 | TODO |
| 862 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BugReporter.cpp | 3157 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation ExpansionLoc = SM.getExpansionLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 863 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/CallDescription.cpp | 26 |  | 声明/类型别名 | 可疑别名32位 | `using MaybeCount = Optional<unsigned>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 864 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/CallDescription.cpp | 26 |  | 声明/容器 | 容器承载32位位置 | `using MaybeCount = Optional<unsigned>;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 865 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 215 | AddInteger | 计算 | 强制收窄为32位 | `ID.AddInteger(static_cast<unsigned>(getKind()));` | 改为 uint64_t / 移除收窄 | TODO |
| 866 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 219 | AddInteger | 计算 | 强制收窄为32位 | `ID.AddInteger(static_cast<unsigned>(getKind()));` | 改为 uint64_t / 移除收窄 | TODO |
| 867 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 224 | AddInteger | 计算 | 强制收窄为32位 | `ID.AddInteger(static_cast<unsigned>(getKind()));` | 改为 uint64_t / 移除收窄 | TODO |
| 868 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 231 | AddInteger | 计算 | 强制收窄为32位 | `ID.AddInteger(static_cast<unsigned>(StringRegionKind));` | 改为 uint64_t / 移除收窄 | TODO |
| 869 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 239 | AddInteger | 计算 | 强制收窄为32位 | `ID.AddInteger(static_cast<unsigned>(ObjCStringRegionKind));` | 改为 uint64_t / 移除收窄 | TODO |
| 870 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 247 | AddInteger | 计算 | 强制收窄为32位 | `ID.AddInteger(static_cast<unsigned>(AllocaRegionKind));` | 改为 uint64_t / 移除收窄 | TODO |
| 871 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 264 | AddInteger | 计算 | 强制收窄为32位 | `ID.AddInteger(static_cast<unsigned>(CompoundLiteralRegionKind));` | 改为 uint64_t / 移除收窄 | TODO |
| 872 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 272 | AddInteger | 计算 | 强制收窄为32位 | `ID.AddInteger(static_cast<unsigned>(CXXThisRegionKind));` | 改为 uint64_t / 移除收窄 | TODO |
| 873 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 288 | AddInteger | 计算 | 强制收窄为32位 | `ID.AddInteger(static_cast<unsigned>(ObjCIvarRegionKind));` | 改为 uint64_t / 移除收窄 | TODO |
| 874 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 300 | AddInteger | 计算 | 强制收窄为32位 | `ID.AddInteger(static_cast<unsigned>(NonParamVarRegionKind));` | 改为 uint64_t / 移除收窄 | TODO |
| 875 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 311 | AddInteger | 计算 | 强制收窄为32位 | `ID.AddInteger(static_cast<unsigned>(ParamVarRegionKind));` | 改为 uint64_t / 移除收窄 | TODO |
| 876 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 323 | AddInteger | 计算 | 强制收窄为32位 | `ID.AddInteger(static_cast<unsigned>(MemRegion::SymbolicRegionKind));` | 改为 uint64_t / 移除收窄 | TODO |
| 877 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 542 | getRegion | 比较/实现 | 关键函数相关（需复核） | `os << "raw_offset{" << getRegion() << ',' << getOffset().getQuantity() << '}';` | 检查实现是否用 64 位位置/偏移 | TODO |
| 878 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 1361 | getAsArrayOffset | 比较/实现 | 关键函数相关（需复核） | `RegionRawOffset ElementRegion::getAsArrayOffset() const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 879 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 1391 | LLVM_DEBUG | 比较/实现 | 关键函数相关（需复核） | `LLVM_DEBUG(llvm::dbgs() << "MemRegion::getAsArrayOffset: "` | 检查实现是否用 64 位位置/偏移 | TODO |
| 880 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 1516 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `BaseOffset = Layout.getVBaseClassOffset(BOR->getDecl());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 881 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 1518 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `BaseOffset = Layout.getBaseClassOffset(BOR->getDecl());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 882 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 1587 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `Offset += Layout.getFieldOffset(idx);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 883 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/MemRegion.cpp | 1599 | getAsOffset | 比较/实现 | 关键函数相关（需复核） | `RegionOffset MemRegion::getAsOffset() const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 884 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/WorkList.cpp | 139 |  | 声明/类型别名 | 可疑别名32位 | `using BlockID = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 885 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/WorkList.cpp | 194 |  | 声明/类型别名 | 可疑别名32位 | `using BlockID = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 886 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/WorkList.cpp | 205 |  | 声明/类型别名 | 可疑别名32位 | `using QueuePriority = std::pair<int, unsigned long>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 887 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/WorkList.cpp | 261 |  | 声明/类型别名 | 可疑别名32位 | `using QueuePriority = std::pair<int, unsigned long>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 888 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/TextDiagnostics.cpp | 70 |  | 声明/局部 | 仅命名可疑需复核 | `auto reportPiece = [&](unsigned ID, FullSourceLoc Loc, StringRef String,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 889 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/PlistDiagnostics.cpp | 267 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SM.getExpansionLoc(I->getStart().asRange().getBegin()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 890 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/PlistDiagnostics.cpp | 272 | EndEdge | 比较/实现 | 关键函数相关（需复核） | `SourceRange EndEdge(SM.getExpansionLoc(I->getEnd().asRange().getBegin()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 891 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/PlistDiagnostics.cpp | 385 | getLocation | 比较/实现 | 关键函数相关（需复核） | `P->getLocation().asLocation().getExpansionLoc();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 892 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/PlistDiagnostics.cpp | 624 | AddFID | 序列化 | 序列化位置读写（需复核） | `AddFID(FM, Fids, SM, Piece.getLocation().asLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 893 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/PlistDiagnostics.cpp | 702 | L | 比较/实现 | 关键函数相关（需复核） | `FullSourceLoc L(SM.getExpansionLoc(UPDLoc.isValid()` | 检查实现是否用 64 位位置/偏移 | TODO |
| 894 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/PlistDiagnostics.cpp | 752 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SM.getExpansionLoc(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 895 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/PlistDiagnostics.cpp | 761 | FunL | 比较/实现 | 关键函数相关（需复核） | `FullSourceLoc FunL(SM.getExpansionLoc(Body->getBeginLoc()), SM);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 896 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/BlockCounter.cpp | 47 |  | 声明/类型别名 | 可疑别名32位 | `typedef llvm::ImmutableMap<CountKey, unsigned> CountMap;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 897 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/DynamicExtent.cpp | 58 | getDynamicExtentWithOffset | 比较/实现 | 关键函数相关（需复核） | `SVal getDynamicExtentWithOffset(ProgramStateRef State, SVal BufV) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 898 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/DynamicExtent.cpp | 63 | getAsOffset | 比较/实现 | 关键函数相关（需复核） | `RegionOffset Offset = MRegion->getAsOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 899 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/DynamicExtent.cpp | 71 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Offset.getOffset() /` | 检查实现是否用 64 位位置/偏移 | TODO |
| 900 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/CheckerManager.cpp | 911 | getStmtClass | 计算 | 强制收窄为32位 | `unsigned Key = (S->getStmtClass() << 1) \| unsigned(isPreVisit);` | 改为 uint64_t / 移除收窄 | TODO |
| 901 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/ExprEngine.cpp | 473 | getPendingInitLoop | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> ExprEngine::getPendingInitLoop(ProgramStateRef State,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 902 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/ExprEngine.cpp | 477 | create | 声明/容器 | 容器承载32位位置 | `return Optional<unsigned>::create(` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 903 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/ExprEngine.cpp | 501 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 904 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/ExprEngine.cpp | 506 | create | 声明/容器 | 容器承载32位位置 | `return Optional<unsigned>::create(` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 905 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/SimpleSValBuilder.cpp | 1012 | getAsOffset | 比较/实现 | 关键函数相关（需复核） | `RegionOffset LeftOffset = LeftMR->getAsOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 906 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/SimpleSValBuilder.cpp | 1013 | getAsOffset | 比较/实现 | 关键函数相关（需复核） | `RegionOffset RightOffset = RightMR->getAsOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 907 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/SimpleSValBuilder.cpp | 1016 | getRegion | 比较/实现 | 关键函数相关（需复核） | `LeftOffset.getRegion() == RightOffset.getRegion() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 908 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/SimpleSValBuilder.cpp | 1018 | getOffset | 比较/实现 | 关键函数相关（需复核） | `int64_t left = LeftOffset.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 909 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/SimpleSValBuilder.cpp | 1019 | getOffset | 比较/实现 | 关键函数相关（需复核） | `int64_t right = RightOffset.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 910 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/Store.cpp | 156 | getAsRawOffset | 比较/实现 | 关键函数相关（需复核） | `// base region. This is done by calling 'getAsRawOffset()'.` | 检查实现是否用 64 位位置/偏移 | TODO |
| 911 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/Store.cpp | 158 |  | 比较/实现 | 关键函数相关（需复核） | `// (2a) If we get a 'RegionRawOffset' after calling` | 检查实现是否用 64 位位置/偏移 | TODO |
| 912 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/Store.cpp | 159 | getAsRawOffset | 比较/实现 | 关键函数相关（需复核） | `// 'getAsRawOffset()', determine if the absolute offset` | 检查实现是否用 64 位位置/偏移 | TODO |
| 913 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/Store.cpp | 166 |  | 比较/实现 | 关键函数相关（需复核） | `// (2b) If we don't a get a 'RegionRawOffset' after calling` | 检查实现是否用 64 位位置/偏移 | TODO |
| 914 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/Store.cpp | 167 | getAsRawOffset | 比较/实现 | 关键函数相关（需复核） | `// 'getAsRawOffset()', it means that we are at offset 0.` | 检查实现是否用 64 位位置/偏移 | TODO |
| 915 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/Store.cpp | 172 | getAsArrayOffset | 比较/实现 | 关键函数相关（需复核） | `const RegionRawOffset &rawOff = elementR->getAsArrayOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 916 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/Store.cpp | 180 | getOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits off = rawOff.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 917 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/Store.cpp | 443 | getLValueElement | 比较/实现 | 关键函数相关（需复核） | `SVal StoreManager::getLValueElement(QualType elementType, NonLoc Offset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 918 | StaticAnalyzer/Core | ./lib/StaticAnalyzer/Core/Store.cpp | 485 | MemRegionVal | 比较/实现 | 关键函数相关（需复核） | `return loc::MemRegionVal(MRMgr.getElementRegion(elementType, Offset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 919 | CodeGen/CGDecl | ./lib/CodeGen/CGDecl.cpp | 1048 | getElementOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned CurOff = Layout->getElementOffset(i);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 920 | CodeGen/CodeGenTBAA | ./lib/CodeGen/CodeGenTBAA.h | 240 |  | 计算 | 强制收窄为32位 | `auto KindValue = static_cast<unsigned>(Val.Kind);` | 改为 uint64_t / 移除收窄 | TODO |
| 921 | CodeGen/CodeGenTBAA | ./lib/CodeGen/CodeGenTBAA.h | 244 | getHashValue | 比较/实现 | 关键函数相关（需复核） | `DenseMapInfo<uint64_t>::getHashValue(Val.Offset) ^` | 检查实现是否用 64 位位置/偏移 | TODO |
| 922 | CodeGen/CGRecordLayout | ./lib/CodeGen/CGRecordLayout.h | 68 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset : 16;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 923 | CodeGen/CGRecordLayout | ./lib/CodeGen/CGRecordLayout.h | 99 | CGBitFieldInfo | 声明/局部 | 仅命名可疑需复核 | `CGBitFieldInfo(unsigned Offset, unsigned Size, bool IsSigned,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 924 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 3656 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::ConstantInt::get(Int32Ty, Offset)));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 925 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 3993 | getType | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned AddrSpace = Ptr->getType()->getPointerAddressSpace();` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 926 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 8237 | getElementType | 计算 | 复杂指针差值收窄 | `llvm::Type *T = cast<llvm::VectorType>(VT)->getElementType(); unsigned LaneBits = T->getPrimitiveSizeInBits(); uint32_t Value = HighBit <<…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 927 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 8238 | getPrimitiveSizeInBits | 计算 | 复杂指针差值收窄 | `unsigned LaneBits = T->getPrimitiveSizeInBits(); uint32_t Value = HighBit << (LaneBits - 1); if (OtherBits)` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 928 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 8239 | if | 计算 | 复杂指针差值收窄 | `uint32_t Value = HighBit << (LaneBits - 1); if (OtherBits) Value \|= (1UL << (LaneBits - 1)) - 1;` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 929 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 9419 |  | 计算 | 强制收窄为32位 | `unsigned HintID = static_cast<unsigned>(-1);` | 改为 uint64_t / 移除收窄 | TODO |
| 930 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 9447 | if | 计算 | 强制收窄为32位 | `if (HintID != static_cast<unsigned>(-1)) {` | 改为 uint64_t / 移除收窄 | TODO |
| 931 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 9835 | getIntrinsic | 比较/实现 | 关键函数相关（需复核） | `CGM.getIntrinsic(MTEIntrinsicID), {Pointer, TagOffset});` | 检查实现是否用 64 位位置/偏移 | TODO |
| 932 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 12666 | Case | 计算 | 强制收窄为32位 | `.Case(STRING, {0u, static_cast<unsigned>(llvm::X86::ENUM)})` | 改为 uint64_t / 移除收窄 | TODO |
| 933 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 12668 | Case | 计算 | 强制收窄为32位 | `.Case(ALIAS, {1u, static_cast<unsigned>(llvm::X86::ENUM)})` | 改为 uint64_t / 移除收窄 | TODO |
| 934 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 12670 | Case | 计算 | 强制收窄为32位 | `.Case(STR, {1u, static_cast<unsigned>(llvm::X86::ENUM)})` | 改为 uint64_t / 移除收窄 | TODO |
| 935 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 12672 | Case | 计算 | 强制收窄为32位 | `.Case(STR, {2u, static_cast<unsigned>(llvm::X86::ENUM)})` | 改为 uint64_t / 移除收窄 | TODO |
| 936 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 15473 |  | 声明/局部 | 仅命名可疑需复核 | `auto StoreSubVec = [&](unsigned Width, unsigned Offset, unsigned EltNo) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 937 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 15513 | CreateGEP | 比较/实现 | 关键函数相关（需复核） | `Builder.CreateGEP(Int8Ty, Op0, ConstantInt::get(Int64Ty, Offset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 938 | CodeGen/CGBuiltin | ./lib/CodeGen/CGBuiltin.cpp | 16488 | get | 比较/实现 | 关键函数相关（需复核） | `auto *Offset = llvm::ConstantInt::get(CGF.Int32Ty, XOffset + Index * 4);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 939 | CodeGen/CGGPUBuiltin | ./lib/CodeGen/CGGPUBuiltin.cpp | 165 | getFixedSize | 计算 | 强制收窄为32位 | `static_cast<uint32_t>(r.second.getFixedSize()));` | 改为 uint64_t / 移除收窄 | TODO |
| 940 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 242 |  | 序列化 | 序列化位置读写（需复核） | `Address Location,` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 941 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 2033 |  | 声明/局部 | 仅命名可疑需复核 | `const unsigned Offset = UseVolatile ? Info.VolatileOffset : Info.Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 942 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 2037 | assert | 计算 | 强制收窄为32位 | `assert(static_cast<unsigned>(Offset + Info.Size) <= StorageSize);` | 改为 uint64_t / 移除收窄 | TODO |
| 943 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 2037 | assert | 声明/局部 | 仅命名可疑需复核 | `assert(static_cast<unsigned>(Offset + Info.Size) <= StorageSize);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 944 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 2038 |  | 计算 | 指针差值落入32位 | `unsigned HighBits = StorageSize - Offset - Info.Size;` | 用 uint64_t 接收指针差值 | TODO |
| 945 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 2038 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned HighBits = StorageSize - Offset - Info.Size;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 946 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 2046 | if | 计算 | 强制收窄为32位 | `if (static_cast<unsigned>(Offset) + Info.Size < StorageSize)` | 改为 uint64_t / 移除收窄 | TODO |
| 947 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 2046 | if | 声明/局部 | 仅命名可疑需复核 | `if (static_cast<unsigned>(Offset) + Info.Size < StorageSize)` | 确认是否参与源位置运算；非则忽略 | TODO |
| 948 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 2271 |  | 声明/局部 | 仅命名可疑需复核 | `const unsigned Offset = UseVolatile ? Info.VolatileOffset : Info.Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 949 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 2290 | getBitsSet | 比较/实现 | 关键函数相关（需复核） | `Val, ~llvm::APInt::getBitsSet(StorageSize, Offset, Offset + Info.Size),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 950 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 2317 |  | 计算 | 指针差值落入32位 | `unsigned HighBits = StorageSize - Info.Size;` | 用 uint64_t 接收指针差值 | TODO |
| 951 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 3158 | getContext | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = getContext().getSourceManager().getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 952 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 4207 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<uint32_t, 4> Indices;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 953 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 4311 | getContext | 比较/实现 | 关键函数相关（需复核） | `CGF.getContext().getFieldOffset(Field));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 954 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 4448 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `Layout.getFieldOffset(field->getFieldIndex()) / CharWidth;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 955 | CodeGen/CGExpr | ./lib/CodeGen/CGExpr.cpp | 5271 | getObjCRuntime | 比较/实现 | 关键函数相关（需复核） | `return CGM.getObjCRuntime().EmitIvarOffset(*this, Interface, Ivar);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 956 | CodeGen/ConstantInitBuilder | ./lib/CodeGen/ConstantInitBuilder.cpp | 129 | getRelativeOffset | 比较/实现 | 关键函数相关（需复核） | `ConstantAggregateBuilderBase::getRelativeOffset(llvm::IntegerType *offsetType,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 957 | CodeGen/BackendUtil | ./lib/CodeGen/BackendUtil.cpp | 955 | addModuleFlag | 计算 | 强制收窄为32位 | `TheModule->addModuleFlag(Module::Error, "ThinLTO", uint32_t(0));` | 改为 uint64_t / 移除收窄 | TODO |
| 958 | CodeGen/BackendUtil | ./lib/CodeGen/BackendUtil.cpp | 958 | uint32_t | 计算 | 强制收窄为32位 | `uint32_t(1));` | 改为 uint64_t / 移除收窄 | TODO |
| 959 | CodeGen/CGObjC | ./lib/CodeGen/CGObjC.cpp | 1200 | add | 比较/实现 | 关键函数相关（需复核） | `args.add(RValue::get(ivarOffset), getContext().getPointerDiffType());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 960 | CodeGen/CGObjC | ./lib/CodeGen/CGObjC.cpp | 1492 | add | 比较/实现 | 关键函数相关（需复核） | `args.add(RValue::get(ivarOffset), getContext().getPointerDiffType());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 961 | CodeGen/CGObjC | ./lib/CodeGen/CGObjC.cpp | 1497 | add | 比较/实现 | 关键函数相关（需复核） | `args.add(RValue::get(ivarOffset), getContext().getPointerDiffType());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 962 | CodeGen/CGObjC | ./lib/CodeGen/CGObjC.cpp | 3914 | getMinor | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> Min = Version.getMinor(), SMin = Version.getSubminor();` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 963 | CodeGen/CGObjC | ./lib/CodeGen/CGObjC.cpp | 3952 | getMinor | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> Min = Version.getMinor(), SMin = Version.getSubminor();` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 964 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 108 | getVBPtrOffset | 比较/实现 | 关键函数相关（需复核） | `Offs += SubobjectLayout.getVBPtrOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 965 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 110 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Offs += Layout.getVBaseClassOffset(VBT->getVBaseWithVPtr());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 966 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 605 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::Value *VBPOffset = llvm::ConstantInt::get(CGM.IntTy, VBPtrOffset),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 967 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 606 | get | 比较/实现 | 关键函数相关（需复核） | `*VBTOffset = llvm::ConstantInt::get(CGM.IntTy, VBTableOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 968 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 825 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<uint32_t, llvm::StructType *> CatchableTypeArrayTypeMap;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 969 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 952 | getElementType | 比较/实现 | 关键函数相关（需复核） | `Value.getElementType(), Value.getPointer(), Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 970 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 1060 | getASTRecordLayout | 比较/实现 | 关键函数相关（需复核） | `Context.getASTRecordLayout(ClassDecl).getVBPtrOffset().getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 971 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 1228 | get | 比较/实现 | 关键函数相关（需复核） | `VBaseOffset, llvm::ConstantInt::get(CGM.PtrDiffTy, ConstantVBaseOffset),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 972 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 1288 | getVBPtrOffset | 比较/实现 | 关键函数相关（需复核） | `Offs += SubobjectLayout.getVBPtrOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 973 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 1290 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Offs += Layout.getVBaseClassOffset(VBT->getVBaseWithVPtr());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 974 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 1421 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Adjustment += DerivedLayout.getVBaseClassOffset(ML.VBase);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 975 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 1475 | getElementType | 比较/实现 | 关键函数相关（需复核） | `Result.getElementType(), Result.getPointer(), VBaseOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 976 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 1705 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Offset = Layout.getBaseClassOffset(BaseRD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 977 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 1772 | getAddrOfVTable | 比较/实现 | 关键函数相关（需复核） | `(void)getAddrOfVTable(VTableClass, Base.getBaseOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 978 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 1773 | ID | 比较/实现 | 关键函数相关（需复核） | `VFTableIdTy ID(VTableClass, Base.getBaseOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 979 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 2160 | getVBPtrOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits VBPtrOffset = BaseLayout.getVBPtrOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 980 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 2161 | get | 比较/实现 | 关键函数相关（需复核） | `Offsets[0] = llvm::ConstantInt::get(CGM.IntTy, -VBPtrOffset.getQuantity());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 981 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 2166 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits Offset = DerivedLayout.getVBaseClassOffset(VBase);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 982 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 2173 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `DerivedLayout.getVBaseClassOffset(VBT.getVBaseWithVPtr());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 983 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 2178 | get | 比较/实现 | 关键函数相关（需复核） | `Offsets[VBIndex] = llvm::ConstantInt::get(CGM.IntTy, Offset.getQuantity());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 984 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 2795 | push_back | 比较/实现 | 关键函数相关（需复核） | `fields.push_back(getZeroInt()); // FieldOffset` | 检查实现是否用 64 位位置/偏移 | TODO |
| 985 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 2797 | push_back | 比较/实现 | 关键函数相关（需复核） | `fields.push_back(getAllOnesInt()); // FieldOffset` | 检查实现是否用 64 位位置/偏移 | TODO |
| 986 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 2843 | getContext | 比较/实现 | 关键函数相关（需复核） | `Offs = getContext().getASTRecordLayout(RD).getVBPtrOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 987 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 2889 | toCharUnitsFromBits | 比较/实现 | 关键函数相关（需复核） | `CharUnits FieldOffset = Ctx.toCharUnitsFromBits(Ctx.getFieldOffset(MPD));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 988 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 3113 | getElementType | 比较/实现 | 关键函数相关（需复核） | `This.getElementType(), This.getPointer(), VBPtrOffset, "vbptr");` | 检查实现是否用 64 位位置/偏移 | TODO |
| 989 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 3120 | getAlignment | 比较/实现 | 关键函数相关（需复核） | `VBPtrAlign = This.getAlignment().alignmentAtOffset(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 990 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 3131 | get | 比较/实现 | 关键函数相关（需复核） | `VBTableOffset, llvm::ConstantInt::get(VBTableOffset->getType(), 2),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 991 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 3180 | getContext | 比较/实现 | 关键函数相关（需复核） | `offs = getContext().getASTRecordLayout(RD).getVBPtrOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 992 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 3418 | getContext | 比较/实现 | 关键函数相关（需复核） | `getContext().getASTRecordLayout(DstRD).getVBPtrOffset().getQuantity());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 993 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 3420 | CreateSelect | 比较/实现 | 关键函数相关（需复核） | `Builder.CreateSelect(DstVBIndexEqZero, getZeroInt(), DstVBPtrOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 994 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 3638 | getASTRecordLayout | 比较/实现 | 关键函数相关（需复核） | `.getASTRecordLayout(Parent->RD).getBaseClassOffset(RD).getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 995 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 3828 | getASTRecordLayout | 比较/实现 | 关键函数相关（需复核） | `VBPtrOffset = Context.getASTRecordLayout(RD).getVBPtrOffset().getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 996 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 3857 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::ConstantInt::get(CGM.IntTy, VBPtrOffset),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 997 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 3899 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::ConstantInt::get(CGM.IntTy, VFPtrOffset),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 998 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 4188 | getMangleContext | 比较/实现 | 关键函数相关（需复核） | `getMangleContext().mangleCXXCatchableType(T, CD, CT, Size, NVOffset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 999 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 4238 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::ConstantInt::get(CGM.IntTy, NVOffset), // NonVirtualAdjustment` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1000 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 4239 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::ConstantInt::get(CGM.IntTy, VBPtrOffset), // OffsetToVBPtr` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1001 | CodeGen/MicrosoftCXXABI | ./lib/CodeGen/MicrosoftCXXABI.cpp | 4304 | getVBPtrOffset | 比较/实现 | 关键函数相关（需复核） | `VBPtrOffset = MostDerivedLayout.getVBPtrOffset().getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1002 | CodeGen/CodeGenFunction | ./lib/CodeGen/CodeGenFunction.cpp | 858 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Count, Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1003 | CodeGen/CodeGenFunction | ./lib/CodeGen/CodeGenFunction.cpp | 862 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Offset = Attr->getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1004 | CodeGen/CodeGenFunction | ./lib/CodeGen/CodeGenFunction.cpp | 865 | getCodeGenOpts | 比较/实现 | 关键函数相关（需复核） | `Offset = CGM.getCodeGenOpts().PatchableFunctionEntryOffset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1005 | CodeGen/CGCleanup | ./lib/CodeGen/CGCleanup.h | 59 |  | 声明/布局 | 位域32位可能存位置 | `unsigned NumHandlers : 32 - NumCommonBits;` | 避免用位域承载位置；必要时重构布局 | TODO |
| 1006 | CodeGen/CGCleanup | ./lib/CodeGen/CGCleanup.h | 93 |  | 声明/布局 | 位域32位可能存位置 | `unsigned NumFilters : 32 - NumCommonBits;` | 避免用位域承载位置；必要时重构布局 | TODO |
| 1007 | CodeGen/CGObjCGNU | ./lib/CodeGen/CGObjCGNU.cpp | 1856 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::Constant *OffsetValue = llvm::ConstantInt::get(IntTy, Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1008 | CodeGen/CGObjCGNU | ./lib/CodeGen/CGObjCGNU.cpp | 3555 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::Constant *OffsetValue = llvm::ConstantInt::get(IntTy, Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1009 | CodeGen/CGObjCGNU | ./lib/CodeGen/CGObjCGNU.cpp | 3856 | makeArrayRef | 计算 | 强制收窄为32位 | `makeArrayRef(moduleEltTys).drop_back(unsigned(RuntimeVersion < 10)));` | 改为 uint64_t / 移除收窄 | TODO |
| 1010 | CodeGen/CGObjCGNU | ./lib/CodeGen/CGObjCGNU.cpp | 4200 | get | 比较/实现 | 关键函数相关（需复核） | `return llvm::ConstantInt::get(PtrDiffTy, Offset, /*isSigned*/true);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1011 | CodeGen/CGExprScalar | ./lib/CodeGen/CGExprScalar.cpp | 1606 | value_or | 计算 | 强制收窄为32位 | `static_cast<unsigned>(GlobalAS.value_or(LangAS::Default)));` | 改为 uint64_t / 移除收窄 | TODO |
| 1012 | CodeGen/CGExprScalar | ./lib/CodeGen/CGExprScalar.cpp | 1808 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Off) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1013 | CodeGen/CGExprScalar | ./lib/CodeGen/CGExprScalar.cpp | 1910 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = (CurIdx == 0) ? 0 : ResElts;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1014 | CodeGen/CGExprScalar | ./lib/CodeGen/CGExprScalar.cpp | 1927 | push_back | 比较/实现 | 关键函数相关（需复核） | `Args.push_back(getMaskElt(SVI, j, Offset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1015 | CodeGen/CGExprScalar | ./lib/CodeGen/CGExprScalar.cpp | 2930 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `int64_t OffsetInt = RL.getFieldOffset(i) /` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1016 | CodeGen/CGExprScalar | ./lib/CodeGen/CGExprScalar.cpp | 2957 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits OffsetInt = RL.getBaseClassOffset(BaseRD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1017 | CodeGen/CGExprScalar | ./lib/CodeGen/CGExprScalar.cpp | 5061 | getStructLayout | 比较/实现 | 关键函数相关（需复核） | `IntPtrTy, DL.getStructLayout(STy)->getElementOffset(FieldNo));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1018 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.h | 145 |  | 声明/容器 | 容器承载32位位置 | `std::vector<unsigned> FnBeginRegionCount;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1019 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.h | 590 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> ArgNo,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1020 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.h | 598 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> ArgNo,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1021 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.h | 761 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned getLineNumber(SourceLocation Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1022 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.h | 761 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned getLineNumber(SourceLocation Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1023 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.h | 766 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned getColumnNumber(SourceLocation Loc, bool Force = false);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1024 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.h | 766 | getColumnNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned getColumnNumber(SourceLocation Loc, bool Force = false);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1025 | CodeGen/CGBuilder | ./lib/CodeGen/CGBuilder.h | 197 | fromQuantity | 比较/实现 | 关键函数相关（需复核） | `auto Offset = CharUnits::fromQuantity(Layout->getElementOffset(Index));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1026 | CodeGen/CGBuilder | ./lib/CodeGen/CGBuilder.h | 202 | getAlignment | 比较/实现 | 关键函数相关（需复核） | `Addr.getAlignment().alignmentAtOffset(Offset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1027 | CodeGen/CGBuilder | ./lib/CodeGen/CGBuilder.h | 224 | getAlignment | 比较/实现 | 关键函数相关（需复核） | `Addr.getAlignment().alignmentAtOffset(Index * EltSize));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1028 | CodeGen/CGBuilder | ./lib/CodeGen/CGBuilder.h | 241 | getAlignment | 比较/实现 | 关键函数相关（需复核） | `Addr.getAlignment().alignmentAtOffset(Index * EltSize));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1029 | CodeGen/CGBuilder | ./lib/CodeGen/CGBuilder.h | 258 | getAlignment | 比较/实现 | 关键函数相关（需复核） | `Addr.getAlignment().alignmentAtOffset(Index * EltSize));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1030 | CodeGen/CGBuilder | ./lib/CodeGen/CGBuilder.h | 281 | getSize | 比较/实现 | 关键函数相关（需复核） | `getSize(Offset), Name),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1031 | CodeGen/CGBuilder | ./lib/CodeGen/CGBuilder.h | 283 | getAlignment | 比较/实现 | 关键函数相关（需复核） | `Addr.getAlignment().alignmentAtOffset(Offset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1032 | CodeGen/CGBuilder | ./lib/CodeGen/CGBuilder.h | 289 | getSize | 比较/实现 | 关键函数相关（需复核） | `getSize(Offset), Name),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1033 | CodeGen/CGBuilder | ./lib/CodeGen/CGBuilder.h | 291 | getAlignment | 比较/实现 | 关键函数相关（需复核） | `Addr.getAlignment().alignmentAtOffset(Offset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1034 | CodeGen/CGBuilder | ./lib/CodeGen/CGBuilder.h | 307 | getAlignment | 比较/实现 | 关键函数相关（需复核） | `Addr.getAlignment().alignmentAtOffset(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1035 | CodeGen/CGBuilder | ./lib/CodeGen/CGBuilder.h | 362 | fromQuantity | 比较/实现 | 关键函数相关（需复核） | `auto Offset = CharUnits::fromQuantity(Layout->getElementOffset(Index));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1036 | CodeGen/CGBuilder | ./lib/CodeGen/CGBuilder.h | 367 | getAlignment | 比较/实现 | 关键函数相关（需复核） | `Addr.getAlignment().alignmentAtOffset(Offset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1037 | CodeGen/CodeGenModule | ./lib/CodeGen/CodeGenModule.h | 426 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<unsigned, llvm::Constant *> AnnotationArgs;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1038 | CodeGen/CodeGenFunction | ./lib/CodeGen/CodeGenFunction.h | 1954 | invalid | 序列化 | 序列化位置读写（需复核） | `Address ReturnLocation = Address::invalid();` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1039 | CodeGen/CodeGenFunction | ./lib/CodeGen/CodeGenFunction.h | 2657 | EmitAnyExprToMem | 序列化 | 序列化位置读写（需复核） | `void EmitAnyExprToMem(const Expr *E, Address Location,` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1040 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 151 | push_back | 比较/实现 | 关键函数相关（需复核） | `Elems.push_back(getPadding(Offset - Size));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1041 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 335 |  | 声明/局部 | 仅命名可疑需复核 | `[&](unsigned Op) { return Offset + Op * ElemSize; }));` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1042 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 345 | getElementOffset | 比较/实现 | 关键函数相关（需复核） | `Layout->getElementOffset(Op));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1043 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 364 |  | 声明/局部 | 仅命名可疑需复核 | `[&](unsigned Elem) { return Offset + Elem * ElemSize; }));` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1044 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 373 | getZeroes | 比较/实现 | 关键函数相关（需复核） | `{getZeroes(Hint - Offset), getZeroes(Offset + ElemSize - Hint)});` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1045 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 489 | push_back | 比较/实现 | 关键函数相关（需复核） | `PackedElems.push_back(Utils.getPadding(DesiredOffset - SizeSoFar));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1046 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 629 | getContext | 比较/实现 | 关键函数相关（需复核） | `CGM.getContext().toBits(StartOffset) + FieldOffset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1047 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 658 | for | 声明/局部 | 仅命名可疑需复核 | `for (unsigned I = 0; I != NumElementsToUpdate; ++I, Offset += ElemSize) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1048 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 733 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `Layout.getFieldOffset(FieldNo));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1049 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 753 | if | 比较/实现 | 关键函数相关（需复核） | `if (!AppendField(Field, Layout.getFieldOffset(FieldNo), EltInit,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1050 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 763 | if | 比较/实现 | 关键函数相关（需复核） | `if (!AppendBitField(Field, Layout.getFieldOffset(FieldNo), CI,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1051 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 816 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits BaseOffset = Layout.getBaseClassOffset(BD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1052 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 831 | getContext | 比较/实现 | 关键函数相关（需复核） | `uint64_t OffsetBits = CGM.getContext().toBits(Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1053 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 854 | if | 比较/实现 | 关键函数相关（需复核） | `if (!AppendField(*Field, Layout.getFieldOffset(FieldNo) + OffsetBits,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1054 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 863 | if | 比较/实现 | 关键函数相关（需复核） | `if (!AppendBitField(*Field, Layout.getFieldOffset(FieldNo) + OffsetBits,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1055 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 965 |  | 计算 | 指针差值落入32位 | `unsigned TrailingZeroes = ArrayBound - NonzeroLength;` | 用 uint64_t 接收指针差值 | TODO |
| 1056 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 1091 | if | 计算 | 指针差值落入32位 | `if (unsigned NumPadBytes = TotalSize - CurSize) {` | 用 uint64_t 接收指针差值 | TODO |
| 1057 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 1502 |  | 声明/容器 | 容器承载32位位置 | `llvm::SmallVector<unsigned, 8> Indices;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1058 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 1823 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `return !Value.getLValueOffset().isZero();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1059 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 1827 | getOffset | 比较/实现 | 关键函数相关（需复核） | `llvm::Constant *getOffset() {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1060 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 1829 | getLValueOffset | 比较/实现 | 关键函数相关（需复核） | `Value.getLValueOffset().getQuantity());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1061 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 1841 | getGetElementPtr | 比较/实现 | 关键函数相关（需复核） | `C = llvm::ConstantExpr::getGetElementPtr(CGM.Int8Ty, C, getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1062 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 1904 | getIntegerCast | 比较/实现 | 关键函数相关（需复核） | `C = llvm::ConstantExpr::getIntegerCast(getOffset(), intptrTy,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1063 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 2231 | getContext | 比较/实现 | 关键函数相关（需复核） | `uint64_t fieldOffset = getContext().getFieldOffset(decl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1064 | CodeGen/CGExprConstant | ./lib/CodeGen/CGExprConstant.cpp | 2232 | getContext | 比较/实现 | 关键函数相关（需复核） | `CharUnits chars = getContext().toCharUnitsFromBits((int64_t) fieldOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1065 | CodeGen/CGStmtOpenMP | ./lib/CodeGen/CGStmtOpenMP.cpp | 371 | castValueFromUintptr | 序列化 | 序列化位置读写（需复核） | `static Address castValueFromUintptr(CodeGenFunction &CGF, SourceLocation Loc,` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1066 | CodeGen/CGStmtOpenMP | ./lib/CodeGen/CGStmtOpenMP.cpp | 4664 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset =` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1067 | CodeGen/CGStmtOpenMP | ./lib/CodeGen/CGStmtOpenMP.cpp | 4665 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `Layout.getFieldOffset(It->second->getFieldIndex()) / CharWidth;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1068 | CodeGen/SwiftCallingConv | ./lib/CodeGen/SwiftCallingConv.cpp | 154 | addTypedData | 比较/实现 | 关键函数相关（需复核） | `addTypedData(baseRecord, begin + layout.getBaseClassOffset(baseRecord));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1069 | CodeGen/SwiftCallingConv | ./lib/CodeGen/SwiftCallingConv.cpp | 159 | addTypedData | 比较/实现 | 关键函数相关（需复核） | `addTypedData(CGM.Int8PtrTy, begin + layout.getVBPtrOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1070 | CodeGen/SwiftCallingConv | ./lib/CodeGen/SwiftCallingConv.cpp | 165 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `auto fieldOffsetInBits = layout.getFieldOffset(field->getFieldIndex());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1071 | CodeGen/SwiftCallingConv | ./lib/CodeGen/SwiftCallingConv.cpp | 179 | addTypedData | 比较/实现 | 关键函数相关（需复核） | `addTypedData(baseRecord, begin + layout.getVBaseClassOffset(baseRecord));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1072 | CodeGen/CGCall | ./lib/CodeGen/CGCall.cpp | 1416 | if | 比较/实现 | 关键函数相关（需复核） | `if (unsigned offset = info.getDirectOffset()) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1073 | CodeGen/CGCall | ./lib/CodeGen/CGCall.cpp | 2171 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumElemsParam;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1074 | CodeGen/CGCall | ./lib/CodeGen/CGCall.cpp | 2807 | if | 比较/实现 | 关键函数相关（需复核） | `if (ArgI.getDirectOffset() == 0 && LTy->isPointerTy() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1075 | CodeGen/CGCall | ./lib/CodeGen/CGCall.cpp | 2890 | getDirectOffset | 比较/实现 | 关键函数相关（需复核） | `ArgI.getDirectOffset() == 0) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1076 | CodeGen/CGCall | ./lib/CodeGen/CGCall.cpp | 3300 | assert | 计算 | 强制收窄为32位 | `assert(static_cast<unsigned>(BitWidth) <= Bits.size() * CharWidth);` | 改为 uint64_t / 移除收窄 | TODO |
| 1077 | CodeGen/CGCall | ./lib/CodeGen/CGCall.cpp | 3376 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `Offset + ASTLayout.getFieldOffset(Idx) / CharWidth, Bits);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1078 | CodeGen/CGCall | ./lib/CodeGen/CGCall.cpp | 3561 | getDirectOffset | 比较/实现 | 关键函数相关（需复核） | `RetAI.getDirectOffset() == 0) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1079 | CodeGen/CGCall | ./lib/CodeGen/CGCall.cpp | 4655 | if | 比较/实现 | 关键函数相关（需复核） | `if (Expr *Offset = AA->getOffset()) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1080 | CodeGen/CGCall | ./lib/CodeGen/CGCall.cpp | 4975 | getDirectOffset | 比较/实现 | 关键函数相关（需复核） | `ArgInfo.getDirectOffset() == 0) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1081 | CodeGen/CGCall | ./lib/CodeGen/CGCall.cpp | 5528 | if | 比较/实现 | 关键函数相关（需复核） | `if (RetAI.getCoerceToType() == RetIRTy && RetAI.getDirectOffset() == 0) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1082 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 1362 | getContext | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = CGF.getContext().getSourceManager().getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1083 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 1382 | getContext | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = CGF.getContext().getSourceManager().getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1084 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 1384 | getLine | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = PLoc.getLine();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1085 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 1385 | getColumn | 声明/局部 | 仅命名可疑需复核 | `unsigned Column = PLoc.getColumn();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1086 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 1608 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1087 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 1613 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PLoc = SM.getPresumedLoc(Loc, /*UseLineDirectives=*/false);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1088 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 1638 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned DeviceID, FileID, Line;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1089 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 1717 |  | 序列化 | 序列化位置读写（需复核） | `const VarDecl *VD, Address VDAddr, SourceLocation Loc,` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1090 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 1863 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1091 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 2908 | get | 计算 | 强制收窄为32位 | `llvm::ConstantInt::get(CGM.IntTy, unsigned(ProcBind), /*isSigned=*/true)};` | 改为 uint64_t / 移除收窄 | TODO |
| 1092 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 3137 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1093 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 4006 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned I = 0, End = E->numOfIterators(); I < End; ++I) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1094 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 4017 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned I = 0, End = E->numOfIterators(); I < End; ++I) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1095 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 4360 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Pos = 0;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1096 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 4590 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `llvm::PointerUnion<unsigned *, LValue *> Pos,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1097 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 4618 | if | 声明/局部 | 无关键词的32位位置变量（需复核） | `if (unsigned *P = Pos.dyn_cast<unsigned *>()) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1098 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 4642 | if | 声明/局部 | 无关键词的32位位置变量（需复核） | `if (unsigned *P = Pos.dyn_cast<unsigned *>()) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1099 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 4705 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned I = 0, End = Data.DepExprs.size(); I < End; ++I) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1100 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 4820 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Pos = 0;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1101 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 4821 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned I = 0, End = Dependencies.size(); I < End; ++I) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1102 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 4832 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned I = 0, End = Dependencies.size(); I < End; ++I) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1103 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 4841 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned I = 0, End = Dependencies.size(); I < End; ++I) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1104 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 4918 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `llvm::PointerUnion<unsigned *, LValue *> Pos;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1105 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 6421 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1106 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 7224 | getFlagMemberOffset | 比较/实现 | 关键函数相关（需复核） | `static unsigned getFlagMemberOffset() {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1107 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 7225 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1108 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 8367 | getMemberOfFlag | 声明/局部 | 无关键词的32位位置变量（需复核） | `static OpenMPOffloadMappingFlags getMemberOfFlag(unsigned Position) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1109 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 8368 | getFlagMemberOffset | 比较/实现 | 关键函数相关（需复核） | `// Rotate by getFlagMemberOffset() bits.` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1110 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 8370 | getFlagMemberOffset | 比较/实现 | 关键函数相关（需复核） | `<< getFlagMemberOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1111 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 9018 |  | 计算 | 指针差值落入32位 | `unsigned Idx = J - 1;` | 用 uint64_t 接收指针差值 | TODO |
| 1112 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 9386 |  | 计算 | 指针差值落入32位 | `unsigned RevIdx = EE - II - 1;` | 用 uint64_t 接收指针差值 | TODO |
| 1113 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 9456 | getContext | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = CGF.getContext().getSourceManager().getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1114 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 9987 | getInt64 | 比较/实现 | 关键函数相关（需复核） | `MapperCGF.Builder.getInt64(MappableExprsHandler::getFlagMemberOffset()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1115 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 10511 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1116 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 11409 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1117 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 11608 |  | 声明/容器 | 容器承载32位位置 | `llvm::SmallVector<unsigned, 8> Sizes;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1118 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 11692 |  | 声明/局部 | 仅命名可疑需复核 | `char ISA, unsigned VecRegSize, llvm::Function *Fn, SourceLocation SLoc) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1119 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 11815 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Pos;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1120 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 11831 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Pos;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1121 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 11857 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Pos;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1122 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.cpp | 12908 |  | 序列化 | 序列化位置读写（需复核） | `const VarDecl *VD, Address VDAddr, SourceLocation Loc, bool PerformInit,` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1123 | CodeGen/CodeGenTypes | ./lib/CodeGen/CodeGenTypes.cpp | 516 | getTypeSize | 计算 | 强制收窄为32位 | `static_cast<unsigned>(Context.getTypeSize(T)));` | 改为 uint64_t / 移除收窄 | TODO |
| 1124 | CodeGen/CGVTables | ./lib/CodeGen/CGVTables.cpp | 714 | addOffsetConstant | 比较/实现 | 关键函数相关（需复核） | `return addOffsetConstant(CGM, builder, component.getVCallOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1125 | CodeGen/CGVTables | ./lib/CodeGen/CGVTables.cpp | 717 | addOffsetConstant | 比较/实现 | 关键函数相关（需复核） | `return addOffsetConstant(CGM, builder, component.getVBaseOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1126 | CodeGen/CGVTables | ./lib/CodeGen/CGVTables.cpp | 846 | getVTableOffset | 比较/实现 | 关键函数相关（需复核） | `size_t vtableStart = layout.getVTableOffset(vtableIndex);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1127 | CodeGen/CGVTables | ./lib/CodeGen/CGVTables.cpp | 867 | getBase | 比较/实现 | 关键函数相关（需复核） | `Base.getBase(), Base.getBaseOffset(), BaseIsVirtual, RD));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1128 | CodeGen/CGVTables | ./lib/CodeGen/CGVTables.cpp | 876 | mangleCXXCtorVTable | 比较/实现 | 关键函数相关（需复核） | `.mangleCXXCtorVTable(RD, Base.getBaseOffset().getQuantity(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1129 | CodeGen/CGVTables | ./lib/CodeGen/CGVTables.cpp | 1260 |  | 声明/类型别名 | 可疑别名32位 | `typedef std::pair<const CXXRecordDecl *, unsigned> AddressPoint;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1130 | CodeGen/CGVTables | ./lib/CodeGen/CGVTables.cpp | 1264 | getBase | 比较/实现 | 关键函数相关（需复核） | `AP.first.getBase(), VTLayout.getVTableOffset(AP.second.VTableIndex) +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1131 | CodeGen/CGCUDANV | ./lib/CodeGen/CGCUDANV.cpp | 433 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::ConstantInt::get(SizeTy, Offset.getQuantity()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1132 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 718 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(!AI.getDirectOffset() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1133 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3076 | classify | 比较/实现 | 关键函数相关（需复核） | `classify(AT->getElementType(), Offset, FieldLo, FieldHi, isNamedArg);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1134 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3128 | getContext | 比较/实现 | 关键函数相关（需复核） | `OffsetBase + getContext().toBits(Layout.getBaseClassOffset(Base));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1135 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3129 | classify | 比较/实现 | 关键函数相关（需复核） | `classify(I.getType(), Offset, FieldLo, FieldHi, isNamedArg);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1136 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3148 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t Offset = OffsetBase + Layout.getFieldOffset(idx);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1137 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3191 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t Offset = OffsetBase + Layout.getFieldOffset(idx);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1138 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3206 | classify | 比较/实现 | 关键函数相关（需复核） | `classify(i->getType(), Offset, FieldLo, FieldHi, isNamedArg);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1139 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3396 | toBits | 比较/实现 | 关键函数相关（需复核） | `unsigned BaseOffset = Context.toBits(Layout.getBaseClassOffset(Base));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1140 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3413 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned FieldOffset = (unsigned)Layout.getFieldOffset(idx);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1141 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3419 | if | 比较/实现 | 关键函数相关（需复核） | `if (!BitsContainNoUserData(i->getType(), FieldStart, EndBit-FieldOffset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1142 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3432 |  | 比较/实现 | 关键函数相关（需复核） | `/// getFPTypeAtOffset - Return a floating point type at the specified offset.` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1143 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3433 | getFPTypeAtOffset | 比较/实现 | 关键函数相关（需复核） | `static llvm::Type *getFPTypeAtOffset(llvm::Type *IRType, unsigned IROffset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1144 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3444 | getElementContainingOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned Elt = SL->getElementContainingOffset(IROffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1145 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3445 | getElementOffset | 比较/实现 | 关键函数相关（需复核） | `IROffset -= SL->getElementOffset(Elt);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1146 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3446 | getFPTypeAtOffset | 比较/实现 | 关键函数相关（需复核） | `return getFPTypeAtOffset(STy->getElementType(Elt), IROffset, TD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1147 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3454 | getFPTypeAtOffset | 比较/实现 | 关键函数相关（需复核） | `return getFPTypeAtOffset(EltTy, IROffset, TD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1148 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3467 | getContext | 比较/实现 | 关键函数相关（需复核） | `(unsigned)getContext().getTypeSize(SourceTy) / 8 - SourceOffset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1149 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3468 | getFPTypeAtOffset | 比较/实现 | 关键函数相关（需复核） | `llvm::Type *T0 = getFPTypeAtOffset(IRType, IROffset, TD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1150 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3476 | getFPTypeAtOffset | 比较/实现 | 关键函数相关（需复核） | `T1 = getFPTypeAtOffset(IRType, IROffset + T0Size, TD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1151 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3481 | getFPTypeAtOffset | 比较/实现 | 关键函数相关（需复核） | `T1 = getFPTypeAtOffset(IRType, IROffset + 4, TD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1152 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3495 | getFPTypeAtOffset | 比较/实现 | 关键函数相关（需复核） | `T2 = getFPTypeAtOffset(IRType, IROffset + 4, TD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1153 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3555 | getElementContainingOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned FieldIdx = SL->getElementContainingOffset(IROffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1154 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3556 | getElementOffset | 比较/实现 | 关键函数相关（需复核） | `IROffset -= SL->getElementOffset(FieldIdx);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1155 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3558 | GetINTEGERTypeAtOffset | 比较/实现 | 关键函数相关（需复核） | `return GetINTEGERTypeAtOffset(STy->getElementType(FieldIdx), IROffset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1156 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 3624 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(TD.getStructLayout(Result)->getElementOffset(1) == 8 &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1157 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 4892 | CreateInBoundsGEP | 比较/实现 | 关键函数相关（需复核） | `Builder.CreateInBoundsGEP(CGF.Int8Ty, RegAddr.getPointer(), RegOffset),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1158 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 6441 | assert | 计算 | 强制收窄为32位 | `assert(static_cast<unsigned>(BPI.SignReturnAddr) <= 2 &&` | 改为 uint64_t / 移除收窄 | TODO |
| 1159 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 6792 | if | 比较/实现 | 关键函数相关（需复核） | `if (Layout.getFieldOffset(idx) != 0)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1160 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 7876 | getPaddingType | 比较/实现 | 关键函数相关（需复核） | `llvm::Type* getPaddingType(uint64_t Align, uint64_t Offset) const;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1161 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 8013 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t Offset = Layout.getFieldOffset(idx);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1162 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 8018 | Add | 声明/局部 | 仅命名可疑需复核 | `continue; // Add ((Offset - LastOffset) / 64) args of type i64. for (unsigned j = (Offset - LastOffset) / 64; j > 0; --j)` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1163 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 8018 | Add | 计算 | 复杂指针差值收窄 | `continue; // Add ((Offset - LastOffset) / 64) args of type i64. for (unsigned j = (Offset - LastOffset) / 64; j > 0; --j)` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1164 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 8019 | Add | 计算 | 复杂指针差值收窄 | `// Add ((Offset - LastOffset) / 64) args of type i64. for (unsigned j = (Offset - LastOffset) / 64; j > 0; --j) ArgList.push_back(I64);` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1165 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 8020 | for | 计算 | 复杂指针差值收窄 | `for (unsigned j = (Offset - LastOffset) / 64; j > 0; --j) ArgList.push_back(I64);` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1166 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 8021 | for | 计算 | 复杂指针差值收窄 | `for (unsigned j = (Offset - LastOffset) / 64; j > 0; --j) ArgList.push_back(I64); // Add double type.` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1167 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 8032 | getPaddingType | 比较/实现 | 关键函数相关（需复核） | `llvm::Type *MipsABIInfo::getPaddingType(uint64_t OrigOffset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1168 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 8037 | get | 比较/实现 | 关键函数相关（需复核） | `return llvm::IntegerType::get(getVMContext(), (Offset - OrigOffset) * 8);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1169 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 8050 | alignTo | 声明/局部 | 仅命名可疑需复核 | `unsigned CurrOffset = llvm::alignTo(Offset, Align);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1170 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 8068 | getPaddingType | 比较/实现 | 关键函数相关（需复核） | `getPaddingType(OrigOffset, CurrOffset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1171 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 8089 | getPaddingType | 比较/实现 | 关键函数相关（需复核） | `nullptr, 0, IsO32 ? nullptr : getPaddingType(OrigOffset, CurrOffset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1172 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 8111 | if | 比较/实现 | 关键函数相关（需复核） | `if (FieldCnt && (FieldCnt <= 2) && !Layout.getFieldOffset(0)) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1173 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 8729 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::ConstantInt::get(CGF.Int32Ty, Offset),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1174 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 8759 | get | 比较/实现 | 关键函数相关（需复核） | `CGF.Int8Ty, Addr, llvm::ConstantInt::get(CGF.Int32Ty, Offset), "ap.next");` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1175 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 9604 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::ConstantInt::get(CGF.Int32Ty, Offset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1176 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 9615 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::ConstantInt::get(CGF.Int32Ty, Offset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1177 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 11011 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits BaseOff = Layout.getBaseClassOffset(BDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1178 | CodeGen/TargetInfo | ./lib/CodeGen/TargetInfo.cpp | 11021 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t FieldOffInBits = Layout.getFieldOffset(FD->getFieldIndex());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1179 | CodeGen/CodeGenPGO | ./lib/CodeGen/CodeGenPGO.cpp | 752 | assert | 计算 | 强制收窄为32位 | `assert(unsigned(Type) < TooBig && "Hash is invalid: too many types");` | 改为 uint64_t / 移除收窄 | TODO |
| 1180 | CodeGen/CodeGenPGO | ./lib/CodeGen/CodeGenPGO.cpp | 976 | uint32_t | 计算 | 强制收窄为32位 | `uint32_t(EnableValueProfiling));` | 改为 uint64_t / 移除收窄 | TODO |
| 1181 | CodeGen/CodeGenPGO | ./lib/CodeGen/CodeGenPGO.cpp | 1103 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<uint32_t, 16> ScaledWeights;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1182 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 230 | MeasureTokenLength | 比较/实现 | 关键函数相关（需复核） | `Lexer::MeasureTokenLength(SM.getSpellingLoc(Loc), SM, LangOpts);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1183 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 231 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return Loc.getLocWithOffset(TokLen);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1184 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 237 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return Loc.getLocWithOffset(-SM.getFileOffset(Loc));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1185 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 244 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return Loc.getLocWithOffset(SM.getFileIDSize(SM.getFileID(Loc)) -` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1186 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 245 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `SM.getFileOffset(Loc));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1187 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 257 | getBufferName | 比较/实现 | 关键函数相关（需复核） | `return SM.getBufferName(SM.getSpellingLoc(Loc)) == "<built-in>";` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1188 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 303 | if | 比较/实现 | 关键函数相关（需复核） | `if (SM.isInSystemHeader(SM.getSpellingLoc(Loc)))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1189 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 329 | getCoverageFileID | 声明/局部 | 仅命名可疑需复核 | `Optional<unsigned> getCoverageFileID(SourceLocation Loc) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1190 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 329 | getCoverageFileID | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> getCoverageFileID(SourceLocation Loc) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1191 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 340 |  | 比较/实现 | 关键函数相关（需复核） | `/// getSpellingLineNumber uses getLineNumber, which is expensive.` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1192 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 418 | if | 比较/实现 | 关键函数相关（需复核） | `if (SM.isInSystemHeader(SM.getSpellingLoc(LocStart)))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1193 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 523 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 16> FileIDMapping;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1194 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 708 | if | 比较/实现 | 关键函数相关（需复核） | `if (SM.isBeforeInTranslationUnit(StartLoc, S->getBeginLoc()))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1195 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 955 |  | 声明/容器 | 容器承载32位位置 | `llvm::SmallVector<unsigned, 8> VirtualFileMapping;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1196 | CodeGen/CoverageMappingGen | ./lib/CodeGen/CoverageMappingGen.cpp | 1001 | if | 比较/实现 | 关键函数相关（需复核） | `if (Body && SM.isInSystemHeader(SM.getSpellingLoc(getStart(Body))))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1197 | CodeGen/CGObjCRuntime | ./lib/CodeGen/CGObjCRuntime.cpp | 33 | getContext | 比较/实现 | 关键函数相关（需复核） | `return CGM.getContext().lookupFieldBitOffset(OID, nullptr, Ivar) /` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1198 | CodeGen/CGObjCRuntime | ./lib/CodeGen/CGObjCRuntime.cpp | 40 | getContext | 比较/实现 | 关键函数相关（需复核） | `return CGM.getContext().lookupFieldBitOffset(OID->getClassInterface(), OID,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1199 | CodeGen/CGObjCRuntime | ./lib/CodeGen/CGObjCRuntime.cpp | 49 | getContext | 比较/实现 | 关键函数相关（需复核） | `return CGM.getContext().lookupFieldBitOffset(ID, ID->getImplementation(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1200 | CodeGen/CGObjCRuntime | ./lib/CodeGen/CGObjCRuntime.cpp | 90 | getContext | 比较/实现 | 关键函数相关（需复核） | `CGF.CGM.getContext().lookupFieldBitOffset(OID, nullptr, Ivar);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1201 | CodeGen/CGObjCRuntime | ./lib/CodeGen/CGObjCRuntime.cpp | 105 | MakeInfo | 比较/实现 | 关键函数相关（需复核） | `CGBitFieldInfo::MakeInfo(CGF.CGM.getTypes(), Ivar, BitOffset, BitFieldSize,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1202 | CodeGen/CodeGenTBAA | ./lib/CodeGen/CodeGenTBAA.cpp | 301 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `Layout.getFieldOffset(idx) / Context.getCharWidth();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1203 | CodeGen/CodeGenTBAA | ./lib/CodeGen/CodeGenTBAA.cpp | 358 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t Offset = Layout.getBaseClassOffset(BaseRD).getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1204 | CodeGen/CodeGenTBAA | ./lib/CodeGen/CodeGenTBAA.cpp | 383 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t BitOffset = Layout.getFieldOffset(Field->getFieldIndex());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1205 | CodeGen/CGCleanup | ./lib/CodeGen/CGCleanup.cpp | 117 |  | 计算 | 指针差值落入32位 | `unsigned CurrentCapacity = EndOfBuffer - StartOfBuffer;` | 用 uint64_t 接收指针差值 | TODO |
| 1206 | CodeGen/CGCleanup | ./lib/CodeGen/CGCleanup.cpp | 118 | if | 计算 | 复杂指针差值收窄 | `} else if (static_cast<size_t>(StartOfData - StartOfBuffer) < Size) { unsigned CurrentCapacity = EndOfBuffer - StartOfBuffer; unsigned Use…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1207 | CodeGen/CGCleanup | ./lib/CodeGen/CGCleanup.cpp | 119 |  | 计算 | 复杂指针差值收窄 | `unsigned CurrentCapacity = EndOfBuffer - StartOfBuffer; unsigned UsedCapacity = CurrentCapacity - (StartOfData - StartOfBuffer);` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1208 | CodeGen/CGCleanup | ./lib/CodeGen/CGCleanup.cpp | 120 |  | 计算 | 复杂指针差值收窄 | `unsigned CurrentCapacity = EndOfBuffer - StartOfBuffer; unsigned UsedCapacity = CurrentCapacity - (StartOfData - StartOfBuffer); unsigned …` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1209 | CodeGen/CGCleanup | ./lib/CodeGen/CGCleanup.cpp | 121 |  | 计算 | 复杂指针差值收窄 | `unsigned UsedCapacity = CurrentCapacity - (StartOfData - StartOfBuffer); unsigned NewCapacity = CurrentCapacity; do {` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1210 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 176 | getContext | 比较/实现 | 关键函数相关（需复核） | `CurLoc = CGM.getContext().getSourceManager().getExpansionLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1211 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 186 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PCLoc = SM.getPresumedLoc(CurLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1212 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 389 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1213 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 468 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned CGDebugInfo::getLineNumber(SourceLocation Loc) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1214 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 468 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned CGDebugInfo::getLineNumber(SourceLocation Loc) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1215 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 472 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `return SM.getPresumedLoc(Loc).getLine();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1216 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 475 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned CGDebugInfo::getColumnNumber(SourceLocation Loc, bool Force) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1217 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 475 | getColumnNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned CGDebugInfo::getColumnNumber(SourceLocation Loc, bool Force) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1218 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 484 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(Loc.isValid() ? Loc : CurLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1219 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1096 |  | 声明/局部 | 仅命名可疑需复核 | `const unsigned Line =` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1220 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1097 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `getLineNumber(RD->getLocation().isValid() ? RD->getLocation() : CurLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1221 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1145 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> DWARFAddressSpace =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1222 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1284 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `getLineNumber(Loc),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1223 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1304 | getOrCreateFile | 比较/实现 | 关键函数相关（需复核） | `getOrCreateFile(Loc), getLineNumber(Loc),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1224 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1438 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned Line = getLineNumber(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1225 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1438 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = getLineNumber(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1226 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1445 | getContext | 比较/实现 | 关键函数相关（需复核） | `CGM.getContext().toBits(BitFieldInfo.StorageOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1227 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1468 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `const unsigned line = getLineNumber(loc.isValid() ? loc : CurLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1228 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1506 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `layout.getFieldOffset(fieldno), Align, VUnit, RecordTy, CXXDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1229 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1518 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `layout.getFieldOffset(fieldno), VUnit, RecordTy, CXXDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1230 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1534 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned LineNumber = getLineNumber(Var->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1231 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1632 | CollectRecordNormalField | 比较/实现 | 关键函数相关（需复核） | `CollectRecordNormalField(field, layout.getFieldOffset(fieldNo), tunit,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1232 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1768 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `MethodLine = getLineNumber(Method->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1233 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1956 | getVirtualBaseOffsetOffset | 比较/实现 | 关键函数相关（需复核） | `.getVirtualBaseOffsetOffset(RD, Base)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1234 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1965 | getVBPtrOffset | 比较/实现 | 关键函数相关（需复核） | `.getVBPtrOffset()` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1235 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 1970 | getContext | 比较/实现 | 关键函数相关（需复核） | `BaseOffset = CGM.getContext().toBits(RL.getBaseClassOffset(Base));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1236 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2052 | getContext | 比较/实现 | 关键函数相关（需复核） | `uint64_t fieldOffset = CGM.getContext().getFieldOffset(D);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1237 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2054 | getContext | 比较/实现 | 关键函数相关（需复核） | `CGM.getContext().toCharUnitsFromBits((int64_t)fieldOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1238 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2205 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> DWARFAddressSpace =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1239 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2302 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> DWARFAddressSpace =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1240 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2635 | getDecl | 比较/实现 | 关键函数相关（需复核） | `Ty->getDecl()->getName(), getOrCreateFile(Loc), getLineNumber(Loc),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1241 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2680 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned Line = getLineNumber(ID->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1242 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2680 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = getLineNumber(ID->getLocation());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1243 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2797 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned Line = getLineNumber(ID->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1244 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2797 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = getLineNumber(ID->getLocation());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1245 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2839 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned PLine = getLineNumber(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1246 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2839 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned PLine = getLineNumber(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1247 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2893 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned FieldLine = getLineNumber(Field->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1248 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2914 | getObjCRuntime | 比较/实现 | 关键函数相关（需复核） | `CGM.getObjCRuntime().ComputeBitfieldBitOffset(CGM, ID, Field);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1249 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2920 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `FieldOffset = RL.getFieldOffset(FieldNo);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1250 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2938 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned PLine = getLineNumber(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1251 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 2938 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned PLine = getLineNumber(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1252 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3205 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned Line = getLineNumber(ED->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1253 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3205 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = getLineNumber(ED->getLocation());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1254 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3242 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned Line = getLineNumber(ED->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1255 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3242 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = getLineNumber(ED->getLocation());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1256 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3253 | isInvalid | 比较/实现 | 关键函数相关（需复核） | `unsigned Line = LineLoc.isInvalid() ? 0 : getLineNumber(LineLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1257 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3253 | isInvalid | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = LineLoc.isInvalid() ? 0 : getLineNumber(LineLoc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1258 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3261 | isInvalid | 比较/实现 | 关键函数相关（需复核） | `unsigned Line = LineLoc.isInvalid() ? 0 : getLineNumber(LineLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1259 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3261 | isInvalid | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = LineLoc.isInvalid() ? 0 : getLineNumber(LineLoc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1260 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3546 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1261 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3549 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `Line = getLineNumber(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1262 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3724 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `LineNo = getLineNumber(VD->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1263 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3782 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned Line = getLineNumber(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1264 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3782 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = getLineNumber(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1265 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3835 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned Line = getLineNumber(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1266 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 3835 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = getLineNumber(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1267 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4119 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `const unsigned LineNo = getLineNumber(Loc.isValid() ? Loc : CurLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1268 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4119 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `const unsigned LineNo = getLineNumber(Loc.isValid() ? Loc : CurLoc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1269 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4120 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned ScopeLine = getLineNumber(ScopeLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1270 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4192 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned LineNo = getLineNumber(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1271 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4192 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned LineNo = getLineNumber(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1272 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4270 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::DILocation::get(CGM.getLLVMContext(), getLineNumber(CurLoc),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1273 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4271 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `getColumnNumber(CurLoc), Scope, CurInlinedAt));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1274 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4279 | getOrCreateFile | 比较/实现 | 关键函数相关（需复核） | `cast<llvm::DIScope>(Back), getOrCreateFile(CurLoc), getLineNumber(CurLoc),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1275 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4280 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `getColumnNumber(CurLoc)));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1276 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4285 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> DWARFAddressSpace =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1277 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4303 | getLLVMContext | 比较/实现 | 关键函数相关（需复核） | `CGM.getLLVMContext(), getLineNumber(Loc), getColumnNumber(Loc),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1278 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4384 | getContext | 比较/实现 | 关键函数相关（需复核） | `CGM.getContext().toCharUnitsFromBits(FieldOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1279 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4403 | getName | 比较/实现 | 关键函数相关（需复核） | `Unit, VD->getName(), Unit, 0, FieldSize, FieldAlign, FieldOffset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1280 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4416 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> ArgNo,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1281 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4443 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1282 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4444 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Column = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1283 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4446 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `Line = getLineNumber(VD->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1284 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4447 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `Column = getColumnNumber(VD->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1285 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4487 | getContext | 比较/实现 | 关键函数相关（需复核） | `offset = CGM.getContext().toCharUnitsFromBits(XOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1286 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4596 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> ArgNo,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1287 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4631 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned Line = getLineNumber(BD->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1288 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4631 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = getLineNumber(BD->getLocation());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1289 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4632 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned Column = getColumnNumber(BD->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1290 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4632 | getColumnNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned Column = getColumnNumber(BD->getLocation());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1291 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4647 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `const uint64_t fieldOffset = layout.getFieldOffset(fieldIndex);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1292 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4652 | getContext | 比较/实现 | 关键函数相关（需复核） | `CGM.getContext().toCharUnitsFromBits(fieldOffset).getQuantity());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1293 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4705 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned Line = getLineNumber(D->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1294 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4705 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = getLineNumber(D->getLocation());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1295 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4706 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned Column = getColumnNumber(D->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1296 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4706 | getColumnNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned Column = getColumnNumber(D->getLocation());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1297 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4757 |  | 声明/局部 | 仅命名可疑需复核 | `const unsigned Line =` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1298 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4758 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `getLineNumber(VD->getLocation().isValid() ? VD->getLocation() : CurLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1299 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4759 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned Column = getColumnNumber(VD->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1300 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4759 | getColumnNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned Column = getColumnNumber(VD->getLocation());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1301 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4765 | getElementOffset | 比较/实现 | 关键函数相关（需复核） | `->getElementOffset(blockInfo.getCapture(VD).getIndex()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1302 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4781 | getContext | 比较/实现 | 关键函数相关（需复核） | `offset = CGM.getContext().toCharUnitsFromBits(XOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1303 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4868 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned line = getLineNumber(loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1304 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 4869 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned column = getColumnNumber(loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1305 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 5400 | StringRef | 比较/实现 | 关键函数相关（需复核） | `DContext, Name, StringRef(), Unit, getLineNumber(VD->getLocation()), Ty,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1306 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 5419 | StringRef | 比较/实现 | 关键函数相关（需复核） | `DContext, Name, StringRef(), Unit, getLineNumber(D->getLocation()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1307 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 5459 | getOrCreateFile | 比较/实现 | 关键函数相关（需复核） | `DContext, DI, getOrCreateFile(Loc), getLineNumber(Loc), D->getName());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1308 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 5468 | getContext | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = CGM.getContext().getSourceManager().getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1309 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 5476 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `getLineNumber(Loc), getOrCreateType(S->getType(), File), true);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1310 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 5498 | getOrCreateNamespace | 比较/实现 | 关键函数相关（需复核） | `getOrCreateNamespace(NSDecl), getOrCreateFile(Loc), getLineNumber(Loc));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1311 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 5508 | getOrCreateFile | 比较/实现 | 关键函数相关（需复核） | `getOrCreateFile(Loc), getLineNumber(Loc));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1312 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 5557 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `getLineNumber(Loc));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1313 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 5576 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `getLineNumber(Loc), NA.getName());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1314 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 5581 | getOrCreateFile | 比较/实现 | 关键函数相关（需复核） | `getOrCreateFile(Loc), getLineNumber(Loc), NA.getName());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1315 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 5702 | get | 比较/实现 | 关键函数相关（需复核） | `return llvm::DILocation::get(CGM.getLLVMContext(), getLineNumber(Loc),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1316 | CodeGen/CGDebugInfo | ./lib/CodeGen/CGDebugInfo.cpp | 5703 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `getColumnNumber(Loc), Scope);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1317 | CodeGen/CGAtomic | ./lib/CodeGen/CGAtomic.cpp | 751 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<unsigned, llvm::BasicBlock *> BB;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1318 | CodeGen/CGVTT | ./lib/CodeGen/CGVTT.cpp | 27 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(VTable.getBaseOffset().isZero() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1319 | CodeGen/CGVTT | ./lib/CodeGen/CGVTT.cpp | 62 |  | 序列化 | 序列化位置读写（需复核） | `VTableLayout::AddressPointLocation AddressPoint;` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1320 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.h | 394 | emitThreadIDAddress | 序列化 | 序列化位置读写（需复核） | `virtual Address emitThreadIDAddress(CodeGenFunction &CGF, SourceLocation Loc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1321 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.h | 714 |  | 声明/容器 | 容器承载32位位置 | `typedef llvm::DenseMap<unsigned, OffloadEntryInfoTargetRegion>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1322 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.h | 718 |  | 声明/容器 | 容器承载32位位置 | `typedef llvm::DenseMap<unsigned, OffloadEntriesTargetRegionPerParentName>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1323 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.h | 720 |  | 声明/容器 | 容器承载32位位置 | `typedef llvm::DenseMap<unsigned, OffloadEntriesTargetRegionPerFile>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1324 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.h | 1544 | getTaskReductionItem | 序列化 | 序列化位置读写（需复核） | `virtual Address getTaskReductionItem(CodeGenFunction &CGF, SourceLocation Loc,` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1325 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.h | 2178 |  | 序列化 | 序列化位置读写（需复核） | `Address VDAddr, SourceLocation Loc) override;` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1326 | CodeGen/CGOpenMPRuntime | ./lib/CodeGen/CGOpenMPRuntime.h | 2385 | getTaskReductionItem | 序列化 | 序列化位置读写（需复核） | `Address getTaskReductionItem(CodeGenFunction &CGF, SourceLocation Loc,` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1327 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 63 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `.getFieldOffset(FD->getFieldIndex())` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1328 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 67 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits getFieldOffset(const FieldDecl *FD) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1329 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 151 | getVolatileOffsetStr | 比较/实现 | 关键函数相关（需复核） | `std::string getVolatileOffsetStr(bool IsVolatile, CharUnits Offset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1330 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 164 | asDerived | 比较/实现 | 关键函数相关（需复核） | `CharUnits FieldOffset = CurStructOffset + asDerived().getFieldOffset(FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1331 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 165 | appendStr | 比较/实现 | 关键函数相关（需复核） | `appendStr(getVolatileOffsetStr(FT.isVolatileQualified(), FieldOffset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1332 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 171 | asDerived | 比较/实现 | 关键函数相关（需复核） | `CharUnits FieldOffset = CurStructOffset + asDerived().getFieldOffset(FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1333 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 172 | appendStr | 比较/实现 | 关键函数相关（需复核） | `appendStr(getVolatileOffsetStr(FT.isVolatileQualified(), FieldOffset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1334 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 177 | asDerived | 比较/实现 | 关键函数相关（需复核） | `CharUnits FieldOffset = CurStructOffset + asDerived().getFieldOffset(FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1335 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 191 | asDerived | 比较/实现 | 关键函数相关（需复核） | `CharUnits FieldOffset = CurStructOffset + asDerived().getFieldOffset(FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1336 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 340 | asDerived | 比较/实现 | 关键函数相关（需复核） | `FT, CurStructOffset + asDerived().getFieldOffset(FD), Addrs);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1337 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 360 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `StartAddrs[I] = getAddrWithOffset(Addrs[I], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1338 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 404 | getAlignment | 比较/实现 | 关键函数相关（需复核） | `StartAddrs[I].getAlignment().alignmentAtOffset(EltSize));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1339 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 415 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `NewAddrs[I] = getAddrWithOffset(NewAddrs[I], EltSize);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1340 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 425 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Address getAddrWithOffset(Address Addr, CharUnits Offset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1341 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 434 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Address getAddrWithOffset(Address Addr, CharUnits StructFieldOffset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1342 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 436 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `return getAddrWithOffset(Addr, StructFieldOffset +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1343 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 437 | asDerived | 比较/实现 | 关键函数相关（需复核） | `asDerived().getFieldOffset(FD));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1344 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 521 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Address DstAddr = this->getAddrWithOffset(Addrs[DstIdx], this->Start);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1345 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 522 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Address SrcAddr = this->getAddrWithOffset(Addrs[SrcIdx], this->Start);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1346 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 557 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Address DstAddr = this->getAddrWithOffset(Addrs[DstIdx], Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1347 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 561 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Address SrcAddr = this->getAddrWithOffset(Addrs[SrcIdx], Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1348 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 600 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `*CGF, getAddrWithOffset(Addrs[DstIdx], CurStructOffset, FD), QT);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1349 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 606 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `*CGF, getAddrWithOffset(Addrs[DstIdx], CurStructOffset, FD), QT);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1350 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 612 | MakeAddrLValue | 比较/实现 | 关键函数相关（需复核） | `CGF->MakeAddrLValue(getAddrWithOffset(Addrs[DstIdx], Offset), FT));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1351 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 641 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `getAddrWithOffset(Addrs[DstIdx], CurStructOffset, FD), QT);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1352 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 647 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `getAddrWithOffset(Addrs[DstIdx], CurStructOffset, FD), QT);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1353 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 667 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Address DstAddr = getAddrWithOffset(Addrs[DstIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1354 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 676 | MakeAddrLValue | 比较/实现 | 关键函数相关（需复核） | `CGF->MakeAddrLValue(getAddrWithOffset(Addrs[DstIdx], Offset), FT));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1355 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 686 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[DstIdx] = getAddrWithOffset(Addrs[DstIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1356 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 687 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[SrcIdx] = getAddrWithOffset(Addrs[SrcIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1357 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 689 | isVolatileQualified | 序列化 | 序列化位置读写（需复核） | `Addrs[SrcIdx], QT.isVolatileQualified(), QT, SourceLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1358 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 696 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[DstIdx] = getAddrWithOffset(Addrs[DstIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1359 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 697 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[SrcIdx] = getAddrWithOffset(Addrs[SrcIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1360 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 703 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[DstIdx] = getAddrWithOffset(Addrs[DstIdx], Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1361 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 704 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[SrcIdx] = getAddrWithOffset(Addrs[SrcIdx], Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1362 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 716 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[DstIdx] = getAddrWithOffset(Addrs[DstIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1363 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 717 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[SrcIdx] = getAddrWithOffset(Addrs[SrcIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1364 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 728 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[DstIdx] = getAddrWithOffset(Addrs[DstIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1365 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 729 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[SrcIdx] = getAddrWithOffset(Addrs[SrcIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1366 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 735 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[DstIdx] = getAddrWithOffset(Addrs[DstIdx], Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1367 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 736 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[SrcIdx] = getAddrWithOffset(Addrs[SrcIdx], Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1368 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 748 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[DstIdx] = getAddrWithOffset(Addrs[DstIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1369 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 749 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[SrcIdx] = getAddrWithOffset(Addrs[SrcIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1370 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 751 | isVolatileQualified | 序列化 | 序列化位置读写（需复核） | `Addrs[SrcIdx], QT.isVolatileQualified(), QT, SourceLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1371 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 758 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[DstIdx] = getAddrWithOffset(Addrs[DstIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1372 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 759 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[SrcIdx] = getAddrWithOffset(Addrs[SrcIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1373 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 765 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[DstIdx] = getAddrWithOffset(Addrs[DstIdx], Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1374 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 766 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[SrcIdx] = getAddrWithOffset(Addrs[SrcIdx], Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1375 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 779 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[DstIdx] = getAddrWithOffset(Addrs[DstIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1376 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 780 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[SrcIdx] = getAddrWithOffset(Addrs[SrcIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1377 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 794 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[DstIdx] = getAddrWithOffset(Addrs[DstIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1378 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 795 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[SrcIdx] = getAddrWithOffset(Addrs[SrcIdx], CurStructOffset, FD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1379 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 801 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[DstIdx] = getAddrWithOffset(Addrs[DstIdx], Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1380 | CodeGen/CGNonTrivialStruct | ./lib/CodeGen/CGNonTrivialStruct.cpp | 802 | getAddrWithOffset | 比较/实现 | 关键函数相关（需复核） | `Addrs[SrcIdx] = getAddrWithOffset(Addrs[SrcIdx], Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1381 | CodeGen/ItaniumCXXABI | ./lib/CodeGen/ItaniumCXXABI.cpp | 1028 | get | 比较/实现 | 关键函数相关（需复核） | `MemPtr[0] = llvm::ConstantInt::get(CGM.PtrDiffTy, VTableOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1382 | CodeGen/ItaniumCXXABI | ./lib/CodeGen/ItaniumCXXABI.cpp | 1036 | get | 比较/实现 | 关键函数相关（需复核） | `MemPtr[0] = llvm::ConstantInt::get(CGM.PtrDiffTy, VTableOffset + 1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1383 | CodeGen/ItaniumCXXABI | ./lib/CodeGen/ItaniumCXXABI.cpp | 1076 | getContext | 比较/实现 | 关键函数相关（需复核） | `getContext().toCharUnitsFromBits(getContext().getFieldOffset(MPD));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1384 | CodeGen/ItaniumCXXABI | ./lib/CodeGen/ItaniumCXXABI.cpp | 1388 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Offset += L.getBaseClassOffset(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1385 | CodeGen/ItaniumCXXABI | ./lib/CodeGen/ItaniumCXXABI.cpp | 1554 | getItaniumVTableContext | 比较/实现 | 关键函数相关（需复核） | `CGM.getItaniumVTableContext().getVirtualBaseOffsetOffset(ClassDecl,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1386 | CodeGen/ItaniumCXXABI | ./lib/CodeGen/ItaniumCXXABI.cpp | 1802 |  | 序列化 | 序列化位置读写（需复核） | `VTableLayout::AddressPointLocation AddressPoint =` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1387 | CodeGen/ItaniumCXXABI | ./lib/CodeGen/ItaniumCXXABI.cpp | 2113 | getElementType | 比较/实现 | 关键函数相关（需复核） | `V.getElementType(), V.getPointer(), Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1388 | CodeGen/ItaniumCXXABI | ./lib/CodeGen/ItaniumCXXABI.cpp | 4055 | getItaniumVTableContext | 比较/实现 | 关键函数相关（需复核） | `CGM.getItaniumVTableContext().getVirtualBaseOffsetOffset(RD, BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1389 | CodeGen/ItaniumCXXABI | ./lib/CodeGen/ItaniumCXXABI.cpp | 4058 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Offset = Layout.getBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1390 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 2310 |  | 比较/实现 | 关键函数相关（需复核） | `const GetOffsetFn &getOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1391 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 2323 | dump | 声明/容器 | 容器承载32位位置 | `static void dump(ArrayRef<unsigned char> buffer) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1392 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 2350 |  | 声明/容器 | 容器承载32位位置 | `llvm::SmallVector<unsigned char, 32> buffer;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1393 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 2382 | getOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits fieldOffset = capture.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1394 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 2477 | getContext | 比较/实现 | 关键函数相关（需复核） | `CGM.getContext().toCharUnitsFromBits(RL.getFieldOffset(i));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1395 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 2706 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned char, 16> Layout;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1396 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 2912 | fromQuantity | 比较/实现 | 关键函数相关（需复核） | `CharUnits::fromQuantity(layout->getElementOffset(capture.getIndex()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1397 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 3358 | unsigned | 计算 | 强制收窄为32位 | `Methods[unsigned(MD->isClassMethod())].push_back(MD);` | 改为 uint64_t / 移除收窄 | TODO |
| 1398 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 3541 | unsigned | 计算 | 强制收窄为32位 | `Methods[unsigned(MD->isClassMethod())].push_back(MD);` | 改为 uint64_t / 移除收窄 | TODO |
| 1399 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 5317 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `auto offsetInBits = recLayout->getFieldOffset(field->getFieldIndex());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1400 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 5325 |  | 比较/实现 | 关键函数相关（需复核） | `const GetOffsetFn &getOffset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1401 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 5335 | getOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits fieldOffset = aggregateOffset + getOffset(field);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1402 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 5618 |  | 声明/容器 | 容器承载32位位置 | `llvm::SmallVector<unsigned char, 4> buffer;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1403 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 6462 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `InstanceStart = RL.getFieldOffset(0) / CGM.getContext().getCharWidth();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1404 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 6892 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned long int Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1405 | CodeGen/CGObjCMac | ./lib/CodeGen/CGObjCMac.cpp | 6895 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::ConstantInt::get(ObjCTypes.IvarOffsetVarTy, Offset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1406 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 177 | getFieldBitOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t getFieldBitOffset(const FieldDecl *FD) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1407 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 178 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `return Layout.getFieldOffset(FD->getFieldIndex());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1408 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 242 | getFieldBitOffset | 计算 | 强制收窄为32位 | `Info.Offset = (unsigned)(getFieldBitOffset(FD) - Context.toBits(StartOffset));` | 改为 uint64_t / 移除收窄 | TODO |
| 1409 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 242 | getFieldBitOffset | 比较/实现 | 关键函数相关（需复核） | `Info.Offset = (unsigned)(getFieldBitOffset(FD) - Context.toBits(StartOffset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1410 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 383 | bitsToCharUnits | 比较/实现 | 关键函数相关（需复核） | `bitsToCharUnits(getFieldBitOffset(*Field)), MemberInfo::Field,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1411 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 407 | getFieldBitOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t BitOffset = getFieldBitOffset(*Field);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1412 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 466 | getFieldBitOffset | 比较/实现 | 关键函数相关（需复核） | `StartBitOffset = getFieldBitOffset(*Field);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1413 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 489 | getFieldBitOffset | 比较/实现 | 关键函数相关（需复核） | `Tail == getFieldBitOffset(*Field)) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1414 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 496 | getIntNType | 比较/实现 | 关键函数相关（需复核） | `llvm::Type *Type = getIntNType(Tail - StartBitOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1415 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 526 | push_back | 比较/实现 | 关键函数相关（需复核） | `Members.push_back(MemberInfo(Layout.getBaseClassOffset(BaseDecl),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1416 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 576 |  | 声明/局部 | 仅命名可疑需复核 | `continue; // Offset within the container. unsigned Offset = AbsoluteOffset & (StorageSize - 1);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1417 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 576 |  | 计算 | 复杂指针差值收窄 | `continue; // Offset within the container. unsigned Offset = AbsoluteOffset & (StorageSize - 1);` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1418 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 577 |  | 计算 | 复杂指针差值收窄 | `// Offset within the container. unsigned Offset = AbsoluteOffset & (StorageSize - 1); // Bail out if an aligned load of the container cann…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1419 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 578 |  | 计算 | 复杂指针差值收窄 | `unsigned Offset = AbsoluteOffset & (StorageSize - 1); // Bail out if an aligned load of the container cannot cover the entire // bit-field…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1420 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 609 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `Layout.getFieldOffset(F->getFieldIndex()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1421 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 654 | push_back | 比较/实现 | 关键函数相关（需复核） | `Members.push_back(MemberInfo(Layout.getVBPtrOffset(), MemberInfo::VBPtr,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1422 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 674 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Layout.getVBaseClassOffset(BaseDecl));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1423 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 682 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits Offset = Layout.getVBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1424 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 963 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(AST_RL.getFieldOffset(i) == SL->getElementOffsetInBits(FieldNo) &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1425 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 984 | assert | 计算 | 强制收窄为32位 | `assert(static_cast<unsigned>(Info.Offset + Info.Size) ==` | 改为 uint64_t / 移除收窄 | TODO |
| 1426 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 984 | assert | 声明/局部 | 仅命名可疑需复核 | `assert(static_cast<unsigned>(Info.Offset + Info.Size) ==` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1427 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 1000 | assert | 计算 | 强制收窄为32位 | `assert(static_cast<unsigned>(Info.Offset) + Info.Size <= Info.StorageSize &&` | 改为 uint64_t / 移除收窄 | TODO |
| 1428 | CodeGen/CGRecordLayoutBuilder | ./lib/CodeGen/CGRecordLayoutBuilder.cpp | 1000 | assert | 声明/局部 | 仅命名可疑需复核 | `assert(static_cast<unsigned>(Info.Offset) + Info.Size <= Info.StorageSize &&` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1429 | CodeGen/CGCoroutine | ./lib/CodeGen/CGCoroutine.cpp | 125 | Prefix | 计算 | 强制收窄为32位 | `SmallString<32> Prefix(AwaitKindStr[static_cast<unsigned>(Kind)]);` | 改为 uint64_t / 移除收窄 | TODO |
| 1430 | CodeGen/CodeGenAction | ./lib/CodeGen/CodeGenAction.cpp | 423 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned &Line, unsigned &Column) const;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1431 | CodeGen/CodeGenAction | ./lib/CodeGen/CodeGenAction.cpp | 490 | getLoc | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = D.getLoc().getPointer() - LBuf->getBufferStart();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1432 | CodeGen/CodeGenAction | ./lib/CodeGen/CodeGenAction.cpp | 492 | getLocForStartOfFile | 比较/实现 | 关键函数相关（需复核） | `CSM.getLocForStartOfFile(FID).getLocWithOffset(Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1433 | CodeGen/CodeGenAction | ./lib/CodeGen/CodeGenAction.cpp | 574 | for | 声明/局部 | 仅命名可疑需复核 | `for (const std::pair<unsigned, unsigned> &Range : D.getRanges()) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1434 | CodeGen/CodeGenAction | ./lib/CodeGen/CodeGenAction.cpp | 575 | getColumnNo | 声明/局部 | 仅命名可疑需复核 | `unsigned Column = D.getColumnNo();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1435 | CodeGen/CodeGenAction | ./lib/CodeGen/CodeGenAction.cpp | 576 | SourceRange | 比较/实现 | 关键函数相关（需复核） | `B << SourceRange(Loc.getLocWithOffset(Range.first - Column),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1436 | CodeGen/CodeGenAction | ./lib/CodeGen/CodeGenAction.cpp | 577 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc.getLocWithOffset(Range.second - Column));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1437 | CodeGen/CodeGenAction | ./lib/CodeGen/CodeGenAction.cpp | 628 | getStackSize | 计算 | 强制收窄为32位 | `<< static_cast<uint32_t>(D.getStackSize())` | 改为 uint64_t / 移除收窄 | TODO |
| 1438 | CodeGen/CodeGenAction | ./lib/CodeGen/CodeGenAction.cpp | 629 | getStackLimit | 计算 | 强制收窄为32位 | `<< static_cast<uint32_t>(D.getStackLimit())` | 改为 uint64_t / 移除收窄 | TODO |
| 1439 | CodeGen/CodeGenAction | ./lib/CodeGen/CodeGenAction.cpp | 636 |  | 声明/局部 | 仅命名可疑需复核 | `StringRef &Filename, unsigned &Line, unsigned &Column) const {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1440 | CodeGen/CodeGenAction | ./lib/CodeGen/CodeGenAction.cpp | 693 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line, Column;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1441 | CodeGen/CodeGenAction | ./lib/CodeGen/CodeGenAction.cpp | 730 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line, Column;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1442 | CodeGen/CodeGenAction | ./lib/CodeGen/CodeGenAction.cpp | 841 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line, Column;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1443 | CodeGen/CGOpenMPRuntimeGPU | ./lib/CodeGen/CGOpenMPRuntimeGPU.cpp | 549 | Log2_32 | 计算 | 复杂指针差值收窄 | `unsigned LaneIDBits = llvm::Log2_32(CGF.getTarget().getGridValue().GV_Warp_Size); unsigned LaneIDMask = ~0u >> (32u - LaneIDBits);` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1444 | CodeGen/CGOpenMPRuntimeGPU | ./lib/CodeGen/CGOpenMPRuntimeGPU.cpp | 550 | Log2_32 | 计算 | 复杂指针差值收窄 | `llvm::Log2_32(CGF.getTarget().getGridValue().GV_Warp_Size); unsigned LaneIDMask = ~0u >> (32u - LaneIDBits); auto &RT = static_cast<CGOpen…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1445 | CodeGen/CGOpenMPRuntimeGPU | ./lib/CodeGen/CGOpenMPRuntimeGPU.cpp | 551 | getOpenMPRuntime | 计算 | 复杂指针差值收窄 | `unsigned LaneIDMask = ~0u >> (32u - LaneIDBits); auto &RT = static_cast<CGOpenMPRuntimeGPU &>(CGF.CGM.getOpenMPRuntime()); return Bld.Crea…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1446 | CodeGen/CGOpenMPRuntimeGPU | ./lib/CodeGen/CGOpenMPRuntimeGPU.cpp | 1955 | CreateNUWAdd | 比较/实现 | 关键函数相关（需复核） | `Bld.CreateNUWAdd(DestBase.getPointer(), CurrentOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1447 | CodeGen/CGOpenMPRuntimeGPU | ./lib/CodeGen/CGOpenMPRuntimeGPU.cpp | 1970 | CreateNUWAdd | 比较/实现 | 关键函数相关（需复核） | `Bld.CreateNUWAdd(SrcBase.getPointer(), CurrentOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1448 | CodeGen/CGOpenMPRuntimeGPU | ./lib/CodeGen/CGOpenMPRuntimeGPU.cpp | 2442 | SourceLocation | 序列化 | 序列化位置读写（需复核） | `AddrLaneIDArg, /*Volatile=*/false, C.ShortTy, SourceLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1449 | CodeGen/CGOpenMPRuntimeGPU | ./lib/CodeGen/CGOpenMPRuntimeGPU.cpp | 2446 | SourceLocation | 序列化 | 序列化位置读写（需复核） | `AddrRemoteLaneOffsetArg, /*Volatile=*/false, C.ShortTy, SourceLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1450 | CodeGen/CGOpenMPRuntimeGPU | ./lib/CodeGen/CGOpenMPRuntimeGPU.cpp | 2450 | SourceLocation | 序列化 | 序列化位置读写（需复核） | `AddrAlgoVerArg, /*Volatile=*/false, C.ShortTy, SourceLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1451 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 188 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Offset += Layout.getBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1452 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 210 | get | 比较/实现 | 关键函数相关（需复核） | `return llvm::ConstantInt::get(PtrDiffTy, Offset.getQuantity());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1453 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 230 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Offset = Layout.getVBaseClassOffset(Base);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1454 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 232 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Offset = Layout.getBaseClassOffset(Base);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1455 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 264 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::ConstantInt::get(OffsetType, nonVirtualOffset.getQuantity());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1456 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 324 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits vBaseOffset = layout.getVBaseClassOffset(VBase);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1457 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 375 | getCXXABI | 比较/实现 | 关键函数相关（需复核） | `CGM.getCXXABI().GetVirtualBaseClassOffset(*this, Value, Derived, VBase);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1458 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 486 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Layout.getVBaseClassOffset(Base) :` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1459 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 487 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Layout.getBaseClassOffset(Base);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1460 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 490 | getVTables | 比较/实现 | 关键函数相关（需复核） | `CGM.getVTables().getSubVTTIndex(RD, BaseSubobject(Base, BaseOffset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1461 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 795 | toCharUnitsFromBits | 比较/实现 | 关键函数相关（需复核） | `Context.toCharUnitsFromBits(Info.getFieldOffset(i)).getQuantity();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1462 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 832 | CreateAdd | 比较/实现 | 关键函数相关（需复核） | `F, {Builder.CreateAdd(ThisPtr, Builder.getIntN(PtrSize, EndOffset)),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1463 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 942 | getMemcpySize | 比较/实现 | 关键函数相关（需复核） | `CharUnits getMemcpySize(uint64_t FirstByteOffset) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1464 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 969 | getContext | 比较/实现 | 关键函数相关（需复核） | `FirstByteOffset = CGF.getContext().toBits(BFInfo.StorageOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1465 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 974 | getMemcpySize | 比较/实现 | 关键函数相关（需复核） | `CharUnits MemcpySize = getMemcpySize(FirstByteOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1466 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 1008 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `FirstFieldOffset = RecLayout.getFieldOffset(F->getFieldIndex());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1467 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 1025 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t FOffset = RecLayout.getFieldOffset(F->getFieldIndex());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1468 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 1718 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `Layout.getFieldOffset(StartIndex) + Context.getCharWidth() - 1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1469 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 1732 | toCharUnitsFromBits | 比较/实现 | 关键函数相关（需复核） | `Context.toCharUnitsFromBits(Layout.getFieldOffset(EndIndex));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1470 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 1771 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> StartIndex;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1471 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 2330 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits NonVirtualOffset = Vptr.Base.getBaseOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1472 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 2523 | getCXXABI | 比较/实现 | 关键函数相关（需复核） | `VirtualOffset = CGM.getCXXABI().GetVirtualBaseClassOffset(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1473 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 2528 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `NonVirtualOffset = Vptr.Base.getBaseOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1474 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 2609 | getVBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `BaseOffset = Layout.getVBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1475 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 2615 | getBaseOffset | 比较/实现 | 关键函数相关（需复核） | `BaseOffset = Base.getBaseOffset() + Layout.getBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1476 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 2617 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `OffsetFromNearestVBase + Layout.getBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1477 | CodeGen/CGClass | ./lib/CodeGen/CGClass.cpp | 2880 | get | 比较/实现 | 关键函数相关（需复核） | `{CastedVTable, llvm::ConstantInt::get(Int32Ty, VTableByteOffset),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1478 | CodeGen/CGCXX | ./lib/CodeGen/CGCXX.cpp | 102 | if | 比较/实现 | 关键函数相关（需复核） | `if (!ClassLayout.getBaseClassOffset(UniqueBase).isZero())` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1479 | CodeGen/CGCXX | ./lib/CodeGen/CGCXX.cpp | 260 |  | 序列化 | 序列化位置读写（需复核） | `VTableLayout::AddressPointLocation AddressPoint =` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1480 | CodeGen/CGCXX | ./lib/CodeGen/CGCXX.cpp | 262 | getVTableOffset | 比较/实现 | 关键函数相关（需复核） | `VTableIndex += VTLayout.getVTableOffset(AddressPoint.VTableIndex) +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1481 | CodeGen/CodeGenModule | ./lib/CodeGen/CodeGenModule.cpp | 928 | if | 比较/实现 | 关键函数相关（需复核） | `if (getCodeGenOpts().StackProtectorGuardOffset != INT_MAX)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1482 | CodeGen/CodeGenModule | ./lib/CodeGen/CodeGenModule.cpp | 929 | getModule | 比较/实现 | 关键函数相关（需复核） | `getModule().setStackProtectorGuardOffset(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1483 | CodeGen/CodeGenModule | ./lib/CodeGen/CodeGenModule.cpp | 930 | getCodeGenOpts | 比较/实现 | 关键函数相关（需复核） | `getCodeGenOpts().StackProtectorGuardOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1484 | CodeGen/CodeGenModule | ./lib/CodeGen/CodeGenModule.cpp | 2735 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1485 | CodeGen/CodeGenModule | ./lib/CodeGen/CodeGenModule.cpp | 2743 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(L);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1486 | CodeGen/CodeGenModule | ./lib/CodeGen/CodeGenModule.cpp | 5461 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(CFRuntime) >=` | 改为 uint64_t / 移除收窄 | TODO |
| 1487 | CodeGen/CodeGenModule | ./lib/CodeGen/CodeGenModule.cpp | 5462 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(LangOptions::CoreFoundationABI::Swift);` | 改为 uint64_t / 移除收窄 | TODO |
| 1488 | CodeGen/CodeGenModule | ./lib/CodeGen/CodeGenModule.cpp | 5704 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<uint32_t, 32> Elements;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1489 | CodeGen/CodeGenModule | ./lib/CodeGen/CodeGenModule.cpp | 6954 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(D->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1490 | CodeGen/CodeGenModule | ./lib/CodeGen/CodeGenModule.cpp | 6967 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PLoc = SM.getPresumedLoc(D->getLocation(), /*UseLineDirectives=*/false);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1491 | CodeGen/CGExprAgg | ./lib/CodeGen/CGExprAgg.cpp | 2026 | if | 比较/实现 | 关键函数相关（需复核） | `if (Layout.getFieldOffset(FD->getFieldIndex()) +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1492 | CodeGen/CGExprAgg | ./lib/CodeGen/CGExprAgg.cpp | 2047 | if | 比较/实现 | 关键函数相关（需复核） | `if (Layout.getBaseClassOffset(BaseRD) +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1493 | CodeGen/CGBlocks | ./lib/CodeGen/CGBlocks.h | 182 | getOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits getOffset() const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1494 | CodeGen/CGStmt | ./lib/CodeGen/CGStmt.cpp | 1431 | getZExtValue | 声明/局部 | 仅命名可疑需复核 | `unsigned NCases = Range.getZExtValue() + 1;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1495 | CodeGen/CGStmt | ./lib/CodeGen/CGStmt.cpp | 2250 | getTarget | 比较/实现 | 关键函数相关（需复核） | `i + 1, SM, LangOpts, CGF.getTarget(), &StartToken, &ByteOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1496 | CodeGen/CGBlocks | ./lib/CodeGen/CGBlocks.cpp | 87 | getOffset | 比较/实现 | 关键函数相关（需复核） | `return Capture->getOffset() < Other.Capture->getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1497 | CodeGen/CGBlocks | ./lib/CodeGen/CGBlocks.cpp | 123 | to_string | 比较/实现 | 关键函数相关（需复核） | `Name += llvm::to_string(Cap.getOffset().getQuantity());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1498 | CodeGen/CGBlocks | ./lib/CodeGen/CGBlocks.cpp | 519 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset =` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1499 | CodeGen/CGBlocks | ./lib/CodeGen/CGBlocks.cpp | 1787 | alignmentAtOffset | 比较/实现 | 关键函数相关（需复核） | `CharUnits Alignment = BlockAlignment.alignmentAtOffset(Cap.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1500 | CodeGen/CGBlocks | ./lib/CodeGen/CGBlocks.cpp | 1829 | to_string | 比较/实现 | 关键函数相关（需复核） | `Name += llvm::to_string(Cap.getOffset().getQuantity());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1501 | CodeGen/CGBlocks | ./lib/CodeGen/CGBlocks.cpp | 2673 | get | 比较/实现 | 关键函数相关（需复核） | `llvm::ArrayType::get(Int8Ty, (varOffset - size).getQuantity());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1502 | ARCMigrate/TransEmptyStatementsAndDealloc | ./lib/ARCMigrate/TransEmptyStatementsAndDealloc.cpp | 49 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `AfterMacroLoc = I->getLocWithOffset(getARCMTMacroName().size());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1503 | ARCMigrate/TransAutoreleasePool | ./lib/ARCMigrate/TransAutoreleasePool.cpp | 290 | if | 比较/实现 | 关键函数相关（需复核） | `if (SM.isBeforeInTranslationUnit(loc, ScopeRange.getBegin()))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1504 | ARCMigrate/TransAutoreleasePool | ./lib/ARCMigrate/TransAutoreleasePool.cpp | 292 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return SM.isBeforeInTranslationUnit(loc, ScopeRange.getEnd());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1505 | ARCMigrate/TransBlockObjCVariable | ./lib/ARCMigrate/TransBlockObjCVariable.cpp | 142 | replaceText | 比较/实现 | 关键函数相关（需复核） | `Pass.TA.replaceText(SM.getExpansionLoc(attr->getLocation()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1506 | ARCMigrate/Transforms | ./lib/ARCMigrate/Transforms.cpp | 121 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return SemiLoc.getLocWithOffset(1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1507 | ARCMigrate/Transforms | ./lib/ARCMigrate/Transforms.cpp | 136 | getLocForEndOfToken | 比较/实现 | 关键函数相关（需复核） | `loc = Lexer::getLocForEndOfToken(loc, /*Offset=*/0, SM, Ctx.getLangOpts());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1508 | ARCMigrate/Internals | ./lib/ARCMigrate/Internals.h | 33 | clearDiagnostic | 声明/容器 | 容器承载32位位置 | `bool clearDiagnostic(ArrayRef<unsigned> IDs, SourceRange range);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1509 | ARCMigrate/Internals | ./lib/ARCMigrate/Internals.h | 34 | hasDiagnostic | 声明/容器 | 容器承载32位位置 | `bool hasDiagnostic(ArrayRef<unsigned> IDs, SourceRange range) const;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1510 | ARCMigrate/Internals | ./lib/ARCMigrate/Internals.h | 75 | clearDiagnostic | 声明/容器 | 容器承载32位位置 | `bool clearDiagnostic(ArrayRef<unsigned> IDs, SourceRange range);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1511 | ARCMigrate/TransGCAttrs | ./lib/ARCMigrate/TransGCAttrs.cpp | 173 | isInFileID | 比较/实现 | 关键函数相关（需复核） | `return SM.isInFileID(SM.getExpansionLoc(Loc), SM.getMainFileID());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1512 | ARCMigrate/TransUnbridgedCasts | ./lib/ARCMigrate/TransUnbridgedCasts.cpp | 254 | getCharacterData | 比较/实现 | 关键函数相关（需复核） | `char PrevChar = *SM.getCharacterData(InsertLoc.getLocWithOffset(-1));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1513 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 49 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 2> DiagIDs;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1514 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 71 | FullSourceLoc | 比较/实现 | 关键函数相关（需复核） | `Begin = FullSourceLoc(srcMgr.getExpansionLoc(beginLoc), srcMgr);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1515 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 74 | FullSourceLoc | 比较/实现 | 关键函数相关（需复核） | `Begin = FullSourceLoc(srcMgr.getExpansionLoc(beginLoc), srcMgr);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1516 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 75 | FullSourceLoc | 比较/实现 | 关键函数相关（需复核） | `End = FullSourceLoc(srcMgr.getExpansionLoc(endLoc), srcMgr);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1517 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 145 | clearDiagnostic | 声明/容器 | 容器承载32位位置 | `bool clearDiagnostic(ArrayRef<unsigned> IDs, SourceRange range);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1518 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 164 | commitClearDiagnostic | 声明/容器 | 容器承载32位位置 | `void commitClearDiagnostic(ArrayRef<unsigned> IDs, SourceRange range);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1519 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 369 | clearDiagnostic | 声明/容器 | 容器承载32位位置 | `bool TransformActionsImpl::clearDiagnostic(ArrayRef<unsigned> IDs,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1520 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 388 | if | 比较/实现 | 关键函数相关（需复核） | `if (SM.isInSystemHeader(SM.getExpansionLoc(loc)))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1521 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 401 | if | 比较/实现 | 关键函数相关（需复核） | `if (SM.isInSystemHeader(SM.getExpansionLoc(loc)))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1522 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 423 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `loc = SM.getExpansionLoc(loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1523 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 484 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `loc = SM.getExpansionLoc(loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1524 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 486 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation afterText = loc.getLocWithOffset(text.size());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1525 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 498 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SM.getExpansionLoc(parentIndent)));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1526 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 501 | commitClearDiagnostic | 声明/容器 | 容器承载32位位置 | `void TransformActionsImpl::commitClearDiagnostic(ArrayRef<unsigned> IDs,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1527 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 508 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `loc = SM.getExpansionLoc(loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1528 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 510 | if | 比较/实现 | 关键函数相关（需复核） | `if (!SM.isBeforeInTranslationUnit(loc, I.End))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1529 | ARCMigrate/TransformActions | ./lib/ARCMigrate/TransformActions.cpp | 671 | clearDiagnostic | 声明/容器 | 容器承载32位位置 | `bool TransformActions::clearDiagnostic(ArrayRef<unsigned> IDs,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1530 | ARCMigrate/PlistReporter | ./lib/ARCMigrate/PlistReporter.cpp | 49 | AddFID | 序列化 | 序列化位置读写（需复核） | `AddFID(FM, Fids, SM, D.getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1531 | ARCMigrate/ARCMT | ./lib/ARCMigrate/ARCMT.cpp | 29 | clearDiagnostic | 声明/容器 | 容器承载32位位置 | `bool CapturedDiagList::clearDiagnostic(ArrayRef<unsigned> IDs,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1532 | ARCMigrate/ARCMT | ./lib/ARCMigrate/ARCMT.cpp | 59 | hasDiagnostic | 声明/容器 | 容器承载32位位置 | `bool CapturedDiagList::hasDiagnostic(ArrayRef<unsigned> IDs,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1533 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 300 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `EndLoc = EndLoc.getLocWithOffset(-1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1534 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 549 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `StartGetterSelectorLoc.getLocWithOffset(GetterSelector.getNameForSlot(0).size());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1535 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 556 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `EndLoc = EndLoc.getLocWithOffset(1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1536 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 560 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `BeginOfSetterDclLoc = BeginOfSetterDclLoc.getLocWithOffset(-1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1537 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 752 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `BeginOfEnumDclLoc = BeginOfEnumDclLoc.getLocWithOffset(-1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1538 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 784 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `StartTypedefLoc = StartTypedefLoc.getLocWithOffset(+1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1539 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 1788 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1540 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 1801 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `std::pair<FileID, unsigned> Begin =` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1541 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 1803 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `std::pair<FileID, unsigned> End =` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1542 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 1807 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Length = End.second - Begin.second;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1543 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 2035 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1544 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 2045 | unsigned | 计算 | 强制收窄为32位 | `Entry.Offset = unsigned(-1);` | 改为 uint64_t / 移除收窄 | TODO |
| 1545 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 2050 | unsigned | 计算 | 强制收窄为32位 | `Entry.Offset = unsigned(-2);` | 改为 uint64_t / 移除收窄 | TODO |
| 1546 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 2054 | return | 声明/局部 | 仅命名可疑需复核 | `return (unsigned)llvm::hash_combine(Val.File, Val.Offset, Val.RemoveLen,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1547 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 2132 | if | 比较/实现 | 关键函数相关（需复核） | `if (Val.getAsInteger(10, Entry.Offset))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1548 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 2169 | getLocForStartOfFile | 比较/实现 | 关键函数相关（需复核） | `SM.getLocForStartOfFile(FID).getLocWithOffset(Entry.Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1549 | ARCMigrate/ObjCMT | ./lib/ARCMigrate/ObjCMT.cpp | 2173 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc.getLocWithOffset(Entry.RemoveLen));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1550 | ARCMigrate/TransProtectedScope | ./lib/ARCMigrate/TransProtectedScope.cpp | 194 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return !SM.isBeforeInTranslationUnit(Loc, R.getBegin()) &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1551 | ARCMigrate/TransProtectedScope | ./lib/ARCMigrate/TransProtectedScope.cpp | 195 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `SM.isBeforeInTranslationUnit(Loc, R.getEnd());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1552 | Frontend/FrontendAction | ./lib/Frontend/FrontendAction.cpp | 439 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned &Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1553 | Frontend/FrontendAction | ./lib/Frontend/FrontendAction.cpp | 462 | if | 比较/实现 | 关键函数相关（需复核） | `if (SrcMgr.getBufferOrFake(ModuleMapID).getBufferSize() == Offset)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1554 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 35 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<unsigned, unsigned> Abbrevs;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1555 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 89 |  | 声明/类型别名 | 可疑别名32位 | `typedef llvm::DenseMap<unsigned, unsigned> AbbrevLookup;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1556 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 89 |  | 声明/容器 | 容器承载32位位置 | `typedef llvm::DenseMap<unsigned, unsigned> AbbrevLookup;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1557 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 110 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Severity, const serialized_diags::Location &Location,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1558 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 214 |  | 序列化 | 序列化位置读写（需复核） | `/// Add SourceLocation information the specified record.` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1559 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 218 |  | 序列化 | 序列化位置读写（需复核） | `/// Add SourceLocation information the specified record.` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1560 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 221 | AddLocToRecord | 比较/实现 | 关键函数相关（需复核） | `AddLocToRecord(Loc, Loc.hasManager() ? Loc.getPresumedLoc() : PresumedLoc(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1561 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 273 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseSet<unsigned> Categories;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1562 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 317 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ID);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1563 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 327 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(*Name++);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1564 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 337 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ID);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1565 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 340 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(*Name++);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1566 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 349 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back((unsigned)0); // File.` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1567 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 350 | push_back | 声明/局部 | 仅命名可疑需复核 | `Record.push_back((unsigned)0); // Line.` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1568 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 350 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back((unsigned)0); // Line.` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1569 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 351 | push_back | 声明/局部 | 仅命名可疑需复核 | `Record.push_back((unsigned)0); // Column.` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1570 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 351 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back((unsigned)0); // Column.` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1571 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 352 | push_back | 声明/局部 | 仅命名可疑需复核 | `Record.push_back((unsigned)0); // Offset.` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1572 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 352 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back((unsigned)0); // Offset.` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1573 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 356 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(getEmitFile(PLoc.getFilename()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1574 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 357 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(PLoc.getLine());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1575 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 358 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(PLoc.getColumn()+TokSize);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1576 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 359 | push_back | 比较/实现 | 关键函数相关（需复核） | `Record.push_back(Loc.getFileOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1577 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 359 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Loc.getFileOffset());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1578 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 396 | push_back | 序列化 | 序列化位置读写（需复核） | `State->Record.push_back(RECORD_SOURCE_RANGE);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1579 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 651 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(RECORD_DIAG);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1580 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 652 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(getStableLevel(Level));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1581 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 658 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(getEmitCategory(DiagID));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1582 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 660 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(getEmitDiagnosticFlag(Level, Info->getID()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1583 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 662 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(getEmitCategory());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1584 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 663 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(getEmitDiagnosticFlag(Level));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1585 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 666 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Message.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1586 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 719 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(RECORD_FIXIT);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1587 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 721 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Fix.CodeToInsert.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1588 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 736 | hasManager | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = Loc.hasManager() ? Loc.getPresumedLoc() : PresumedLoc();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1589 | Frontend/SerializedDiagnosticPrinter | ./lib/Frontend/SerializedDiagnosticPrinter.cpp | 843 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Severity, const serialized_diags::Location &Location,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1590 | Frontend/SerializedDiagnosticReader | ./lib/Frontend/SerializedDiagnosticReader.cpp | 127 | if | 计算 | 强制收窄为32位 | `if (Code >= static_cast<unsigned>(llvm::bitc::FIRST_APPLICATION_ABBREV)) {` | 改为 uint64_t / 移除收窄 | TODO |
| 1591 | Frontend/HeaderIncludeGen | ./lib/Frontend/HeaderIncludeGen.cpp | 137 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc UserLoc = SM.getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1592 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 684 | isWrittenInMainFile | 比较/实现 | 关键函数相关（需复核） | `return M.isWrittenInMainFile(M.getExpansionLoc(D.getLocation()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1593 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 1229 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned Offset = SM.getFileOffset(FileRange.getBegin());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1594 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 1229 | getFileOffset | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = SM.getFileOffset(FileRange.getBegin());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1595 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 1230 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned EndOffset = SM.getFileOffset(FileRange.getEnd());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1596 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 1261 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `OutDiag.LocOffset = SM.getFileOffset(FileLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1597 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2084 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `llvm::StringMap<unsigned>::iterator Pos` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1598 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2122 |  | 声明/局部 | 仅命名可疑需复核 | `StringRef File, unsigned Line, unsigned Column,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1599 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2330 |  | 声明/类型别名 | 可疑别名32位 | `using SLocRemap = ContinuousRangeMap<unsigned, int, 2>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1600 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2363 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation L = FileLoc.getLocWithOffset(SD.LocOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1601 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2369 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation BL = FileLoc.getLocWithOffset(Range.first);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1602 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2370 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation EL = FileLoc.getLocWithOffset(Range.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1603 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2380 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation BL = FileLoc.getLocWithOffset(FixIt.RemoveRange.first);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1604 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2381 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation EL = FileLoc.getLocWithOffset(FixIt.RemoveRange.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1605 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2410 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1606 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2419 | LocDecl | 声明/局部 | 仅命名可疑需复核 | `std::pair<unsigned, Decl *> LocDecl(Offset, D);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1607 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2432 | findFileRegionDecls | 声明/局部 | 仅命名可疑需复核 | `void ASTUnit::findFileRegionDecls(FileID File, unsigned Offset, unsigned Length,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1608 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2439 | getExternalSource | 比较/实现 | 关键函数相关（需复核） | `return Ctx->getExternalSource()->FindFileRegionDecls(File, Offset, Length,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1609 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2476 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line, unsigned Col) const {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1610 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2483 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset) const {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1611 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2486 | getMacroArgExpandedLocation | 比较/实现 | 关键函数相关（需复核） | `return SM.getMacroArgExpandedLocation(FileLoc.getLocWithOffset(Offset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1612 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2504 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return FileLoc.getLocWithOffset(Offs);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1613 | Frontend/ASTUnit | ./lib/Frontend/ASTUnit.cpp | 2525 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return FileLoc.getLocWithOffset(Offs);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1614 | Frontend/PrintPreprocessedOutput | ./lib/Frontend/PrintPreprocessedOutput.cpp | 192 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1615 | Frontend/PrintPreprocessedOutput | ./lib/Frontend/PrintPreprocessedOutput.cpp | 202 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1616 | Frontend/PrintPreprocessedOutput | ./lib/Frontend/PrintPreprocessedOutput.cpp | 332 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc UserLoc = SourceMgr.getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1617 | Frontend/PrintPreprocessedOutput | ./lib/Frontend/PrintPreprocessedOutput.cpp | 1024 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SourceMgr.getPresumedLoc(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1618 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 107 |  | 计算 | 指针差值落入32位 | `unsigned NumSpaces = TabStop - col%TabStop;` | 用 uint64_t 接收指针差值 | TODO |
| 1619 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 264 | back | 计算 | 强制收窄为32位 | `== static_cast<unsigned>(m_columnToByte.back()+1));` | 改为 uint64_t / 移除收窄 | TODO |
| 1620 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 265 | assert | 计算 | 强制收窄为32位 | `assert(static_cast<unsigned>(m_byteToColumn.back()+1)` | 改为 uint64_t / 移除收窄 | TODO |
| 1621 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 328 | max | 计算 | 强制收窄为32位 | `unsigned MaxColumns = std::max(static_cast<unsigned>(map.columns()),` | 改为 uint64_t / 移除收窄 | TODO |
| 1622 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 401 |  | 计算 | 指针差值落入32位 | `unsigned CaretColumnsOutsideSource = CaretEnd-CaretStart` | 用 uint64_t 接收指针差值 | TODO |
| 1623 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 485 |  | 计算 | 指针差值落入32位 | `unsigned ColumnsKept = CaretEnd-CaretStart;` | 用 uint64_t 接收指针差值 | TODO |
| 1624 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 545 | findEndOfWord | 声明/局部 | 无关键词的32位位置变量（需复核） | `static unsigned findEndOfWord(unsigned Start, StringRef Str,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1625 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 546 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Length, unsigned Column,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1626 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 549 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned End = Start + 1;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1627 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 582 |  | 计算 | 指针差值落入32位 | `unsigned PunctWordLength = End - Start;` | 用 uint64_t 接收指针差值 | TODO |
| 1628 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 582 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned PunctWordLength = End - Start;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1629 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 614 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Column = 0,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1630 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 635 |  | 计算 | 指针差值落入32位 | `unsigned WordLength = WordEnd - WordStart;` | 用 uint64_t 接收指针差值 | TODO |
| 1631 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 856 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `FileID CaretFileID = Loc.getExpansionLoc().getFileID();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1632 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 866 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation B = SM.getExpansionLoc(RI->getBegin());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1633 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 887 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `<< BF.getLineNumber() << ':' << BF.getColumnNumber() << '-'` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1634 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 888 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `<< EF.getLineNumber() << ':' << (EF.getColumnNumber() + TokSize)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1635 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 988 | getExpansionLineNumber | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned StartLineNo = SM.getExpansionLineNumber(Begin);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1636 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 992 | getExpansionLineNumber | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned EndLineNo = SM.getExpansionLineNumber(End);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1637 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1078 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `LineNo == SM.getLineNumber(HintLocInfo.first, HintLocInfo.second) &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1638 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1086 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `= SM.getColumnNumber(HintLocInfo.first, HintLocInfo.second) - 1;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1639 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1089 | assert | 计算 | 强制收窄为32位 | `assert(HintByteOffset < static_cast<unsigned>(map.bytes())+1);` | 改为 uint64_t / 移除收窄 | TODO |
| 1640 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1105 | size | 计算 | 复杂指针差值收窄 | `// Unicode characters in earlier columns. unsigned NewFixItLineSize = FixItInsertionLine.size() + (HintCol - PrevHintEndCol) + I->CodeToIn…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1641 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1106 | size | 计算 | 复杂指针差值收窄 | `unsigned NewFixItLineSize = FixItInsertionLine.size() + (HintCol - PrevHintEndCol) + I->CodeToInsert.size(); if (NewFixItLineSize > FixItI…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1642 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1149 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = Loc.getDecomposedLoc();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1643 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1159 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned CaretLineNo = Loc.getLineNumber();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1644 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1159 | getLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned CaretLineNo = Loc.getLineNumber();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1645 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1160 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned CaretColNo = Loc.getColumnNumber();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1646 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1160 | getColumnNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned CaretColNo = Loc.getColumnNumber();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1647 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1342 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(BLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1648 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1348 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `OS << "\":{" << SM.getLineNumber(BInfo.first, BInfo.second)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1649 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1349 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `<< ':' << SM.getColumnNumber(BInfo.first, BInfo.second)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1650 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1350 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `<< '-' << SM.getLineNumber(EInfo.first, EInfo.second)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1651 | Frontend/TextDiagnostic | ./lib/Frontend/TextDiagnostic.cpp | 1351 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `<< ':' << SM.getColumnNumber(EInfo.first, EInfo.second)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1652 | Frontend/CompilerInstance | ./lib/Frontend/CompilerInstance.cpp | 694 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1653 | Frontend/CompilerInstance | ./lib/Frontend/CompilerInstance.cpp | 695 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Column) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1654 | Frontend/CompilerInstance | ./lib/Frontend/CompilerInstance.cpp | 735 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1655 | Frontend/CompilerInstance | ./lib/Frontend/CompilerInstance.cpp | 736 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Column,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1656 | Frontend/PrecompiledPreamble | ./lib/Frontend/PrecompiledPreamble.cpp | 726 | createForFile | I/O | 平台I/O偏移需复核 | `PrecompiledPreamble::PreambleFileHash::createForFile(off_t Size,` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 1657 | Frontend/LayoutOverrideSource | ./lib/Frontend/LayoutOverrideSource.cpp | 22 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = 1;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1658 | Frontend/LayoutOverrideSource | ./lib/Frontend/LayoutOverrideSource.cpp | 137 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned long long Offset = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1659 | Frontend/LayoutOverrideSource | ./lib/Frontend/LayoutOverrideSource.cpp | 138 | substr | 比较/实现 | 关键函数相关（需复核） | `(void)LineStr.substr(0, Idx).getAsInteger(10, Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1660 | Frontend/ChainedIncludesSource | ./lib/Frontend/ChainedIncludesSource.cpp | 95 | switch | 序列化 | 序列化位置读写（需复核） | `switch (Reader->ReadAST(pchFile, serialization::MK_PCH, SourceLocation(),` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1661 | Frontend/InitPreprocessor | ./lib/Frontend/InitPreprocessor.cpp | 774 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(AtomicScopeOpenCLModel::WorkGroup) == 1 &&` | 改为 uint64_t / 移除收窄 | TODO |
| 1662 | Frontend/InitPreprocessor | ./lib/Frontend/InitPreprocessor.cpp | 775 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(AtomicScopeOpenCLModel::Device) == 2 &&` | 改为 uint64_t / 移除收窄 | TODO |
| 1663 | Frontend/InitPreprocessor | ./lib/Frontend/InitPreprocessor.cpp | 776 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(AtomicScopeOpenCLModel::AllSVMDevices) == 3 &&` | 改为 uint64_t / 移除收窄 | TODO |
| 1664 | Frontend/InitPreprocessor | ./lib/Frontend/InitPreprocessor.cpp | 777 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(AtomicScopeOpenCLModel::SubGroup) == 4,` | 改为 uint64_t / 移除收窄 | TODO |
| 1665 | Frontend/DependencyGraph | ./lib/Frontend/DependencyGraph.cpp | 84 | getFileEntryRefForID | 比较/实现 | 关键函数相关（需复核） | `SM.getFileEntryRefForID(SM.getFileID(SM.getExpansionLoc(HashLoc)));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1666 | Frontend/FrontendActions | ./lib/Frontend/FrontendActions.cpp | 585 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `TheSema.getSourceManager().getPresumedLoc(Inst.Entity->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1667 | Frontend/FrontendActions | ./lib/Frontend/FrontendActions.cpp | 591 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `TheSema.getSourceManager().getPresumedLoc(Inst.PointOfInstantiation);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1668 | Frontend/FrontendActions | ./lib/Frontend/FrontendActions.cpp | 656 | Name | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(LangOpts.get##Name()) << "\n";` | 改为 uint64_t / 移除收窄 | TODO |
| 1669 | Frontend/VerifyDiagnosticConsumer | ./lib/Frontend/VerifyDiagnosticConsumer.cpp | 509 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1670 | Frontend/VerifyDiagnosticConsumer | ./lib/Frontend/VerifyDiagnosticConsumer.cpp | 515 | getSpellingLineNumber | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned ExpectedLine = SM.getSpellingLineNumber(Pos, &Invalid);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1671 | Frontend/VerifyDiagnosticConsumer | ./lib/Frontend/VerifyDiagnosticConsumer.cpp | 535 | Report | 比较/实现 | 关键函数相关（需复核） | `Diags.Report(Pos.getLocWithOffset(PH.C - PH.Begin),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1672 | Frontend/VerifyDiagnosticConsumer | ./lib/Frontend/VerifyDiagnosticConsumer.cpp | 548 | Report | 比较/实现 | 关键函数相关（需复核） | `Diags.Report(Pos.getLocWithOffset(PH.C - PH.Begin),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1673 | Frontend/VerifyDiagnosticConsumer | ./lib/Frontend/VerifyDiagnosticConsumer.cpp | 571 | Report | 比较/实现 | 关键函数相关（需复核） | `Diags.Report(Pos.getLocWithOffset(PH.C-PH.Begin),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1674 | Frontend/VerifyDiagnosticConsumer | ./lib/Frontend/VerifyDiagnosticConsumer.cpp | 592 | Report | 比较/实现 | 关键函数相关（需复核） | `Diags.Report(Pos.getLocWithOffset(PH.C-PH.Begin),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1675 | Frontend/VerifyDiagnosticConsumer | ./lib/Frontend/VerifyDiagnosticConsumer.cpp | 611 | Report | 比较/实现 | 关键函数相关（需复核） | `Diags.Report(Pos.getLocWithOffset(PH.C-PH.Begin),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1676 | Frontend/VerifyDiagnosticConsumer | ./lib/Frontend/VerifyDiagnosticConsumer.cpp | 619 | Report | 比较/实现 | 关键函数相关（需复核） | `Diags.Report(Pos.getLocWithOffset(PH.C-PH.Begin),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1677 | Frontend/VerifyDiagnosticConsumer | ./lib/Frontend/VerifyDiagnosticConsumer.cpp | 627 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `D.ContentBegin = Pos.getLocWithOffset(ContentBegin - PH.Begin);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1678 | Frontend/VerifyDiagnosticConsumer | ./lib/Frontend/VerifyDiagnosticConsumer.cpp | 737 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `Loc = SrcManager->getExpansionLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1679 | Frontend/CompilerInvocation | ./lib/Frontend/CompilerInvocation.cpp | 290 | normalizeSimpleEnum | 声明/容器 | 容器承载32位位置 | `static llvm::Optional<unsigned> normalizeSimpleEnum(OptSpecifier Opt,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1680 | Frontend/CompilerInvocation | ./lib/Frontend/CompilerInvocation.cpp | 333 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(Value));` | 改为 uint64_t / 移除收窄 | TODO |
| 1681 | Frontend/CompilerInvocation | ./lib/Frontend/CompilerInvocation.cpp | 488 | getExceptionHandling | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(LangOpts.getExceptionHandling()) << T.str();` | 改为 uint64_t / 移除收窄 | TODO |
| 1682 | Frontend/CompilerInvocation | ./lib/Frontend/CompilerInvocation.cpp | 1415 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(llvm::DICompileUnit::DebugNameTableKind::GNU))` | 改为 uint64_t / 移除收窄 | TODO |
| 1683 | Frontend/CompilerInvocation | ./lib/Frontend/CompilerInvocation.cpp | 1418 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(` | 改为 uint64_t / 移除收窄 | TODO |
| 1684 | Frontend/CompilerInvocation | ./lib/Frontend/CompilerInvocation.cpp | 1706 |  | 计算 | 强制收窄为32位 | `Opts.DebugNameTable = static_cast<unsigned>(` | 改为 uint64_t / 移除收窄 | TODO |
| 1685 | Frontend/CompilerInvocation | ./lib/Frontend/CompilerInvocation.cpp | 1849 |  | 计算 | 强制收窄为32位 | `Opts.FunctionReturnThunks = static_cast<unsigned>(Val);` | 改为 uint64_t / 移除收窄 | TODO |
| 1686 | Frontend/CompilerInvocation | ./lib/Frontend/CompilerInvocation.cpp | 2310 | if | 计算 | 强制收窄为32位 | `if (static_cast<unsigned>(VIU & DiagnosticLevelMask::Note) != 0)` | 改为 uint64_t / 移除收窄 | TODO |
| 1687 | Frontend/CompilerInvocation | ./lib/Frontend/CompilerInvocation.cpp | 2312 | if | 计算 | 强制收窄为32位 | `if (static_cast<unsigned>(VIU & DiagnosticLevelMask::Remark) != 0)` | 改为 uint64_t / 移除收窄 | TODO |
| 1688 | Frontend/CompilerInvocation | ./lib/Frontend/CompilerInvocation.cpp | 2314 | if | 计算 | 强制收窄为32位 | `if (static_cast<unsigned>(VIU & DiagnosticLevelMask::Warning) != 0)` | 改为 uint64_t / 移除收窄 | TODO |
| 1689 | Frontend/CompilerInvocation | ./lib/Frontend/CompilerInvocation.cpp | 2316 | if | 计算 | 强制收窄为32位 | `if (static_cast<unsigned>(VIU & DiagnosticLevelMask::Error) != 0)` | 改为 uint64_t / 移除收窄 | TODO |
| 1690 | Frontend/CompilerInvocation | ./lib/Frontend/CompilerInvocation.cpp | 4568 | add | 计算 | 强制收窄为32位 | `HBuilder.add(static_cast<unsigned>(LangOpts->get##Name()));` | 改为 uint64_t / 移除收窄 | TODO |
| 1691 | Frontend/DiagnosticRenderer | ./lib/Frontend/DiagnosticRenderer.cpp | 120 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = Loc.getPresumedLoc(DiagOpts->ShowPresumedLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1692 | Frontend/DiagnosticRenderer | ./lib/Frontend/DiagnosticRenderer.cpp | 196 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = Loc.getPresumedLoc(DiagOpts->ShowPresumedLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1693 | Frontend/DiagnosticRenderer | ./lib/Frontend/DiagnosticRenderer.cpp | 237 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = Loc.getPresumedLoc(DiagOpts->ShowPresumedLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1694 | Frontend/DiagnosticRenderer | ./lib/Frontend/DiagnosticRenderer.cpp | 252 | emitBuildingModuleLocation | 比较/实现 | 关键函数相关（需复核） | `emitBuildingModuleLocation(I.second, I.second.getPresumedLoc(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1695 | Frontend/DiagnosticRenderer | ./lib/Frontend/DiagnosticRenderer.cpp | 416 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `Begin = SM->getSpellingLoc(Begin);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1696 | Frontend/DiagnosticRenderer | ./lib/Frontend/DiagnosticRenderer.cpp | 417 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `End = SM->getSpellingLoc(End);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1697 | Frontend/DiagnosticRenderer | ./lib/Frontend/DiagnosticRenderer.cpp | 440 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `FullSourceLoc SpellingLoc = Loc.getSpellingLoc();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1698 | Frontend/DiagnosticRenderer | ./lib/Frontend/DiagnosticRenderer.cpp | 482 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `BegLoc.getLocWithOffset(1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1699 | Frontend/LogDiagnosticPrinter | ./lib/Frontend/LogDiagnosticPrinter.cpp | 144 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(Info.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1700 | Frontend/Rewrite | ./lib/Frontend/Rewrite/InclusionRewriter.cpp | 289 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `// count lines manually, it's faster than getPresumedLoc()` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1701 | Frontend/Rewrite | ./lib/Frontend/Rewrite/InclusionRewriter.cpp | 319 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned &NextToWrite, int &Line) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1702 | Frontend/Rewrite | ./lib/Frontend/Rewrite/InclusionRewriter.cpp | 321 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `SM.getFileOffset(StartToken.getLocation()), LocalEOL, Line,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1703 | Frontend/Rewrite | ./lib/Frontend/Rewrite/InclusionRewriter.cpp | 333 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `SM.getFileOffset(DirectiveToken.getLocation()) +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1704 | Frontend/Rewrite | ./lib/Frontend/Rewrite/InclusionRewriter.cpp | 378 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned NextToWrite = SM.getFileOffset(RawLex.getSourceLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1705 | Frontend/Rewrite | ./lib/Frontend/Rewrite/InclusionRewriter.cpp | 379 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(SM.getLineNumber(FileId, NextToWrite) == 1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1706 | Frontend/Rewrite | ./lib/Frontend/Rewrite/InclusionRewriter.cpp | 454 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `SM.getFileOffset(HashToken.getLocation()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1707 | Frontend/Rewrite | ./lib/Frontend/Rewrite/InclusionRewriter.cpp | 470 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `SM.getFileOffset(RawToken.getLocation()) +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1708 | Frontend/Rewrite | ./lib/Frontend/Rewrite/InclusionRewriter.cpp | 493 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `SM.getFileOffset(RawToken.getLocation()) +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1709 | Frontend/Rewrite | ./lib/Frontend/Rewrite/InclusionRewriter.cpp | 509 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `SM.getFileOffset(SM.getLocForEndOfFile(FileId)), LocalEOL,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1710 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteMacros.cpp | 114 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation PPLoc = SM.getExpansionLoc(PPTok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1711 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteMacros.cpp | 133 | InsertTextAfter | 比较/实现 | 关键函数相关（需复核） | `RB.InsertTextAfter(SM.getFileOffset(RawTok.getLocation()), "//");` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1712 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteMacros.cpp | 139 | InsertTextAfter | 比较/实现 | 关键函数相关（需复核） | `RB.InsertTextAfter(SM.getFileOffset(RawTok.getLocation()), "//");` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1713 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteMacros.cpp | 153 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned PPOffs = SM.getFileOffset(PPLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1714 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteMacros.cpp | 154 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned RawOffs = SM.getFileOffset(RawTok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1715 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteMacros.cpp | 176 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `RawOffs = SM.getFileOffset(RawTok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1716 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteMacros.cpp | 199 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `PPLoc = SM.getExpansionLoc(PPTok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1717 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteMacros.cpp | 200 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `PPOffs = SM.getFileOffset(PPLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1718 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 725 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `Loc = SM->getExpansionLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1719 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 824 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `LocStart.getLocWithOffset(BufPtr-MainBufStart);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1720 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 872 | getTypeSize | 计算 | 强制收窄为32位 | `static_cast<unsigned>(Context->getTypeSize(Context->UnsignedIntTy));` | 改为 uint64_t / 移除收窄 | TODO |
| 1721 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 932 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `startGetterSetterLoc = startLoc.getLocWithOffset(semiBuf-startBuf+1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1722 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 1178 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation OptionalLoc = LocStart.getLocWithOffset(p-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1723 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 1183 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation OptionalLoc = LocStart.getLocWithOffset(p-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1724 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 1628 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM->getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1725 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 1754 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation lparenLoc = startLoc.getLocWithOffset(rparenBuf-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1726 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 1831 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation endBodyLoc = OrigEnd.getLocWithOffset(1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1727 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 1844 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation endBodyLoc = OrigEnd.getLocWithOffset(semiBuf-stmtBuf+1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1728 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 1893 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `RParenExprLoc = startLoc.getLocWithOffset(RParenExprLocBuf-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1729 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 2063 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation semiLoc = startLoc.getLocWithOffset(semiBuf-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1730 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 2188 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation LessLoc = Loc.getLocWithOffset(startRef-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1731 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 2189 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation GreaterLoc = Loc.getLocWithOffset(endRef-startBuf+1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1732 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 2237 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation LessLoc = Loc.getLocWithOffset(startRef-endBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1733 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 2238 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation GreaterLoc = Loc.getLocWithOffset(endRef-endBuf+1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1734 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 2260 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc.getLocWithOffset(startRef-startFuncBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1735 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 2262 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc.getLocWithOffset(endRef-startFuncBuf+1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1736 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 2303 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `startLoc = SM->getExpansionLoc(startLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1737 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 2309 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `X = SM->getExpansionLoc(X);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1738 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 2607 | getTypeSize | 计算 | 强制收窄为32位 | `static_cast<unsigned>(Context->getTypeSize(Context->IntTy));` | 改为 uint64_t / 移除收窄 | TODO |
| 1739 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 2729 | getTypeSize | 计算 | 强制收窄为32位 | `static_cast<unsigned>(Context->getTypeSize(Context->UnsignedIntTy));` | 改为 uint64_t / 移除收窄 | TODO |
| 1740 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 2852 | getTypeSize | 计算 | 强制收窄为32位 | `static_cast<unsigned>(Context->getTypeSize(Context->UnsignedIntTy));` | 改为 uint64_t / 移除收窄 | TODO |
| 1741 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 3063 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM->getPresumedLoc(Location);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1742 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 3614 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `return Context->getSourceManager().isBeforeInTranslationUnit(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1743 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 3622 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `return Context->getSourceManager().isBeforeInTranslationUnit(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1744 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 4745 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `LocStart = LocStart.getLocWithOffset(argPtr-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1745 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 4779 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `DeclLoc = DeclLoc.getLocWithOffset(startArgList-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1746 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 4788 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `DeclLoc = DeclLoc.getLocWithOffset(argPtr-startArgList);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1747 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 4885 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation Start = DeclLoc.getLocWithOffset(startBuf-endBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1748 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 4970 | getTypeSize | 计算 | 强制收窄为32位 | `static_cast<unsigned>(Context->getTypeSize(Context->IntTy));` | 改为 uint64_t / 移除收窄 | TODO |
| 1749 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 4972 | getTypeSize | 计算 | 强制收窄为32位 | `static_cast<unsigned>(Context->getTypeSize(Context->VoidPtrTy));` | 改为 uint64_t / 移除收窄 | TODO |
| 1750 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 5023 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `X = SM->getExpansionLoc(X);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1751 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 5122 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `DeclLoc = DeclLoc.getLocWithOffset(commaBuf - startDeclBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1752 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 5143 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `startLoc = SM->getExpansionLoc(startLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1753 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 5153 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `startLoc.getLocWithOffset(separatorBuf-startInitializerBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1754 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 5384 | getTypeSize | 计算 | 强制收窄为32位 | `static_cast<unsigned>(Context->getTypeSize(Context->IntTy));` | 改为 uint64_t / 移除收窄 | TODO |
| 1755 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 5955 |  | 声明/类型别名 | 可疑别名32位 | `Preamble += "typedef unsigned long long _WIN_NSUInteger;\n";` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1756 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 5957 |  | 声明/类型别名 | 可疑别名32位 | `Preamble += "typedef unsigned int _WIN_NSUInteger;\n";` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1757 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteModernObjC.cpp | 7515 | getTypeSize | 计算 | 强制收窄为32位 | `static_cast<unsigned>(Context->getTypeSize(Context->UnsignedIntTy));` | 改为 uint64_t / 移除收窄 | TODO |
| 1758 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 653 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `Loc = SM->getExpansionLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1759 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 749 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `LocStart.getLocWithOffset(BufPtr-MainBufStart);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1760 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 779 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `startLoc.getLocWithOffset(semiBuf-startBuf+1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1761 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1011 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation OptionalLoc = LocStart.getLocWithOffset(p-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1762 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1016 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation OptionalLoc = LocStart.getLocWithOffset(p-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1763 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1395 | int | 计算 | 强制收窄为32位 | `/// ((unsigned int (*)` | 改为 uint64_t / 移除收窄 | TODO |
| 1764 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1404 | int | 计算 | 强制收窄为32位 | `buf += "((unsigned int (*) (id, SEL, struct __objcFastEnumerationState *, "` | 改为 uint64_t / 移除收窄 | TODO |
| 1765 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1546 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation lparenLoc = startLoc.getLocWithOffset(rparenBuf-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1766 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1553 | int | 计算 | 强制收窄为32位 | `// ((unsigned int (*)` | 改为 uint64_t / 移除收窄 | TODO |
| 1767 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1623 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation endBodyLoc = OrigEnd.getLocWithOffset(1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1768 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1636 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation endBodyLoc = OrigEnd.getLocWithOffset(semiBuf-stmtBuf+1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1769 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1668 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation rparenLoc = startLoc.getLocWithOffset(endBuf-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1770 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1757 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation onePastSemiLoc = startLoc.getLocWithOffset(semiBuf-startBuf+1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1771 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1779 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation onePastSemiLoc = startLoc.getLocWithOffset(semiBuf-startBuf+1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1772 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1816 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `startLoc = startLoc.getLocWithOffset(1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1773 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1897 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `bodyLoc = bodyLoc.getLocWithOffset(-1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1774 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1925 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `startLoc = startLoc.getLocWithOffset(1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1775 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1927 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `endLoc = endLoc.getLocWithOffset(-1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1776 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1951 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `lastCurlyLoc = lastCurlyLoc.getLocWithOffset(1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1777 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 1980 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation semiLoc = startLoc.getLocWithOffset(semiBuf-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1778 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 2105 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation LessLoc = Loc.getLocWithOffset(startRef-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1779 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 2106 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation GreaterLoc = Loc.getLocWithOffset(endRef-startBuf+1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1780 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 2150 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation LessLoc = Loc.getLocWithOffset(startRef-endBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1781 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 2151 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation GreaterLoc = Loc.getLocWithOffset(endRef-endBuf+1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1782 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 2173 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc.getLocWithOffset(startRef-startFuncBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1783 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 2175 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc.getLocWithOffset(endRef-startFuncBuf+1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1784 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 2216 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `startLoc = SM->getExpansionLoc(startLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1785 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 2222 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `X = SM->getExpansionLoc(X);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1786 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 2990 | getTypeSize | 计算 | 强制收窄为32位 | `static_cast<unsigned>(Context->getTypeSize(Context->IntTy));` | 改为 uint64_t / 移除收窄 | TODO |
| 1787 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 3163 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `LocStart.getLocWithOffset(cursor-startBuf+1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1788 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 3171 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation atLoc = LocStart.getLocWithOffset(cursor-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1789 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 3188 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation atLoc = LocStart.getLocWithOffset(cursor-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1790 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 3192 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `atLoc = LocStart.getLocWithOffset(cursor-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1791 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 3195 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation caretLoc = LocStart.getLocWithOffset(cursor-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1792 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 3201 | InsertText | 比较/实现 | 关键函数相关（需复核） | `InsertText(LocEnd.getLocWithOffset(1), ";");` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1793 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 3913 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `LocStart = LocStart.getLocWithOffset(argPtr-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1794 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 3932 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `DeclLoc = DeclLoc.getLocWithOffset(startArgList-startBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1795 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 3941 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `DeclLoc = DeclLoc.getLocWithOffset(argPtr-startArgList);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1796 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 4038 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation Start = DeclLoc.getLocWithOffset(startBuf-endBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1797 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 4123 | getTypeSize | 计算 | 强制收窄为32位 | `static_cast<unsigned>(Context->getTypeSize(Context->IntTy));` | 改为 uint64_t / 移除收窄 | TODO |
| 1798 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 4125 | getTypeSize | 计算 | 强制收窄为32位 | `static_cast<unsigned>(Context->getTypeSize(Context->VoidPtrTy));` | 改为 uint64_t / 移除收窄 | TODO |
| 1799 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 4179 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `X = SM->getExpansionLoc(X);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1800 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 4274 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `startLoc = SM->getExpansionLoc(startLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1801 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 4306 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `startLoc.getLocWithOffset(semiBuf-startInitializerBuf);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1802 | Frontend/Rewrite | ./lib/Frontend/Rewrite/RewriteObjC.cpp | 4521 | getTypeSize | 计算 | 强制收窄为32位 | `static_cast<unsigned>(Context->getTypeSize(Context->IntTy));` | 改为 uint64_t / 移除收窄 | TODO |
| 1803 | Headers/opencl-c-base | ./lib/Headers/opencl-c-base.h | 95 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned char uchar;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1804 | Headers/opencl-c-base | ./lib/Headers/opencl-c-base.h | 100 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned short ushort;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1805 | Headers/opencl-c-base | ./lib/Headers/opencl-c-base.h | 105 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned int uint;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1806 | Headers/opencl-c-base | ./lib/Headers/opencl-c-base.h | 110 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned long ulong;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1807 | Headers/avxintrin | ./lib/Headers/avxintrin.h | 25 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned long long __v4du __attribute__ ((__vector_size__ (32)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1808 | Headers/avxintrin | ./lib/Headers/avxintrin.h | 26 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned int __v8su __attribute__ ((__vector_size__ (32)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1809 | Headers/avxintrin | ./lib/Headers/avxintrin.h | 27 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned short __v16hu __attribute__ ((__vector_size__ (32)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1810 | Headers/avxintrin | ./lib/Headers/avxintrin.h | 28 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned char __v32qu __attribute__ ((__vector_size__ (32)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1811 | Headers/hexagon_types | ./lib/Headers/hexagon_types.h | 370 |  | 计算 | 强制收窄为32位 | `(((v) & 0xffffffff00000000LL) \| ((HEXAGON_Vect64)((unsigned int)(new))))` | 改为 uint64_t / 移除收窄 | TODO |
| 1812 | Headers/hexagon_types | ./lib/Headers/hexagon_types.h | 813 | HEXAGON_V32_GET_UW | 计算 | 强制收窄为32位 | `#define HEXAGON_V32_GET_UW(v) ((unsigned int)(v))` | 改为 uint64_t / 移除收窄 | TODO |
| 1813 | Headers/hexagon_types | ./lib/Headers/hexagon_types.h | 1597 |  | 计算 | 强制收窄为32位 | `(((v) & 0xffffffff00000000LL) \| ((Q6Vect64)((unsigned int)(new))))` | 改为 uint64_t / 移除收窄 | TODO |
| 1814 | Headers/hexagon_types | ./lib/Headers/hexagon_types.h | 2040 | Q6V32_GET_UW | 计算 | 强制收窄为32位 | `#define Q6V32_GET_UW(v) ((unsigned int)(v))` | 改为 uint64_t / 移除收窄 | TODO |
| 1815 | Headers/altivec | ./lib/Headers/altivec.h | 17686 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef vector unsigned char unaligned_vec_uchar __attribute__((aligned(1)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1816 | Headers/altivec | ./lib/Headers/altivec.h | 17688 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef vector unsigned short unaligned_vec_ushort __attribute__((aligned(1)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1817 | Headers/altivec | ./lib/Headers/altivec.h | 17690 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef vector unsigned int unaligned_vec_uint __attribute__((aligned(1)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1818 | Headers/altivec | ./lib/Headers/altivec.h | 17735 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef vector unsigned long long unaligned_vec_ull __attribute__((aligned(1)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1819 | Headers/avx512bf16intrin | ./lib/Headers/avx512bf16intrin.h | 18 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned short __bfloat16;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1820 | Headers/arm_acle | ./lib/Headers/arm_acle.h | 346 |  | 声明/类型别名 | 可疑别名32位 | `typedef uint32_t uint8x4_t;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1821 | Headers/arm_acle | ./lib/Headers/arm_acle.h | 347 |  | 声明/类型别名 | 可疑别名32位 | `typedef uint32_t uint16x2_t;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1822 | Headers/avx512bwintrin | ./lib/Headers/avx512bwintrin.h | 17 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned int __mmask32;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1823 | Headers/avx512bwintrin | ./lib/Headers/avx512bwintrin.h | 18 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned long long __mmask64;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1824 | Headers/avx512bwintrin | ./lib/Headers/avx512bwintrin.h | 181 | __builtin_ia32_kshiftlisi | 计算 | 强制收窄为32位 | `((__mmask32)__builtin_ia32_kshiftlisi((__mmask32)(A), (unsigned int)(I)))` | 改为 uint64_t / 移除收窄 | TODO |
| 1825 | Headers/avx512bwintrin | ./lib/Headers/avx512bwintrin.h | 184 | __builtin_ia32_kshiftrisi | 计算 | 强制收窄为32位 | `((__mmask32)__builtin_ia32_kshiftrisi((__mmask32)(A), (unsigned int)(I)))` | 改为 uint64_t / 移除收窄 | TODO |
| 1826 | Headers/avx512bwintrin | ./lib/Headers/avx512bwintrin.h | 187 | __builtin_ia32_kshiftlidi | 计算 | 强制收窄为32位 | `((__mmask64)__builtin_ia32_kshiftlidi((__mmask64)(A), (unsigned int)(I)))` | 改为 uint64_t / 移除收窄 | TODO |
| 1827 | Headers/avx512bwintrin | ./lib/Headers/avx512bwintrin.h | 190 | __builtin_ia32_kshiftridi | 计算 | 强制收窄为32位 | `((__mmask64)__builtin_ia32_kshiftridi((__mmask64)(A), (unsigned int)(I)))` | 改为 uint64_t / 移除收窄 | TODO |
| 1828 | Headers/xmmintrin | ./lib/Headers/xmmintrin.h | 26 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned int __v4su __attribute__((__vector_size__(16)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1829 | Headers/bmi2intrin | ./lib/Headers/bmi2intrin.h | 73 |  | 计算 | 强制收窄为32位 | `*__P = (unsigned int) (__res >> 32);` | 改为 uint64_t / 移除收窄 | TODO |
| 1830 | Headers/emmintrin | ./lib/Headers/emmintrin.h | 33 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned long long __v2du __attribute__((__vector_size__(16)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1831 | Headers/emmintrin | ./lib/Headers/emmintrin.h | 34 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned short __v8hu __attribute__((__vector_size__(16)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1832 | Headers/emmintrin | ./lib/Headers/emmintrin.h | 35 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned char __v16qu __attribute__((__vector_size__(16)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1833 | Headers/lwpintrin | ./lib/Headers/lwpintrin.h | 70 | __builtin_ia32_lwpins32 | 计算 | 强制收窄为32位 | `(__builtin_ia32_lwpins32((unsigned int) (DATA2), (unsigned int) (DATA1), \` | 改为 uint64_t / 移除收窄 | TODO |
| 1834 | Headers/lwpintrin | ./lib/Headers/lwpintrin.h | 71 |  | 计算 | 强制收窄为32位 | `(unsigned int) (FLAGS)))` | 改为 uint64_t / 移除收窄 | TODO |
| 1835 | Headers/lwpintrin | ./lib/Headers/lwpintrin.h | 88 | __builtin_ia32_lwpval32 | 计算 | 强制收窄为32位 | `(__builtin_ia32_lwpval32((unsigned int) (DATA2), (unsigned int) (DATA1), \` | 改为 uint64_t / 移除收窄 | TODO |
| 1836 | Headers/lwpintrin | ./lib/Headers/lwpintrin.h | 89 |  | 计算 | 强制收窄为32位 | `(unsigned int) (FLAGS)))` | 改为 uint64_t / 移除收窄 | TODO |
| 1837 | Headers/lwpintrin | ./lib/Headers/lwpintrin.h | 111 | __builtin_ia32_lwpins64 | 计算 | 强制收窄为32位 | `(__builtin_ia32_lwpins64((unsigned long long) (DATA2), (unsigned int) (DATA1), \` | 改为 uint64_t / 移除收窄 | TODO |
| 1838 | Headers/lwpintrin | ./lib/Headers/lwpintrin.h | 112 |  | 计算 | 强制收窄为32位 | `(unsigned int) (FLAGS)))` | 改为 uint64_t / 移除收窄 | TODO |
| 1839 | Headers/lwpintrin | ./lib/Headers/lwpintrin.h | 129 | __builtin_ia32_lwpval64 | 计算 | 强制收窄为32位 | `(__builtin_ia32_lwpval64((unsigned long long) (DATA2), (unsigned int) (DATA1), \` | 改为 uint64_t / 移除收窄 | TODO |
| 1840 | Headers/lwpintrin | ./lib/Headers/lwpintrin.h | 130 |  | 计算 | 强制收窄为32位 | `(unsigned int) (FLAGS)))` | 改为 uint64_t / 移除收窄 | TODO |
| 1841 | Headers/msa | ./lib/Headers/msa.h | 16 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned char v16u8 __attribute__((vector_size(16), aligned(16)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1842 | Headers/msa | ./lib/Headers/msa.h | 17 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned char v16u8_b __attribute__((vector_size(16), aligned(1)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1843 | Headers/msa | ./lib/Headers/msa.h | 20 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned short v8u16 __attribute__((vector_size(16), aligned(16)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1844 | Headers/msa | ./lib/Headers/msa.h | 21 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned short v8u16_h __attribute__((vector_size(16), aligned(2)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1845 | Headers/msa | ./lib/Headers/msa.h | 24 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned int v4u32 __attribute__((vector_size(16), aligned(16)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1846 | Headers/msa | ./lib/Headers/msa.h | 25 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned int v4u32_w __attribute__((vector_size(16), aligned(4)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1847 | Headers/msa | ./lib/Headers/msa.h | 28 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned long long v2u64 __attribute__((vector_size(16), aligned(16)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1848 | Headers/msa | ./lib/Headers/msa.h | 29 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned long long v2u64_d __attribute__((vector_size(16), aligned(8)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1849 | Headers/waitpkgintrin | ./lib/Headers/waitpkgintrin.h | 30 |  | 计算 | 强制收窄为32位 | `(unsigned int)(__counter >> 32), (unsigned int)__counter);` | 改为 uint64_t / 移除收窄 | TODO |
| 1850 | Headers/waitpkgintrin | ./lib/Headers/waitpkgintrin.h | 37 |  | 计算 | 强制收窄为32位 | `(unsigned int)(__counter >> 32), (unsigned int)__counter);` | 改为 uint64_t / 移除收窄 | TODO |
| 1851 | Headers/htmintrin | ./lib/Headers/htmintrin.h | 21 |  | 声明/类型别名 | 可疑别名32位 | `typedef uint32_t texasru_t;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1852 | Headers/htmintrin | ./lib/Headers/htmintrin.h | 22 |  | 声明/类型别名 | 可疑别名32位 | `typedef uint32_t texasrl_t;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1853 | Headers/avx512dqintrin | ./lib/Headers/avx512dqintrin.h | 124 | __builtin_ia32_kshiftliqi | 计算 | 强制收窄为32位 | `((__mmask8)__builtin_ia32_kshiftliqi((__mmask8)(A), (unsigned int)(I)))` | 改为 uint64_t / 移除收窄 | TODO |
| 1854 | Headers/avx512dqintrin | ./lib/Headers/avx512dqintrin.h | 127 | __builtin_ia32_kshiftriqi | 计算 | 强制收窄为32位 | `((__mmask8)__builtin_ia32_kshiftriqi((__mmask8)(A), (unsigned int)(I)))` | 改为 uint64_t / 移除收窄 | TODO |
| 1855 | Headers/__clang_cuda_texture_intrinsics | ./lib/Headers/__clang_cuda_texture_intrinsics.h | 163 |  | 声明/类型别名 | 可疑别名32位 | `using __base_t = unsigned char;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1856 | Headers/__clang_cuda_texture_intrinsics | ./lib/Headers/__clang_cuda_texture_intrinsics.h | 171 |  | 声明/类型别名 | 可疑别名32位 | `using __base_t = unsigned short;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1857 | Headers/__clang_cuda_texture_intrinsics | ./lib/Headers/__clang_cuda_texture_intrinsics.h | 179 |  | 声明/类型别名 | 可疑别名32位 | `using __base_t = unsigned int;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1858 | Headers/__clang_cuda_intrinsics | ./lib/Headers/__clang_cuda_intrinsics.h | 37 |  | 计算 | 强制收窄为32位 | `return static_cast<unsigned int>( \` | 改为 uint64_t / 移除收窄 | TODO |
| 1859 | Headers/__clang_cuda_intrinsics | ./lib/Headers/__clang_cuda_intrinsics.h | 120 |  | 计算 | 强制收窄为32位 | `return static_cast<unsigned int>( \` | 改为 uint64_t / 移除收窄 | TODO |
| 1860 | Headers/__clang_cuda_intrinsics | ./lib/Headers/__clang_cuda_intrinsics.h | 359 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned char uc2 __attribute__((ext_vector_type(2)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1861 | Headers/__clang_cuda_intrinsics | ./lib/Headers/__clang_cuda_intrinsics.h | 367 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned char uc4 __attribute__((ext_vector_type(4)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1862 | Headers/__clang_cuda_intrinsics | ./lib/Headers/__clang_cuda_intrinsics.h | 377 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned short us2 __attribute__((ext_vector_type(2)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1863 | Headers/__clang_cuda_intrinsics | ./lib/Headers/__clang_cuda_intrinsics.h | 385 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned short us4 __attribute__((ext_vector_type(4)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1864 | Headers/__clang_cuda_intrinsics | ./lib/Headers/__clang_cuda_intrinsics.h | 395 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned int ui2 __attribute__((ext_vector_type(2)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1865 | Headers/__clang_cuda_intrinsics | ./lib/Headers/__clang_cuda_intrinsics.h | 403 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned int ui4 __attribute__((ext_vector_type(4)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1866 | Headers/__clang_cuda_intrinsics | ./lib/Headers/__clang_cuda_intrinsics.h | 413 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned long long ull2 __attribute__((ext_vector_type(2)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1867 | Headers/avx512fp16intrin | ./lib/Headers/avx512fp16intrin.h | 2306 | __builtin_ia32_vcvtusi2sh | 计算 | 强制收窄为32位 | `((__m128h)__builtin_ia32_vcvtusi2sh((__v8hf)(A), (unsigned int)(B), (int)(R)))` | 改为 uint64_t / 移除收窄 | TODO |
| 1868 | Headers/xsaveintrin | ./lib/Headers/xsaveintrin.h | 36 | _xsetbv | 计算 | 强制收窄为32位 | `#define _xsetbv(A, B) __builtin_ia32_xsetbv((unsigned int)(A), (unsigned long long)(B))` | 改为 uint64_t / 移除收窄 | TODO |
| 1869 | Headers/avx512fintrin | ./lib/Headers/avx512fintrin.h | 24 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned char __v64qu __attribute__((__vector_size__(64)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1870 | Headers/avx512fintrin | ./lib/Headers/avx512fintrin.h | 25 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned short __v32hu __attribute__((__vector_size__(64)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1871 | Headers/avx512fintrin | ./lib/Headers/avx512fintrin.h | 26 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned long long __v8du __attribute__((__vector_size__(64)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1872 | Headers/avx512fintrin | ./lib/Headers/avx512fintrin.h | 27 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef unsigned int __v16su __attribute__((__vector_size__(64)));` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1873 | Headers/avx512fintrin | ./lib/Headers/avx512fintrin.h | 41 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned char __mmask8;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1874 | Headers/avx512fintrin | ./lib/Headers/avx512fintrin.h | 42 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned short __mmask16;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1875 | Headers/avx512fintrin | ./lib/Headers/avx512fintrin.h | 8426 | __builtin_ia32_kshiftlihi | 计算 | 强制收窄为32位 | `((__mmask16)__builtin_ia32_kshiftlihi((__mmask16)(A), (unsigned int)(I)))` | 改为 uint64_t / 移除收窄 | TODO |
| 1876 | Headers/avx512fintrin | ./lib/Headers/avx512fintrin.h | 8429 | __builtin_ia32_kshiftrihi | 计算 | 强制收窄为32位 | `((__mmask16)__builtin_ia32_kshiftrihi((__mmask16)(A), (unsigned int)(I)))` | 改为 uint64_t / 移除收窄 | TODO |
| 1877 | Headers/avx512fintrin | ./lib/Headers/avx512fintrin.h | 9149 | __builtin_ia32_cvtusi2ss32 | 计算 | 强制收窄为32位 | `((__m128)__builtin_ia32_cvtusi2ss32((__v4sf)(__m128)(A), (unsigned int)(B), \` | 改为 uint64_t / 移除收窄 | TODO |
| 1878 | Headers/stdint | ./lib/Headers/stdint.h | 172 |  | 声明/类型别名 | 可疑别名32位 | `typedef __UINT32_TYPE__ uint32_t;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1879 | Headers/tbmintrin | ./lib/Headers/tbmintrin.h | 21 | __builtin_ia32_bextri_u32 | 计算 | 强制收窄为32位 | `((unsigned int)__builtin_ia32_bextri_u32((unsigned int)(a), \` | 改为 uint64_t / 移除收窄 | TODO |
| 1880 | Headers/tbmintrin | ./lib/Headers/tbmintrin.h | 22 |  | 计算 | 强制收窄为32位 | `(unsigned int)(b)))` | 改为 uint64_t / 移除收窄 | TODO |
| 1881 | Headers/stdatomic | ./lib/Headers/stdatomic.h | 90 | _Atomic | 声明/类型别名 | 可疑别名32位 | `typedef _Atomic(unsigned char) atomic_uchar;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1882 | Headers/stdatomic | ./lib/Headers/stdatomic.h | 92 | _Atomic | 声明/类型别名 | 可疑别名32位 | `typedef _Atomic(unsigned short) atomic_ushort;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1883 | Headers/stdatomic | ./lib/Headers/stdatomic.h | 94 | _Atomic | 声明/类型别名 | 可疑别名32位 | `typedef _Atomic(unsigned int) atomic_uint;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1884 | Headers/stdatomic | ./lib/Headers/stdatomic.h | 96 | _Atomic | 声明/类型别名 | 可疑别名32位 | `typedef _Atomic(unsigned long) atomic_ulong;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1885 | Headers/stdatomic | ./lib/Headers/stdatomic.h | 98 | _Atomic | 声明/类型别名 | 可疑别名32位 | `typedef _Atomic(unsigned long long) atomic_ullong;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1886 | Headers/unwind | ./lib/Headers/unwind.h | 110 |  | 声明/类型别名 | 可疑别名32位 | `typedef uint32_t _Unwind_EHT_Header;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1887 | Headers/unwind | ./lib/Headers/unwind.h | 196 |  | 声明/类型别名 | 可疑别名32位 | `typedef uint32_t _Unwind_State;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1888 | Headers/hlsl | ./lib/Headers/hlsl/hlsl_basic_types.h | 16 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned short uint16_t;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1889 | Headers/hlsl | ./lib/Headers/hlsl/hlsl_basic_types.h | 21 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned int uint;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1890 | Headers/hlsl | ./lib/Headers/hlsl/hlsl_basic_types.h | 24 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned long uint64_t;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1891 | Headers/ppc_wrappers | ./lib/Headers/ppc_wrappers/bmi2intrin.h | 27 |  | 计算 | 强制收窄为32位 | `*__P = (unsigned int)(__res >> 32);` | 改为 uint64_t / 移除收窄 | TODO |
| 1892 | Headers/ppc_wrappers | ./lib/Headers/ppc_wrappers/emmintrin.h | 50 |  | 声明/类型别名 | 可疑别名32位 | `typedef __vector unsigned long long __v2du;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1893 | Headers/ppc_wrappers | ./lib/Headers/ppc_wrappers/emmintrin.h | 52 |  | 声明/类型别名 | 可疑别名32位 | `typedef __vector unsigned int __v4su;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1894 | Headers/ppc_wrappers | ./lib/Headers/ppc_wrappers/emmintrin.h | 54 |  | 声明/类型别名 | 可疑别名32位 | `typedef __vector unsigned short __v8hu;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1895 | Headers/ppc_wrappers | ./lib/Headers/ppc_wrappers/emmintrin.h | 56 |  | 声明/类型别名 | 可疑别名32位 | `typedef __vector unsigned char __v16qu;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1896 | Headers/ppc_wrappers | ./lib/Headers/ppc_wrappers/mmintrin.h | 44 | __attribute__ | 声明/类型别名 | 可疑别名32位 | `typedef __attribute__((__aligned__(8))) unsigned long long __m64;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 1897 | Basic/FileManager | ./lib/Basic/FileManager.cpp | 414 | getVirtualFile | I/O | 平台I/O偏移需复核 | `const FileEntry *FileManager::getVirtualFile(StringRef Filename, off_t Size,` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 1898 | Basic/FileManager | ./lib/Basic/FileManager.cpp | 419 | getVirtualFileRef | I/O | 平台I/O偏移需复核 | `FileEntryRef FileManager::getVirtualFileRef(StringRef Filename, off_t Size,` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 1899 | Basic/Module | ./lib/Basic/Module.cpp | 139 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned I = 0, N = Current->Requirements.size(); I != N; ++I) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1900 | Basic/Module | ./lib/Basic/Module.cpp | 332 | find | 声明/局部 | 无关键词的32位位置变量（需复核） | `llvm::StringMap<unsigned>::const_iterator Pos = SubModuleIndex.find(Name);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1901 | Basic/Module | ./lib/Basic/Module.cpp | 340 | find | 声明/局部 | 无关键词的32位位置变量（需复核） | `llvm::StringMap<unsigned>::const_iterator Pos = SubModuleIndex.find(Name);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1902 | Basic/DiagnosticIDs | ./lib/Basic/DiagnosticIDs.cpp | 149 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(diag::NUM_BUILTIN_##NAME##_DIAGNOSTICS) < \` | 改为 uint64_t / 移除收窄 | TODO |
| 1903 | Basic/DiagnosticIDs | ./lib/Basic/DiagnosticIDs.cpp | 150 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(diag::DIAG_START_##NAME) + \` | 改为 uint64_t / 移除收窄 | TODO |
| 1904 | Basic/DiagnosticIDs | ./lib/Basic/DiagnosticIDs.cpp | 151 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(diag::DIAG_SIZE_##NAME), \` | 改为 uint64_t / 移除收窄 | TODO |
| 1905 | Basic/DiagnosticIDs | ./lib/Basic/DiagnosticIDs.cpp | 223 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1906 | Basic/DiagnosticIDs | ./lib/Basic/DiagnosticIDs.cpp | 224 |  | 计算 | 指针差值落入32位 | `unsigned ID = DiagID - DIAG_START_COMMON - 1;` | 用 uint64_t 接收指针差值 | TODO |
| 1907 | Basic/DiagnosticIDs | ./lib/Basic/DiagnosticIDs.cpp | 491 | getDiagnosticLevel | 声明/局部 | 仅命名可疑需复核 | `DiagnosticIDs::getDiagnosticLevel(unsigned DiagID, SourceLocation Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1908 | Basic/DiagnosticIDs | ./lib/Basic/DiagnosticIDs.cpp | 511 | getDiagnosticSeverity | 声明/局部 | 仅命名可疑需复核 | `DiagnosticIDs::getDiagnosticSeverity(unsigned DiagID, SourceLocation Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1909 | Basic/DiagnosticIDs | ./lib/Basic/DiagnosticIDs.cpp | 588 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Diag.getSourceManager().getExpansionLoc(Loc)))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1910 | Basic/DiagnosticIDs | ./lib/Basic/DiagnosticIDs.cpp | 708 |  | 计算 | 强制收窄为32位 | `Flavor, &OptionTable[static_cast<unsigned>(*G)], Diags);` | 改为 uint64_t / 移除收窄 | TODO |
| 1911 | Basic/Sarif | ./lib/Basic/Sarif.cpp | 117 | adjustColumnPos | 声明/局部 | 仅命名可疑需复核 | `static unsigned int adjustColumnPos(FullSourceLoc Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1912 | Basic/Sarif | ./lib/Basic/Sarif.cpp | 121 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = Loc.getDecomposedLoc();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1913 | Basic/Sarif | ./lib/Basic/Sarif.cpp | 130 | getExpansionColumnNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned int Off = LocInfo.second - (Loc.getExpansionColumnNumber() - 1);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1914 | Basic/Sarif | ./lib/Basic/Sarif.cpp | 198 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `const FileEntry *FE = Start.getExpansionLoc().getFileEntry();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1915 | Basic/Sarif | ./lib/Basic/Sarif.cpp | 205 | size | 计算 | 强制收窄为32位 | `uint32_t Idx = static_cast<uint32_t>(CurrentArtifacts.size());` | 改为 uint64_t / 移除收窄 | TODO |
| 1916 | Basic/Sarif | ./lib/Basic/Sarif.cpp | 220 | value | 声明/局部 | 仅命名可疑需复核 | `uint32_t Idx = Location.Index.value();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1917 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 203 | AddLineNote | 声明/局部 | 仅命名可疑需复核 | `void LineTableInfo::AddLineNote(FileID FID, unsigned Offset, unsigned LineNo,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1918 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 234 | push_back | 比较/实现 | 关键函数相关（需复核） | `Entries.push_back(LineEntry::get(Offset, LineNo, FilenameID, FileKind,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1919 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 241 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1920 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 272 | AddLineNote | 序列化 | 序列化位置读写（需复核） | `void SourceManager::AddLineNote(SourceLocation Loc, unsigned LineNo,` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 1921 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 276 | getDecomposedExpansionLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = getDecomposedExpansionLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1922 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 500 | if | 计算 | 强制收窄为32位 | `} else if (unsigned(-(ID-1) - 2) >= LoadedSLocEntryTable.size()) {` | 改为 uint64_t / 移除收窄 | TODO |
| 1923 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 515 | if | 计算 | 强制收窄为32位 | `if (unsigned(ID+1) >= local_sloc_entry_size())` | 改为 uint64_t / 移除收窄 | TODO |
| 1924 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 605 | unsigned | 计算 | 强制收窄为32位 | `unsigned Index = unsigned(-LoadedID) - 2;` | 改为 uint64_t / 移除收窄 | TODO |
| 1925 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 620 | get | 比较/实现 | 关键函数相关（需复核） | `SLocEntry::get(NextLocalOffset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1926 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 656 | getOffset | 比较/实现 | 关键函数相关（需复核） | `TokenEnd.getOffset() - TokenStart.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1927 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 665 | unsigned | 计算 | 强制收窄为32位 | `unsigned Index = unsigned(-LoadedID) - 2;` | 改为 uint64_t / 移除收窄 | TODO |
| 1928 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 668 | get | 比较/实现 | 关键函数相关（需复核） | `LoadedSLocEntryTable[Index] = SLocEntry::get(LoadedOffset, Info);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1929 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 670 | getMacroLoc | 比较/实现 | 关键函数相关（需复核） | `return SourceLocation::getMacroLoc(LoadedOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1930 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 672 | push_back | 比较/实现 | 关键函数相关（需复核） | `LocalSLocEntryTable.push_back(SLocEntry::get(NextLocalOffset, Info));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1931 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 678 | getMacroLoc | 比较/实现 | 关键函数相关（需复核） | `return SourceLocation::getMacroLoc(NextLocalOffset - (Length + 1));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1932 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 764 | getFileIDSlow | 比较/实现 | 关键函数相关（需复核） | `FileID SourceManager::getFileIDSlow(SourceLocation::UIntTy SLocOffset) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1933 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 771 | getFileIDLocal | 比较/实现 | 关键函数相关（需复核） | `return getFileIDLocal(SLocOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1934 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 772 | getFileIDLoaded | 比较/实现 | 关键函数相关（需复核） | `return getFileIDLoaded(SLocOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1935 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 779 | getFileIDLocal | 比较/实现 | 关键函数相关（需复核） | `FileID SourceManager::getFileIDLocal(SourceLocation::UIntTy SLocOffset) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1936 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 796 | getOffset | 比较/实现 | 关键函数相关（需复核） | `LocalSLocEntryTable[LastFileIDLookup.ID].getOffset() < SLocOffset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1937 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 809 | if | 比较/实现 | 关键函数相关（需复核） | `if (I->getOffset() <= SLocOffset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1938 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 822 | begin | 计算 | 指针差值落入32位 | `unsigned GreaterIndex = I - LocalSLocEntryTable.begin();` | 用 uint64_t 接收指针差值 | TODO |
| 1939 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 829 | while | 计算 | 复杂指针差值收窄 | `NumProbes = 0; while (true) { unsigned MiddleIndex = (GreaterIndex-LessIndex)/2+LessIndex;` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1940 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 830 | while | 计算 | 复杂指针差值收窄 | `while (true) { unsigned MiddleIndex = (GreaterIndex-LessIndex)/2+LessIndex; SourceLocation::UIntTy MidOffset =` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1941 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 831 | getLocalSLocEntry | 比较/实现 | 关键函数相关（需复核） | `unsigned MiddleIndex = (GreaterIndex-LessIndex)/2+LessIndex; SourceLocation::UIntTy MidOffset = getLocalSLocEntry(MiddleIndex).getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1942 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 831 | getLocalSLocEntry | 计算 | 复杂指针差值收窄 | `unsigned MiddleIndex = (GreaterIndex-LessIndex)/2+LessIndex; SourceLocation::UIntTy MidOffset = getLocalSLocEntry(MiddleIndex).getOffset();` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1943 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 844 | getLocalSLocEntry | 比较/实现 | 关键函数相关（需复核） | `SLocOffset < getLocalSLocEntry(MiddleIndex + 1).getOffset()) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1944 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 862 | getFileIDLoaded | 比较/实现 | 关键函数相关（需复核） | `FileID SourceManager::getFileIDLoaded(SourceLocation::UIntTy SLocOffset) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1945 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 874 | if | 比较/实现 | 关键函数相关（需复核） | `if (LastID >= 0 \|\| getLoadedSLocEntryByID(LastID).getOffset() < SLocOffset)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1946 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 883 | if | 比较/实现 | 关键函数相关（需复核） | `if (E.getOffset() <= SLocOffset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1947 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 899 | while | 计算 | 复杂指针差值收窄 | `while (true) { ++NumProbes; unsigned MiddleIndex = (LessIndex - GreaterIndex) / 2 + GreaterIndex;` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1948 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 900 | getLoadedSLocEntry | 计算 | 复杂指针差值收窄 | `++NumProbes; unsigned MiddleIndex = (LessIndex - GreaterIndex) / 2 + GreaterIndex; const SrcMgr::SLocEntry &E = getLoadedSLocEntry(MiddleI…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1949 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 901 | getLoadedSLocEntry | 比较/实现 | 关键函数相关（需复核） | `unsigned MiddleIndex = (LessIndex - GreaterIndex) / 2 + GreaterIndex; const SrcMgr::SLocEntry &E = getLoadedSLocEntry(MiddleIndex); if (E.…` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1950 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 901 | getLoadedSLocEntry | 计算 | 复杂指针差值收窄 | `unsigned MiddleIndex = (LessIndex - GreaterIndex) / 2 + GreaterIndex; const SrcMgr::SLocEntry &E = getLoadedSLocEntry(MiddleIndex); if (E.…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 1951 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 906 | if | 比较/实现 | 关键函数相关（需复核） | `if (E.getOffset() > SLocOffset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1952 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 915 | if | 比较/实现 | 关键函数相关（需复核） | `if (isOffsetInFileID(FileID::get(-int(MiddleIndex) - 2), SLocOffset)) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1953 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 947 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1954 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 948 | getSLocEntry | 比较/实现 | 关键函数相关（需复核） | `Loc = getSLocEntry(LocInfo.first).getExpansion().getSpellingLoc();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1955 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 949 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc = Loc.getLocWithOffset(LocInfo.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1956 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 971 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1957 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 977 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Offset = Loc.getOffset()-E->getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1958 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 985 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset) const {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1959 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 990 | getExpansion | 比较/实现 | 关键函数相关（需复核） | `Loc = E->getExpansion().getSpellingLoc();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1960 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 991 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc = Loc.getLocWithOffset(Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1961 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 995 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Offset = Loc.getOffset()-E->getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1962 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1007 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1963 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1008 | getSLocEntry | 比较/实现 | 关键函数相关（需复核） | `Loc = getSLocEntry(LocInfo.first).getExpansion().getSpellingLoc();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1964 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1009 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return Loc.getLocWithOffset(LocInfo.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1965 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1079 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> DecompLoc = getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1966 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1115 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation NextLoc = Loc.getLocWithOffset(1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1967 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1176 |  | 比较/实现 | 关键函数相关（需复核） | `/// getColumnNumber - Return the column # for the specified file position.` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1968 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1178 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned SourceManager::getColumnNumber(FileID FID, unsigned FilePos,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1969 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1232 | getSpellingColumnNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned SourceManager::getSpellingColumnNumber(SourceLocation Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1970 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1235 | getDecomposedSpellingLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = getDecomposedSpellingLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1971 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1236 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `return getColumnNumber(LocInfo.first, LocInfo.second, Invalid);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1972 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1239 | getExpansionColumnNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned SourceManager::getExpansionColumnNumber(SourceLocation Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1973 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1242 | getDecomposedExpansionLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = getDecomposedExpansionLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1974 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1243 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `return getColumnNumber(LocInfo.first, LocInfo.second, Invalid);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1975 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1246 | getPresumedColumnNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned SourceManager::getPresumedColumnNumber(SourceLocation Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1976 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1248 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1977 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1271 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 256> LineOffsets;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1978 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1277 | getBufferEnd | 声明/局部 | 无关键词的32位位置变量（需复核） | `const unsigned char *End = (const unsigned char *)Buffer.getBufferEnd();` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1979 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1331 | LineOffsetMapping | 声明/容器 | 容器承载32位位置 | `LineOffsetMapping::LineOffsetMapping(ArrayRef<unsigned> LineOffsets,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 1980 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1338 |  | 比较/实现 | 关键函数相关（需复核） | `/// getLineNumber - Given a SourceLocation, return the spelling line number` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1981 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1342 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned SourceManager::getLineNumber(FileID FID, unsigned FilePos,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1982 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1428 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `const unsigned *Pos =` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1983 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1430 |  | 计算 | 指针差值落入32位 | `unsigned LineNo = Pos-SourceLineCacheStart;` | 用 uint64_t 接收指针差值 | TODO |
| 1984 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1430 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned LineNo = Pos-SourceLineCacheStart;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 1985 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1439 | getSpellingLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned SourceManager::getSpellingLineNumber(SourceLocation Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1986 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1442 | getDecomposedSpellingLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = getDecomposedSpellingLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1987 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1443 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `return getLineNumber(LocInfo.first, LocInfo.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1988 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1445 | getExpansionLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned SourceManager::getExpansionLineNumber(SourceLocation Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1989 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1448 | getDecomposedExpansionLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = getDecomposedExpansionLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1990 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1449 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `return getLineNumber(LocInfo.first, LocInfo.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1991 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1451 | getPresumedLineNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned SourceManager::getPresumedLineNumber(SourceLocation Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1992 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1453 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1993 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1469 | getDecomposedExpansionLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = getDecomposedExpansionLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1994 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1494 |  | 比较/实现 | 关键函数相关（需复核） | `/// Note that this name does not respect \#line directives. Use getPresumedLoc` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1995 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1506 |  | 比较/实现 | 关键函数相关（需复核） | `/// getPresumedLoc - This method returns the "presumed" location of a` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1996 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1513 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc SourceManager::getPresumedLoc(SourceLocation Loc,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1997 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1518 | getDecomposedExpansionLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = getDecomposedExpansionLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 1998 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1538 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned LineNo = getLineNumber(LocInfo.first, LocInfo.second, &Invalid);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 1999 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1541 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned ColNo = getColumnNumber(LocInfo.first, LocInfo.second, &Invalid);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2000 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1566 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned MarkerLineNo = getLineNumber(LocInfo.first, Entry->FileOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2001 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1574 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `IncludeLoc = IncludeLoc.getLocWithOffset(Entry->IncludeOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2002 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1593 | getDecomposedExpansionLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = getDecomposedExpansionLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2003 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1620 | if | 计算 | 强制收窄为32位 | `if ((ID > 0 && unsigned(ID+1) == local_sloc_entry_size()))` | 改为 uint64_t / 移除收窄 | TODO |
| 2004 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1621 | getNextLocalOffset | 比较/实现 | 关键函数相关（需复核） | `NextOffset = getNextLocalOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2005 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1625 | getSLocEntry | 比较/实现 | 关键函数相关（需复核） | `NextOffset = getSLocEntry(FileID::get(ID+1)).getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2006 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1627 | getOffset | 比较/实现 | 关键函数相关（需复核） | `return NextOffset - Entry.getOffset() - 1;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2007 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1639 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2008 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1692 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2009 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1709 | getFileLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation FileLoc = SourceLocation::getFileLoc(Entry.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2010 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1730 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return FileLoc.getLocWithOffset(Size);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2011 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1733 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned FilePos = Content->SourceLineCache[Line - 1];` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2012 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1737 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return FileLoc.getLocWithOffset(FilePos);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2013 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1744 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return FileLoc.getLocWithOffset(FilePos + i);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2014 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1766 | if | 计算 | 强制收窄为32位 | `if (unsigned(ID) >= local_sloc_entry_size())` | 改为 uint64_t / 移除收窄 | TODO |
| 2015 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1814 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `ExpInfo.getSpellingLoc(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2016 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1815 | getMacroLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation::getMacroLoc(Entry.getOffset()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2017 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1827 | getOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation::UIntTy SpellBeginOffs = SpellLoc.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2018 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1840 | getOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation::UIntTy SpellFIDBeginOffs = Entry.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2019 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1851 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `Info.getSpellingLoc().getLocWithOffset(SpellRelativeOffs),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2020 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1859 |  | 计算 | 指针差值落入32位 | `unsigned advance = SpellFIDSize - SpellRelativeOffs + 1;` | 用 uint64_t 接收指针差值 | TODO |
| 2021 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1860 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `ExpansionLoc = ExpansionLoc.getLocWithOffset(advance);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2022 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1914 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2023 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1937 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return MacroArgExpandedLoc.getLocWithOffset(Offset - MacroArgBeginOffs);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2024 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1949 |  | 声明/类型别名 | 可疑别名32位 | `using DecompTy = std::pair<FileID, unsigned>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2025 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1975 | MoveUpIncludeHierarchy | 声明/局部 | 仅命名可疑需复核 | `static bool MoveUpIncludeHierarchy(std::pair<FileID, unsigned> &Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2026 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1977 | getDecomposedIncludedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> UpperLoc = SM.getDecomposedIncludedLoc(Loc.first);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2027 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 1986 |  | 比较/实现 | 关键函数相关（需复核） | `/// for isBeforeInTranslationUnit.` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2028 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 2014 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `bool SourceManager::isBeforeInTranslationUnit(SourceLocation LHS,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2029 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 2095 |  | 声明/类型别名 | 可疑别名32位 | `using LocSet = llvm::SmallDenseMap<FileID, unsigned, 16>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2030 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 2156 | getOffset | 比较/实现 | 关键函数相关（需复核） | `<< " <SourceLocation " << Entry.getOffset() << ":";` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2031 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 2167 | getIncludeLoc | 比较/实现 | 关键函数相关（需复核） | `out << " included from " << FI.getIncludeLoc().getOffset() << "\n";` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2032 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 2180 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `out << " spelling from " << EI.getSpellingLoc().getOffset() << "\n";` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2033 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 2182 | getExpansionLocStart | 比较/实现 | 关键函数相关（需复核） | `<< " range <" << EI.getExpansionLocStart().getOffset() << ":"` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2034 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 2183 | getExpansionLocEnd | 比较/实现 | 关键函数相关（需复核） | `<< EI.getExpansionLocEnd().getOffset() << ">\n";` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2035 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 2191 | getOffset | 比较/实现 | 关键函数相关（需复核） | `: LocalSLocEntryTable[ID + 1].getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2036 | Basic/SourceManager | ./lib/Basic/SourceManager.cpp | 2199 | getOffset | 比较/实现 | 关键函数相关（需复核） | `NextStart = LoadedSLocEntryTable[Index].getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2037 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 191 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> Decomp = SrcMgr.getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2038 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 192 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = Decomp.second;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2039 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 217 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> Decomp = SrcMgr.getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2040 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 223 | lookup | 声明/局部 | 仅命名可疑需复核 | `DiagnosticsEngine::DiagStateMap::File::lookup(unsigned Offset) const {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2041 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 253 |  | 比较/实现 | 关键函数相关（需复核） | `// isBeforeInTranslationUnit in the cases where someone invented another` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2042 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 255 |  | 比较/实现 | 关键函数相关（需复核） | `// end of isBeforeInTranslationUnit for the quirks it deals with.` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2043 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 286 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `.getLocWithOffset(Decomp.second)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2044 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 306 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `.getLocWithOffset(Transition.Offset)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2045 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 659 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `/// PluralNumber - Parse an unsigned integer and advance Start.` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2046 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 660 | PluralNumber | 声明/局部 | 无关键词的32位位置变量（需复核） | `static unsigned PluralNumber(const char *&Start, const char *End) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2047 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 672 | TestPluralRange | 声明/局部 | 无关键词的32位位置变量（需复核） | `static bool TestPluralRange(unsigned Val, const char *&Start, const char *End) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2048 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 674 | PluralNumber | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Ref = PluralNumber(Start, End);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2049 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 679 | PluralNumber | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Low = PluralNumber(Start, End);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2050 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 682 | PluralNumber | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned High = PluralNumber(Start, End);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2051 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 689 | EvalPluralExpr | 声明/局部 | 无关键词的32位位置变量（需复核） | `static bool EvalPluralExpr(unsigned ValNo, const char *Start, const char *End) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2052 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 699 | PluralNumber | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Arg = PluralNumber(Start, End);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2053 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 813 | size | 声明/局部 | 无关键词的32位位置变量（需复核） | `const unsigned char *End = Begin + Str.size();` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2054 | Basic/Diagnostic | ./lib/Basic/Diagnostic.cpp | 824 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `const unsigned char *CodepointBegin = Begin;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2055 | Basic/IdentifierTable | ./lib/Basic/IdentifierTable.cpp | 386 |  | 计算 | 指针差值落入32位 | `unsigned NumEmptyBuckets = NumBuckets-NumIdentifiers;` | 用 uint64_t 接收指针差值 | TODO |
| 2056 | Basic/OpenMPKinds | ./lib/Basic/OpenMPKinds.cpp | 28 | OMP_DEFAULT_KIND | 计算 | 强制收窄为32位 | `#define OMP_DEFAULT_KIND(Enum, Name) .Case(Name, unsigned(Enum))` | 改为 uint64_t / 移除收窄 | TODO |
| 2057 | Basic/OpenMPKinds | ./lib/Basic/OpenMPKinds.cpp | 30 | Default | 计算 | 强制收窄为32位 | `.Default(unsigned(llvm::omp::OMP_DEFAULT_unknown));` | 改为 uint64_t / 移除收窄 | TODO |
| 2058 | Basic/OpenMPKinds | ./lib/Basic/OpenMPKinds.cpp | 35 | Default | 计算 | 强制收窄为32位 | `.Default(unsigned(llvm::omp::OMP_PROC_BIND_unknown));` | 改为 uint64_t / 移除收窄 | TODO |
| 2059 | Basic/OpenMPKinds | ./lib/Basic/OpenMPKinds.cpp | 39 | Case | 计算 | 强制收窄为32位 | `.Case(#Name, static_cast<unsigned>(OMPC_SCHEDULE_##Name))` | 改为 uint64_t / 移除收窄 | TODO |
| 2060 | Basic/OpenMPKinds | ./lib/Basic/OpenMPKinds.cpp | 41 | Case | 计算 | 强制收窄为32位 | `.Case(#Name, static_cast<unsigned>(OMPC_SCHEDULE_MODIFIER_##Name))` | 改为 uint64_t / 移除收窄 | TODO |
| 2061 | Basic/OpenMPKinds | ./lib/Basic/OpenMPKinds.cpp | 61 | Case | 计算 | 强制收窄为32位 | `.Case(#Name, static_cast<unsigned>(OMPC_MAP_##Name))` | 改为 uint64_t / 移除收窄 | TODO |
| 2062 | Basic/OpenMPKinds | ./lib/Basic/OpenMPKinds.cpp | 63 | Case | 计算 | 强制收窄为32位 | `.Case(#Name, static_cast<unsigned>(OMPC_MAP_MODIFIER_##Name))` | 改为 uint64_t / 移除收窄 | TODO |
| 2063 | Basic/OpenMPKinds | ./lib/Basic/OpenMPKinds.cpp | 76 | Case | 计算 | 强制收窄为32位 | `.Case(#Name, static_cast<unsigned>(OMPC_MOTION_MODIFIER_##Name))` | 改为 uint64_t / 移除收窄 | TODO |
| 2064 | Basic/OpenMPKinds | ./lib/Basic/OpenMPKinds.cpp | 91 | Case | 计算 | 强制收窄为32位 | `.Case(#Name, static_cast<unsigned>(OMPC_DEFAULTMAP_##Name))` | 改为 uint64_t / 移除收窄 | TODO |
| 2065 | Basic/OpenMPKinds | ./lib/Basic/OpenMPKinds.cpp | 93 | Case | 计算 | 强制收窄为32位 | `.Case(#Name, static_cast<unsigned>(OMPC_DEFAULTMAP_MODIFIER_##Name))` | 改为 uint64_t / 移除收窄 | TODO |
| 2066 | Basic/OpenMPKinds | ./lib/Basic/OpenMPKinds.cpp | 656 | assert | 计算 | 强制收窄为32位 | `assert(unsigned(DKind) < llvm::omp::Directive_enumSize);` | 改为 uint64_t / 移除收窄 | TODO |
| 2067 | Basic/LangOptions | ./lib/Basic/LangOptions.cpp | 29 |  | 计算 | 强制收窄为32位 | `Name = static_cast<unsigned>(Default);` | 改为 uint64_t / 移除收窄 | TODO |
| 2068 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 69 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(*this);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2069 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 81 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SM.getExpansionLoc(*this).print(OS, SM);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2070 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 84 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SM.getSpellingLoc(*this).print(OS, SM);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2071 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 110 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2072 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 128 | PrintDifference | 比较/实现 | 关键函数相关（需复核） | `auto PrintedLoc = PrintDifference(OS, SM, SM.getExpansionLoc(Loc), Previous);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2073 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 131 | PrintDifference | 比较/实现 | 关键函数相关（需复核） | `PrintedLoc = PrintDifference(OS, SM, SM.getSpellingLoc(Loc), PrintedLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2074 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 164 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `FullSourceLoc FullSourceLoc::getExpansionLoc() const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2075 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 166 | FullSourceLoc | 比较/实现 | 关键函数相关（需复核） | `return FullSourceLoc(SrcMgr->getExpansionLoc(*this), *SrcMgr);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2076 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 169 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `FullSourceLoc FullSourceLoc::getSpellingLoc() const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2077 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 171 | FullSourceLoc | 比较/实现 | 关键函数相关（需复核） | `return FullSourceLoc(SrcMgr->getSpellingLoc(*this), *SrcMgr);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2078 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 179 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc FullSourceLoc::getPresumedLoc(bool UseLineDirectives) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2079 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 183 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `return SrcMgr->getPresumedLoc(*this, UseLineDirectives);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2080 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 206 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned FullSourceLoc::getFileOffset() const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2081 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 208 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `return SrcMgr->getFileOffset(*this);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2082 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 211 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned FullSourceLoc::getLineNumber(bool *Invalid) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2083 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 213 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `return SrcMgr->getLineNumber(getFileID(), getFileOffset(), Invalid);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2084 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 216 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned FullSourceLoc::getColumnNumber(bool *Invalid) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2085 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 218 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `return SrcMgr->getColumnNumber(getFileID(), getFileOffset(), Invalid);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2086 | Basic/SourceLocation | ./lib/Basic/SourceLocation.cpp | 253 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return SrcMgr->isBeforeInTranslationUnit(*this, Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2087 | Basic/Targets | ./lib/Basic/Targets/X86.cpp | 1307 | getCPUCacheLineSize | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> X86TargetInfo::getCPUCacheLineSize() const {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2088 | Basic/Targets | ./lib/Basic/Targets/X86.h | 210 | getCPUCacheLineSize | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> getCPUCacheLineSize() const override;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2089 | Basic/Targets | ./lib/Basic/Targets/X86.h | 428 |  | 计算 | 强制收窄为32位 | `(unsigned)(FloatModeKind::Float \| FloatModeKind::Double \|` | 改为 uint64_t / 移除收窄 | TODO |
| 2090 | Basic/Targets | ./lib/Basic/Targets/ARM.cpp | 1281 | getArch | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = Triple.getArch() == llvm::Triple::arm ? 4 : 6;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2091 | Basic/Targets | ./lib/Basic/Targets/ARM.cpp | 1282 | defineMacro | 比较/实现 | 关键函数相关（需复核） | `Builder.defineMacro("_M_ARM", Triple.getArchName().substr(Offset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2092 | Basic/Targets | ./lib/Basic/Targets/AMDGPU.h | 386 |  | 计算 | 强制收窄为32位 | `return static_cast<unsigned>(Constant);` | 改为 uint64_t / 移除收窄 | TODO |
| 2093 | Basic/Targets | ./lib/Basic/Targets/AMDGPU.h | 395 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2094 | Basic/Targets | ./lib/Basic/Targets/OSTargets.h | 673 | defineMacro | I/O | 平台I/O偏移需复核 | `Builder.defineMacro("_FILE_OFFSET_BITS", "64");` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 2095 | Basic/Targets | ./lib/Basic/Targets/NVPTX.h | 160 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2096 | Basic/Targets | ./lib/Basic/Targets/SPIR.h | 124 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2097 | Tooling/InterpolatingCompilationDatabase | ./lib/Tooling/InterpolatingCompilationDatabase.cpp | 162 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned Pos = 1; Pos < OldArgs.size();) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2098 | Tooling/InterpolatingCompilationDatabase | ./lib/Tooling/InterpolatingCompilationDatabase.cpp | 165 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `const unsigned OldPos = Pos;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2099 | Tooling/DependencyScanning | ./lib/Tooling/DependencyScanning/ModuleDepCollector.cpp | 184 | getNonBuiltinFilenameForID | 比较/实现 | 关键函数相关（需复核） | `SM.getNonBuiltinFilenameForID(SM.getFileID(SM.getExpansionLoc(Loc))))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2100 | Tooling/Transformer | ./lib/Tooling/Transformer/SourceCode.cpp | 68 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> BeginInfo = SM.getDecomposedLoc(Range.getBegin());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2101 | Tooling/Transformer | ./lib/Tooling/Transformer/SourceCode.cpp | 69 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> EndInfo = SM.getDecomposedLoc(Range.getEnd());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2102 | Tooling/Transformer | ./lib/Tooling/Transformer/SourceCode.cpp | 138 | getBufferData | 比较/实现 | 关键函数相关（需复核） | `llvm::StringRef File = SM.getBufferData(FileOffset.first, &Invalid);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2103 | Tooling/Transformer | ./lib/Tooling/Transformer/SourceCode.cpp | 141 | getLocForStartOfFile | 比较/实现 | 关键函数相关（需复核） | `SM.getLocForStartOfFile(FileOffset.first), LangOpts, File.begin(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2104 | Tooling/Transformer | ./lib/Tooling/Transformer/SourceCode.cpp | 276 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return Loc.getLocWithOffset(i);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2105 | Tooling/Transformer | ./lib/Tooling/Transformer/SourceCode.cpp | 291 | getCharacterData | 比较/实现 | 关键函数相关（需复核） | `SM.getCharacterData(Loc.getLocWithOffset(-1), &Invalid);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2106 | Tooling/Transformer | ./lib/Tooling/Transformer/SourceCode.cpp | 328 | if | 比较/实现 | 关键函数相关（需复核） | `if (SM.isBeforeInTranslationUnit(T->getBeginLoc(), Range.getBegin()))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2107 | Tooling/Transformer | ./lib/Tooling/Transformer/SourceCode.cpp | 332 | if | 比较/实现 | 关键函数相关（需复核） | `if (SM.isBeforeInTranslationUnit(T->getBeginLoc(), Range.getBegin()))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2108 | Tooling/Transformer | ./lib/Tooling/Transformer/SourceCode.cpp | 353 | if | 比较/实现 | 关键函数相关（需复核） | `if (SM.isBeforeInTranslationUnit(Comment->getBeginLoc(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2109 | Tooling/Transformer | ./lib/Tooling/Transformer/SourceCode.cpp | 367 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `!SM.isBeforeInTranslationUnit(Attr->getLocation(), Range.getBegin()))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2110 | Tooling/Transformer | ./lib/Tooling/Transformer/SourceCode.cpp | 379 | substr | 比较/实现 | 关键函数相关（需复核） | `Source.substr(0, SM.getFileOffset(Range.getBegin()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2111 | Tooling/Transformer | ./lib/Tooling/Transformer/SourceCode.cpp | 388 | setBegin | 比较/实现 | 关键函数相关（需复核） | `Range.setBegin(Range.getBegin().getLocWithOffset(static_cast<int>(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2112 | Tooling/Transformer | ./lib/Tooling/Transformer/RewriteRule.cpp | 90 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `Result.SourceManager->getSpellingLoc(Range->getBegin());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2113 | Tooling/Transformer | ./lib/Tooling/Transformer/RewriteRule.cpp | 443 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `return Result.SourceManager->getExpansionLoc(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2114 | Tooling/Transformer | ./lib/Tooling/Transformer/RangeSelector.cpp | 70 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation BeforeStart = Start.getLocWithOffset(-1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2115 | Tooling/Transformer | ./lib/Tooling/Transformer/RangeSelector.cpp | 176 | if | 比较/实现 | 关键函数相关（需复核） | `if (Result.SourceManager->isBeforeInTranslationUnit(E, B)) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2116 | Tooling/Transformer | ./lib/Tooling/Transformer/RangeSelector.cpp | 278 | getCharRange | 比较/实现 | 关键函数相关（需复核） | `return CharSourceRange::getCharRange(CS.getLBracLoc().getLocWithOffset(1),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2117 | Tooling/Transformer | ./lib/Tooling/Transformer/RangeSelector.cpp | 293 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `.getLocWithOffset(1),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2118 | Tooling/Transformer | ./lib/Tooling/Transformer/RangeSelector.cpp | 307 | getCharRange | 比较/实现 | 关键函数相关（需复核） | `return CharSourceRange::getCharRange(E.getLBraceLoc().getLocWithOffset(1),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2119 | Tooling/ASTDiff | ./lib/Tooling/ASTDiff/ASTDiff.cpp | 182 | if | 比较/实现 | 关键函数相关（需复核） | `if (SLoc != SrcMgr.getSpellingLoc(SLoc))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2120 | Tooling/ASTDiff | ./lib/Tooling/ASTDiff/ASTDiff.cpp | 516 | getPostorderOffset | 比较/实现 | 关键函数相关（需复核） | `NodeId getPostorderOffset() const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2121 | Tooling/ASTDiff | ./lib/Tooling/ASTDiff/ASTDiff.cpp | 532 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(I == Tree.PostorderIds[getIdInRoot(SI)] - getPostorderOffset() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2122 | Tooling/ASTDiff | ./lib/Tooling/ASTDiff/ASTDiff.cpp | 536 | getPostorderOffset | 比较/实现 | 关键函数相关（需复核） | `getPostorderOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2123 | Tooling/ASTDiff | ./lib/Tooling/ASTDiff/ASTDiff.cpp | 999 | getEnd | 比较/实现 | 关键函数相关（需复核） | `Range.getEnd(), /*Offset=*/0, SrcMgr, TreeImpl->AST.getLangOpts());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2124 | Tooling/ASTDiff | ./lib/Tooling/ASTDiff/ASTDiff.cpp | 1004 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned Begin = SrcMgr.getFileOffset(SrcMgr.getExpansionLoc(BeginLoc));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2125 | Tooling/ASTDiff | ./lib/Tooling/ASTDiff/ASTDiff.cpp | 1004 | getFileOffset | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Begin = SrcMgr.getFileOffset(SrcMgr.getExpansionLoc(BeginLoc));` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2126 | Tooling/ASTDiff | ./lib/Tooling/ASTDiff/ASTDiff.cpp | 1005 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned End = SrcMgr.getFileOffset(SrcMgr.getExpansionLoc(EndLoc));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2127 | Tooling/ASTDiff | ./lib/Tooling/ASTDiff/ASTDiff.cpp | 1005 | getFileOffset | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned End = SrcMgr.getFileOffset(SrcMgr.getExpansionLoc(EndLoc));` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2128 | Tooling/Syntax | ./lib/Tooling/Syntax/Tree.cpp | 39 | Kind | 计算 | 强制收窄为32位 | `Kind(static_cast<unsigned>(Kind)), Role(0), Original(false),` | 改为 uint64_t / 移除收窄 | TODO |
| 2129 | Tooling/Syntax | ./lib/Tooling/Syntax/Tree.cpp | 49 |  | 计算 | 强制收窄为32位 | `this->Role = static_cast<unsigned>(NR);` | 改为 uint64_t / 移除收窄 | TODO |
| 2130 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 47 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return SM.isBeforeInTranslationUnit(T.location(), R.getBegin());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2131 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 51 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return !SM.isBeforeInTranslationUnit(R.getEnd(), T.location());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2132 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 114 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `First = ExpFirst.getSpellingLoc().getLocWithOffset(DecFirst.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2133 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 115 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `Last = ExpLast.getSpellingLoc().getLocWithOffset(DecLast.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2134 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 147 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `Bound = ExpBound.getSpellingLoc().getLocWithOffset(DecBound.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2135 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 258 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(SM.getFileOffset(BeginLoc) <= SM.getFileOffset(EndLoc));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2136 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 261 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `End = SM.getFileOffset(EndLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2137 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 267 | file | 比较/实现 | 关键函数相关（需复核） | `R.file().getHashValue(), R.beginOffset(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2138 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 312 |  | 比较/实现 | 关键函数相关（需复核） | `// Slow case. Use `isBeforeInTranslationUnit` to binary search for the` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2139 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 330 | getFileID | 比较/实现 | 关键函数相关（需复核） | `SourceMgr->getFileID(SourceMgr->getExpansionLoc(Expanded->location())));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2140 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 335 | data | 计算 | 指针差值落入32位 | `unsigned ExpandedIndex = Expanded - ExpandedTokens.data();` | 用 uint64_t 接收指针差值 | TODO |
| 2141 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 363 | data | 计算 | 指针差值落入32位 | `unsigned SpelledI = Spelled - F.SpelledTokens.data();` | 用 uint64_t 接收指针差值 | TODO |
| 2142 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 533 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(T1 == T2 \|\| sourceManager().isBeforeInTranslationUnit(T1, T2));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2143 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 543 | data | 计算 | 指针差值落入32位 | `unsigned SpelledIndex = Spelled - File.SpelledTokens.data();` | 用 uint64_t 接收指针差值 | TODO |
| 2144 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 647 | while | 比较/实现 | 关键函数相关（需复核） | `while (!L.LexFromRawLexer(T) && L.getCurrentBufferOffset() < FR.endOffset())` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2145 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 651 | if | 比较/实现 | 关键函数相关（需复核） | `if (SM.getFileOffset(T.getLocation()) < FR.endOffset())` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2146 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 696 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `!SM.isBeforeInTranslationUnit(LastExpansionEnd, Range.getEnd()))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2147 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 703 | setBegin | 比较/实现 | 关键函数相关（需复核） | `Range.setBegin(SM.getExpansionLoc(Range.getBegin()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2148 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 814 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `: SM.getExpansionLoc(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2149 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 861 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation Expansion = SM.getExpansionLoc(Tok.location());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2150 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 891 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SM.getExpansionLoc(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2151 | Tooling/Syntax | ./lib/Tooling/Syntax/Tokens.cpp | 920 | getFileID | 比较/实现 | 关键函数相关（需复核） | `auto FID = SM.getFileID(SM.getExpansionLoc(Tok.location()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2152 | Tooling/Syntax | ./lib/Tooling/Syntax/BuildTree.cpp | 302 | if | 比较/实现 | 关键函数相关（需复核） | `if (End.isInvalid() \|\| SM.isBeforeInTranslationUnit(End, Name))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2153 | Tooling/Syntax | ./lib/Tooling/Syntax/BuildTree.cpp | 307 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(SM.isBeforeInTranslationUnit(End, InitializerEnd) \|\|` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2154 | Tooling/Syntax | ./lib/Tooling/Syntax/BuildTree.cpp | 471 | sourceManager | 比较/实现 | 关键函数相关（需复核） | `TBTM.sourceManager().isBeforeInTranslationUnit(First, Last));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2155 | Tooling/Syntax | ./lib/Tooling/Syntax/ComputeReplacements.cpp | 84 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SM, SM.getExpansionLoc(Expanded.begin()->location()), /*Length=*/0);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2156 | Tooling/Refactoring | ./lib/Tooling/Refactoring/AtomicChange.cpp | 90 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Start, unsigned End) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2157 | Tooling/Refactoring | ./lib/Tooling/Refactoring/AtomicChange.cpp | 119 | getOffset | 比较/实现 | 关键函数相关（需复核） | `int Start = R.getOffset() + Offset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2158 | Tooling/Refactoring | ./lib/Tooling/Refactoring/AtomicChange.cpp | 123 | getOffset | 比较/实现 | 关键函数相关（需复核） | `R.getOffset() > 0 && R.getOffset() <= Code.size() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2159 | Tooling/Refactoring | ./lib/Tooling/Refactoring/AtomicChange.cpp | 124 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Code[R.getOffset() - 1] == '\n')` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2160 | Tooling/Refactoring | ./lib/Tooling/Refactoring/AtomicChange.cpp | 189 | getOffset | 比较/实现 | 关键函数相关（需复核） | `FilePath, R.getOffset(), R.getLength(), R.getReplacementText())))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2161 | Tooling/Refactoring | ./lib/Tooling/Refactoring/AtomicChange.cpp | 200 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `FullKeyPosition.getSpellingLoc().getDecomposedLoc();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2162 | Tooling/Refactoring | ./lib/Tooling/Refactoring/AtomicChange.cpp | 201 | getFileEntryForID | 比较/实现 | 关键函数相关（需复核） | `const FileEntry *FE = SM.getFileEntryForID(FileIDAndOffset.first);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2163 | Tooling/Refactoring | ./lib/Tooling/Refactoring/AtomicChange.cpp | 280 | getShiftedCodePosition | 比较/实现 | 关键函数相关（需复核） | `unsigned NewOffset = Replaces.getShiftedCodePosition(R.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2164 | Tooling/Refactoring | ./lib/Tooling/Refactoring/AtomicChange.cpp | 284 | NewR | 比较/实现 | 关键函数相关（需复核） | `Replacement NewR(R.getFilePath(), NewOffset, 0, Text);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2165 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Lookup.cpp | 146 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `UseLoc = SM.getSpellingLoc(UseLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2166 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Lookup.cpp | 164 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `SM.isBeforeInTranslationUnit(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2167 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Lookup.cpp | 165 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SM.getSpellingLoc(Res->getLocation()), UseLoc))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2168 | Tooling/Refactoring | ./lib/Tooling/Refactoring/ASTSelection.cpp | 90 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `FileLoc = SM.getSpellingLoc(DeclRange.getBegin());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2169 | Tooling/Refactoring | ./lib/Tooling/Refactoring/ASTSelection.cpp | 102 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `SM.isBeforeInTranslationUnit(SelectionEnd.isValid() ? SelectionEnd` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2170 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRFindingAction.cpp | 225 | NamedDeclFindingConsumer | 声明/容器 | 容器承载32位位置 | `NamedDeclFindingConsumer(ArrayRef<unsigned> SymbolOffsets,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2171 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRFindingAction.cpp | 246 | getFileEntryForID | 比较/实现 | 关键函数相关（需复核） | `<< SourceMgr.getFileEntryForID(MainFileID)->getName() << SymbolOffset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2172 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRFindingAction.cpp | 251 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `.getLocWithOffset(SymbolOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2173 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRFindingAction.cpp | 289 | for | 声明/局部 | 仅命名可疑需复核 | `for (unsigned Offset : SymbolOffsets) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2174 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRFindingAction.cpp | 299 |  | 声明/容器 | 容器承载32位位置 | `ArrayRef<unsigned> SymbolOffsets;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2175 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/SymbolOccurrences.cpp | 25 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Locations[0], Locations[0].getLocWithOffset(NamePieces[0].size()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2176 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/SymbolOccurrences.cpp | 33 | value | 比较/实现 | 关键函数相关（需复核） | `Loc.value().getLocWithOffset(NamePieces[Loc.index()].size()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2177 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRLocFinder.cpp | 49 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `FullLoc.getSpellingLoc().getDecomposedLoc();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2178 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRLocFinder.cpp | 50 | getFileEntryForID | 比较/实现 | 关键函数相关（需复核） | `return SM.getFileEntryForID(FileIdAndOffset.first) != nullptr;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2179 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRLocFinder.cpp | 75 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `Loc = SM.getSpellingLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2180 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRLocFinder.cpp | 101 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `BeginLoc.getLocWithOffset(Offset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2181 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRLocFinder.cpp | 135 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `.getLocWithOffset(-1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2182 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRLocFinder.cpp | 280 | getLAngleLoc | 比较/实现 | 关键函数相关（需复核） | `? Expr->getLAngleLoc().getLocWithOffset(-1)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2183 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRLocFinder.cpp | 324 | getQualifierLoc | 比较/实现 | 关键函数相关（需复核） | `EndLoc = Expr->getQualifierLoc().getEndLoc().getLocWithOffset(-1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2184 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRFinder.cpp | 65 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `(Context.getSourceManager().isBeforeInTranslationUnit(Start,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2185 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRFinder.cpp | 67 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context.getSourceManager().isBeforeInTranslationUnit(Point, End));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2186 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRFinder.cpp | 89 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `SM.isBeforeInTranslationUnit(StartLoc, Point) !=` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2187 | Tooling/Refactoring | ./lib/Tooling/Refactoring/Rename/USRFinder.cpp | 90 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `SM.isBeforeInTranslationUnit(EndLoc, Point))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2188 | Tooling/Inclusions | ./lib/Tooling/Inclusions/HeaderIncludes.cpp | 42 | unsigned | 计算 | 强制收窄为32位 | `llvm::function_ref<unsigned(const SourceManager &, Lexer &, Token &)>` | 改为 uint64_t / 移除收窄 | TODO |
| 2189 | Tooling/Inclusions | ./lib/Tooling/Inclusions/HeaderIncludes.cpp | 88 | unsigned | 计算 | 强制收窄为32位 | `[&](std::function<unsigned(const SourceManager &SM, Lexer &Lex,` | 改为 uint64_t / 移除收窄 | TODO |
| 2190 | Tooling/Inclusions | ./lib/Tooling/Inclusions/HeaderIncludes.cpp | 95 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned InitialOffset = SM.getFileOffset(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2191 | Tooling/Inclusions | ./lib/Tooling/Inclusions/HeaderIncludes.cpp | 107 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `return SM.getFileOffset(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2192 | Tooling/Inclusions | ./lib/Tooling/Inclusions/HeaderIncludes.cpp | 116 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `return SM.getFileOffset(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2193 | Tooling/Inclusions | ./lib/Tooling/Inclusions/HeaderIncludes.cpp | 159 | getMaxHeaderInsertionOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned getMaxHeaderInsertionOffset(StringRef FileName, StringRef Code,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2194 | Tooling/Inclusions | ./lib/Tooling/Inclusions/HeaderIncludes.cpp | 165 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned MaxOffset = SM.getFileOffset(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2195 | Tooling/Inclusions | ./lib/Tooling/Inclusions/HeaderIncludes.cpp | 167 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `MaxOffset = SM.getFileOffset(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2196 | Tooling/Inclusions | ./lib/Tooling/Inclusions/HeaderIncludes.cpp | 275 | getMaxHeaderInsertionOffset | 比较/实现 | 关键函数相关（需复核） | `getMaxHeaderInsertionOffset(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2197 | Tooling/Inclusions | ./lib/Tooling/Inclusions/HeaderIncludes.cpp | 287 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = MinInsertOffset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2198 | Tooling/Inclusions | ./lib/Tooling/Inclusions/HeaderIncludes.cpp | 333 | if | 比较/实现 | 关键函数相关（需复核） | `if (CurInclude.R.getOffset() <= MaxInsertOffset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2199 | Tooling/Inclusions | ./lib/Tooling/Inclusions/HeaderIncludes.cpp | 339 | getOffset | 比较/实现 | 关键函数相关（需复核） | `FirstIncludeOffset = CurInclude.R.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2200 | Tooling/Inclusions | ./lib/Tooling/Inclusions/HeaderIncludes.cpp | 367 | getOffset | 比较/实现 | 关键函数相关（需复核） | `InsertOffset = Inc->R.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2201 | Tooling/Inclusions | ./lib/Tooling/Inclusions/HeaderIncludes.cpp | 396 | getOffset | 比较/实现 | 关键函数相关（需复核） | `FileName, Inc.R.getOffset(), Inc.R.getLength(), ""));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2202 | Tooling/Inclusions | ./lib/Tooling/Inclusions/StandardLibrary.cpp | 23 |  | 声明/类型别名 | 可疑别名32位 | `using NSSymbolMap = llvm::DenseMap<llvm::StringRef, unsigned>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2203 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 47 | Replacement | 声明/局部 | 仅命名可疑需复核 | `Replacement::Replacement(StringRef FilePath, unsigned Offset, unsigned Length,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2204 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 77 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `getLocWithOffset(ReplacementRange.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2205 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 90 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Stream << FilePath << ": " << ReplacementRange.getOffset() << ":+"` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2206 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 99 | if | 比较/实现 | 关键函数相关（需复核） | `if (LHS.getOffset() != RHS.getOffset())` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2207 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 100 | getOffset | 比较/实现 | 关键函数相关（需复核） | `return LHS.getOffset() < RHS.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2208 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 111 | getOffset | 比较/实现 | 关键函数相关（需复核） | `return LHS.getOffset() == RHS.getOffset() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2209 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 137 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation SpellingBegin = Sources.getSpellingLoc(Range.getBegin());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2210 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 138 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation SpellingEnd = Sources.getSpellingLoc(Range.getEnd());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2211 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 139 | getDecomposedLoc | 声明/局部 | 无关键词的32位位置变量（需复核） | `std::pair<FileID, unsigned> Start = Sources.getDecomposedLoc(SpellingBegin);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2212 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 140 | getDecomposedLoc | 声明/局部 | 无关键词的32位位置变量（需复核） | `std::pair<FileID, unsigned> End = Sources.getDecomposedLoc(SpellingEnd);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2213 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 151 | setFromSourceLocation | 比较/实现 | 关键函数相关（需复核） | `setFromSourceLocation(Sources, Sources.getSpellingLoc(Range.getBegin()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2214 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 158 | getShiftedCodePosition | 比较/实现 | 关键函数相关（需复核） | `unsigned NewStart = getShiftedCodePosition(R.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2215 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 159 | getShiftedCodePosition | 比较/实现 | 关键函数相关（需复核） | `unsigned NewEnd = getShiftedCodePosition(R.getOffset() + R.getLength());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2216 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 200 | getOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned PrevEnd = Prev.getOffset() + Prev.getLength();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2217 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 201 | if | 比较/实现 | 关键函数相关（需复核） | `if (PrevEnd < R.getOffset()) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2218 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 204 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(PrevEnd == R.getOffset() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2219 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 207 | getFilePath | 比较/实现 | 关键函数相关（需复核） | `R.getFilePath(), Prev.getOffset(), Prev.getLength() + R.getLength(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2220 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 252 | if | 比较/实现 | 关键函数相关（需复核） | `if (R.getOffset() == std::numeric_limits<unsigned>::max()) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2221 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 262 | AtEnd | 比较/实现 | 关键函数相关（需复核） | `Replacement AtEnd(R.getFilePath(), R.getOffset() + R.getLength(), 0, "");` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2222 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 269 | if | 比较/实现 | 关键函数相关（需复核） | `if (I != Replaces.end() && R.getOffset() == I->getOffset()) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2223 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 281 | getFilePath | 比较/实现 | 关键函数相关（需复核） | `R.getFilePath(), R.getOffset(), 0,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2224 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 306 | Range | 比较/实现 | 关键函数相关（需复核） | `return Range(R1.getOffset(), R1.getLength())` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2225 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 307 | overlapsWith | 比较/实现 | 关键函数相关（需复核） | `.overlapsWith(Range(R2.getOffset(), R2.getLength()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2226 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 370 | Offset | 比较/实现 | 关键函数相关（需复核） | `Offset(R.getOffset() + (MergeSecond ? 0 : Delta)),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2227 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 381 | getOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned REnd = R.getOffset() + Delta + R.getLength();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2228 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 382 | size | 声明/局部 | 仅命名可疑需复核 | `unsigned End = Offset + Text.size();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2229 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 382 | size | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned End = Offset + Text.size();` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2230 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 388 | substr | 比较/实现 | 关键函数相关（需复核） | `StringRef Head = TextRef.substr(0, R.getOffset() + Delta - Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2231 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 393 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned End = Offset + Length;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2232 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 393 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned End = Offset + Length;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2233 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 395 | substr | 比较/实现 | 关键函数相关（需复核） | `StringRef Tail = RText.substr(End - R.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2234 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 397 | if | 比较/实现 | 关键函数相关（需复核） | `if (R.getOffset() + RText.size() > End) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2235 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 398 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Length = R.getOffset() + R.getLength() - Offset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2236 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 411 | size | 比较/实现 | 关键函数相关（需复核） | `return Offset + Text.size() < R.getOffset() + Delta;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2237 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 412 | getOffset | 比较/实现 | 关键函数相关（需复核） | `return Offset + Length < R.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2238 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 436 |  | 声明/局部 | 仅命名可疑需复核 | `const unsigned Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2239 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 462 | getOffset | 比较/实现 | 关键函数相关（需复核） | `FirstI->getOffset() < SecondI->getOffset() + Delta);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2240 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 486 | if | 比较/实现 | 关键函数相关（需复核） | `if (LHS.getOffset() != RHS.getOffset())` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2241 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 487 | getOffset | 比较/实现 | 关键函数相关（需复核） | `return LHS.getOffset() < RHS.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2242 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 493 | back | 比较/实现 | 关键函数相关（需复核） | `Result.back().getOffset() + Result.back().getLength() < R.getOffset()) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2243 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 497 | max | 比较/实现 | 关键函数相关（需复核） | `std::max(Result.back().getOffset() + Result.back().getLength(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2244 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 498 | getOffset | 比较/实现 | 关键函数相关（需复核） | `R.getOffset() + R.getLength());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2245 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 500 | Range | 比较/实现 | 关键函数相关（需复核） | `Range(Result.back().getOffset(), NewEnd - Result.back().getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2246 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 524 | getOffset | 比较/实现 | 关键函数相关（需复核） | `R.getOffset(), R.getLength(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2247 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 538 | getOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned Offset = R.getOffset() + Shift;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2248 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 538 | getOffset | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = R.getOffset() + Shift;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2249 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 546 | getShiftedCodePosition | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Replacements::getShiftedCodePosition(unsigned Position) const {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2250 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 547 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2251 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 549 | if | 比较/实现 | 关键函数相关（需复核） | `if (R.getOffset() + R.getLength() <= Position) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2252 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 553 | if | 比较/实现 | 关键函数相关（需复核） | `if (R.getOffset() < Position &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2253 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 554 | getOffset | 比较/实现 | 关键函数相关（需复核） | `R.getOffset() + R.getReplacementText().size() <= Position) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2254 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 555 | getOffset | 比较/实现 | 关键函数相关（需复核） | `Position = R.getOffset() + R.getReplacementText().size();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2255 | Tooling/Core | ./lib/Tooling/Core/Replacement.cpp | 598 | Replace | 比较/实现 | 关键函数相关（需复核） | `Replacement Replace("<stdin>", I->getOffset(), I->getLength(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2256 | Tooling/Core | ./lib/Tooling/Core/Diagnostic.cpp | 35 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `FileOffset = Sources.getFileOffset(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2257 | Tooling/Core | ./lib/Tooling/Core/Diagnostic.cpp | 43 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `FileOffset = Sources.getFileOffset(Range.getBegin());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2258 | Tooling/Core | ./lib/Tooling/Core/Diagnostic.cpp | 44 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `Length = Sources.getFileOffset(Range.getEnd()) - FileOffset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2259 | Analysis/UninitializedValues | ./lib/Analysis/UninitializedValues.cpp | 73 | getValueIndex | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> getValueIndex(const VarDecl *d) const;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2260 | Analysis/UninitializedValues | ./lib/Analysis/UninitializedValues.cpp | 89 | getValueIndex | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> DeclToIndex::getValueIndex(const VarDecl *d) const {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2261 | Analysis/UninitializedValues | ./lib/Analysis/UninitializedValues.cpp | 150 | getValueIndex | 声明/容器 | 容器承载32位位置 | `const Optional<unsigned> &idx = declToIndex.getValueIndex(vd);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2262 | Analysis/UninitializedValues | ./lib/Analysis/UninitializedValues.cpp | 211 | getValueIndex | 声明/容器 | 容器承载32位位置 | `const Optional<unsigned> &idx = declToIndex.getValueIndex(vd);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2263 | Analysis/UninitializedValues | ./lib/Analysis/UninitializedValues.cpp | 558 | SuccsVisited | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 32> SuccsVisited(cfg.getNumBlockIDs(), 0);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2264 | Analysis/ThreadSafetyTIL | ./lib/Analysis/ThreadSafetyTIL.cpp | 296 |  | 计算 | 指针差值落入32位 | `unsigned NI = I - NumUnreachableBlocks;` | 用 uint64_t 接收指针差值 | TODO |
| 2265 | Analysis/ReachableCode | ./lib/Analysis/ReachableCode.cpp | 308 | scanFromBlock | 声明/局部 | 无关键词的32位位置变量（需复核） | `static unsigned scanFromBlock(const CFGBlock *Start,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2266 | Analysis/ReachableCode | ./lib/Analysis/ReachableCode.cpp | 374 | scanMaybeReachableFromBlock | 声明/局部 | 无关键词的32位位置变量（需复核） | `static unsigned scanMaybeReachableFromBlock(const CFGBlock *Start,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2267 | Analysis/ReachableCode | ./lib/Analysis/ReachableCode.cpp | 404 | scanBackwards | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned scanBackwards(const CFGBlock *Start,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2268 | Analysis/ReachableCode | ./lib/Analysis/ReachableCode.cpp | 483 | scanBackwards | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned DeadCodeScan::scanBackwards(const clang::CFGBlock *Start,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2269 | Analysis/ReachableCode | ./lib/Analysis/ReachableCode.cpp | 672 | ScanReachableFromBlock | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned ScanReachableFromBlock(const CFGBlock *Start,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2270 | Analysis/CFG | ./lib/Analysis/CFG.cpp | 5338 |  | 声明/类型别名 | 可疑别名32位 | `using StmtMapTy = llvm::DenseMap<const Stmt *, std::pair<unsigned, unsigned>>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2271 | Analysis/CFG | ./lib/Analysis/CFG.cpp | 5339 |  | 声明/类型别名 | 可疑别名32位 | `using DeclMapTy = llvm::DenseMap<const Decl *, std::pair<unsigned, unsigned>>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2272 | Analysis/CloneDetection | ./lib/Analysis/CloneDetection.cpp | 48 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `SM.isBeforeInTranslationUnit(getBeginLoc(), Other.getBeginLoc()) \|\|` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2273 | Analysis/CloneDetection | ./lib/Analysis/CloneDetection.cpp | 54 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `SM.isBeforeInTranslationUnit(Other.getEndLoc(), getEndLoc()) \|\|` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2274 | Analysis/CloneDetection | ./lib/Analysis/CloneDetection.cpp | 128 |  | 声明/容器 | 容器承载32位位置 | `std::vector<unsigned> IndexesToRemove;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2275 | Analysis/CloneDetection | ./lib/Analysis/CloneDetection.cpp | 274 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned Pos = 0; Pos < CS->size(); ++Pos) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2276 | Analysis/ThreadSafety | ./lib/Analysis/ThreadSafety.cpp | 155 |  | 声明/类型别名 | 可疑别名32位 | `using FactID = unsigned short;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2277 | Analysis/ThreadSafety | ./lib/Analysis/ThreadSafety.cpp | 319 |  | 声明/类型别名 | 可疑别名32位 | `using LocalVarContext = llvm::ImmutableMap<const NamedDecl *, unsigned>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2278 | Analysis/Consumed | ./lib/Analysis/Consumed.cpp | 613 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2279 | Analysis/Consumed | ./lib/Analysis/Consumed.cpp | 618 | for | 声明/局部 | 仅命名可疑需复核 | `for (unsigned Index = Offset; Index < Call->getNumArgs(); ++Index) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2280 | Analysis/Consumed | ./lib/Analysis/Consumed.cpp | 623 | getParamDecl | 比较/实现 | 关键函数相关（需复核） | `const ParmVarDecl *Param = FunD->getParamDecl(Index - Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2281 | Analysis/ThreadSafetyCommon | ./lib/Analysis/ThreadSafetyCommon.cpp | 904 | size | 计算 | 强制收窄为32位 | `static_cast<unsigned>(CurrentArguments.size()), Arena);` | 改为 uint64_t / 移除收窄 | TODO |
| 2282 | Analysis/ThreadSafetyCommon | ./lib/Analysis/ThreadSafetyCommon.cpp | 925 | size | 计算 | 强制收窄为32位 | `static_cast<unsigned>(CurrentInstructions.size()), Arena);` | 改为 uint64_t / 移除收窄 | TODO |
| 2283 | Analysis/CalledOnceCheck | ./lib/Analysis/CalledOnceCheck.cpp | 591 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(ReasonForTrueBranch) + SuccessorIndex;` | 改为 uint64_t / 移除收窄 | TODO |
| 2284 | Analysis/CalledOnceCheck | ./lib/Analysis/CalledOnceCheck.cpp | 593 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(NeverCalledReason::LARGEST_VALUE));` | 改为 uint64_t / 移除收窄 | TODO |
| 2285 | Analysis/CalledOnceCheck | ./lib/Analysis/CalledOnceCheck.cpp | 1638 | getIndexOfCallee | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> getIndexOfCallee(const CallExpr *Call) const {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2286 | Analysis/CalledOnceCheck | ./lib/Analysis/CalledOnceCheck.cpp | 1642 | getIndexOfExpression | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> getIndexOfExpression(const Expr *E) const {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2287 | Analysis/CalledOnceCheck | ./lib/Analysis/CalledOnceCheck.cpp | 1650 | getIndex | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> getIndex(const ParmVarDecl &Parameter) const {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2288 | Analysis/MacroExpansionContext | ./lib/Analysis/MacroExpansionContext.cpp | 36 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation MacroNameBegin = SM.getExpansionLoc(MacroName.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2289 | Analysis/MacroExpansionContext | ./lib/Analysis/MacroExpansionContext.cpp | 37 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(MacroNameBegin == SM.getExpansionLoc(Range.getBegin()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2290 | Analysis/MacroExpansionContext | ./lib/Analysis/MacroExpansionContext.cpp | 42 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `return SM.getExpansionLoc(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2291 | Analysis/MacroExpansionContext | ./lib/Analysis/MacroExpansionContext.cpp | 43 | getLocation | 比较/实现 | 关键函数相关（需复核） | `MacroName.getLocation().getLocWithOffset(MacroName.getLength()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2292 | Analysis/MacroExpansionContext | ./lib/Analysis/MacroExpansionContext.cpp | 46 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `return SM.getExpansionLoc(Range.getEnd()).getLocWithOffset(1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2293 | Analysis/MacroExpansionContext | ./lib/Analysis/MacroExpansionContext.cpp | 70 | if | 比较/实现 | 关键函数相关（需复核） | `if (SM.isBeforeInTranslationUnit(It->getSecond(), ExpansionEnd)) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2294 | Analysis/MacroExpansionContext | ./lib/Analysis/MacroExpansionContext.cpp | 214 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation CurrExpansionLoc = SM->getExpansionLoc(SLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2295 | Analysis/PathDiagnostic | ./lib/Analysis/PathDiagnostic.cpp | 171 | getLocation | 比较/实现 | 关键函数相关（需复核） | `FullSourceLoc L = piece->getLocation().asLocation().getExpansionLoc();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2296 | Analysis/PathDiagnostic | ./lib/Analysis/PathDiagnostic.cpp | 183 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation L = SMgr.getExpansionLoc(I.getBegin());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2297 | Analysis/PathDiagnostic | ./lib/Analysis/PathDiagnostic.cpp | 188 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `L = SMgr.getExpansionLoc(I.getEnd());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2298 | Analysis/PathDiagnostic | ./lib/Analysis/PathDiagnostic.cpp | 290 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return SM.isBeforeInTranslationUnit(XR.getBegin(), YR.getBegin());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2299 | Analysis/PathDiagnostic | ./lib/Analysis/PathDiagnostic.cpp | 291 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return SM.isBeforeInTranslationUnit(XR.getEnd(), YR.getEnd());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2300 | Analysis/PathDiagnostic | ./lib/Analysis/PathDiagnostic.cpp | 340 | getFileEntryForID | 比较/实现 | 关键函数相关（需复核） | `const FileEntry *XFE = SM.getFileEntryForID(XL.getSpellingLoc().getFileID());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2301 | Analysis/PathDiagnostic | ./lib/Analysis/PathDiagnostic.cpp | 341 | getFileEntryForID | 比较/实现 | 关键函数相关（需复核） | `const FileEntry *YFE = SM.getFileEntryForID(YL.getSpellingLoc().getFileID());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2302 | Analysis/PathDiagnostic | ./lib/Analysis/PathDiagnostic.cpp | 1088 | Add | 序列化 | 序列化位置读写（需复核） | `ID.Add(static_cast<const SourceLocation &>(Loc));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2303 | Analysis/PathDiagnostic | ./lib/Analysis/PathDiagnostic.cpp | 1135 | Add | 序列化 | 序列化位置读写（需复核） | `ID.Add(getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2304 | Analysis/AnalysisDeclContext | ./lib/Analysis/AnalysisDeclContext.cpp | 361 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc Loc = Ctx.getSourceManager().getPresumedLoc(D->getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2305 | Analysis/FlowSensitive | ./lib/Analysis/FlowSensitive/WatchedLiteralsSolver.cpp | 45 |  | 声明/类型别名 | 可疑别名32位 | `using Variable = uint32_t;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2306 | Analysis/FlowSensitive | ./lib/Analysis/FlowSensitive/WatchedLiteralsSolver.cpp | 55 |  | 声明/类型别名 | 可疑别名32位 | `using Literal = uint32_t;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2307 | Analysis/FlowSensitive | ./lib/Analysis/FlowSensitive/WatchedLiteralsSolver.cpp | 74 |  | 声明/类型别名 | 可疑别名32位 | `using ClauseID = uint32_t;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2308 | Lex/TokenLexer | ./lib/Lex/TokenLexer.cpp | 61 | getNextLocalOffset | 比较/实现 | 关键函数相关（需复核） | `MacroStartSLocOffset = SM.getNextLocalOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2309 | Lex/TokenLexer | ./lib/Lex/TokenLexer.cpp | 73 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `MacroDefStart = SM.getExpansionLoc(Tokens[0].getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2310 | Lex/TokenLexer | ./lib/Lex/TokenLexer.cpp | 673 | isBeforeInSLocAddrSpace | 比较/实现 | 关键函数相关（需复核） | `SM.isBeforeInSLocAddrSpace(Tok.getLocation(), MacroStartSLocOffset)) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2311 | Lex/TokenLexer | ./lib/Lex/TokenLexer.cpp | 974 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return MacroExpansionStart.getLocWithOffset(relativeOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2312 | Lex/TokenLexer | ./lib/Lex/TokenLexer.cpp | 1044 | setLocation | 比较/实现 | 关键函数相关（需复核） | `Tok.setLocation(Expansion.getLocWithOffset(RelOffs));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2313 | Lex/HeaderMap | ./lib/Lex/HeaderMap.cpp | 150 | getEndianAdjustedWord | 比较/实现 | 关键函数相关（需复核） | `StrTabIdx += getEndianAdjustedWord(getHeader().StringsOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2314 | Lex/ScratchBuffer | ./lib/Lex/ScratchBuffer.cpp | 64 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return BufferStartLoc.getLocWithOffset(BytesUsed-Len-1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2315 | Lex/Pragma | ./lib/Lex/Pragma.cpp | 484 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SourceMgr.getPresumedLoc(SysHeaderTok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2316 | Lex/Pragma | ./lib/Lex/Pragma.cpp | 498 | AddLineNote | 序列化 | 序列化位置读写（需复核） | `SourceMgr.AddLineNote(SysHeaderTok.getLocation(), PLoc.getLine() + 1,` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2317 | Lex/PPCaching | ./lib/Lex/PPCaching.cpp | 150 | getLocation | 比较/实现 | 关键函数相关（需复核） | `Tok.getLocation(), getLastCachedTokenLocation(), &RelOffset)) \|\|` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2318 | Lex/PPMacroExpansion | ./lib/Lex/PPMacroExpansion.cpp | 1512 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SourceMgr.getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2319 | Lex/PPMacroExpansion | ./lib/Lex/PPMacroExpansion.cpp | 1521 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SourceMgr.getPresumedLoc(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2320 | Lex/PPMacroExpansion | ./lib/Lex/PPMacroExpansion.cpp | 1528 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PLoc = SourceMgr.getPresumedLoc(NextLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2321 | Lex/PPMacroExpansion | ./lib/Lex/PPMacroExpansion.cpp | 1582 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SourceMgr.getPresumedLoc(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2322 | Lex/PPMacroExpansion | ./lib/Lex/PPMacroExpansion.cpp | 1584 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PLoc = SourceMgr.getPresumedLoc(PLoc.getIncludeLoc());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2323 | Lex/PPMacroExpansion | ./lib/Lex/PPMacroExpansion.cpp | 1586 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PLoc = SourceMgr.getPresumedLoc(PLoc.getIncludeLoc());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2324 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 230 | seek | 声明/局部 | 仅命名可疑需复核 | `void Lexer::seek(unsigned Offset, bool IsAtStartOfLine) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2325 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 451 | MeasureTokenLength | 声明/局部 | 仅命名可疑需复核 | `unsigned Lexer::MeasureTokenLength(SourceLocation Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2326 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 474 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `Loc = SM.getExpansionLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2327 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 475 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = SM.getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2328 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 496 | findBeginningOfLine | 声明/局部 | 仅命名可疑需复核 | `static const char *findBeginningOfLine(StringRef Buffer, unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2329 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 517 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = SM.getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2330 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 534 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation LexerStartLoc = Loc.getLocWithOffset(-LocInfo.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2331 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 570 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation FileLoc = SM.getSpellingLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2332 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 577 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return Loc.getLocWithOffset(BeginFileLocInfo.second - FileLocInfo.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2333 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 596 | getFromRawEncoding | 比较/实现 | 关键函数相关（需复核） | `SourceLocation FileLoc = SourceLocation::getFromRawEncoding(StartOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2334 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 642 | getLocation | 比较/实现 | 关键函数相关（需复核） | `unsigned TokOffset = TheTok.getLocation().getRawEncoding() - StartOffset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2335 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 787 | getLocForEndOfToken | 比较/实现 | 关键函数相关（需复核） | `SourceLocation Lexer::getLocForEndOfToken(SourceLocation Loc, unsigned Offset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2336 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 787 | getLocForEndOfToken | 声明/局部 | 仅命名可疑需复核 | `SourceLocation Lexer::getLocForEndOfToken(SourceLocation Loc, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2337 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 798 | MeasureTokenLength | 声明/局部 | 仅命名可疑需复核 | `unsigned Len = Lexer::MeasureTokenLength(Loc, SM, LangOpts);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2338 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 804 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return Loc.getLocWithOffset(Len);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2339 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 837 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation spellLoc = SM.getSpellingLoc(loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2340 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 842 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation afterLoc = loc.getLocWithOffset(tokLen);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2341 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 972 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> beginInfo = SM.getDecomposedLoc(Range.getBegin());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2342 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1017 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation SpellLoc = Expansion.getSpellingLoc();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2343 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1034 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `Loc = SM.getSpellingLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2344 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1038 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> ExpansionInfo = SM.getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2345 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1039 | MeasureTokenLength | 声明/局部 | 仅命名可疑需复核 | `unsigned MacroTokenLength = Lexer::MeasureTokenLength(Loc, SM, LangOpts);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2346 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1053 | if | 比较/实现 | 关键函数相关（需复核） | `if (!SM.getFileEntryForID(SM.getFileID(SM.getSpellingLoc(Loc))))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2347 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1059 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `Loc = SM.getSpellingLoc(SM.getImmediateExpansionRange(Loc).getBegin());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2348 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1063 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> ExpansionInfo = SM.getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2349 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1064 | MeasureTokenLength | 声明/局部 | 仅命名可疑需复核 | `unsigned MacroTokenLength = Lexer::MeasureTokenLength(Loc, SM, LangOpts);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2350 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1097 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = SM.getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2351 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1136 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation SpellingLoc = SM.getSpellingLoc(FileLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2352 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1137 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SpellingLoc = SpellingLoc.getLocWithOffset(CharNo);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2353 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1155 |  | 计算 | 指针差值落入32位 | `unsigned CharNo = Loc-BufferStart;` | 用 uint64_t 接收指针差值 | TODO |
| 2354 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1155 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned CharNo = Loc-BufferStart;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2355 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1157 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return FileLoc.getLocWithOffset(CharNo);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2356 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1214 | getEscapedNewLineSize | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Lexer::getEscapedNewLineSize(const char *Ptr) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2357 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1269 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = SM.getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2358 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1320 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `return TokenLoc.getLocWithOffset(Tok->getLength() + NumWhitespaceChars);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2359 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1350 | if | 声明/局部 | 无关键词的32位位置变量（需复核） | `if (unsigned EscapedNewLineSize = getEscapedNewLineSize(Ptr)) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2360 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1408 | if | 声明/局部 | 无关键词的32位位置变量（需复核） | `if (unsigned EscapedNewLineSize = getEscapedNewLineSize(Ptr)) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2361 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1443 | SetByteOffset | 声明/局部 | 仅命名可疑需复核 | `void Lexer::SetByteOffset(unsigned Offset, bool StartOfLine) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2362 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 1696 | if | 计算 | 强制收窄为32位 | `if (!isAllowedIDChar(static_cast<uint32_t>(CodePoint), LangOpts)) {` | 改为 uint64_t / 移除收窄 | TODO |
| 2363 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 2226 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `FileLoc.getLocWithOffset(StartOfFilename - BufferStart),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2364 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 2227 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `FileLoc.getLocWithOffset(CompletionPoint - BufferStart));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2365 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 3191 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation Loc = FileLoc.getLocWithOffset(CurPtr-BufferStart);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2366 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 3198 | tryReadNumericUCN | 声明/容器 | 容器承载32位位置 | `llvm::Optional<uint32_t> Lexer::tryReadNumericUCN(const char *&StartPtr,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2367 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 3309 | tryReadNamedUCN | 声明/容器 | 容器承载32位位置 | `llvm::Optional<uint32_t> Lexer::tryReadNamedUCN(const char *&StartPtr,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2368 | Lex/Lexer | ./lib/Lex/Lexer.cpp | 3402 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<uint32_t> CodePointOpt;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2369 | Lex/PPConditionalDirectiveRecord | ./lib/Lex/PPConditionalDirectiveRecord.cpp | 33 | if | 比较/实现 | 关键函数相关（需复核） | `if (SourceMgr.isBeforeInTranslationUnit(Range.getEnd(), low->getLoc()))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2370 | Lex/PPConditionalDirectiveRecord | ./lib/Lex/PPConditionalDirectiveRecord.cpp | 53 | if | 比较/实现 | 关键函数相关（需复核） | `if (SourceMgr.isBeforeInTranslationUnit(CondDirectiveLocs.back().getLoc(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2371 | Lex/PPConditionalDirectiveRecord | ./lib/Lex/PPConditionalDirectiveRecord.cpp | 70 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `SourceMgr.isBeforeInTranslationUnit(CondDirectiveLocs.back().getLoc(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2372 | Lex/PPLexerChange | ./lib/Lex/PPLexerChange.cpp | 91 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `CodeCompletionFileLoc.getLocWithOffset(CodeCompletionOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2373 | Lex/PPLexerChange | ./lib/Lex/PPLexerChange.cpp | 544 | setLocation | 比较/实现 | 关键函数相关（需复核） | `Result.setLocation(Result.getLocation().getLocWithOffset(-1));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2374 | Lex/PPExpressions | ./lib/Lex/PPExpressions.cpp | 742 | getLimitedValue | 计算 | 强制收窄为32位 | `unsigned ShAmt = static_cast<unsigned>(RHS.Val.getLimitedValue());` | 改为 uint64_t / 移除收窄 | TODO |
| 2375 | Lex/PPExpressions | ./lib/Lex/PPExpressions.cpp | 891 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation ExprStartLoc = SourceMgr.getExpansionLoc(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2376 | Lex/LiteralSupport | ./lib/Lex/LiteralSupport.cpp | 536 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned short &UcnLen, FullSourceLoc Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2377 | Lex/LiteralSupport | ./lib/Lex/LiteralSupport.cpp | 587 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned short &UcnLen, FullSourceLoc Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2378 | Lex/LiteralSupport | ./lib/Lex/LiteralSupport.cpp | 695 |  | 声明/类型别名 | 可疑别名32位 | `typedef uint32_t UTF32;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2379 | Lex/LiteralSupport | ./lib/Lex/LiteralSupport.cpp | 1364 |  | 计算 | 指针差值落入32位 | `const unsigned NumDigits = SuffixBegin - DigitsBegin;` | 用 uint64_t 接收指针差值 | TODO |
| 2380 | Lex/LiteralSupport | ./lib/Lex/LiteralSupport.cpp | 1391 | hexDigitValue | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned C = llvm::hexDigitValue(*Ptr++);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2381 | Lex/LiteralSupport | ./lib/Lex/LiteralSupport.cpp | 1444 |  | 计算 | 指针差值落入32位 | `unsigned NumDigits = SuffixBegin - DigitsBegin;` | 用 uint64_t 接收指针差值 | TODO |
| 2382 | Lex/LiteralSupport | ./lib/Lex/LiteralSupport.cpp | 1462 |  | 计算 | 指针差值落入32位 | `unsigned NumExpDigits = SuffixBegin - Ptr;` | 用 uint64_t 接收指针差值 | TODO |
| 2383 | Lex/LiteralSupport | ./lib/Lex/LiteralSupport.cpp | 1462 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned NumExpDigits = SuffixBegin - Ptr;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2384 | Lex/LiteralSupport | ./lib/Lex/LiteralSupport.cpp | 1500 | Val | 计算 | 强制收窄为32位 | `llvm::APInt Val(static_cast<unsigned>(NumBitsNeeded), 0, /*isSigned=*/false);` | 改为 uint64_t / 移除收窄 | TODO |
| 2385 | Lex/LiteralSupport | ./lib/Lex/LiteralSupport.cpp | 1513 | hexDigitValue | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned C = llvm::hexDigitValue(*Ptr);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2386 | Lex/LiteralSupport | ./lib/Lex/LiteralSupport.cpp | 1646 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<uint32_t, 4> codepoint_buffer;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2387 | Lex/LiteralSupport | ./lib/Lex/LiteralSupport.cpp | 2006 | while | 计算 | 强制收窄为32位 | `while (static_cast<unsigned>(ThisTokBuf - Prefix) < MaxRawStrDelimLen &&` | 改为 uint64_t / 移除收窄 | TODO |
| 2388 | Lex/LiteralSupport | ./lib/Lex/LiteralSupport.cpp | 2148 | getNumBytesForUTF8 | 声明/局部 | 无关键词的32位位置变量（需复核） | `End = Err + std::min<unsigned>(llvm::getNumBytesForUTF8(*Err), End-Err);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2389 | Lex/HeaderSearch | ./lib/Lex/HeaderSearch.cpp | 109 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<unsigned int, unsigned int> searchDirToHSEntry) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2390 | Lex/HeaderSearch | ./lib/Lex/HeaderSearch.cpp | 713 | noteLookupUsage | 声明/局部 | 仅命名可疑需复核 | `void HeaderSearch::noteLookupUsage(unsigned HitIdx, SourceLocation Loc) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2391 | Lex/HeaderSearch | ./lib/Lex/HeaderSearch.cpp | 1629 |  | 声明/局部 | 仅命名可疑需复核 | `FileID ID, unsigned *Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2392 | Lex/HeaderSearch | ./lib/Lex/HeaderSearch.cpp | 1680 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned *Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2393 | Lex/HeaderSearch | ./lib/Lex/HeaderSearch.cpp | 1920 | begin | 计算 | 指针差值落入32位 | `unsigned PrefixLength = NI - path::begin(File);` | 用 uint64_t 接收指针差值 | TODO |
| 2394 | Lex/PPDirectives | ./lib/Lex/PPDirectives.cpp | 145 |  | I/O | 平台I/O偏移需复核 | `"_FILE_OFFSET_BITS",` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 2395 | Lex/PPDirectives | ./lib/Lex/PPDirectives.cpp | 464 | getLocation | 比较/实现 | 关键函数相关（需复核） | `Tok.getLocation().getLocWithOffset(Directive.size()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2396 | Lex/PPDirectives | ./lib/Lex/PPDirectives.cpp | 532 | seek | 比较/实现 | 关键函数相关（需复核） | `PP.CurLexer->seek(PP.CurLexer->getCurrentBufferOffset() + *SkipRangePtr,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2397 | Lex/PPDirectives | ./lib/Lex/PPDirectives.cpp | 863 | getFileID | 比较/实现 | 关键函数相关（需复核） | `FileID IDOfIncl = SourceMgr.getFileID(SourceMgr.getExpansionLoc(Loc));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2398 | Lex/PPDirectives | ./lib/Lex/PPDirectives.cpp | 890 | getFileID | 比较/实现 | 关键函数相关（需复核） | `auto ID = SM.getFileID(SM.getExpansionLoc(Loc));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2399 | Lex/PPDirectives | ./lib/Lex/PPDirectives.cpp | 1460 | AddLineNote | 序列化 | 序列化位置读写（需复核） | `SourceMgr.AddLineNote(DigitTok.getLocation(), LineNo, FilenameID, false,` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2400 | Lex/PPDirectives | ./lib/Lex/PPDirectives.cpp | 1495 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(FlagTok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2401 | Lex/PPDirectives | ./lib/Lex/PPDirectives.cpp | 1611 | AddLineNote | 序列化 | 序列化位置读写（需复核） | `SourceMgr.AddLineNote(DigitTok.getLocation(), LineNo, FilenameID, IsFileEntry,` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2402 | Lex/InitHeaderSearch | ./lib/Lex/InitHeaderSearch.cpp | 38 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> UserEntryIdx;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2403 | Lex/InitHeaderSearch | ./lib/Lex/InitHeaderSearch.cpp | 41 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> UserEntryIdx)` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2404 | Lex/InitHeaderSearch | ./lib/Lex/InitHeaderSearch.cpp | 65 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> UserEntryIdx = None);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2405 | Lex/InitHeaderSearch | ./lib/Lex/InitHeaderSearch.cpp | 72 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> UserEntryIdx = None);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2406 | Lex/InitHeaderSearch | ./lib/Lex/InitHeaderSearch.cpp | 126 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> UserEntryIdx) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2407 | Lex/InitHeaderSearch | ./lib/Lex/InitHeaderSearch.cpp | 143 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> UserEntryIdx) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2408 | Lex/InitHeaderSearch | ./lib/Lex/InitHeaderSearch.cpp | 579 |  | 声明/容器 | 容器承载32位位置 | `static llvm::DenseMap<unsigned, unsigned>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2409 | Lex/InitHeaderSearch | ./lib/Lex/InitHeaderSearch.cpp | 581 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<unsigned, unsigned> LookupsToUserEntries;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2410 | Lex/TokenConcatenation | ./lib/Lex/TokenConcatenation.cpp | 54 | getCharacterData | 比较/实现 | 关键函数相关（需复核） | `const char *Ptr = SM.getCharacterData(SM.getSpellingLoc(Tok.getLocation()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2411 | Lex/TokenConcatenation | ./lib/Lex/TokenConcatenation.cpp | 137 | getCharacterData | 比较/实现 | 关键函数相关（需复核） | `return *SM.getCharacterData(SM.getSpellingLoc(Tok.getLocation()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2412 | Lex/TokenConcatenation | ./lib/Lex/TokenConcatenation.cpp | 172 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation PrevSpellLoc = SM.getSpellingLoc(PrevTok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2413 | Lex/TokenConcatenation | ./lib/Lex/TokenConcatenation.cpp | 173 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation SpellLoc = SM.getSpellingLoc(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2414 | Lex/TokenConcatenation | ./lib/Lex/TokenConcatenation.cpp | 174 | if | 比较/实现 | 关键函数相关（需复核） | `if (PrevSpellLoc.getLocWithOffset(PrevTok.getLength()) == SpellLoc)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2415 | Lex/DependencyDirectivesScanner | ./lib/Lex/DependencyDirectivesScanner.cpp | 171 | Report | 比较/实现 | 关键函数相关（需复核） | `Diags->Report(InputSourceLoc.getLocWithOffset(getOffsetAt(CurPtr)), Err);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2416 | Lex/DependencyDirectivesScanner | ./lib/Lex/DependencyDirectivesScanner.cpp | 248 | isEOL | 声明/局部 | 无关键词的32位位置变量（需复核） | `static unsigned isEOL(const char *First, const char *const End) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2417 | Lex/DependencyDirectivesScanner | ./lib/Lex/DependencyDirectivesScanner.cpp | 276 | if | 声明/局部 | 无关键词的32位位置变量（需复核） | `if (unsigned NLSize = isEOL(FirstAfterBackslashPastSpace, End)) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2418 | Lex/DependencyDirectivesScanner | ./lib/Lex/DependencyDirectivesScanner.cpp | 287 | skipNewline | 声明/局部 | 无关键词的32位位置变量（需复核） | `static unsigned skipNewline(const char *&First, const char *End) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2419 | Lex/DependencyDirectivesScanner | ./lib/Lex/DependencyDirectivesScanner.cpp | 291 | isEOL | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Len = isEOL(First, End);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2420 | Lex/DependencyDirectivesScanner | ./lib/Lex/DependencyDirectivesScanner.cpp | 306 | isEOL | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Len = isEOL(First, End);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2421 | Lex/DependencyDirectivesScanner | ./lib/Lex/DependencyDirectivesScanner.cpp | 413 | skipNewline | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Len = skipNewline(First, End);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2422 | Lex/DependencyDirectivesScanner | ./lib/Lex/DependencyDirectivesScanner.cpp | 490 | data | 比较/实现 | 关键函数相关（需复核） | `First = Input.data() + TheLexer.getCurrentBufferOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2423 | Lex/DependencyDirectivesScanner | ./lib/Lex/DependencyDirectivesScanner.cpp | 493 | getCurrentBufferOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned Offset = TheLexer.getCurrentBufferOffset() - Tok.getLength();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2424 | Lex/DependencyDirectivesScanner | ./lib/Lex/DependencyDirectivesScanner.cpp | 493 | getCurrentBufferOffset | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = TheLexer.getCurrentBufferOffset() - Tok.getLength();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2425 | Lex/DependencyDirectivesScanner | ./lib/Lex/DependencyDirectivesScanner.cpp | 503 | data | 比较/实现 | 关键函数相关（需复核） | `First = Input.data() + TheLexer.getCurrentBufferOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2426 | Lex/DependencyDirectivesScanner | ./lib/Lex/DependencyDirectivesScanner.cpp | 506 | getCurrentBufferOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned Offset = TheLexer.getCurrentBufferOffset() - Tok.getLength();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2427 | Lex/DependencyDirectivesScanner | ./lib/Lex/DependencyDirectivesScanner.cpp | 506 | getCurrentBufferOffset | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = TheLexer.getCurrentBufferOffset() - Tok.getLength();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2428 | Lex/MacroInfo | ./lib/Lex/MacroInfo.cpp | 225 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `SM.isBeforeInTranslationUnit(Def.getLocation(), L))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2429 | Lex/MacroInfo | ./lib/Lex/MacroInfo.cpp | 227 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `SM.isBeforeInTranslationUnit(L, Def.getUndefLocation()))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2430 | Lex/ModuleMap | ./lib/Lex/ModuleMap.cpp | 3020 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned *Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2431 | Lex/ModuleMap | ./lib/Lex/ModuleMap.cpp | 3045 | getBufferStart | 比较/实现 | 关键函数相关（需复核） | `Buffer->getBufferStart() + (Offset ? *Offset : 0),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2432 | Lex/Preprocessor | ./lib/Lex/Preprocessor.cpp | 382 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `SourceMgr.isBeforeInTranslationUnit(BestLocation, Location))) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2433 | Lex/Preprocessor | ./lib/Lex/Preprocessor.cpp | 416 | for | 声明/局部 | 仅命名可疑需复核 | `for (unsigned Line = 1; Line < CompleteLine; ++Line) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2434 | Lex/Preprocessor | ./lib/Lex/Preprocessor.cpp | 488 | getSpelling | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Len = getSpelling(Tok, Ptr, Invalid);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2435 | Lex/Preprocessor | ./lib/Lex/Preprocessor.cpp | 517 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation SpellingLoc = SM.getSpellingLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2436 | Lex/Preprocessor | ./lib/Lex/Preprocessor.cpp | 528 | createTokenSplitLoc | 比较/实现 | 关键函数相关（需复核） | `return SM.createTokenSplitLoc(Spelling, Loc, Loc.getLocWithOffset(Length));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2437 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 104 | if | 计算 | 强制收窄为32位 | `if (unsigned(-Pos-1) >= LoadedPreprocessedEntities.size()) {` | 改为 uint64_t / 移除收窄 | TODO |
| 2438 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 104 | if | 声明/局部 | 无关键词的32位位置变量（需复核） | `if (unsigned(-Pos-1) >= LoadedPreprocessedEntities.size()) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2439 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 109 | size | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned LoadedIndex = LoadedPreprocessedEntities.size()+Pos;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2440 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 127 | if | 计算 | 强制收窄为32位 | `if (unsigned(Pos) >= PreprocessedEntities.size()) {` | 改为 uint64_t / 移除收窄 | TODO |
| 2441 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 127 | if | 声明/局部 | 无关键词的32位位置变量（需复核） | `if (unsigned(Pos) >= PreprocessedEntities.size()) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2442 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 140 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(!SourceMgr.isBeforeInTranslationUnit(Range.getEnd(),Range.getBegin()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2443 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 172 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(!SourceMgr.isBeforeInTranslationUnit(Range.getEnd(),Range.getBegin()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2444 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 174 | findBeginLocalPreprocessedEntity | 声明/局部 | 仅命名可疑需复核 | `unsigned Begin = findBeginLocalPreprocessedEntity(Range.getBegin());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2445 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 174 | findBeginLocalPreprocessedEntity | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Begin = findBeginLocalPreprocessedEntity(Range.getBegin());` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2446 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 175 | findEndLocalPreprocessedEntity | 声明/局部 | 仅命名可疑需复核 | `unsigned End = findEndLocalPreprocessedEntity(Range.getEnd());` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2447 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 175 | findEndLocalPreprocessedEntity | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned End = findEndLocalPreprocessedEntity(Range.getEnd());` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2448 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 190 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return SM.isBeforeInTranslationUnit(LHS, RHS);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2449 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 195 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return SM.isBeforeInTranslationUnit(LHS, RHS);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2450 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 200 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return SM.isBeforeInTranslationUnit(LHS, RHS);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2451 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 230 | if | 比较/实现 | 关键函数相关（需复核） | `if (SourceMgr.isBeforeInTranslationUnit((*I)->getSourceRange().getEnd(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2452 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 259 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `!SourceMgr.isBeforeInTranslationUnit(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2453 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 269 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `!SourceMgr.isBeforeInTranslationUnit(BeginLoc,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2454 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 297 | if | 比较/实现 | 关键函数相关（需复核） | `if (!SourceMgr.isBeforeInTranslationUnit(BeginLoc,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2455 | Lex/PreprocessingRecord | ./lib/Lex/PreprocessingRecord.cpp | 518 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `EndLoc = EndLoc.getLocWithOffset(-1); // the InclusionDirective expects` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2456 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 64 | OpenMPDirectiveKindExWrapper | 计算 | 强制收窄为32位 | `OpenMPDirectiveKindExWrapper(OpenMPDirectiveKind DK) : Value(unsigned(DK)) {}` | 改为 uint64_t / 移除收窄 | TODO |
| 2457 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 71 | unsigned | 计算 | 强制收窄为32位 | `bool operator==(OpenMPDirectiveKind V) const { return Value == unsigned(V); }` | 改为 uint64_t / 移除收窄 | TODO |
| 2458 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 72 | unsigned | 计算 | 强制收窄为32位 | `bool operator!=(OpenMPDirectiveKind V) const { return Value != unsigned(V); }` | 改为 uint64_t / 移除收窄 | TODO |
| 2459 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 73 | unsigned | 计算 | 强制收窄为32位 | `bool operator<(OpenMPDirectiveKind V) const { return Value < unsigned(V); }` | 改为 uint64_t / 移除收窄 | TODO |
| 2460 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 74 | unsigned | 计算 | 强制收窄为32位 | `operator unsigned() const { return Value; }` | 改为 uint64_t / 移除收窄 | TODO |
| 2461 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 196 |  | 计算 | 强制收窄为32位 | `? static_cast<unsigned>(OMPD_unknown)` | 改为 uint64_t / 移除收窄 | TODO |
| 2462 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 208 |  | 计算 | 强制收窄为32位 | `? static_cast<unsigned>(OMPD_unknown)` | 改为 uint64_t / 移除收窄 | TODO |
| 2463 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 218 | unsigned | 计算 | 强制收窄为32位 | `return unsigned(DKind) < llvm::omp::Directive_enumSize` | 改为 uint64_t / 移除收窄 | TODO |
| 2464 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 811 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 4> LinModifiers;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2465 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 1795 | SimpleClauseData | 声明/局部 | 仅命名可疑需复核 | `SimpleClauseData(unsigned Type, SourceLocation Loc, SourceLocation LOpen,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2466 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 2110 | unsigned | 计算 | 强制收窄为32位 | `OMPD_allocate, CKind, !FirstClauses[unsigned(CKind)].getInt());` | 改为 uint64_t / 移除收窄 | TODO |
| 2467 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 2113 | unsigned | 计算 | 强制收窄为32位 | `FirstClauses[unsigned(CKind)].setInt(true);` | 改为 uint64_t / 移除收窄 | TODO |
| 2468 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 2151 | unsigned | 计算 | 强制收窄为32位 | `OMPD_requires, CKind, !FirstClauses[unsigned(CKind)].getInt());` | 改为 uint64_t / 移除收窄 | TODO |
| 2469 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 2154 | unsigned | 计算 | 强制收窄为32位 | `FirstClauses[unsigned(CKind)].setInt(true);` | 改为 uint64_t / 移除收窄 | TODO |
| 2470 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 2698 | unsigned | 计算 | 强制收窄为32位 | `OMPD_allocate, CKind, !FirstClauses[unsigned(CKind)].getInt());` | 改为 uint64_t / 移除收窄 | TODO |
| 2471 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 2701 | unsigned | 计算 | 强制收窄为32位 | `FirstClauses[unsigned(CKind)].setInt(true);` | 改为 uint64_t / 移除收窄 | TODO |
| 2472 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 2892 | unsigned | 计算 | 强制收窄为32位 | `DKind, CKind, !FirstClauses[unsigned(CKind)].getInt());` | 改为 uint64_t / 移除收窄 | TODO |
| 2473 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 2893 | unsigned | 计算 | 强制收窄为32位 | `FirstClauses[unsigned(CKind)].setInt(true);` | 改为 uint64_t / 移除收窄 | TODO |
| 2474 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 2895 | unsigned | 计算 | 强制收窄为32位 | `FirstClauses[unsigned(CKind)].setPointer(Clause);` | 改为 uint64_t / 移除收窄 | TODO |
| 2475 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 2912 | if | 计算 | 强制收窄为32位 | `if (DKind == OMPD_ordered && FirstClauses[unsigned(OMPC_depend)].getInt()) {` | 改为 uint64_t / 移除收窄 | TODO |
| 2476 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 2922 | if | 计算 | 强制收窄为32位 | `if (DKind == OMPD_tile && !FirstClauses[unsigned(OMPC_sizes)].getInt()) {` | 改为 uint64_t / 移除收窄 | TODO |
| 2477 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 3716 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 4> Arg;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2478 | Parse/ParseOpenMP | ./lib/Parse/ParseOpenMP.cpp | 3832 | back | 计算 | 强制收窄为32位 | `Arg.back() = unsigned(OMPD_unknown);` | 改为 uint64_t / 移除收窄 | TODO |
| 2479 | Parse/ParseInit | ./lib/Parse/ParseInit.cpp | 184 | AddDesignator | 序列化 | 序列化位置读写（需复核） | `D.AddDesignator(Designator::getField(FieldName, SourceLocation(), NameLoc));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2480 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 46 |  | 声明/容器 | 容器承载32位位置 | `ArrayRef<unsigned> AsmTokOffsets;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2481 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 50 |  | 声明/容器 | 容器承载32位位置 | `ArrayRef<Token> Toks, ArrayRef<unsigned> Offsets)` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2482 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 65 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned &Offset) override {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2483 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 66 | getActions | 比较/实现 | 关键函数相关（需复核） | `return TheParser.getActions().LookupInlineAsmField(Base, Member, Offset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2484 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 110 | begin | 计算 | 指针差值落入32位 | `unsigned FirstIndex = FirstOrigToken - AsmToks.begin();` | 用 uint64_t 接收指针差值 | TODO |
| 2485 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 156 | begin | 计算 | 指针差值落入32位 | `unsigned FirstTokIndex = FirstTokOffset - AsmTokOffsets.begin();` | 用 uint64_t 接收指针差值 | TODO |
| 2486 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 174 | getPointer | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = SMLoc.getPointer() - LBuf->getBufferStart();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2487 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 177 | lower_bound | 声明/局部 | 仅命名可疑需复核 | `const unsigned *TokOffsetPtr = llvm::lower_bound(AsmTokOffsets, Offset);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2488 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 178 | begin | 计算 | 指针差值落入32位 | `unsigned TokIndex = TokOffsetPtr - AsmTokOffsets.begin();` | 用 uint64_t 接收指针差值 | TODO |
| 2489 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 188 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc = Loc.getLocWithOffset(Offset - TokOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2490 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 405 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `LineNo = SrcMgr.getLineNumber(FID, ExpAsmLoc.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2491 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 433 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `LineNo = SrcMgr.getLineNumber(FID, ExpSemiLoc.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2492 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 441 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `SrcMgr.getLineNumber(ExpLoc.first, ExpLoc.second) != LineNo) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2493 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 456 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `LineNo = SrcMgr.getLineNumber(ExpLoc.first, ExpLoc.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2494 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 462 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `LineNo = SrcMgr.getLineNumber(FID, ExpLoc.second);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2495 | Parse/ParseStmtAsm | ./lib/Parse/ParseStmtAsm.cpp | 560 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 8> TokOffsets;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2496 | Parse/ParseExpr | ./lib/Parse/ParseExpr.cpp | 508 | getCharacterData | 比较/实现 | 关键函数相关（需复核） | `SM.getCharacterData(FILoc.getLocWithOffset(-1), &IsInvalid);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2497 | Parse/ParseExpr | ./lib/Parse/ParseExpr.cpp | 511 | getCharacterData | 比较/实现 | 关键函数相关（需复核） | `SM.getCharacterData(FILoc.getLocWithOffset(-2), &IsInvalid);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2498 | Parse/ParseExpr | ./lib/Parse/ParseExpr.cpp | 513 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `FILoc = FILoc.getLocWithOffset(-1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2499 | Parse/ParseDeclCXX | ./lib/Parse/ParseDeclCXX.cpp | 3266 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `EndLoc = ASLoc.getLocWithOffset(TokLength);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2500 | Parse/ParseDeclCXX | ./lib/Parse/ParseDeclCXX.cpp | 4123 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `PP.getSourceManager().getExpansionLoc(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2501 | Parse/ParseDeclCXX | ./lib/Parse/ParseDeclCXX.cpp | 4128 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `PP.getSourceManager().getExpansionLoc(Tok.getEndLoc()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2502 | Parse/ParseDeclCXX | ./lib/Parse/ParseDeclCXX.cpp | 4153 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `PP.getSourceManager().getSpellingLoc(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2503 | Parse/ParseStmt | ./lib/Parse/ParseStmt.cpp | 1338 | getVisualIndentation | 声明/局部 | 仅命名可疑需复核 | `static unsigned getVisualIndentation(SourceManager &SM, SourceLocation Loc) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2504 | Parse/ParseStmt | ./lib/Parse/ParseStmt.cpp | 1341 | getSpellingColumnNumber | 声明/局部 | 仅命名可疑需复核 | `unsigned ColNo = SM.getSpellingColumnNumber(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2505 | Parse/ParseStmt | ./lib/Parse/ParseStmt.cpp | 1345 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> FIDAndOffset = SM.getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2506 | Parse/ParseStmt | ./lib/Parse/ParseStmt.cpp | 1348 | getBufferData | 比较/实现 | 关键函数相关（需复核） | `StringRef BufData = SM.getBufferData(FIDAndOffset.first, &Invalid);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2507 | Parse/Parser | ./lib/Parse/Parser.cpp | 267 | return | 计算 | 强制收窄为32位 | `return (static_cast<unsigned>(L) & static_cast<unsigned>(R)) != 0;` | 改为 uint64_t / 移除收窄 | TODO |
| 2508 | Parse/Parser | ./lib/Parse/Parser.cpp | 361 | SkipUntilFlags | 计算 | 强制收窄为32位 | `SkipUntilFlags(unsigned(Flags) &` | 改为 uint64_t / 移除收窄 | TODO |
| 2509 | Parse/Parser | ./lib/Parse/Parser.cpp | 362 | unsigned | 计算 | 强制收窄为32位 | `unsigned(StopAtCodeCompletion \| StopAtSemi)));` | 改为 uint64_t / 移除收窄 | TODO |
| 2510 | Parse/Parser | ./lib/Parse/Parser.cpp | 1120 | getTypeSpecTypeLoc | 比较/实现 | 关键函数相关（需复核） | `? DS.getTypeSpecTypeLoc().getLocWithOffset(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2511 | Parse/ParseExprCXX | ./lib/Parse/ParseExprCXX.cpp | 47 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation FirstLoc = SM.getSpellingLoc(First.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2512 | Parse/ParseExprCXX | ./lib/Parse/ParseExprCXX.cpp | 48 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation FirstEnd = FirstLoc.getLocWithOffset(First.getLength());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2513 | Parse/ParseExprCXX | ./lib/Parse/ParseExprCXX.cpp | 49 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `return FirstEnd == SM.getSpellingLoc(Second.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2514 | Parse/ParseExprCXX | ./lib/Parse/ParseExprCXX.cpp | 69 | setLocation | 比较/实现 | 关键函数相关（需复核） | `ColonToken.setLocation(ColonToken.getLocation().getLocWithOffset(-1));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2515 | Parse/ParseExprCXX | ./lib/Parse/ParseExprCXX.cpp | 2689 | getUDSuffixOffset | 比较/实现 | 关键函数相关（需复核） | `Literal.getUDSuffixOffset(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2516 | Parse/ParseCXXInlineMethods | ./lib/Parse/ParseCXXInlineMethods.cpp | 65 | getEndLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation KWEndLoc = Tok.getEndLoc().getLocWithOffset(-1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2517 | Parse/ParseTemplate | ./lib/Parse/ParseTemplate.cpp | 487 | setLocation | 比较/实现 | 关键函数相关（需复核） | `Tok.setLocation(Tok.getLocation().getLocWithOffset(1));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2518 | Parse/ParseTemplate | ./lib/Parse/ParseTemplate.cpp | 640 | ParseTemplateParameter | 声明/局部 | 无关键词的32位位置变量（需复核） | `NamedDecl *Parser::ParseTemplateParameter(unsigned Depth, unsigned Position) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2519 | Parse/ParseTemplate | ./lib/Parse/ParseTemplate.cpp | 783 | ParseTypeParameter | 声明/局部 | 无关键词的32位位置变量（需复核） | `NamedDecl *Parser::ParseTypeParameter(unsigned Depth, unsigned Position) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2520 | Parse/ParseTemplate | ./lib/Parse/ParseTemplate.cpp | 879 | ParseTemplateTemplateParameter | 声明/局部 | 无关键词的32位位置变量（需复核） | `Parser::ParseTemplateTemplateParameter(unsigned Depth, unsigned Position) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2521 | Parse/ParseTemplate | ./lib/Parse/ParseTemplate.cpp | 987 | ParseNonTypeTemplateParameter | 声明/局部 | 无关键词的32位位置变量（需复核） | `Parser::ParseNonTypeTemplateParameter(unsigned Depth, unsigned Position) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2522 | Parse/ParseTemplate | ./lib/Parse/ParseTemplate.cpp | 1207 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation AfterGreaterLoc = TokLoc.getLocWithOffset(GreaterLength);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2523 | Parse/ParseObjc | ./lib/Parse/ParseObjc.cpp | 1952 | setLocation | 比较/实现 | 关键函数相关（需复核） | `Tok.setLocation(Tok.getLocation().getLocWithOffset(-1));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2524 | Parse/ParseObjc | ./lib/Parse/ParseObjc.cpp | 3703 |  | 比较/实现 | 关键函数相关（需复核） | `// expensive isBeforeInTranslationUnit call.` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2525 | Parse/ParseObjc | ./lib/Parse/ParseObjc.cpp | 3704 | if | 比较/实现 | 关键函数相关（需复核） | `if (PP.getSourceManager().isBeforeInTranslationUnit(Tok.getLocation(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2526 | Parse/ParseDecl | ./lib/Parse/ParseDecl.cpp | 249 | if | 比较/实现 | 关键函数相关（需复核） | `if (!SM.isWrittenInBuiltinFile(SM.getSpellingLoc(AttrTokLoc)) &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2527 | Parse/ParseDecl | ./lib/Parse/ParseDecl.cpp | 496 | size | 计算 | 强制收窄为32位 | `return static_cast<unsigned>(ArgExprs.size() + !TheParsedType.get().isNull());` | 改为 uint64_t / 移除收窄 | TODO |
| 2528 | Parse/ParseDecl | ./lib/Parse/ParseDecl.cpp | 7395 | AddTypeInfo | 序列化 | 序列化位置读写（需复核） | `D.AddTypeInfo(Chunk, SourceLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2529 | Edit/RewriteObjCFoundationAPI | ./lib/Edit/RewriteObjCFoundationAPI.cpp | 748 | getCharRange | 比较/实现 | 关键函数相关（需复核） | `CharSourceRange::getCharRange(B, B.getLocWithOffset(text.size()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2530 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 47 | getSpelling | 比较/实现 | 关键函数相关（需复核） | `StringRef ArgName = Lexer::getSpelling(SourceMgr.getSpellingLoc(DefArgLoc),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2531 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 52 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceMgr.getSpellingLoc(DefArgLoc)};` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2532 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 75 | getActionForOffset | 比较/实现 | 关键函数相关（需复核） | `FileEditsTy::iterator FA = getActionForOffset(Offs);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2533 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 150 | getWithOffset | 比较/实现 | 关键函数相关（需复核） | `FileOffset EndOffs = BeginOffs.getWithOffset(Len);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2534 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 158 | getWithOffset | 比较/实现 | 关键函数相关（需复核） | `FileOffset E = B.getWithOffset(FA.RemoveLen);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2535 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 175 | getWithOffset | 比较/实现 | 关键函数相关（需复核） | `FileOffset E = B.getWithOffset(FA.RemoveLen);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2536 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 204 | getWithOffset | 比较/实现 | 关键函数相关（需复核） | `FileOffset EndOffs = BeginOffs.getWithOffset(Len);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2537 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 212 | getWithOffset | 比较/实现 | 关键函数相关（需复核） | `FileOffset E = B.getWithOffset(FA.RemoveLen);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2538 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 230 | getWithOffset | 比较/实现 | 关键函数相关（需复核） | `FileOffset E = B.getWithOffset(FA.RemoveLen);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2539 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 244 | getOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned diff = EndOffs.getOffset() - TopEnd.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2540 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 255 | getWithOffset | 比较/实现 | 关键函数相关（需复核） | `FileOffset E = B.getWithOffset(FA.RemoveLen);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2541 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 266 | getOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned diff = E.getOffset() - TopEnd.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2542 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 350 | getOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned begin = offs.getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2543 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 388 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc = Loc.getLocWithOffset(offs.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2544 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 395 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc.getLocWithOffset(len));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2545 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 422 | getWithOffset | 比较/实现 | 关键函数相关（需复核） | `CurEnd = CurOffs.getWithOffset(CurLen);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2546 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 433 | getWithOffset | 比较/实现 | 关键函数相关（需复核） | `CurEnd.getWithOffset(act.RemoveLen);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2547 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 442 | getWithOffset | 比较/实现 | 关键函数相关（需复核） | `CurEnd = CurOffs.getWithOffset(CurLen);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2548 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 454 | getSourceText | 比较/实现 | 关键函数相关（需复核） | `StringRef EditedSource::getSourceText(FileOffset BeginOffs, FileOffset EndOffs,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2549 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 459 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `BLoc = BLoc.getLocWithOffset(BeginOffs.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2550 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 462 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `ELoc = BLoc.getLocWithOffset(EndOffs.getOffset() - BeginOffs.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2551 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 468 | getActionForOffset | 比较/实现 | 关键函数相关（需复核） | `EditedSource::getActionForOffset(FileOffset Offs) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2552 | Edit/EditedSource | ./lib/Edit/EditedSource.cpp | 475 | getWithOffset | 比较/实现 | 关键函数相关（需复核） | `FileOffset E = B.getWithOffset(FA.RemoveLen);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2553 | Edit/Commit | ./lib/Edit/Commit.cpp | 25 | getLocForStartOfFile | 比较/实现 | 关键函数相关（需复核） | `SourceLocation Loc = SM.getLocForStartOfFile(Offset.getFID());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2554 | Edit/Commit | ./lib/Edit/Commit.cpp | 26 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc = Loc.getLocWithOffset(Offset.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2555 | Edit/Commit | ./lib/Edit/Commit.cpp | 33 | getCharRange | 比较/实现 | 关键函数相关（需复核） | `return CharSourceRange::getCharRange(Loc, Loc.getLocWithOffset(Length));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2556 | Edit/Commit | ./lib/Edit/Commit.cpp | 38 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc = Loc.getLocWithOffset(InsertFromRangeOffs.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2557 | Edit/Commit | ./lib/Edit/Commit.cpp | 40 | getCharRange | 比较/实现 | 关键函数相关（需复核） | `return CharSourceRange::getCharRange(Loc, Loc.getLocWithOffset(Length));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2558 | Edit/Commit | ./lib/Edit/Commit.cpp | 148 | getWithOffset | 比较/实现 | 关键函数相关（需复核） | `FileOffset OuterEnd = OuterBegin.getWithOffset(OuterLen);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2559 | Edit/Commit | ./lib/Edit/Commit.cpp | 149 | getWithOffset | 比较/实现 | 关键函数相关（需复核） | `FileOffset InnerEnd = InnerBegin.getWithOffset(InnerLen);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2560 | Edit/Commit | ./lib/Edit/Commit.cpp | 159 | getOffset | 比较/实现 | 关键函数相关（需复核） | `OuterBegin, InnerBegin.getOffset() - OuterBegin.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2561 | Edit/Commit | ./lib/Edit/Commit.cpp | 161 | getOffset | 比较/实现 | 关键函数相关（需复核） | `InnerEnd, OuterEnd.getOffset() - InnerEnd.getOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2562 | Edit/Commit | ./lib/Edit/Commit.cpp | 255 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation spellLoc = SourceMgr.getSpellingLoc(loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2563 | Edit/Commit | ./lib/Edit/Commit.cpp | 257 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `AfterLoc = loc.getLocWithOffset(tokLen);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2564 | Edit/Commit | ./lib/Edit/Commit.cpp | 287 | getWithOffset | 比较/实现 | 关键函数相关（需复核） | `Offs > act.Offset && Offs < act.Offset.getWithOffset(act.Length))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2565 | Edit/Commit | ./lib/Edit/Commit.cpp | 337 | substr | 比较/实现 | 关键函数相关（需复核） | `return file.substr(Offs.getOffset()).startswith(text);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2566 | ASTMatchers/ASTMatchersInternal | ./lib/ASTMatchers/ASTMatchersInternal.cpp | 683 | getSpelling | 比较/实现 | 关键函数相关（需复核） | `StringRef TokenText = Lexer::getSpelling(SM.getSpellingLoc(Loc), Buffer, SM,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2567 | ASTMatchers/ASTMatchersInternal | ./lib/ASTMatchers/ASTMatchersInternal.cpp | 700 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `MacroName, Expansion.getSpellingLoc(), Context))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2568 | ASTMatchers/ASTMatchFinder | ./lib/ASTMatchers/ASTMatchFinder.cpp | 1060 | getFilterForKind | 声明/容器 | 容器承载32位位置 | `const std::vector<unsigned short> &getFilterForKind(ASTNodeKind Kind) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2569 | ASTMatchers/ASTMatchFinder | ./lib/ASTMatchers/ASTMatchFinder.cpp | 1318 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<ASTNodeKind, std::vector<unsigned short>> MatcherFiltersMap;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2570 | ASTMatchers/Dynamic | ./lib/ASTMatchers/Dynamic/Parser.cpp | 317 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Line = 1;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2571 | Driver/ToolChains | ./lib/Driver/ToolChains/Clang.cpp | 3347 | if | 比较/实现 | 关键函数相关（需复核） | `if (Value.getAsInteger(10, Offset)) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2572 | Driver/ToolChains | ./lib/Driver/ToolChains/Clang.cpp | 4610 | getArch | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = Triple.getArch() == llvm::Triple::arm ? 4 : 6;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2573 | Driver/ToolChains | ./lib/Driver/ToolChains/Clang.cpp | 4613 | getArchName | 比较/实现 | 关键函数相关（需复核） | `Triple.getArchName().substr(Offset).consumeInteger(10, Version);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2574 | Driver/ToolChains | ./lib/Driver/ToolChains/Clang.cpp | 6170 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Size, Offset = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2575 | Driver/ToolChains | ./lib/Driver/ToolChains/AVR.cpp | 351 | GetMCUSectionAddressData | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> GetMCUSectionAddressData(StringRef MCUName) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2576 | Driver/ToolChains | ./lib/Driver/ToolChains/AVR.cpp | 354 |  | 声明/容器 | 容器承载32位位置 | `return Optional<unsigned>(MCU.DataAddr);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2577 | Driver/ToolChains | ./lib/Driver/ToolChains/AVR.cpp | 355 |  | 声明/容器 | 容器承载32位位置 | `return Optional<unsigned>();` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2578 | Driver/ToolChains | ./lib/Driver/ToolChains/AVR.cpp | 432 | GetMCUSectionAddressData | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> SectionAddressData = GetMCUSectionAddressData(CPU);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2579 | Driver/ToolChains | ./lib/Driver/ToolChains/Hexagon.h | 110 | getSmallDataThreshold | 声明/容器 | 容器承载32位位置 | `static Optional<unsigned> getSmallDataThreshold(` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2580 | Driver/ToolChains | ./lib/Driver/ToolChains/Hexagon.cpp | 522 | getSmallDataThreshold | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> HexagonToolChain::getSmallDataThreshold(` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2581 | Sema/SemaTemplateVariadic | ./lib/Sema/SemaTemplateVariadic.cpp | 606 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2582 | Sema/SemaTemplateVariadic | ./lib/Sema/SemaTemplateVariadic.cpp | 624 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2583 | Sema/SemaTemplateVariadic | ./lib/Sema/SemaTemplateVariadic.cpp | 648 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2584 | Sema/SemaTemplateVariadic | ./lib/Sema/SemaTemplateVariadic.cpp | 672 |  | 声明/容器 | 容器承载32位位置 | `bool &RetainExpansion, Optional<unsigned> &NumExpansions) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2585 | Sema/SemaTemplateVariadic | ./lib/Sema/SemaTemplateVariadic.cpp | 677 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumPartialExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2586 | Sema/SemaTemplateVariadic | ./lib/Sema/SemaTemplateVariadic.cpp | 803 | getNumArgumentsInExpansion | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> Sema::getNumArgumentsInExpansion(QualType T,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2587 | Sema/SemaTemplateVariadic | ./lib/Sema/SemaTemplateVariadic.cpp | 809 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> Result;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2588 | Sema/SemaTemplateVariadic | ./lib/Sema/SemaTemplateVariadic.cpp | 1055 |  | 声明/容器 | 容器承载32位位置 | `SourceLocation &Ellipsis, Optional<unsigned> &NumExpansions) const {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2589 | Sema/SemaTemplateVariadic | ./lib/Sema/SemaTemplateVariadic.cpp | 1112 | getFullyPackExpandedSize | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> Sema::getFullyPackExpandedSize(TemplateArgument Arg) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2590 | Sema/SemaTemplateVariadic | ./lib/Sema/SemaTemplateVariadic.cpp | 1253 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2591 | Sema/SemaTemplate | ./lib/Sema/SemaTemplate.cpp | 819 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> Note;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2592 | Sema/SemaTemplate | ./lib/Sema/SemaTemplate.cpp | 944 | TemplateArgument | 声明/容器 | 容器承载32位位置 | `TArg = TemplateArgument(Template, Optional<unsigned int>());` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2593 | Sema/SemaTemplate | ./lib/Sema/SemaTemplate.cpp | 1039 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Depth, unsigned Position,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2594 | Sema/SemaTemplate | ./lib/Sema/SemaTemplate.cpp | 1474 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Position,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2595 | Sema/SemaTemplate | ./lib/Sema/SemaTemplate.cpp | 1619 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Position,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2596 | Sema/SemaTemplate | ./lib/Sema/SemaTemplate.cpp | 2288 | getNumExpansionParameters | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned>(TTP->getNumExpansionParameters()) : None);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2597 | Sema/SemaTemplate | ./lib/Sema/SemaTemplate.cpp | 2980 | Matches | 声明/局部 | 仅命名可疑需复核 | `bool Matches(unsigned ParmDepth, SourceLocation Loc = SourceLocation()) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2598 | Sema/SemaTemplate | ./lib/Sema/SemaTemplate.cpp | 5748 | if | 声明/容器 | 容器承载32位位置 | `if (Optional<unsigned> Expansions = getExpandedPackSize(*Param)) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2599 | Sema/SemaTemplate | ./lib/Sema/SemaTemplate.cpp | 6880 | getDepth | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> Depth = Param->getDepth() + 1;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2600 | Sema/SemaExprObjC | ./lib/Sema/SemaExprObjC.cpp | 925 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned Idx = 0, End = Literal->getNumElements(); Idx != End; ++Idx) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2601 | Sema/SemaExprObjC | ./lib/Sema/SemaExprObjC.cpp | 1307 | SelectorRange | 比较/实现 | 关键函数相关（需复核） | `SourceRange SelectorRange(LParenLoc.getLocWithOffset(1),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2602 | Sema/SemaExprObjC | ./lib/Sema/SemaExprObjC.cpp | 1308 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `RParenLoc.getLocWithOffset(-1));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2603 | Sema/SemaExprObjC | ./lib/Sema/SemaExprObjC.cpp | 1570 |  | 计算 | 强制收窄为32位 | `receiverNullabilityIdx = 1 + static_cast<unsigned>(*nullability);` | 改为 uint64_t / 移除收窄 | TODO |
| 2604 | Sema/SemaExprObjC | ./lib/Sema/SemaExprObjC.cpp | 1578 |  | 计算 | 强制收窄为32位 | `resultNullabilityIdx = 1 + static_cast<unsigned>(*nullability);` | 改为 uint64_t / 移除收窄 | TODO |
| 2605 | Sema/SemaExprObjC | ./lib/Sema/SemaExprObjC.cpp | 1805 | size | 计算 | 强制收窄为32位 | `<< 2 << NumNamedArgs << static_cast<unsigned>(Args.size());` | 改为 uint64_t / 移除收窄 | TODO |
| 2606 | Sema/SemaExprObjC | ./lib/Sema/SemaExprObjC.cpp | 1902 | size | 计算 | 强制收窄为32位 | `<< 2 /*method*/ << NumNamedArgs << static_cast<unsigned>(Args.size())` | 改为 uint64_t / 移除收窄 | TODO |
| 2607 | Sema/SemaExprObjC | ./lib/Sema/SemaExprObjC.cpp | 3774 | getCharacterData | 比较/实现 | 关键函数相关（需复核） | `char PrevChar = *SM.getCharacterData(range.getBegin().getLocWithOffset(-1));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2608 | Sema/SemaExprObjC | ./lib/Sema/SemaExprObjC.cpp | 3792 | getCharacterData | 比较/实现 | 关键函数相关（需复核） | `char PrevChar = *SM.getCharacterData(range.getBegin().getLocWithOffset(-1));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2609 | Sema/SemaExprObjC | ./lib/Sema/SemaExprObjC.cpp | 3924 | unsigned | 计算 | 强制收窄为32位 | `<< unsigned(castType->isBlockPointerType()) // to ObjC\|block type` | 改为 uint64_t / 移除收窄 | TODO |
| 2610 | Sema/SemaExprObjC | ./lib/Sema/SemaExprObjC.cpp | 3964 | unsigned | 计算 | 强制收窄为32位 | `<< unsigned(castExprType->isBlockPointerType()) // of ObjC\|block type` | 改为 uint64_t / 移除收窄 | TODO |
| 2611 | Sema/SemaStmtAttr | ./lib/Sema/SemaStmtAttr.cpp | 438 |  | 计算 | 强制收窄为32位 | `UnrollFactor = static_cast<unsigned>(Val);` | 改为 uint64_t / 移除收窄 | TODO |
| 2612 | Sema/DeclSpec | ./lib/Sema/DeclSpec.cpp | 705 |  | 计算 | 强制收窄为32位 | `TypeSpecWidth = static_cast<unsigned>(W);` | 改为 uint64_t / 移除收窄 | TODO |
| 2613 | Sema/DeclSpec | ./lib/Sema/DeclSpec.cpp | 725 |  | 计算 | 强制收窄为32位 | `TypeSpecSign = static_cast<unsigned>(S);` | 改为 uint64_t / 移除收窄 | TODO |
| 2614 | Sema/DeclSpec | ./lib/Sema/DeclSpec.cpp | 888 |  | 计算 | 强制收窄为32位 | `TypeSpecPipe = static_cast<unsigned>(TypeSpecifiersPipe::Pipe);` | 改为 uint64_t / 移除收窄 | TODO |
| 2615 | Sema/DeclSpec | ./lib/Sema/DeclSpec.cpp | 1098 |  | 计算 | 强制收窄为32位 | `ConstexprSpecifier = static_cast<unsigned>(ConstexprKind);` | 改为 uint64_t / 移除收窄 | TODO |
| 2616 | Sema/DeclSpec | ./lib/Sema/DeclSpec.cpp | 1141 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `S.getSourceManager().isBeforeInTranslationUnit(ExtraLocs[I],` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2617 | Sema/DeclSpec | ./lib/Sema/DeclSpec.cpp | 1147 |  | 计算 | 强制收窄为32位 | `TypeSpecWidth = static_cast<unsigned>(TypeSpecifierWidth::Unspecified);` | 改为 uint64_t / 移除收窄 | TODO |
| 2618 | Sema/DeclSpec | ./lib/Sema/DeclSpec.cpp | 1149 |  | 计算 | 强制收窄为32位 | `TypeSpecSign = static_cast<unsigned>(TypeSpecifierSign::Unspecified);` | 改为 uint64_t / 移除收窄 | TODO |
| 2619 | Sema/DeclSpec | ./lib/Sema/DeclSpec.cpp | 1202 |  | 计算 | 强制收窄为32位 | `TypeSpecSign = static_cast<unsigned>(TypeSpecifierSign::Unsigned);` | 改为 uint64_t / 移除收窄 | TODO |
| 2620 | Sema/DeclSpec | ./lib/Sema/DeclSpec.cpp | 1240 |  | 计算 | 强制收窄为32位 | `TypeSpecSign = static_cast<unsigned>(TypeSpecifierSign::Unsigned);` | 改为 uint64_t / 移除收窄 | TODO |
| 2621 | Sema/DeclSpec | ./lib/Sema/DeclSpec.cpp | 1241 |  | 计算 | 强制收窄为32位 | `TypeSpecWidth = static_cast<unsigned>(TypeSpecifierWidth::Short);` | 改为 uint64_t / 移除收窄 | TODO |
| 2622 | Sema/DeclSpec | ./lib/Sema/DeclSpec.cpp | 1259 |  | 计算 | 强制收窄为32位 | `TypeSpecSign = static_cast<unsigned>(TypeSpecifierSign::Unspecified);` | 改为 uint64_t / 移除收窄 | TODO |
| 2623 | Sema/DeclSpec | ./lib/Sema/DeclSpec.cpp | 1330 | if | 比较/实现 | 关键函数相关（需复核） | `if (S.getSourceManager().isBeforeInTranslationUnit(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2624 | Sema/SemaLookup | ./lib/Sema/SemaLookup.cpp | 527 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> ExistingI;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2625 | Sema/SemaLambda | ./lib/Sema/SemaLambda.cpp | 57 |  | 声明/容器 | 容器承载32位位置 | `/// \returns An Optional<unsigned> Index that if evaluates to 'true' contains` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2626 | Sema/SemaLambda | ./lib/Sema/SemaLambda.cpp | 62 |  | 声明/容器 | 容器承载32位位置 | `static inline Optional<unsigned>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2627 | Sema/SemaLambda | ./lib/Sema/SemaLambda.cpp | 67 |  | 声明/容器 | 容器承载32位位置 | `const Optional<unsigned> NoLambdaIsCaptureReady;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2628 | Sema/SemaLambda | ./lib/Sema/SemaLambda.cpp | 168 |  | 声明/容器 | 容器承载32位位置 | `/// \returns An Optional<unsigned> Index that if evaluates to 'true' contains` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2629 | Sema/SemaLambda | ./lib/Sema/SemaLambda.cpp | 173 | getStackIndexOfNearestEnclosingCaptureCapableLambda | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> clang::getStackIndexOfNearestEnclosingCaptureCapableLambda(` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2630 | Sema/SemaLambda | ./lib/Sema/SemaLambda.cpp | 177 |  | 声明/容器 | 容器承载32位位置 | `const Optional<unsigned> NoLambdaIsCaptureCapable;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2631 | Sema/SemaLambda | ./lib/Sema/SemaLambda.cpp | 179 |  | 声明/容器 | 容器承载32位位置 | `const Optional<unsigned> OptionalStackIndex =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2632 | Sema/SemaLambda | ./lib/Sema/SemaLambda.cpp | 792 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions, IdentifierInfo *Id, bool IsDirectInit,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2633 | Sema/SemaOverload | ./lib/Sema/SemaOverload.cpp | 616 |  | 计算 | 强制收窄为32位 | `Result.Result = static_cast<unsigned>(TDK);` | 改为 uint64_t / 移除收窄 | TODO |
| 2634 | Sema/SemaOverload | ./lib/Sema/SemaOverload.cpp | 876 | getCallArgIndex | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> DeductionFailureInfo::getCallArgIndex() {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2635 | Sema/SemaOverload | ./lib/Sema/SemaOverload.cpp | 10705 |  | 计算 | 强制收窄为32位 | `<< (unsigned)(Cand->Fix.Kind);` | 改为 uint64_t / 移除收窄 | TODO |
| 2636 | Sema/SemaOverload | ./lib/Sema/SemaOverload.cpp | 10774 |  | 计算 | 强制收窄为32位 | `<< (unsigned)(Cand->Fix.Kind);` | 改为 uint64_t / 移除收窄 | TODO |
| 2637 | Sema/SemaOverload | ./lib/Sema/SemaOverload.cpp | 11662 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return S.SourceMgr.isBeforeInTranslationUnit(LLoc, RLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2638 | Sema/SemaOverload | ./lib/Sema/SemaOverload.cpp | 11925 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return S.SourceMgr.isBeforeInTranslationUnit(LLoc, RLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2639 | Sema/MultiplexExternalSemaSource | ./lib/Sema/MultiplexExternalSemaSource.cpp | 125 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2640 | Sema/SemaTemplateDeduction | ./lib/Sema/SemaTemplateDeduction.cpp | 703 | if | 声明/容器 | 容器承载32位位置 | `if (Optional<unsigned> ExpandedPackExpansions =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2641 | Sema/SemaTemplateDeduction | ./lib/Sema/SemaTemplateDeduction.cpp | 942 | if | 声明/容器 | 容器承载32位位置 | `if (Optional<unsigned> Expansions = getExpandedPackSize(Param)) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2642 | Sema/SemaTemplateDeduction | ./lib/Sema/SemaTemplateDeduction.cpp | 964 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> FixedNumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2643 | Sema/SemaTemplateDeduction | ./lib/Sema/SemaTemplateDeduction.cpp | 1089 | getNumExpansions | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions = Expansion->getNumExpansions();` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2644 | Sema/SemaTemplateDeduction | ./lib/Sema/SemaTemplateDeduction.cpp | 2047 | unsigned | 计算 | 强制收窄为32位 | `unsigned (ConstantMatrixType::*GetArgDimension)() const,` | 改为 uint64_t / 移除收窄 | TODO |
| 2645 | Sema/SemaTemplateDeduction | ./lib/Sema/SemaTemplateDeduction.cpp | 3160 | getExpandedPackSize | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> Expansions = getExpandedPackSize(Param);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2646 | Sema/SemaTemplateDeduction | ./lib/Sema/SemaTemplateDeduction.cpp | 4071 | getNumExpansions | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions = ParamExpansion->getNumExpansions();` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2647 | Sema/SemaTemplateDeduction | ./lib/Sema/SemaTemplateDeduction.cpp | 4526 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> DependentDeductionDepth,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2648 | Sema/SemaTemplateDeduction | ./lib/Sema/SemaTemplateDeduction.cpp | 4617 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> DependentDeductionDepth,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2649 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 115 |  | 声明/类型别名 | 可疑别名32位 | `using LCDeclInfo = std::pair<unsigned, VarDecl *>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2650 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 2573 |  | 计算 | 指针差值落入32位 | `const unsigned NewLevel = I - 1;` | 用 uint64_t 接收指针差值 | TODO |
| 2651 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 2602 | addAttr | 计算 | 强制收窄为32位 | `FD->addAttr(OMPCaptureKindAttr::CreateImplicit(Context, unsigned(OMPC)));` | 改为 uint64_t / 移除收窄 | TODO |
| 2652 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 4876 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned I = 0, End = UAC->getNumberOfAllocators(); I < End;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2653 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 5203 | operator | 计算 | 强制收窄为32位 | `unsigned operator()(argument_type DK) { return unsigned(DK); }` | 改为 uint64_t / 移除收窄 | TODO |
| 2654 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 5254 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned Cnt = 0, End = AllowedNameModifiers.size(); Cnt < End;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2655 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 6763 |  | 声明/容器 | 容器承载32位位置 | `ArrayRef<unsigned> LinModifiers, ArrayRef<Expr *> Steps, SourceRange SR) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2656 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 7765 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> InitDependOnLC;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2657 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 7768 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> CondDependOnLC;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2658 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 7770 | doesDependOnLoopCounter | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> doesDependOnLoopCounter(const Stmt *S, bool IsInitializer);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2659 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 8070 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2660 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 16543 |  | 声明/容器 | 容器承载32位位置 | `ArrayRef<unsigned> Exclude = llvm::None) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2661 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 16570 | unsigned | 计算 | 强制收窄为32位 | `/*Last=*/unsigned(OMP_DEFAULT_unknown))` | 改为 uint64_t / 移除收窄 | TODO |
| 2662 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 16604 | unsigned | 计算 | 强制收窄为32位 | `/*First=*/unsigned(OMP_PROC_BIND_master),` | 改为 uint64_t / 移除收窄 | TODO |
| 2663 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 16606 | unsigned | 计算 | 强制收窄为32位 | `unsigned(LangOpts.OpenMP > 50` | 改为 uint64_t / 移除收窄 | TODO |
| 2664 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 16616 | unsigned | 计算 | 强制收窄为32位 | `/*First=*/unsigned(OMP_PROC_BIND_master),` | 改为 uint64_t / 移除收窄 | TODO |
| 2665 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 16618 | unsigned | 计算 | 强制收窄为32位 | `unsigned(OMP_PROC_BIND_spread) + 1)` | 改为 uint64_t / 移除收窄 | TODO |
| 2666 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 16664 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned> Except = {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2667 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 16730 |  | 声明/容器 | 容器承载32位位置 | `OpenMPClauseKind Kind, ArrayRef<unsigned> Argument, Expr *Expr,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2668 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 16858 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 2> Excluded;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2669 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 20232 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 6> Except = {OMPC_DEPEND_source, OMPC_DEPEND_sink,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2670 | Sema/SemaOpenMP | ./lib/Sema/SemaOpenMP.cpp | 23478 | unsigned | 计算 | 强制收窄为32位 | `/*Last=*/unsigned(OMPC_BIND_unknown))` | 改为 uint64_t / 移除收窄 | TODO |
| 2671 | Sema/SemaTemplateInstantiateDecl | ./lib/Sema/SemaTemplateInstantiateDecl.cpp | 123 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2672 | Sema/SemaTemplateInstantiateDecl | ./lib/Sema/SemaTemplateInstantiateDecl.cpp | 155 | if | 比较/实现 | 关键函数相关（需复核） | `if (Aligned->getOffset()) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2673 | Sema/SemaTemplateInstantiateDecl | ./lib/Sema/SemaTemplateInstantiateDecl.cpp | 156 | SubstExpr | 比较/实现 | 关键函数相关（需复核） | `Result = S.SubstExpr(Aligned->getOffset(), TemplateArgs);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2674 | Sema/SemaTemplateInstantiateDecl | ./lib/Sema/SemaTemplateInstantiateDecl.cpp | 321 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 4> LinModifiers;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2675 | Sema/SemaTemplateInstantiateDecl | ./lib/Sema/SemaTemplateInstantiateDecl.cpp | 2734 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpanded;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2676 | Sema/SemaTemplateInstantiateDecl | ./lib/Sema/SemaTemplateInstantiateDecl.cpp | 2847 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> OrigNumExpansions` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2677 | Sema/SemaTemplateInstantiateDecl | ./lib/Sema/SemaTemplateInstantiateDecl.cpp | 2849 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions = OrigNumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2678 | Sema/SemaTemplateInstantiateDecl | ./lib/Sema/SemaTemplateInstantiateDecl.cpp | 3012 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2679 | Sema/SemaTemplateInstantiateDecl | ./lib/Sema/SemaTemplateInstantiateDecl.cpp | 3281 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2680 | Sema/SemaTemplateInstantiateDecl | ./lib/Sema/SemaTemplateInstantiateDecl.cpp | 3687 | for | 声明/局部 | 仅命名可疑需复核 | `for (unsigned I = 0; I != Loc.getNumArgs(); ++I)` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2681 | Sema/SemaTemplateInstantiateDecl | ./lib/Sema/SemaTemplateInstantiateDecl.cpp | 4352 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumArgumentsInExpansion;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2682 | Sema/SemaTemplateInstantiateDecl | ./lib/Sema/SemaTemplateInstantiateDecl.cpp | 4454 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumArgumentsInExpansion =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2683 | Sema/SemaTemplateInstantiateDecl | ./lib/Sema/SemaTemplateInstantiateDecl.cpp | 5636 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2684 | Sema/SemaDeclObjC | ./lib/Sema/SemaDeclObjC.cpp | 842 |  | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(newContext)` | 改为 uint64_t / 移除收窄 | TODO |
| 2685 | Sema/SemaDeclObjC | ./lib/Sema/SemaDeclObjC.cpp | 879 | getVariance | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(newTypeParam->getVariance())` | 改为 uint64_t / 移除收窄 | TODO |
| 2686 | Sema/SemaDeclObjC | ./lib/Sema/SemaDeclObjC.cpp | 881 | getVariance | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(prevTypeParam->getVariance())` | 改为 uint64_t / 移除收窄 | TODO |
| 2687 | Sema/SemaRISCVVectorLookup | ./lib/Sema/SemaRISCVVectorLookup.cpp | 199 |  | 计算 | 强制收窄为32位 | `TypeRangeMaskShift <= static_cast<unsigned int>(BasicType::MaxOffset);` | 改为 uint64_t / 移除收窄 | TODO |
| 2688 | Sema/SemaCast | ./lib/Sema/SemaCast.cpp | 1017 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Offset += DerivedLayout.getBaseClassOffset(BaseRD);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2689 | Sema/SemaStmt | ./lib/Sema/SemaStmt.cpp | 915 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `.getLocWithOffset(-1));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2690 | Sema/SemaTemplateInstantiate | ./lib/Sema/SemaTemplateInstantiate.cpp | 544 | unsigned | 计算 | 强制收窄为32位 | `<< unsigned(CodeSynthesisContexts.size() - Limit);` | 改为 uint64_t / 移除收窄 | TODO |
| 2691 | Sema/SemaTemplateInstantiate | ./lib/Sema/SemaTemplateInstantiate.cpp | 972 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> &NumExpansions) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2692 | Sema/SemaTemplateInstantiate | ./lib/Sema/SemaTemplateInstantiate.cpp | 1133 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2693 | Sema/SemaTemplateInstantiate | ./lib/Sema/SemaTemplateInstantiate.cpp | 1767 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2694 | Sema/SemaTemplateInstantiate | ./lib/Sema/SemaTemplateInstantiate.cpp | 2376 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2695 | Sema/SemaTemplateInstantiate | ./lib/Sema/SemaTemplateInstantiate.cpp | 2559 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2696 | Sema/SemaAttr | ./lib/Sema/SemaAttr.cpp | 95 | unsigned | 计算 | 强制收窄为32位 | `Context, unsigned(VtorDispStack.CurrentValue)));` | 改为 uint64_t / 移除收窄 | TODO |
| 2697 | Sema/SemaAttr | ./lib/Sema/SemaAttr.cpp | 1175 | AddOptnoneAttributeIfNoConflicts | 序列化 | 序列化位置读写（需复核） | `AddOptnoneAttributeIfNoConflicts(FD, OptimizeOffPragmaLocation);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2698 | Sema/SemaAttr | ./lib/Sema/SemaAttr.cpp | 1222 |  | 声明/类型别名 | 可疑别名32位 | `typedef std::vector<std::pair<unsigned, SourceLocation> > VisStack;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2699 | Sema/SemaObjCProperty | ./lib/Sema/SemaObjCProperty.cpp | 1161 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `readonlyLoc.getLocWithOffset(strlen("readonly")-1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2700 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 1021 |  | 声明/容器 | 容器承载32位位置 | `auto TranslateIndex = [&](unsigned Index) -> Optional<unsigned> {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2701 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 1039 | TranslateIndex | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> IndexOptional = TranslateIndex(Index);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2702 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 1064 | TranslateIndex | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> IndexOptional = TranslateIndex(Index);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2703 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 1079 | TranslateIndex | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> IndexOptional = TranslateIndex(Index);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2704 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 1427 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Start, unsigned End) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2705 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 1429 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned I = Start; I <= End; ++I)` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2706 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 1872 |  | 声明/容器 | 容器承载32位位置 | `auto DiagSelect = [&]() -> llvm::Optional<unsigned> {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2707 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 1879 |  | 声明/容器 | 容器承载32位位置 | `return llvm::Optional<unsigned>{};` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2708 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 3865 | strtoul | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned size = strtoul(Str, &End, 10);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2709 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 3873 | strtoul | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned size = strtoul(Str, &End, 10);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2710 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 6177 | size | 计算 | 强制收窄为32位 | `<< 0 << AdjustedNumArgs << static_cast<unsigned>(Args.size())` | 改为 uint64_t / 移除收窄 | TODO |
| 2711 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 6183 | size | 计算 | 强制收窄为32位 | `<< 0 << AdjustedNumArgs << static_cast<unsigned>(Args.size())` | 改为 uint64_t / 移除收窄 | TODO |
| 2712 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 8378 | getBitWidth | 声明/局部 | 仅命名可疑需复核 | `unsigned BitWidth = Offset.getBitWidth();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2713 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 8430 | getString | 比较/实现 | 关键函数相关（需复核） | `return FExpr->getString().drop_front(Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2714 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 8434 | getByteLength | 比较/实现 | 关键函数相关（需复核） | `return FExpr->getByteLength() - getCharByteWidth() * Offset;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2715 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 8437 | getLength | 比较/实现 | 关键函数相关（需复核） | `unsigned getLength() const { return FExpr->getLength() - Offset; }` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2716 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 8437 | getLength | 声明/局部 | 仅命名可疑需复核 | `unsigned getLength() const { return FExpr->getLength() - Offset; }` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2717 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 8455 | getLocationOfByte | 比较/实现 | 关键函数相关（需复核） | `return FExpr->getLocationOfByte(ByteNo + Offset, SM, Features, Target,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2718 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 8460 | getBeginLoc | 比较/实现 | 关键函数相关（需复核） | `return FExpr->getBeginLoc().getLocWithOffset(Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2719 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 9019 | HandleInvalidConversionSpecifier | 声明/局部 | 仅命名可疑需复核 | `bool HandleInvalidConversionSpecifier(unsigned argIndex, SourceLocation Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2720 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 9058 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `End = End.getLocWithOffset(1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2721 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 11050 | getBegin | 比较/实现 | 关键函数相关（需复核） | `SecondRange.getBegin().getLocWithOffset(-1));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2722 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 11421 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SL = SM.getSpellingLoc(SL);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2723 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 11422 | SourceRange | 比较/实现 | 关键函数相关（需复核） | `DSR = SourceRange(SM.getSpellingLoc(DSR.getBegin()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2724 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 11423 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SM.getSpellingLoc(DSR.getEnd()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2725 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 11424 | SourceRange | 比较/实现 | 关键函数相关（需复核） | `SSR = SourceRange(SM.getSpellingLoc(SSR.getBegin()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2726 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 11425 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SM.getSpellingLoc(SSR.getEnd()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2727 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 11697 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SL = SM.getSpellingLoc(SL);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2728 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 11698 | SourceRange | 比较/实现 | 关键函数相关（需复核） | `SR = SourceRange(SM.getSpellingLoc(SR.getBegin()),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2729 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 11699 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SM.getSpellingLoc(SR.getEnd()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2730 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 13565 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `// a system macro. The problem is that 'getSpellingLoc()' is slow, so we` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2731 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 13745 | if | 计算 | 复杂指针差值收窄 | `CallExpr *CEx = cast<CallExpr>(E); if (unsigned NumArgs = CEx->getNumArgs()) { Expr *LastA = CEx->getArg(NumArgs - 1);` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 2732 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 13746 | if | 计算 | 复杂指针差值收窄 | `if (unsigned NumArgs = CEx->getNumArgs()) { Expr *LastA = CEx->getArg(NumArgs - 1); Expr *InnerE = LastA->IgnoreParenImpCasts();` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 2733 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 14619 | representative | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned C = representative(Cur.Index);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2734 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 15561 | getDerivedToBaseAlignmentAndOffset | 比较/实现 | 关键函数相关（需复核） | `getDerivedToBaseAlignmentAndOffset(const CastExpr *CE, QualType DerivedType,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2735 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 15580 | getBaseClassOffset | 比较/实现 | 关键函数相关（需复核） | `Offset += RL.getBaseClassOffset(BaseDecl);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2736 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 15641 | getDerivedToBaseAlignmentAndOffset | 比较/实现 | 关键函数相关（需复核） | `return getDerivedToBaseAlignmentAndOffset(CE, From->getType(), P->first,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2737 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 15677 | getFieldOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t Offset = Layout.getFieldOffset(FD->getFieldIndex());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2738 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 15731 | getDerivedToBaseAlignmentAndOffset | 比较/实现 | 关键函数相关（需复核） | `return getDerivedToBaseAlignmentAndOffset(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2739 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 15822 | getQuantity | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(SrcAlign.getQuantity())` | 改为 uint64_t / 移除收窄 | TODO |
| 2740 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 15823 | getQuantity | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(DestAlign.getQuantity())` | 改为 uint64_t / 移除收窄 | TODO |
| 2741 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 16058 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation RBracketLoc = SourceMgr.getSpellingLoc(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2742 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 16062 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SourceMgr.getSpellingLoc(IndexExpr->getBeginLoc());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2743 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 17470 | toCharUnitsFromBits | 比较/实现 | 关键函数相关（需复核） | `Offset += Context.toCharUnitsFromBits(Context.getFieldOffset(FD));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2744 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 17627 |  | 声明/容器 | 容器承载32位位置 | `static llvm::Optional<unsigned>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2745 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 17727 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> MaybeRows;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2746 | Sema/SemaChecking | ./lib/Sema/SemaChecking.cpp | 17731 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> MaybeColumns;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2747 | Sema/SemaInit | ./lib/Sema/SemaInit.cpp | 7972 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `LParen = ArgLoc.getLocWithOffset(-1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2748 | Sema/SemaAccess | ./lib/Sema/SemaAccess.cpp | 1157 | getAccess | 计算 | 强制收窄为32位 | `<< (unsigned) (D->getAccess() == AS_protected)` | 改为 uint64_t / 移除收窄 | TODO |
| 2749 | Sema/SemaDeclCXX | ./lib/Sema/SemaDeclCXX.cpp | 2897 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Start = 0;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2750 | Sema/SemaDeclCXX | ./lib/Sema/SemaDeclCXX.cpp | 2906 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned I = Start, E = Path.size(); I != E; ++I)` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2751 | Sema/SemaDeclCXX | ./lib/Sema/SemaDeclCXX.cpp | 3149 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `SpellingLoc = getSourceManager().getSpellingLoc(SpellingLoc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2752 | Sema/SemaDeclCXX | ./lib/Sema/SemaDeclCXX.cpp | 3600 |  | 声明/容器 | 容器承载32位位置 | `llvm::SmallVector<unsigned, 4> InitFieldIndex;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2753 | Sema/SemaDeclCXX | ./lib/Sema/SemaDeclCXX.cpp | 3630 |  | 声明/容器 | 容器承载32位位置 | `llvm::SmallVector<unsigned, 4> UsedFieldIndex;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2754 | Sema/SemaDeclCXX | ./lib/Sema/SemaDeclCXX.cpp | 5398 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned> WarnIndexes;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2755 | Sema/SemaDeclCXX | ./lib/Sema/SemaDeclCXX.cpp | 7864 | AddBuiltinOperatorCandidates | 序列化 | 序列化位置读写（需复核） | `S.AddBuiltinOperatorCandidates(OO, FD->getLocation(), Args, CandidateSet);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2756 | Sema/SemaDeclCXX | ./lib/Sema/SemaDeclCXX.cpp | 11357 | if | 计算 | 强制收窄为32位 | `if (Info && FullyCheckedComparisonCategories[static_cast<unsigned>(Kind)]) {` | 改为 uint64_t / 移除收窄 | TODO |
| 2757 | Sema/SemaDeclCXX | ./lib/Sema/SemaDeclCXX.cpp | 11440 |  | 计算 | 强制收窄为32位 | `FullyCheckedComparisonCategories[static_cast<unsigned>(Kind)] = true;` | 改为 uint64_t / 移除收窄 | TODO |
| 2758 | Sema/SemaDeclCXX | ./lib/Sema/SemaDeclCXX.cpp | 11713 | isInMainFile | 比较/实现 | 关键函数相关（需复核） | `!SourceMgr.isInMainFile(SourceMgr.getExpansionLoc(IdentLoc))) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2759 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 1754 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 1> CompatIndices;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2760 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 1815 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2761 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 1928 | getUDSuffixOffset | 比较/实现 | 关键函数相关（需复核） | `Literal.getUDSuffixOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2762 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 3666 | getUDSuffixLoc | 比较/实现 | 关键函数相关（需复核） | `getUDSuffixLoc(*this, Tok.getLocation(), Literal.getUDSuffixOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2763 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 3775 | getUDSuffixLoc | 比较/实现 | 关键函数相关（需复核） | `getUDSuffixLoc(*this, Tok.getLocation(), Literal.getUDSuffixOffset());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2764 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 3833 | getUDSuffixOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned Length = Literal.getUDSuffixOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2765 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 3853 | for | 比较/实现 | 关键函数相关（需复核） | `for (unsigned I = 0, N = Literal.getUDSuffixOffset(); I != N; ++I) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2766 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 6043 | size | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(Args.size())` | 改为 uint64_t / 移除收窄 | TODO |
| 2767 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 6055 | size | 计算 | 强制收窄为32位 | `<< FnKind << MinArgs << static_cast<unsigned>(Args.size())` | 改为 uint64_t / 移除收窄 | TODO |
| 2768 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 6081 | size | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(Args.size())` | 改为 uint64_t / 移除收窄 | TODO |
| 2769 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 6090 | size | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(Args.size()) << Fn->getSourceRange()` | 改为 uint64_t / 移除收窄 | TODO |
| 2770 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 6098 | size | 计算 | 强制收窄为32位 | `<< FnKind << NumParams << static_cast<unsigned>(Args.size())` | 改为 uint64_t / 移除收窄 | TODO |
| 2771 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 13881 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc.getLocWithOffset(1) == UO->getOperatorLoc() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2772 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 13884 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `Loc.getLocWithOffset(2) != UO->getSubExpr()->getBeginLoc() &&` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2773 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 17116 | if | 计算 | 强制收窄为32位 | `if (MayHaveConvFixit) { FDiag << (unsigned) (ConvHints.Kind); }` | 改为 uint64_t / 移除收窄 | TODO |
| 2774 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 18679 | getBegin | 比较/实现 | 关键函数相关（需复核） | `LSI->IntroducerRange.getBegin().getLocWithOffset(1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2775 | Sema/SemaExpr | ./lib/Sema/SemaExpr.cpp | 20560 | isClassMessage | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(msg->isClassMessage()) << msg->getSelector()` | 改为 uint64_t / 移除收窄 | TODO |
| 2776 | Sema/AnalysisBasedWarnings | ./lib/Sema/AnalysisBasedWarnings.cpp | 1415 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return SM.isBeforeInTranslationUnit(LHS.first->getBeginLoc(),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2777 | Sema/AnalysisBasedWarnings | ./lib/Sema/AnalysisBasedWarnings.cpp | 1514 | isBeforeInTranslationUnit | 比较/实现 | 关键函数相关（需复核） | `return SM.isBeforeInTranslationUnit(left.first.first, right.first.first);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2778 | Sema/AnalysisBasedWarnings | ./lib/Sema/AnalysisBasedWarnings.cpp | 1742 | shouldAnalyzeCalledOnceImpl | 声明/容器 | 容器承载32位位置 | `bool shouldAnalyzeCalledOnceImpl(llvm::ArrayRef<unsigned> DiagIDs,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2779 | Sema/AnalysisBasedWarnings | ./lib/Sema/AnalysisBasedWarnings.cpp | 2457 |  | 计算 | 指针差值落入32位 | `unsigned NumCFGsBuilt = NumFunctionsAnalyzed - NumFunctionsWithBadCFGs;` | 用 uint64_t 接收指针差值 | TODO |
| 2780 | Sema/Sema | ./lib/Sema/Sema.cpp | 55 | getLocForEndOfToken | 比较/实现 | 关键函数相关（需复核） | `SourceLocation Sema::getLocForEndOfToken(SourceLocation Loc, unsigned Offset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2781 | Sema/Sema | ./lib/Sema/Sema.cpp | 55 | getLocForEndOfToken | 声明/局部 | 仅命名可疑需复核 | `SourceLocation Sema::getLocForEndOfToken(SourceLocation Loc, unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2782 | Sema/Sema | ./lib/Sema/Sema.cpp | 56 | getLocForEndOfToken | 比较/实现 | 关键函数相关（需复核） | `return Lexer::getLocForEndOfToken(Loc, Offset, SourceMgr, LangOpts);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2783 | Sema/Sema | ./lib/Sema/Sema.cpp | 214 |  | 计算 | 强制收窄为32位 | `static_cast<unsigned>(ComparisonCategoryType::Last) + 1),` | 改为 uint64_t / 移除收窄 | TODO |
| 2784 | Sema/Sema | ./lib/Sema/Sema.cpp | 1333 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SourceMgr.getExpansionLoc(FD->getLocation())))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2785 | Sema/Sema | ./lib/Sema/Sema.cpp | 1959 | getTypeSize | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(Context.getTypeSize(Ty)) << Ty` | 改为 uint64_t / 移除收窄 | TODO |
| 2786 | Sema/Sema | ./lib/Sema/Sema.cpp | 2033 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `loc = getSourceManager().getExpansionLoc(loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2787 | Sema/Sema | ./lib/Sema/Sema.cpp | 2344 | getBegin | 比较/实现 | 关键函数相关（需复核） | `Comment.getBegin().getLocWithOffset(3));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2788 | Sema/Sema | ./lib/Sema/Sema.cpp | 2602 | getEnd | 比较/实现 | 关键函数相关（需复核） | `Range.getEnd().getLocWithOffset(1));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2789 | Sema/SemaStmtAsm | ./lib/Sema/SemaStmtAsm.cpp | 520 | for | 计算 | 指针差值落入32位 | `for (unsigned Cnt = ConstraintIdx - NumOperands; I != E; ++I)` | 用 uint64_t 接收指针差值 | TODO |
| 2790 | Sema/SemaStmtAsm | ./lib/Sema/SemaStmtAsm.cpp | 816 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned &Offset, SourceLocation AsmLoc) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2791 | Sema/SemaStmtAsm | ./lib/Sema/SemaStmtAsm.cpp | 876 | toCharUnitsFromBits | 比较/实现 | 关键函数相关（需复核） | `CharUnits Result = Context.toCharUnitsFromBits(RL.getFieldOffset(i));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2792 | Sema/JumpDiagnostics | ./lib/Sema/JumpDiagnostics.cpp | 91 | NoteJumpIntoScopes | 声明/容器 | 容器承载32位位置 | `void NoteJumpIntoScopes(ArrayRef<unsigned> ToScopes);` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2793 | Sema/JumpDiagnostics | ./lib/Sema/JumpDiagnostics.cpp | 140 |  | 声明/类型别名 | 可疑别名32位 | `typedef std::pair<unsigned,unsigned> ScopePair;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2794 | Sema/JumpDiagnostics | ./lib/Sema/JumpDiagnostics.cpp | 732 |  | 声明/类型别名 | 可疑别名32位 | `typedef std::pair<unsigned, Stmt*> JumpScope;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2795 | Sema/JumpDiagnostics | ./lib/Sema/JumpDiagnostics.cpp | 735 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<unsigned, Stmt*> JumpScopesMap;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2796 | Sema/JumpDiagnostics | ./lib/Sema/JumpDiagnostics.cpp | 747 | for | 声明/容器 | 容器承载32位位置 | `for (llvm::DenseMap<unsigned, Stmt *>::iterator I = JumpScopesMap.begin(),` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2797 | Sema/JumpDiagnostics | ./lib/Sema/JumpDiagnostics.cpp | 756 |  | 声明/容器 | 容器承载32位位置 | `llvm::DenseMap<unsigned, LabelDecl*> TargetScopes;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2798 | Sema/JumpDiagnostics | ./lib/Sema/JumpDiagnostics.cpp | 777 | for | 声明/容器 | 容器承载32位位置 | `for (llvm::DenseMap<unsigned,LabelDecl*>::iterator` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2799 | Sema/JumpDiagnostics | ./lib/Sema/JumpDiagnostics.cpp | 869 | NoteJumpIntoScopes | 声明/容器 | 容器承载32位位置 | `void JumpScopeChecker::NoteJumpIntoScopes(ArrayRef<unsigned> ToScopes) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2800 | Sema/JumpDiagnostics | ./lib/Sema/JumpDiagnostics.cpp | 894 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 10> ToScopesCXX98Compat;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2801 | Sema/JumpDiagnostics | ./lib/Sema/JumpDiagnostics.cpp | 956 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 10> ToScopesCXX98Compat;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2802 | Sema/JumpDiagnostics | ./lib/Sema/JumpDiagnostics.cpp | 957 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 10> ToScopesError;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2803 | Sema/JumpDiagnostics | ./lib/Sema/JumpDiagnostics.cpp | 958 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 10> ToScopesWarning;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2804 | Sema/SemaDeclAttr | ./lib/Sema/SemaDeclAttr.cpp | 1055 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 8> Indices;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2805 | Sema/SemaDeclAttr | ./lib/Sema/SemaDeclAttr.cpp | 2633 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> Min, Sub;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2806 | Sema/SemaDeclAttr | ./lib/Sema/SemaDeclAttr.cpp | 3551 |  | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(MultiVersionKind::TargetClones)` | 改为 uint64_t / 移除收窄 | TODO |
| 2807 | Sema/SemaDeclAttr | ./lib/Sema/SemaDeclAttr.cpp | 3857 |  | 计算 | 指针差值落入32位 | `unsigned ArgIdx = Idx - 1;` | 用 uint64_t 接收指针差值 | TODO |
| 2808 | Sema/SemaDeclAttr | ./lib/Sema/SemaDeclAttr.cpp | 4029 | size | 计算 | 强制收窄为32位 | `<< AL << (unsigned)(EncodingIndices.size() - 1);` | 改为 uint64_t / 移除收窄 | TODO |
| 2809 | Sema/SemaDeclAttr | ./lib/Sema/SemaDeclAttr.cpp | 4035 | size | 计算 | 强制收窄为32位 | `<< AL << (unsigned)(EncodingIndices.size() - 1);` | 改为 uint64_t / 移除收窄 | TODO |
| 2810 | Sema/SemaDeclAttr | ./lib/Sema/SemaDeclAttr.cpp | 5516 |  | 声明/局部 | 仅命名可疑需复核 | `uint32_t Count = 0, Offset = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2811 | Sema/SemaDeclAttr | ./lib/Sema/SemaDeclAttr.cpp | 6436 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> SelfLocation;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2812 | Sema/SemaDeclAttr | ./lib/Sema/SemaDeclAttr.cpp | 6438 |  | 声明/容器 | 容器承载32位位置 | `llvm::Optional<unsigned> NewValueLocation;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2813 | Sema/SemaPseudoObject | ./lib/Sema/SemaPseudoObject.cpp | 49 |  | 声明/类型别名 | 可疑别名32位 | `typedef llvm::function_ref<Expr *(Expr *, unsigned)> SpecificRebuilderRefTy;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2814 | Sema/SemaPseudoObject | ./lib/Sema/SemaPseudoObject.cpp | 901 | unsigned | 计算 | 强制收窄为32位 | `<< unsigned(RefExpr->isImplicitProperty())` | 改为 uint64_t / 移除收窄 | TODO |
| 2815 | Sema/SemaPseudoObject | ./lib/Sema/SemaPseudoObject.cpp | 945 | unsigned | 计算 | 强制收窄为32位 | `<< unsigned(RefExpr->isImplicitProperty())` | 改为 uint64_t / 移除收窄 | TODO |
| 2816 | Sema/SemaPseudoObject | ./lib/Sema/SemaPseudoObject.cpp | 946 | unsigned | 计算 | 强制收窄为32位 | `<< unsigned(UnaryOperator::isDecrementOp(opcode))` | 改为 uint64_t / 移除收窄 | TODO |
| 2817 | Sema/SemaPseudoObject | ./lib/Sema/SemaPseudoObject.cpp | 958 | unsigned | 计算 | 强制收窄为32位 | `<< unsigned(UnaryOperator::isDecrementOp(opcode))` | 改为 uint64_t / 移除收窄 | TODO |
| 2818 | Sema/SemaExprCXX | ./lib/Sema/SemaExprCXX.cpp | 1927 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> AlignmentParam;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2819 | Sema/SemaExprCXX | ./lib/Sema/SemaExprCXX.cpp | 2338 | unsigned | 计算 | 强制收窄为32位 | `<< unsigned(Alignment / Context.getCharWidth())` | 改为 uint64_t / 移除收窄 | TODO |
| 2820 | Sema/SemaExprCXX | ./lib/Sema/SemaExprCXX.cpp | 2339 | unsigned | 计算 | 强制收窄为32位 | `<< unsigned(NewAlignment / Context.getCharWidth());` | 改为 uint64_t / 移除收窄 | TODO |
| 2821 | Sema/SemaExprCXX | ./lib/Sema/SemaExprCXX.cpp | 8277 | if | 声明/容器 | 容器承载32位位置 | `if (const Optional<unsigned> Index =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2822 | Sema/SemaExprCXX | ./lib/Sema/SemaExprCXX.cpp | 8310 | if | 声明/容器 | 容器承载32位位置 | `if (const Optional<unsigned> Index =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2823 | Sema/CodeCompleteConsumer | ./lib/Sema/CodeCompleteConsumer.cpp | 707 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `<< " {" << SM.getLineNumber(BInfo.first, BInfo.second) << ':'` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2824 | Sema/CodeCompleteConsumer | ./lib/Sema/CodeCompleteConsumer.cpp | 708 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `<< SM.getColumnNumber(BInfo.first, BInfo.second) << '-'` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2825 | Sema/CodeCompleteConsumer | ./lib/Sema/CodeCompleteConsumer.cpp | 709 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `<< SM.getLineNumber(EInfo.first, EInfo.second) << ':'` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2826 | Sema/CodeCompleteConsumer | ./lib/Sema/CodeCompleteConsumer.cpp | 710 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `<< SM.getColumnNumber(EInfo.first, EInfo.second) << "}"` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2827 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 284 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> &NumExpansions) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2828 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 689 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2829 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 1188 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2830 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 3404 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> Length,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2831 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 3709 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2832 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 3756 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2833 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 3769 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2834 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 4008 | getNumExpansions | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> OrigNumExpansions = Expansion->getNumExpansions();` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2835 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 4009 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions = OrigNumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2836 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 4590 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> OrigNumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2837 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 4603 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions = OrigNumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2838 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 5607 |  | 声明/容器 | 容器承载32位位置 | `ParmVarDecl *OldParm, int indexAdjustment, Optional<unsigned> NumExpansions,` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2839 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 5676 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2840 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 5691 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> OrigNumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2841 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 5792 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2842 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 6044 | getNumExpansions | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions = PackExpansion->getNumExpansions();` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2843 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 6942 | setExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `NewTL.setExpansionLoc(TL.getExpansionLoc());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2844 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 7169 | getNumExpansions | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions = PackExpansion->getNumExpansions();` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2845 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 12458 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> OrigNumExpansions =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2846 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 12460 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions = OrigNumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2847 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 12996 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions) {` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2848 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 13028 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> OrigNumExpansions =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2849 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 13030 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions = OrigNumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2850 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 13218 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2851 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 13595 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2852 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 13638 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> Result = 0;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2853 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 13650 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> OrigNumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2854 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 13663 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2855 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 13765 | getNumExpansions | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> OrigNumExpansions = E->getNumExpansions(),` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2856 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 13962 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> OrigNumExpansions = OrigElement.NumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2857 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 13963 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumExpansions = OrigNumExpansions;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2858 | Sema/TreeTransform | ./lib/Sema/TreeTransform.h | 14607 |  | 序列化 | 序列化位置读写（需复核） | `QualType PointeeType, Expr *AddrSpaceExpr, SourceLocation AttributeLoc) {` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2859 | Sema/SemaAvailability | ./lib/Sema/SemaAvailability.cpp | 246 |  | 声明/容器 | 容器承载32位位置 | `static Optional<unsigned>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2860 | Sema/SemaAvailability | ./lib/Sema/SemaAvailability.cpp | 502 | tryParseObjCMethodName | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> NumParams = tryParseObjCMethodName(` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2861 | Sema/SemaAvailability | ./lib/Sema/SemaAvailability.cpp | 806 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SM.getExpansionLoc(StmtOfUse->getBeginLoc());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2862 | Sema/SemaCXXScopeSpec | ./lib/Sema/SemaCXXScopeSpec.cpp | 621 | unsigned | 计算 | 强制收窄为32位 | `? unsigned(diag::err_expected_namespace_name)` | 改为 uint64_t / 移除收窄 | TODO |
| 2863 | Sema/SemaCXXScopeSpec | ./lib/Sema/SemaCXXScopeSpec.cpp | 622 | unsigned | 计算 | 强制收窄为32位 | `: unsigned(diag::err_expected_class_or_namespace))` | 改为 uint64_t / 移除收窄 | TODO |
| 2864 | Sema/TypeLocBuilder | ./lib/Sema/TypeLocBuilder.h | 96 | getLocalDataAlignment | 声明/局部 | 仅命名可疑需复核 | `unsigned LocalAlign = Loc.getLocalDataAlignment();` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2865 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 1765 | getTypeSize | 计算 | 强制收窄为32位 | `unsigned typeSize = static_cast<unsigned>(Context.getTypeSize(Result));` | 改为 uint64_t / 移除收窄 | TODO |
| 2866 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 2654 | getTypeSize | 计算 | 强制收窄为32位 | `unsigned TypeSize = static_cast<unsigned>(Context.getTypeSize(CurType));` | 改为 uint64_t / 移除收窄 | TODO |
| 2867 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 2716 | getZExtValue | 计算 | 强制收窄为32位 | `unsigned vectorSize = static_cast<unsigned>(vecSize->getZExtValue());` | 改为 uint64_t / 移除收窄 | TODO |
| 2868 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 2777 | getZExtValue | 计算 | 强制收窄为32位 | `unsigned MatrixRows = static_cast<unsigned>(ValueRows->getZExtValue());` | 改为 uint64_t / 移除收窄 | TODO |
| 2869 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 2778 | getZExtValue | 计算 | 强制收窄为32位 | `unsigned MatrixColumns = static_cast<unsigned>(ValueColumns->getZExtValue());` | 改为 uint64_t / 移除收窄 | TODO |
| 2870 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 2936 |  | 声明/局部 | 仅命名可疑需复核 | `[=](unsigned i) { return Loc; });` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2871 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 3197 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `getSourceManager().isBeforeInTranslationUnit(QualLoc, Loc))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2872 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 4284 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `loc = S.SourceMgr.getExpansionLoc(loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2873 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 4356 |  | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(PointerKind);` | 改为 uint64_t / 移除收窄 | TODO |
| 2874 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 4365 |  | 计算 | 强制收窄为32位 | `Diag << static_cast<unsigned>(Nullability);` | 改为 uint64_t / 移除收窄 | TODO |
| 2875 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 4366 |  | 计算 | 强制收窄为32位 | `Diag << static_cast<unsigned>(PointerKind);` | 改为 uint64_t / 移除收窄 | TODO |
| 2876 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 4404 |  | 计算 | 强制收窄为32位 | `fileNullability.PointerKind = static_cast<unsigned>(pointerKind);` | 改为 uint64_t / 移除收窄 | TODO |
| 2877 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 4558 |  | 计算 | 指针差值落入32位 | `unsigned Index = E - I - 1;` | 用 uint64_t 接收指针差值 | TODO |
| 2878 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 4897 |  | 计算 | 指针差值落入32位 | `unsigned chunkIndex = e - i - 1;` | 用 uint64_t 接收指针差值 | TODO |
| 2879 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 6576 | getLangASFromTargetAS | 计算 | 强制收窄为32位 | `getLangASFromTargetAS(static_cast<unsigned>(addrSpace.getZExtValue()));` | 改为 uint64_t / 移除收窄 | TODO |
| 2880 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 6683 | new | 计算 | 强制收窄为32位 | `::new (Ctx) AddressSpaceAttr(Ctx, Attr, static_cast<unsigned>(ASIdx));` | 改为 uint64_t / 移除收窄 | TODO |
| 2881 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 6873 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `S.getSourceManager().getExpansionLoc(loc),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2882 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 6998 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned char /*WrapKind*/, 8> Stack;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2883 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 7458 |  | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(pointerKind);` | 改为 uint64_t / 移除收窄 | TODO |
| 2884 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 8016 | getTypeSize | 计算 | 强制收窄为32位 | `unsigned typeSize = static_cast<unsigned>(S.Context.getTypeSize(CurType));` | 改为 uint64_t / 移除收窄 | TODO |
| 2885 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 8017 | getZExtValue | 计算 | 强制收窄为32位 | `unsigned numElts = static_cast<unsigned>(numEltsInt.getZExtValue());` | 改为 uint64_t / 移除收窄 | TODO |
| 2886 | Sema/SemaType | ./lib/Sema/SemaType.cpp | 8063 | getZExtValue | 计算 | 强制收窄为32位 | `unsigned VecSize = static_cast<unsigned>(SveVectorSizeInBits.getZExtValue());` | 改为 uint64_t / 移除收窄 | TODO |
| 2887 | Sema/SemaDecl | ./lib/Sema/SemaDecl.cpp | 2301 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned ID, SourceLocation Loc) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2888 | Sema/SemaDecl | ./lib/Sema/SemaDecl.cpp | 4159 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned Idx = 0, End = Old->getNumParams();` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2889 | Sema/SemaDecl | ./lib/Sema/SemaDecl.cpp | 4681 | getFilename | 比较/实现 | 关键函数相关（需复核） | `SrcMgr.getFilename(SrcMgr.getSpellingLoc(Old->getLocation()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2890 | Sema/SemaDecl | ./lib/Sema/SemaDecl.cpp | 8679 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 1> MismatchedParams;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2891 | Sema/SemaDecl | ./lib/Sema/SemaDecl.cpp | 8730 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 1> MismatchedParams;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2892 | Sema/SemaDecl | ./lib/Sema/SemaDecl.cpp | 8851 | if | 计算 | 复杂指针差值收窄 | `// FIXME: These notes are poorly worded for the local friend case. if (unsigned Idx = NearMatch->second) { ParmVarDecl *FDParam = FD->getP…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 2893 | Sema/SemaDecl | ./lib/Sema/SemaDecl.cpp | 8852 | if | 计算 | 复杂指针差值收窄 | `if (unsigned Idx = NearMatch->second) { ParmVarDecl *FDParam = FD->getParamDecl(Idx-1); SourceLocation Loc = FDParam->getTypeSpecStartLoc(…` | 把 (ptr-start) 等差值用 uint64_t 承载 | TODO |
| 2894 | Sema/SemaDecl | ./lib/Sema/SemaDecl.cpp | 8866 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `.getLocWithOffset(1),` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2895 | Sema/SemaDecl | ./lib/Sema/SemaDecl.cpp | 10702 |  | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(MVKind) << A;` | 改为 uint64_t / 移除收窄 | TODO |
| 2896 | Sema/SemaDecl | ./lib/Sema/SemaDecl.cpp | 10878 |  | 计算 | 强制收窄为32位 | `<< static_cast<unsigned>(MVKind)),` | 改为 uint64_t / 移除收窄 | TODO |
| 2897 | Sema/SemaDecl | ./lib/Sema/SemaDecl.cpp | 11868 |  | 声明/容器 | 容器承载32位位置 | `llvm::SmallVector<unsigned, 4> InitFieldIndex;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2898 | Sema/SemaDecl | ./lib/Sema/SemaDecl.cpp | 11934 |  | 声明/容器 | 容器承载32位位置 | `llvm::SmallVector<unsigned, 4> UsedFieldIndex;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2899 | Sema/SemaDecl | ./lib/Sema/SemaDecl.cpp | 15114 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = SM.getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 2900 | Sema/SemaDecl | ./lib/Sema/SemaDecl.cpp | 15565 |  | 声明/容器 | 容器承载32位位置 | `Optional<unsigned> AlignmentParam;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2901 | Sema/SemaCodeComplete | ./lib/Sema/SemaCodeComplete.cpp | 86 |  | 声明/类型别名 | 可疑别名32位 | `typedef std::pair<const NamedDecl *, unsigned> DeclIndexPair;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2902 | Sema/SemaCodeComplete | ./lib/Sema/SemaCodeComplete.cpp | 755 | getSpellingLoc | 比较/实现 | 关键函数相关（需复核） | `SemaRef.SourceMgr.getSpellingLoc(ND->getLocation())))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 2903 | Sema/SemaCodeComplete | ./lib/Sema/SemaCodeComplete.cpp | 3010 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Start = 0,` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2904 | Sema/SemaCodeComplete | ./lib/Sema/SemaCodeComplete.cpp | 3014 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned P = Start, N = Function->getNumParams(); P != N; ++P) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2905 | Sema/SemaCodeComplete | ./lib/Sema/SemaCodeComplete.cpp | 3063 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned MaxParameters = 0, unsigned Start = 0, bool InDefaultArg = false) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2906 | Sema/SemaCodeComplete | ./lib/Sema/SemaCodeComplete.cpp | 3730 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned CurrentArg, unsigned Start = 0, bool InOptional = false) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2907 | Sema/SemaCodeComplete | ./lib/Sema/SemaCodeComplete.cpp | 3740 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned P = Start; P != NumParams; ++P) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2908 | Sema/SemaCodeComplete | ./lib/Sema/SemaCodeComplete.cpp | 6161 |  | 声明/容器 | 容器承载32位位置 | `static llvm::Optional<unsigned>` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 2909 | APINotes/APINotesYAMLCompiler | ./lib/APINotes/APINotesYAMLCompiler.cpp | 72 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Position;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 2910 | APINotes/APINotesFormat | ./lib/APINotes/APINotesFormat.h | 28 |  | 声明/类型别名 | 可疑别名32位 | `using IdentifierID = llvm::PointerEmbeddedInt<unsigned, 31>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2911 | APINotes/APINotesFormat | ./lib/APINotes/APINotesFormat.h | 31 |  | 声明/类型别名 | 可疑别名32位 | `using SelectorID = llvm::PointerEmbeddedInt<unsigned, 31>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 2912 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 64 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(ArgInfo.TemplateKWLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2913 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 65 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(ArgInfo.LAngleLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2914 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 66 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(ArgInfo.RAngleLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2915 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 76 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getSemiLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2916 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 77 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->NullStmtBits.HasLeadingEmptyMacro);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2917 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 83 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2918 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 84 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->hasStoredFPFeatures());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2919 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 88 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->getStoredFPFeatures().getAsOpaqueInt());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2920 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 89 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getLBracLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2921 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 90 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getRBracLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2922 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 96 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Writer.getSwitchCaseID(S));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2923 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 97 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getKeywordLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2924 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 98 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2925 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 103 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->caseStmtIsGNURange());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2926 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 108 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getEllipsisLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2927 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 121 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->isSideEntry());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2928 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 124 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getIdentLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2929 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 130 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->getAttrs().size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2930 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 133 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getAttrLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2931 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 144 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HasElse);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2932 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 145 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HasVar);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2933 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 146 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HasInit);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2934 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 147 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(static_cast<uint64_t>(S->getStatementKind()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2935 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 157 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getIfLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2936 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 158 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2937 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 159 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2938 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 161 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getElseLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2939 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 171 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HasInit);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2940 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 172 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HasVar);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2941 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 173 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->isAllEnumCasesCovered());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2942 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 182 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getSwitchLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2943 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 183 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2944 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 184 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2945 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 188 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Writer.RecordSwitchCaseID(SC));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2946 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 196 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HasVar);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2947 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 203 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getWhileLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2948 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 204 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2949 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 205 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2950 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 213 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getDoLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2951 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 214 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getWhileLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2952 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 215 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2953 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 226 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getForLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2954 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 227 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2955 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 228 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2956 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 235 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getGotoLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2957 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 236 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getLabelLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2958 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 242 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getGotoLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2959 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 243 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getStarLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2960 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 250 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getContinueLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2961 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 256 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getBreakLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2962 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 264 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HasNRVOCandidate);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2963 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 270 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getReturnLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2964 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 276 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2965 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 277 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getEndLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2966 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 286 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->getNumOutputs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2967 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 287 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->getNumInputs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2968 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 288 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->getNumClobbers());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2969 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 289 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getAsmLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2970 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 290 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->isVolatile());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2971 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 291 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->isSimple());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2972 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 296 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->getNumLabels());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2973 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 297 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2974 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 326 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getLBraceLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2975 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 327 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getEndLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2976 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 328 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->getNumAsmToks());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2977 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 359 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(CoroStmt->getParamMoves().size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2978 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 367 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getKeywordLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2979 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 370 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->isImplicit());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2980 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 376 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getKeywordLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2981 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 384 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isImplicit());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2982 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 395 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getKeywordLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2983 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 404 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Satisfaction.IsSatisfied);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2984 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 406 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Satisfaction.NumRecords);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2985 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 410 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E == nullptr);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2986 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 416 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(Diag->first);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2987 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 428 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->DiagLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2988 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 436 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(TemplateArgs.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2989 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 438 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getTemplateKWLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2990 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 453 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getLocalParameters().size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2991 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 454 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getRequirements().size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2992 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 455 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->RequiresExprBits.RequiresKWLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2993 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 456 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->RequiresExprBits.IsSatisfied);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2994 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 462 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(concepts::Requirement::RK_Type);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2995 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 463 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(TypeReq->Status);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2996 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 469 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ExprReq->getKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2997 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 470 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ExprReq->Status);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2998 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 477 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(ExprReq->NoexceptLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 2999 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 480 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(2);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3000 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 483 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(1);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3001 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 492 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3002 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 497 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(concepts::Requirement::RK_Nested);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3003 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 498 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(NestedReq->isSubstitutionFailure());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3004 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 509 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getEndLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3005 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 518 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(std::distance(S->capture_begin(), S->capture_end()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3006 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 522 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->getCapturedRegionKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3007 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 539 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(I.getCaptureKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3008 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 540 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(I.getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3009 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 549 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getDependence());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3010 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 550 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getValueKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3011 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 551 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getObjectKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3012 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 556 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->ConstantExprBits.ResultKind);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3013 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 558 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->ConstantExprBits.APValueKind);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3014 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 559 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->ConstantExprBits.IsUnsigned);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3015 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 560 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->ConstantExprBits.BitWidth);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3016 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 562 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->ConstantExprBits.IsImmediateInvocation);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3017 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 568 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->Int64Result());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3018 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 584 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3019 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 585 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLParenLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3020 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 586 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3021 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 596 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HasFunctionName);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3022 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 597 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getIdentKind()); // FIXME: stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3023 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 598 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3024 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 607 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->hasQualifier());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3025 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 608 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getDecl() != E->getFoundDecl());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3026 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 609 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->hasTemplateKWAndArgsInfo());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3027 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 610 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->hadMultipleCandidates());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3028 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 611 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->refersToEnclosingVariableOrCapture());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3029 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 612 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isNonOdrUse());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3030 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 616 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(NumTemplateArgs);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3031 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 639 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3032 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 646 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3033 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 658 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3034 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 659 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getScale());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3035 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 666 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getRawSemantics());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3036 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 667 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isExact());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3037 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 669 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3038 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 683 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumConcatenated());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3039 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 684 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getLength());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3040 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 685 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getCharByteWidth());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3041 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 686 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3042 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 687 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isPascal());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3043 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 691 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getStrTokenLoc(I));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3044 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 696 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(StrData[I]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3045 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 703 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getValue());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3046 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 704 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3047 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 705 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3048 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 714 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLParen());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3049 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 715 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParen());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3050 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 722 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumExprs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3051 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 725 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3052 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 726 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3053 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 735 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HasFPFeatures);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3054 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 737 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getOpcode()); // FIXME: stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3055 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 738 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getOperatorLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3056 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 739 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->canOverflow());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3057 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 741 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getStoredFPFeatures().getAsOpaqueInt());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3058 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 747 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumComponents());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3059 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 748 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumExpressions());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3060 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 749 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getOperatorLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3061 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 750 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3062 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 754 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ON.getKind()); // FIXME: Stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3063 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 755 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(ON.getSourceRange().getBegin());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3064 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 756 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(ON.getSourceRange().getEnd());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3065 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 759 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ON.getArrayExprIndex());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3066 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 782 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3067 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 786 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3068 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 789 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getOperatorLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3069 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 790 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3070 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 798 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRBracketLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3071 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 807 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRBracketLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3072 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 817 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getColonLocFirst());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3073 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 818 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getColonLocSecond());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3074 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 819 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRBracketLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3075 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 825 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getDimensions().size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3076 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 831 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3077 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 832 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3078 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 838 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->numOfIterators());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3079 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 839 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getIteratorKwLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3080 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 840 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3081 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 841 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3082 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 842 | for | 声明/局部 | 无关键词的32位位置变量（需复核） | `for (unsigned I = 0, End = E->numOfIterators(); I < End; ++I) {` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 3083 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 844 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getAssignLoc(I));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3084 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 849 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getColonLoc(I));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3085 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 851 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getSecondColonLoc(I));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3086 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 864 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumArgs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3087 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 865 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->hasStoredFPFeatures());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3088 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 866 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3089 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 871 | push_back | 计算 | 强制收窄为32位 | `Record.push_back(static_cast<unsigned>(E->getADLCallKind()));` | 改为 uint64_t / 移除收窄 | TODO |
| 3090 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 871 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(static_cast<unsigned>(E->getADLCallKind()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3091 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 873 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getFPFeatures().getAsOpaqueInt());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3092 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 879 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(std::distance(E->children().begin(), E->children().end()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3093 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 880 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3094 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 881 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getEndLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3095 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 900 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HasQualifier);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3096 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 901 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HasFoundDecl);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3097 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 902 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HasTemplateInfo);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3098 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 903 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(NumTemplateArgs);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3099 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 909 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getMemberLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3100 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 910 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isArrow());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3101 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 911 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->hadMultipleCandidates());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3102 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 912 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isNonOdrUse());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3103 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 913 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getOperatorLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3104 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 918 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(FoundDecl.getAccess());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3105 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 934 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getIsaMemberLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3106 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 935 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getOpLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3107 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 936 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isArrow());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3108 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 944 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->shouldCopy());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3109 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 950 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3110 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 951 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getBridgeKeywordLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3111 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 952 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getBridgeKind()); // FIXME: Stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3112 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 958 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->path_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3113 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 959 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->hasStoredFPFeatures());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3114 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 961 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getCastKind()); // FIXME: stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3115 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 968 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getFPFeatures().getAsOpaqueInt());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3116 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 976 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HasFPFeatures);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3117 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 977 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getOpcode()); // FIXME: stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3118 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 980 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getOperatorLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3119 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 982 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getStoredFPFeatures().getAsOpaqueInt());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3120 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 998 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getQuestionLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3121 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 999 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3122 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1011 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getQuestionLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3123 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1012 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3124 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1018 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isPartOfExplicitCast());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3125 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1033 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3126 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1034 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3127 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1040 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3128 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1043 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isFileScope());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3129 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1051 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getAccessorLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3130 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1060 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLBraceLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3131 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1061 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRBraceLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3132 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1063 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(isArrayFiller);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3133 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1068 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->hadArrayRangeDesignator());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3134 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1069 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumInits());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3135 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1085 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumSubExprs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3136 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1088 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getEqualOrColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3137 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1089 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->usesGNUSyntax());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3138 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1093 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(serialization::DESIG_FIELD_DECL);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3139 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1096 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(serialization::DESIG_FIELD_NAME);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3140 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1099 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D.getDotLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3141 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1100 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D.getFieldLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3142 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1102 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(serialization::DESIG_ARRAY);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3143 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1103 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D.getFirstExprIndex());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3144 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1104 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D.getLBracketLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3145 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1105 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D.getRBracketLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3146 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1108 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(serialization::DESIG_ARRAY_RANGE);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3147 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1109 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D.getFirstExprIndex());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3148 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1110 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D.getLBracketLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3149 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1111 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D.getEllipsisLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3150 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1112 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D.getRBracketLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3151 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1151 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getBuiltinLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3152 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1152 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3153 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1153 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isMicrosoftABI());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3154 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1160 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3155 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1161 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getEndLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3156 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1162 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getIdentKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3157 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1168 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getAmpAmpLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3158 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1169 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLabelLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3159 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1177 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3160 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1178 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3161 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1179 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getTemplateDepth());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3162 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1188 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getBuiltinLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3163 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1189 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3164 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1190 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isConditionDependent() ? false : E->isConditionTrue());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3165 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1196 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getTokenLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3166 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1202 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumSubExprs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3167 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1205 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getBuiltinLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3168 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1206 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3169 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1212 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getBuiltinLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3170 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1213 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3171 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1228 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumAssocs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3172 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1229 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->ResultIndex);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3173 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1230 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getGenericLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3174 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1231 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getDefaultLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3175 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1232 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3176 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1250 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumSemanticExprs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3177 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1256 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(result);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3178 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1268 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getOp());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3179 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1271 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getBuiltinLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3180 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1272 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3181 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1283 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getAtLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3182 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1297 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumElements());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3183 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1307 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumElements());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3184 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1308 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->HasPackExpansions);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3185 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1314 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(Element.EllipsisLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3186 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1318 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(NumExpansions);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3187 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1330 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getAtLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3188 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1331 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3189 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1338 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getAtLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3190 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1339 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3191 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1346 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getAtLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3192 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1347 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->ProtoLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3193 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1348 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3194 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1355 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3195 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1356 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getOpLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3196 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1358 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isArrow());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3197 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1359 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isFreeIvar());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3198 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1365 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->SetterAndMethodRefFlags.getInt());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3199 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1366 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isImplicitProperty());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3200 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1373 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3201 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1374 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getReceiverLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3202 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1376 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3203 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1379 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(1);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3204 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1382 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(2);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3205 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1391 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRBracket());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3206 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1402 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumArgs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3207 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1403 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumStoredSelLocs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3208 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1404 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->SelLocsKind);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3209 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1405 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isDelegateInitCall());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3210 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1406 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->IsImplicit);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3211 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1407 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back((unsigned)E->getReceiverKind()); // FIXME: stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3212 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1420 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getSuperLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3213 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1425 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(1);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3214 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1428 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3215 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1432 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLeftLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3216 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1433 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRightLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3217 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1441 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(Locs[i]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3218 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1451 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getForLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3219 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1452 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3220 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1460 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getAtCatchLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3221 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1461 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3222 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1468 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getAtFinallyLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3223 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1475 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getAtLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3224 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1481 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->getNumCatchStmts());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3225 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1482 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->getFinallyStmt() != nullptr);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3226 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1488 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getAtTryLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3227 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1496 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getAtSynchronizedLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3228 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1503 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getThrowLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3229 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1509 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getValue());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3230 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1510 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3231 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1527 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getCatchLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3232 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1535 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->getNumHandlers());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3233 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1536 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getTryLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3234 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1545 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getForLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3235 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1546 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getCoawaitLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3236 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1547 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3237 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1548 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3238 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1562 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getKeywordLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3239 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1563 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->isIfExists());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3240 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1572 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getOperator());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3241 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1585 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isReversed());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3242 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1593 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumArgs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3243 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1594 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isElidable());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3244 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1595 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->hadMultipleCandidates());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3245 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1596 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isListInitialization());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3246 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1597 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isStdInitListInitialization());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3247 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1598 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->requiresZeroInitialization());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3248 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1599 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getConstructionKind()); // FIXME: stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3249 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1600 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3250 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1613 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3251 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1614 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->constructsVBase());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3252 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1615 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->inheritedFromVBase());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3253 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1627 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->LambdaExprBits.NumCaptures);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3254 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1629 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->LambdaExprBits.CaptureDefault); // FIXME: stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3255 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1630 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->CaptureDefaultLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3256 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1631 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->LambdaExprBits.ExplicitParams);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3257 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1632 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->LambdaExprBits.ExplicitResultType);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3258 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1633 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->ClosingBrace);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3259 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1687 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3260 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1688 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3261 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1694 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3262 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1695 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getEndLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3263 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1701 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->UDSuffixLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3264 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1707 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getValue());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3265 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1708 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3266 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1714 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3267 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1732 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3268 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1733 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isImplicit());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3269 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1739 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getThrowLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3270 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1741 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isThrownVariableInScope());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3271 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1749 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getUsedLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3272 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1757 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getExprLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3273 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1771 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3274 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1778 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isArray());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3275 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1779 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->hasInitializer());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3276 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1780 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumPlacementArgs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3277 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1781 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isParenTypeId());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3278 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1783 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isGlobalNew());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3279 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1784 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->passAlignment());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3280 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1785 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->doesUsualArrayDeleteWantSize());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3281 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1786 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->CXXNewExprBits.StoredInitializationStyle);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3282 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1805 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isGlobalDelete());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3283 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1806 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isArrayForm());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3284 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1807 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isArrayFormAsWritten());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3285 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1808 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->doesUsualArrayDeleteWantSize());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3286 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1811 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3287 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1820 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isArrow());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3288 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1821 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getOperatorLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3289 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1824 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getColonColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3290 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1825 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getTildeLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3291 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1830 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getDestroyedTypeLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3292 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1839 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumObjects());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3293 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1842 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(serialization::COK_Block);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3294 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1845 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(serialization::COK_CompoundLiteral);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3295 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1850 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->cleanupsHaveSideEffects());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3296 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1862 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->hasTemplateKWAndArgsInfo());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3297 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1863 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumTemplateArgs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3298 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1864 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->hasFirstQualifierFoundInScope());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3299 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1873 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isArrow());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3300 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1874 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getOperatorLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3301 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1896 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->DependentScopeDeclRefExprBits.HasTemplateKWAndArgsInfo);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3302 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1900 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ArgInfo.NumTemplateArgs);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3303 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1913 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumArgs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3304 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1918 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3305 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1919 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3306 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1926 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumDecls());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3307 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1927 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->hasTemplateKWAndArgsInfo());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3308 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1931 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ArgInfo.NumTemplateArgs);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3309 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1939 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(OvI.getAccess());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3310 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1948 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isArrow());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3311 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1949 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->hasUnresolvedUsing());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3312 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1952 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getOperatorLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3313 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1958 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->requiresADL());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3314 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1959 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isOverloaded());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3315 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1966 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->TypeTraitExprBits.NumArgs);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3316 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1967 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->TypeTraitExprBits.Kind); // FIXME: Stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3317 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1968 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->TypeTraitExprBits.Value);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3318 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1977 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getTrait());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3319 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1978 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getValue());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3320 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1987 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getTrait());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3321 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1988 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getValue());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3322 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 1996 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getValue());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3323 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2004 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getEllipsisLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3324 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2005 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->NumExpansions);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3325 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2012 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isPartiallySubstituted() ? E->getPartialArguments().size()` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3326 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2014 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->OperatorLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3327 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2015 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->PackLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3328 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2016 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->RParenLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3329 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2022 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getPackLength());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3330 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2031 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isReferenceParameter());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3331 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2032 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getNameLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3332 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2042 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getParameterPackLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3333 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2048 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->getNumExpansions());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3334 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2050 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getParameterPackLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3335 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2059 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(static_cast<bool>(E->getLifetimeExtendedTemporaryDecl()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3336 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2069 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->LParenLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3337 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2070 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->EllipsisLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3338 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2071 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->RParenLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3339 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2072 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->NumExpansions);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3340 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2076 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->Opcode);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3341 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2083 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3342 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2084 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isUnique());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3343 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2109 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getBuiltinLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3344 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2110 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3345 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2120 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E->isArrow());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3346 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2123 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getMemberLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3347 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2132 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getRBracketLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3348 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2151 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getExceptLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3349 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2159 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getFinallyLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3350 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2166 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(S->getIsCXXTry());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3351 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2167 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getTryLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3352 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2175 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(S->getLeaveLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3353 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2192 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3354 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2193 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(E->getEndLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3355 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2208 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getNumClauses());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3356 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2390 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getNumClauses());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3357 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2616 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getTargetCallLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3358 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2691 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(I->second);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3359 | Serialization/ASTWriterStmt | ./lib/Serialization/ASTWriterStmt.cpp | 2737 | EmitRecord | 声明/容器 | 容器承载32位位置 | `Writer->Stream.EmitRecord(serialization::STMT_STOP, ArrayRef<uint32_t>());` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3360 | Serialization/MultiOnDiskHashTable | ./lib/Serialization/MultiOnDiskHashTable.h | 46 |  | 声明/类型别名 | 可疑别名32位 | `using storage_type = const unsigned char *;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3361 | Serialization/MultiOnDiskHashTable | ./lib/Serialization/MultiOnDiskHashTable.h | 52 |  | 声明/类型别名 | 可疑别名32位 | `using hash_value_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3362 | Serialization/MultiOnDiskHashTable | ./lib/Serialization/MultiOnDiskHashTable.h | 202 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `uint32_t BucketOffset = endian::readNext<uint32_t, little, unaligned>(Ptr);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 3363 | Serialization/MultiOnDiskHashTable | ./lib/Serialization/MultiOnDiskHashTable.h | 205 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `uint32_t NumFiles = endian::readNext<uint32_t, little, unaligned>(Ptr);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 3364 | Serialization/MultiOnDiskHashTable | ./lib/Serialization/MultiOnDiskHashTable.h | 234 | if | 计算 | 强制收窄为32位 | `if (Tables.size() > static_cast<unsigned>(Info::MaxTables))` | 改为 uint64_t / 移除收窄 | TODO |
| 3365 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 254 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(Loc, Seq);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3366 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 280 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(TL.getWrittenTypeSpec());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3367 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 281 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(static_cast<uint64_t>(TL.getWrittenSignSpec()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3368 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 282 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(static_cast<uint64_t>(TL.getWrittenWidthSpec()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3369 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 283 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(TL.hasModeAttr());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3370 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 323 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(TL.getSizeExpr() ? 1 : 0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3371 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 457 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(TL.isConstrained());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3372 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 469 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(TL.isDecltypeAuto());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3373 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 526 | addSourceLocation | 比较/实现 | 关键函数相关（需复核） | `addSourceLocation(TL.getExpansionLoc());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3374 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 566 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(TL.hasBaseTypeAsWritten());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3375 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 620 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ID);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3376 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 628 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(*Name++);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3377 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 636 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ID);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3378 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 638 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(*Name++);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3379 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1072 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Pos = 0;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 3380 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1152 | DIAGOPT | 序列化 | 序列化位置读写（需复核） | `#define DIAGOPT(Name, Bits, Default) Record.push_back(DiagOpts.Name);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3381 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1154 | push_back | 计算 | 强制收窄为32位 | `Record.push_back(static_cast<unsigned>(DiagOpts.get##Name()));` | 改为 uint64_t / 移除收窄 | TODO |
| 3382 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1154 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(static_cast<unsigned>(DiagOpts.get##Name()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3383 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1156 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(DiagOpts.Warnings.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3384 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1159 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(DiagOpts.Remarks.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3385 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1285 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(AdditionalModMaps->size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3386 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1289 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3387 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1305 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back((unsigned)M.Kind); // FIXME: Stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3388 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1306 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(M.ImportLoc, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3389 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1310 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(M.Signature ? 0 : M.File->getSize());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3390 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1311 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(M.Signature ? 0 : getTimestampForOutput(M.File));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3391 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1328 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(LangOpts.Name);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3392 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1330 | push_back | 计算 | 强制收窄为32位 | `Record.push_back(static_cast<unsigned>(LangOpts.get##Name()));` | 改为 uint64_t / 移除收窄 | TODO |
| 3393 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1330 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(static_cast<unsigned>(LangOpts.get##Name()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3394 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1333 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(LangOpts.Sanitize.has(SanitizerKind::ID));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3395 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1336 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(LangOpts.ModuleFeatures.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3396 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1340 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back((unsigned) LangOpts.ObjCRuntime.getKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3397 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1346 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(LangOpts.CommentOpts.BlockCommandNames.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3398 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1350 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(LangOpts.CommentOpts.ParseAllComments);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3399 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1353 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(LangOpts.OMPTargetTriples.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3400 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1369 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(TargetOpts.FeaturesAsWritten.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3401 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1373 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(TargetOpts.Features.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3402 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1393 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HSOpts.UserEntries.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3403 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1397 | push_back | 计算 | 强制收窄为32位 | `Record.push_back(static_cast<unsigned>(Entry.Group));` | 改为 uint64_t / 移除收窄 | TODO |
| 3404 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1397 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(static_cast<unsigned>(Entry.Group));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3405 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1398 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Entry.IsFramework);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3406 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1399 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Entry.IgnoreSysRoot);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3407 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1403 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HSOpts.SystemHeaderPrefixes.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3408 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1406 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HSOpts.SystemHeaderPrefixes[I].IsSystemHeader);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3409 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1412 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HSOpts.DisableModuleHash);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3410 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1413 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HSOpts.ImplicitModuleMaps);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3411 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1414 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HSOpts.ModuleMapFileHomeIsCwd);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3412 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1415 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HSOpts.EnablePrebuiltImplicitModules);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3413 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1416 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HSOpts.UseBuiltinIncludes);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3414 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1417 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HSOpts.UseStandardSystemIncludes);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3415 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1418 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HSOpts.UseStandardCXXIncludes);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3416 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1419 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HSOpts.UseLibcxx);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3417 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1429 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(PPOpts.Macros.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3418 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1432 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(PPOpts.Macros[I].second);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3419 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1436 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(PPOpts.Includes.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3420 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1441 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(PPOpts.MacroIncludes.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3421 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1445 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(PPOpts.UsePredefines);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3422 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1447 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(PPOpts.DetailedRecord);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3423 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1449 | push_back | 计算 | 强制收窄为32位 | `Record.push_back(static_cast<unsigned>(PPOpts.ObjCXXARCStandardLibrary));` | 改为 uint64_t / 移除收窄 | TODO |
| 3424 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1449 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(static_cast<unsigned>(PPOpts.ObjCXXARCStandardLibrary));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3425 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1465 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ORIGINAL_FILE);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3426 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1466 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(SM.getMainFileID().getOpaqueValue());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3427 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1471 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(SM.getMainFileID().getOpaqueValue());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3428 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1589 | getLoBits | 计算 | 强制收窄为32位 | `static_cast<uint32_t>(CH.getLoBits(32).getZExtValue());` | 改为 uint64_t / 移除收窄 | TODO |
| 3429 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1591 | getHiBits | 计算 | 强制收窄为32位 | `static_cast<uint32_t>(CH.getHiBits(32).getZExtValue());` | 改为 uint64_t / 移除收窄 | TODO |
| 3430 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1749 |  | I/O | 平台I/O偏移需复核 | `off_t Size;` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 3431 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1764 |  | 声明/类型别名 | 可疑别名32位 | `using hash_value_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3432 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1765 |  | 声明/类型别名 | 可疑别名32位 | `using offset_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3433 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1815 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 3434 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1818 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `llvm::StringMap<unsigned>::iterator Pos` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 3435 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 1829 |  | 声明/局部 | 仅命名可疑需复核 | `LE.write<uint32_t>(Offset);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 3436 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2043 |  | 声明/容器 | 容器承载32位位置 | `std::vector<uint32_t> SLocEntryOffsets;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3437 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2070 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Code);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3438 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2073 | push_back | 比较/实现 | 关键函数相关（需复核） | `Record.push_back(SLoc->getOffset() - 2);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3439 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2073 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(SLoc->getOffset() - 2);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3440 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2083 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(File.getIncludeLoc(), Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3441 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2084 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(File.getFileCharacteristic()); // FIXME: stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3442 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2085 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(File.hasLineDirectives());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3443 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2094 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(InputFileIDs[Content->OrigEntry]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3444 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2096 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(File.NumCreatedFIDs);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3445 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2100 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(FDI->second->FirstDeclIndex);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3446 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2101 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(FDI->second->DeclIDs.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3447 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2103 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3448 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2104 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3449 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2144 | AddSourceLocation | 比较/实现 | 关键函数相关（需复核） | `AddSourceLocation(Expansion.getSpellingLoc(), Record, Seq);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3450 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2144 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Expansion.getSpellingLoc(), Record, Seq);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3451 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2145 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Expansion.getExpansionLocStart(), Record, Seq);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3452 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2146 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Expansion.isMacroArgExpansion()` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3453 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2150 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Expansion.isExpansionTokenRange());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3454 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2153 | getNextLocalOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation::UIntTy NextOffset = SourceMgr.getNextLocalOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3455 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2155 | getLocalSLocEntry | 比较/实现 | 关键函数相关（需复核） | `NextOffset = SourceMgr.getLocalSLocEntry(I + 1).getOffset();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3456 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2156 | push_back | 比较/实现 | 关键函数相关（需复核） | `Record.push_back(NextOffset - SLoc->getOffset() - 1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3457 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2156 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(NextOffset - SLoc->getOffset() - 1);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3458 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2180 | getNextLocalOffset | 比较/实现 | 关键函数相关（需复核） | `SourceMgr.getNextLocalOffset() - 1 /* skip dummy */,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3459 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2208 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3460 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2217 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(L.first.ID);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3461 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2220 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(L.second.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3462 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2222 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(LE.FileOffset);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3463 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2223 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(LE.LineNo);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3464 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2224 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(FilenameMap[LE.FilenameID]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3465 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2225 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back((unsigned)LE.FileKind);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3466 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2226 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(LE.IncludeOffset);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3467 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2260 |  | 声明/容器 | 容器承载32位位置 | `std::vector<uint32_t> IncludedInputFileIDs;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3468 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2302 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(AssumeNonNullLoc, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3469 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2311 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(true);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3470 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2312 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(SkipInfo->HashTokenLoc, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3471 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2313 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(SkipInfo->IfTokenLoc, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3472 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2314 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(SkipInfo->FoundNonSkipPortion);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3473 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2315 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(SkipInfo->FoundElse);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3474 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2316 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(SkipInfo->ElseLoc, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3475 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2318 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(false);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3476 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2321 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Cond.IfLoc, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3477 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2322 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Cond.WasSkipping);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3478 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2323 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Cond.FoundNonSkip);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3479 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2324 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Cond.FoundElse);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3480 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2376 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(MD->getLocation(), Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3481 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2377 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MD->getKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3482 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2379 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(getMacroRef(DefMD->getInfo(), Name));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3483 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2381 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(VisMD->isPublic());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3484 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2395 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(MD->getLocation(), Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3485 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2396 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MD->getKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3486 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2398 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(getMacroRef(DefMD->getInfo(), Name));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3487 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2400 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(VisMD->isPublic());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3488 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2442 |  | 声明/容器 | 容器承载32位位置 | `std::vector<uint32_t> MacroOffsets;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3489 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2455 |  | 计算 | 指针差值落入32位 | `unsigned Index = ID - FirstMacroID;` | 用 uint64_t 接收指针差值 | TODO |
| 3490 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2464 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(MI->getDefinitionLoc(), Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3491 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2465 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(MI->getDefinitionEndLoc(), Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3492 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2466 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MI->isUsed());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3493 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2467 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MI->isUsedForHeaderGuard());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3494 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2468 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MI->getNumTokens());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3495 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2475 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MI->isC99Varargs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3496 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2476 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MI->isGNUVarargs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3497 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2477 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MI->hasCommaPasting());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3498 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2478 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MI->getNumParams());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3499 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2486 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MacroDefinitions[PPRec->findMacroDefinition(MI)]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3500 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2580 | PPEntityOffset | 比较/实现 | 关键函数相关（需复核） | `PPEntityOffset((*E)->getSourceRange(), Offset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3501 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2592 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ME->isBuiltinMacro());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3502 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2596 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MacroDefinitions[ME->getDefinition()]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3503 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2602 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(PPD_INCLUSION_DIRECTIVE);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3504 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2603 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ID->getFileName().size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3505 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2604 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ID->wasInQuotes());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3506 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2605 | push_back | 计算 | 强制收窄为32位 | `Record.push_back(static_cast<unsigned>(ID->getKind()));` | 改为 uint64_t / 移除收窄 | TODO |
| 3507 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2605 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(static_cast<unsigned>(ID->getKind()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3508 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2606 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ID->importedModule());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3509 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2656 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(PPD_SKIPPED_RANGES);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3510 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2881 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(getSubmoduleID(I));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3511 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2891 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(getSubmoduleID(E.getPointer()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3512 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2892 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(E.getInt());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3513 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2970 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Flags);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3514 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2980 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(DiagStateID);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3515 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2990 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(I.first);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3516 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 2991 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(I.second.serialize());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3517 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3015 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Loc, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3518 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3017 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(FileIDAndFile.second.StateTransitions.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3519 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3019 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(StatePoint.Offset);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3520 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3033 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Diag.DiagStatesByLoc.CurDiagStateLoc, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3521 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3082 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<uint32_t, 128> KindDeclPairs;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3522 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3165 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(I->getKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3523 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3166 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(I->isTrailingComment());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3524 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3167 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(I->isAlmostTrailingComment());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3525 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3193 |  | 声明/类型别名 | 可疑别名32位 | `using hash_value_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3526 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3194 |  | 声明/类型别名 | 可疑别名32位 | `using offset_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3527 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3416 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Writer.AddSourceLocation(Loc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3528 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3496 |  | 声明/类型别名 | 可疑别名32位 | `using hash_value_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3529 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3497 |  | 声明/类型别名 | 可疑别名32位 | `using offset_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3530 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3513 | getMacroDirectivesOffset | 比较/实现 | 关键函数相关（需复核） | `auto MacroOffset = Writer.getMacroDirectivesOffset(II);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3531 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3534 | getMacroDirectivesOffset | 比较/实现 | 关键函数相关（需复核） | `auto MacroOffset = Writer.getMacroDirectivesOffset(II);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3532 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3562 | getMacroDirectivesOffset | 比较/实现 | 关键函数相关（需复核） | `auto MacroOffset = Writer.getMacroDirectivesOffset(II);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3533 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3574 | unsigned | 计算 | 强制收窄为32位 | `Bits = (Bits << 1) \| unsigned(HadMacroDefinition);` | 改为 uint64_t / 移除收窄 | TODO |
| 3534 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3575 | unsigned | 计算 | 强制收窄为32位 | `Bits = (Bits << 1) \| unsigned(II->isExtensionToken());` | 改为 uint64_t / 移除收窄 | TODO |
| 3535 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3576 | unsigned | 计算 | 强制收窄为32位 | `Bits = (Bits << 1) \| unsigned(II->isPoisoned());` | 改为 uint64_t / 移除收窄 | TODO |
| 3536 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3577 | unsigned | 计算 | 强制收窄为32位 | `Bits = (Bits << 1) \| unsigned(II->hasRevertedTokenIDToIdentifier());` | 改为 uint64_t / 移除收窄 | TODO |
| 3537 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3578 | unsigned | 计算 | 强制收窄为32位 | `Bits = (Bits << 1) \| unsigned(II->isCPlusPlusOperatorKeyword());` | 改为 uint64_t / 移除收窄 | TODO |
| 3538 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3718 |  | 声明/类型别名 | 可疑别名32位 | `using data_type = std::pair<unsigned, unsigned>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3539 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3721 |  | 声明/类型别名 | 可疑别名32位 | `using hash_value_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3540 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3722 |  | 声明/类型别名 | 可疑别名32位 | `using offset_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3541 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3728 | size | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Start = DeclIDs.size();` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 3542 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 3737 | size | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Start = DeclIDs.size();` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 3543 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4156 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(V.Supported ? 1 : 0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3544 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4157 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(V.Enabled ? 1 : 0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3545 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4158 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(V.WithPragma ? 1 : 0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3546 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4159 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(V.Avail);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3547 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4160 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(V.Core);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3548 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4161 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(V.Opt);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3549 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4236 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(LPT.Toks.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3550 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4249 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(PragmaLoc, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3551 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4256 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(SemaRef.MSStructPragmaOn ? PMSST_ON : PMSST_OFF);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3552 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4264 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(SemaRef.MSPointerToMemberRepresentationMethod);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3553 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4265 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(SemaRef.ImplicitMSInheritanceAttrLoc, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3554 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4278 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(SemaRef.AlignPackStack.CurrentPragmaLocation, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3555 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4279 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(SemaRef.AlignPackStack.Stack.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3556 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4282 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(StackEntry.PragmaLocation, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3557 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4283 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(StackEntry.PragmaPushLocation, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3558 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4297 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(SemaRef.FpPragmaStack.CurrentValue.getAsOpaqueInt());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3559 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4298 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(SemaRef.FpPragmaStack.CurrentPragmaLocation, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3560 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4299 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(SemaRef.FpPragmaStack.Stack.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3561 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4301 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(StackEntry.Value.getAsOpaqueInt());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3562 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4302 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(StackEntry.PragmaLocation, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3563 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4303 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(StackEntry.PragmaPushLocation, Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3564 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4327 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(EXTENSION_METADATA);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3565 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4328 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Metadata.MajorVersion);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3566 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4329 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Metadata.MinorVersion);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3567 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4330 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Metadata.BlockName.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3568 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4331 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Metadata.UserInfo.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3569 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4354 | push_back | 序列化 | 序列化位置读写（需复核） | `return Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3570 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4356 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(A->getKind() + 1); // FIXME: stable encoding, target attrs` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3571 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4361 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(A->getScopeLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3572 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4362 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(A->getParsedKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3573 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4363 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(A->getSyntax());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3574 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4364 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(A->getAttributeSpellingListIndexRaw());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3575 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4377 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Tok.getLocation(), Record);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3576 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4378 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Tok.getLength());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3577 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4384 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Tok.getKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3578 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4386 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Tok.getFlags());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3579 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4390 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Str.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3580 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4427 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Version.getMajor());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3581 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4428 | if | 声明/容器 | 容器承载32位位置 | `if (Optional<unsigned> Minor = Version.getMinor())` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3582 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4429 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(*Minor + 1);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3583 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4431 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3584 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4432 | if | 声明/容器 | 容器承载32位位置 | `if (Optional<unsigned> Subminor = Version.getSubminor())` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3585 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4433 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(*Subminor + 1);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3586 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4435 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3587 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4440 | SetIdentifierOffset | 声明/局部 | 仅命名可疑需复核 | `void ASTWriter::SetIdentifierOffset(const IdentifierInfo *II, uint32_t Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 3588 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4450 | SetSelectorOffset | 声明/局部 | 仅命名可疑需复核 | `void ASTWriter::SetSelectorOffset(Selector Sel, uint32_t Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 3589 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4606 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(WI.getLocation(), WeakUndeclaredIdentifiers);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3590 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4619 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(SemaRef.VTableUses[I].second, VTableUses);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3591 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4633 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(I.second, PendingInstantiations);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3592 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4665 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(I.second, UndefinedButUsed);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3593 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4678 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(DeleteLoc.first, DeleteExprsToAnalyze);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3594 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4703 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<uint32_t, 128> NewGlobalKindDeclPairs;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3595 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 4739 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(DeclUpdate(UPD_CXX_ADDED_ANONYMOUS_NAMESPACE, NS));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3596 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5024 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(PP.getModuleImportLoc(Import.M), ImportedModules);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3597 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5076 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Kind);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3598 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5083 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(GetDeclRef(Update.getDecl()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3599 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5091 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(Update.getLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3600 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5096 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(VD->isInline());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3601 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5097 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(VD->isInlineSpecified());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3602 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5115 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(RD->isParamDestroyedInCallee());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3603 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5116 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(RD->getArgPassingRestrictions());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3604 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5125 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MSInfo->getTemplateSpecializationKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3605 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5126 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(MSInfo->getPointOfInstantiation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3606 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5129 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Spec->getTemplateSpecializationKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3607 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5130 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(Spec->getPointOfInstantiation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3608 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5137 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(true);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3609 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5142 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(false);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3610 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5145 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(RD->getTagKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3611 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5146 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(RD->getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3612 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5147 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(RD->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3613 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5151 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasAttrs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3614 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5172 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(GetOrCreateTypeID(Update.getType()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3615 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5180 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Update.getNumber());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3616 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5190 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(A->getAllocatorType());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3617 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5198 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getAttr<OMPDeclareTargetDeclAttr>()->getMapType());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3618 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5204 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(getSubmoduleID(Update.getModule()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3619 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5215 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(UPD_CXX_ADDED_FUNCTION_DEFINITION);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3620 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5216 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Def->isInlined());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3621 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5217 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(Def->getInnerLocStart());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3622 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5229 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Raw);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3623 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5232 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `void ASTWriter::AddSourceLocation(SourceLocation Loc, RecordDataImpl &Record,` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3624 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5234 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(SourceLocationEncoding::encode(Loc, Seq));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3625 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5239 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Range.getBegin(), Record, Seq);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3626 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5240 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Range.getEnd(), Record, Seq);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3627 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5248 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(getIdentifierRef(II));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3628 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5285 | getMacroDirectivesOffset | 比较/实现 | 关键函数相关（需复核） | `uint32_t ASTWriter::getMacroDirectivesOffset(const IdentifierInfo *Name) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3629 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5327 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Arg.getTemplateNameLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3630 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5331 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Arg.getTemplateNameLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3631 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5332 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Arg.getTemplateEllipsisLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3632 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5375 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(GetOrCreateTypeID(T));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3633 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5415 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(GetDeclRef(D));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3634 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5482 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 3635 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5492 | LocDecl | 声明/局部 | 仅命名可疑需复核 | `std::pair<unsigned, serialization::DeclID> LocDecl(Offset, ID);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 3636 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5532 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(DNLoc.getCXXLiteralOperatorNameLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3637 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5548 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(NameInfo.getLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3638 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5598 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(NNS.getLocalSourceRange().getEnd());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3639 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5602 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(NNS.getLocalSourceRange().getEnd());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3640 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5616 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(TemplateParams->getTemplateLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3641 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5617 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(TemplateParams->getLAngleLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3642 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5618 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(TemplateParams->getRAngleLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3643 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5643 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(ASTTemplArgList->LAngleLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3644 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5644 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(ASTTemplArgList->RAngleLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3645 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5668 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Base.isPackExpansion()? Base.getEllipsisLoc()` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3646 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5712 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Writer.AddSourceLocation(Init->getMemberLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3647 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5714 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Writer.AddSourceLocation(Init->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3648 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5715 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Writer.AddSourceLocation(Init->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3649 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5779 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Capture.getLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3650 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 5792 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `AddSourceLocation(Capture.isPackExpansion() ? Capture.getEllipsisLoc()` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3651 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6201 | push_back | 计算 | 强制收窄为32位 | `Record.push_back(unsigned(C->getClauseKind()));` | 改为 uint64_t / 移除收窄 | TODO |
| 3652 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6201 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(unsigned(C->getClauseKind()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3653 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6203 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3654 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6204 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getEndLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3655 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6208 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(uint64_t(C->getCaptureRegion()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3656 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6219 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(uint64_t(C->getNameModifier()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3657 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6220 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getNameModifierLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3658 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6221 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3659 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6223 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3660 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6229 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3661 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6235 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3662 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6240 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3663 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6245 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3664 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6249 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getNumSizes());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3665 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6252 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3666 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6259 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3667 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6264 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3668 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6269 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3669 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6274 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3670 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6278 | push_back | 计算 | 强制收窄为32位 | `Record.push_back(unsigned(C->getDefaultKind()));` | 改为 uint64_t / 移除收窄 | TODO |
| 3671 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6278 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(unsigned(C->getDefaultKind()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3672 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6279 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3673 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6280 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getDefaultKindKwLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3674 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6284 | push_back | 计算 | 强制收窄为32位 | `Record.push_back(unsigned(C->getProcBindKind()));` | 改为 uint64_t / 移除收窄 | TODO |
| 3675 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6284 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(unsigned(C->getProcBindKind()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3676 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6285 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3677 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6286 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getProcBindKindKwLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3678 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6291 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getScheduleKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3679 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6292 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getFirstScheduleModifier());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3680 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6293 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getSecondScheduleModifier());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3681 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6295 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3682 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6296 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getFirstScheduleModifierLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3683 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6297 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getSecondScheduleModifierLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3684 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6298 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getScheduleKindLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3685 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6299 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getCommaLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3686 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6303 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getLoopNumIterations().size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3687 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6309 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3688 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6323 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->isExtended() ? 1 : 0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3689 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6325 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3690 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6326 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getArgumentLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3691 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6352 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3692 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6357 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3693 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6358 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getVarLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3694 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6363 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3695 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6364 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getVarLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3696 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6369 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3697 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6370 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getVarLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3698 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6376 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3699 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6382 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3700 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6388 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3701 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6393 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3702 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6397 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3703 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6398 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3704 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6408 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3705 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6410 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3706 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6423 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3707 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6425 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3708 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6427 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getKindLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3709 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6428 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3710 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6442 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3711 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6443 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3712 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6449 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3713 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6452 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3714 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6453 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getModifierLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3715 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6454 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3716 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6478 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3717 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6480 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3718 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6481 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3719 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6497 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3720 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6499 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3721 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6500 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3722 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6518 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3723 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6520 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3724 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6521 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3725 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6522 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getModifier());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3726 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6523 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getModifierLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3727 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6546 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3728 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6547 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3729 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6548 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3730 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6555 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3731 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6556 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3732 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6568 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3733 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6569 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3734 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6581 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3735 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6582 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3736 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6589 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3737 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6593 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3738 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6594 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getNumLoops());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3739 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6595 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3740 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6597 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getDependencyKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3741 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6598 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getDependencyLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3742 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6599 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3743 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6600 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getOmpAllMemoryLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3744 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6611 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getModifierLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3745 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6612 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3746 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6616 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3747 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6617 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getUniqueDeclarationsNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3748 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6618 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getTotalComponentListNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3749 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6619 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getTotalComponentsNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3750 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6620 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3751 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6622 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getMapTypeModifier(I));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3752 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6623 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getMapTypeModifierLoc(I));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3753 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6627 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getMapType());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3754 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6628 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getMapLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3755 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6629 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3756 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6637 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(N);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3757 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6639 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(N);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3758 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6647 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3759 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6648 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3760 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6649 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3761 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6658 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3762 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6664 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3763 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6670 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3764 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6676 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3765 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6682 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3766 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6687 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3767 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6692 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getDistScheduleKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3768 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6694 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3769 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6695 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getDistScheduleKindLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3770 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6696 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getCommaLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3771 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6700 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getDefaultmapKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3772 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6701 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getDefaultmapModifier());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3773 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6702 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3774 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6703 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getDefaultmapModifierLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3775 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6704 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getDefaultmapKindLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3776 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6708 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3777 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6709 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getUniqueDeclarationsNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3778 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6710 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getTotalComponentListNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3779 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6711 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getTotalComponentsNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3780 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6712 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3781 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6714 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getMotionModifier(I));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3782 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6715 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getMotionModifierLoc(I));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3783 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6719 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3784 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6727 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(N);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3785 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6729 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(N);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3786 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6738 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3787 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6739 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getUniqueDeclarationsNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3788 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6740 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getTotalComponentListNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3789 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6741 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getTotalComponentsNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3790 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6742 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3791 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6744 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getMotionModifier(I));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3792 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6745 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getMotionModifierLoc(I));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3793 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6749 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3794 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6757 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(N);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3795 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6759 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(N);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3796 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6768 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3797 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6769 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getUniqueDeclarationsNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3798 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6770 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getTotalComponentListNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3799 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6771 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getTotalComponentsNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3800 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6772 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3801 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6782 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(N);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3802 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6784 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(N);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3803 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6792 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3804 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6793 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getUniqueDeclarationsNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3805 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6794 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getTotalComponentListNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3806 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6795 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getTotalComponentsNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3807 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6796 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3808 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6802 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(N);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3809 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6804 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(N);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3810 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6812 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3811 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6813 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getUniqueDeclarationsNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3812 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6814 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getTotalComponentListNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3813 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6815 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getTotalComponentsNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3814 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6816 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3815 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6822 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(N);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3816 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6824 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(N);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3817 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6832 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3818 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6833 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getUniqueDeclarationsNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3819 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6834 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getTotalComponentListNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3820 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6835 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getTotalComponentsNum());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3821 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6836 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3822 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6842 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(N);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3823 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6844 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(N);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3824 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6864 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getAtomicDefaultMemOrderKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3825 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6865 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3826 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6866 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getAtomicDefaultMemOrderKindKwLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3827 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6870 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3828 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6871 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3829 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6879 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3830 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6880 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3831 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6886 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3832 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6887 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3833 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6894 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3834 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6895 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getKindKwLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3835 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6899 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->getNumberOfAllocators());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3836 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6900 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3837 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6905 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(Data.LParenLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3838 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6906 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(Data.RParenLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3839 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6911 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(C->varlist_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3840 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6912 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3841 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6914 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3842 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6921 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3843 | Serialization/ASTWriter | ./lib/Serialization/ASTWriter.cpp | 6922 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(C->getBindKindLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3844 | Serialization/ASTReaderDecl | ./lib/Serialization/ASTReaderDecl.cpp | 112 | getGlobalBitOffset | 比较/实现 | 关键函数相关（需复核） | `return Local ? Record.getGlobalBitOffset(Local) : 0;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3845 | Serialization/ASTReaderDecl | ./lib/Serialization/ASTReaderDecl.cpp | 1280 | Diag | 序列化 | 序列化位置读写（需复核） | `Reader.Diag(IVD->getLocation(), diag::err_duplicate_ivar_declaration)` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3846 | Serialization/ASTReaderDecl | ./lib/Serialization/ASTReaderDecl.cpp | 1282 | Diag | 序列化 | 序列化位置读写（需复核） | `Reader.Diag(PrevIvar->getLocation(), diag::note_previous_definition);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3847 | Serialization/ASTReaderDecl | ./lib/Serialization/ASTReaderDecl.cpp | 2867 | readSourceLocation | 序列化 | 序列化位置读写（需复核） | `return Reader.readSourceLocation();` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3848 | Serialization/ASTReaderDecl | ./lib/Serialization/ASTReaderDecl.cpp | 3001 | RecordLocation | 比较/实现 | 关键函数相关（需复核） | `return RecordLocation(M, DOffs.getBitOffset(M->DeclsBlockStartOffset));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3849 | Serialization/ASTReaderDecl | ./lib/Serialization/ASTReaderDecl.cpp | 3004 | getLocalBitOffset | 比较/实现 | 关键函数相关（需复核） | `ASTReader::RecordLocation ASTReader::getLocalBitOffset(uint64_t GlobalOffset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3850 | Serialization/ASTReaderDecl | ./lib/Serialization/ASTReaderDecl.cpp | 3011 | getGlobalBitOffset | 比较/实现 | 关键函数相关（需复核） | `uint64_t ASTReader::getGlobalBitOffset(ModuleFile &M, uint64_t LocalOffset) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3851 | Serialization/ASTReaderDecl | ./lib/Serialization/ASTReaderDecl.cpp | 3535 |  | 计算 | 指针差值落入32位 | `unsigned Index = ID - NUM_PREDEF_DECL_IDS;` | 用 uint64_t 接收指针差值 | TODO |
| 3852 | Serialization/ASTReaderDecl | ./lib/Serialization/ASTReaderDecl.cpp | 3972 | Reader | 序列化 | 序列化位置读写（需复核） | `ASTDeclReader Reader(*this, Record, RecordLocation(F, Offset), ID,` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3853 | Serialization/ASTReaderDecl | ./lib/Serialization/ASTReaderDecl.cpp | 4100 | Diag | 序列化 | 序列化位置读写（需复核） | `Reader.Diag(Cat->getLocation(), diag::warn_dup_category_def)` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3854 | Serialization/ASTReaderDecl | ./lib/Serialization/ASTReaderDecl.cpp | 4102 | Diag | 序列化 | 序列化位置读写（需复核） | `Reader.Diag(Existing->getLocation(), diag::note_previous_definition);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3855 | Serialization/ASTReaderDecl | ./lib/Serialization/ASTReaderDecl.cpp | 4164 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = Result->Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 3856 | Serialization/ASTReaderDecl | ./lib/Serialization/ASTReaderDecl.cpp | 4165 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned N = M.ObjCCategories[Offset];` | 确认是否参与源位置运算；非则忽略 | TODO |
| 3857 | Serialization/ModuleManager | ./lib/Serialization/ModuleManager.cpp | 106 |  | I/O | 平台I/O偏移需复核 | `off_t ExpectedSize, time_t ExpectedModTime,` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 3858 | Serialization/ModuleManager | ./lib/Serialization/ModuleManager.cpp | 366 |  | 声明/容器 | 容器承载32位位置 | `llvm::SmallVector<unsigned, 4> UnusedIncomingEdges;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3859 | Serialization/ModuleManager | ./lib/Serialization/ModuleManager.cpp | 454 | lookupModuleFile | I/O | 平台I/O偏移需复核 | `bool ModuleManager::lookupModuleFile(StringRef FileName, off_t ExpectedSize,` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 3860 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 77 |  | 声明/类型别名 | 可疑别名32位 | `typedef SmallVector<unsigned, 2> data_type;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3861 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 77 |  | 声明/容器 | 容器承载32位位置 | `typedef SmallVector<unsigned, 2> data_type;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3862 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 78 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned hash_value_type;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3863 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 79 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned offset_type;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3864 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 304 |  | 声明/容器 | 容器承载32位位置 | `ArrayRef<unsigned> StoredDependencies = Modules[Known->second].Dependencies;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3865 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 327 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 2> ModuleIDs = *Known;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3866 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 399 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 4> Dependencies;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3867 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 404 |  | I/O | 平台I/O偏移需复核 | `off_t StoredSize;` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 3868 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 407 | ImportedModuleFileInfo | I/O | 平台I/O偏移需复核 | `ImportedModuleFileInfo(off_t Size, time_t ModTime, ASTFileSignature Sig)` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 3869 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 432 |  | 声明/类型别名 | 可疑别名32位 | `typedef llvm::StringMap<SmallVector<unsigned, 2> > InterestingIdentifierMap;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3870 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 432 |  | 声明/容器 | 容器承载32位位置 | `typedef llvm::StringMap<SmallVector<unsigned, 2> > InterestingIdentifierMap;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3871 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 472 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ID);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3872 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 479 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(*Name++);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3873 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 487 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ID);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3874 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 489 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(*Name++);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3875 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 641 |  | I/O | 平台I/O偏移需复核 | `off_t StoredSize = (off_t)Record[Idx++];` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 3876 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 724 |  | 声明/类型别名 | 可疑别名32位 | `typedef SmallVector<unsigned, 2> data_type;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3877 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 724 |  | 声明/容器 | 容器承载32位位置 | `typedef SmallVector<unsigned, 2> data_type;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3878 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 725 |  | 声明/类型别名 | 可疑别名32位 | `typedef const SmallVector<unsigned, 2> &data_type_ref;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3879 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 725 |  | 声明/容器 | 容器承载32位位置 | `typedef const SmallVector<unsigned, 2> &data_type_ref;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3880 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 726 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned hash_value_type;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3881 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 727 |  | 声明/类型别名 | 可疑别名32位 | `typedef unsigned offset_type;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3882 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 789 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(CurrentVersion);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3883 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 797 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(M->second.ID);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3884 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 798 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(M->first->getSize());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3885 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 799 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(M->first->getModificationTime());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3886 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 803 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Name.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3887 | Serialization/GlobalModuleIndex | ./lib/Serialization/GlobalModuleIndex.cpp | 807 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(M->second.Dependencies.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3888 | Serialization/ASTReaderInternals | ./lib/Serialization/ASTReaderInternals.h | 79 |  | 声明/类型别名 | 可疑别名32位 | `using hash_value_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3889 | Serialization/ASTReaderInternals | ./lib/Serialization/ASTReaderInternals.h | 80 |  | 声明/类型别名 | 可疑别名32位 | `using offset_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3890 | Serialization/ASTReaderInternals | ./lib/Serialization/ASTReaderInternals.h | 134 |  | 声明/类型别名 | 可疑别名32位 | `using hash_value_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3891 | Serialization/ASTReaderInternals | ./lib/Serialization/ASTReaderInternals.h | 135 |  | 声明/类型别名 | 可疑别名32位 | `using offset_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3892 | Serialization/ASTReaderInternals | ./lib/Serialization/ASTReaderInternals.h | 207 |  | 声明/类型别名 | 可疑别名32位 | `using hash_value_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3893 | Serialization/ASTReaderInternals | ./lib/Serialization/ASTReaderInternals.h | 208 |  | 声明/类型别名 | 可疑别名32位 | `using offset_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3894 | Serialization/ASTReaderInternals | ./lib/Serialization/ASTReaderInternals.h | 253 |  | I/O | 平台I/O偏移需复核 | `off_t Size;` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 3895 | Serialization/ASTReaderInternals | ./lib/Serialization/ASTReaderInternals.h | 262 |  | 声明/类型别名 | 可疑别名32位 | `using hash_value_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3896 | Serialization/ASTReaderInternals | ./lib/Serialization/ASTReaderInternals.h | 263 |  | 声明/类型别名 | 可疑别名32位 | `using offset_type = unsigned;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3897 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1057 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<uint32_t, 4> DeclIDs;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3898 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1356 | push_back | 比较/实现 | 关键函数相关（需复核） | `Entries.push_back(LineEntry::get(FileOffset, LineNo, FilenameID,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3899 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1463 | if | 计算 | 强制收窄为32位 | `if (unsigned(-ID) - 2 >= getTotalNumSLocs() \|\| ID > 0) {` | 改为 uint64_t / 移除收窄 | TODO |
| 3900 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1563 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation IncludeLoc = ReadSourceLocation(*F, Record[1]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3901 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1602 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = Record[0];` | 确认是否参与源位置运算；非则忽略 | TODO |
| 3902 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1605 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation IncludeLoc = ReadSourceLocation(*F, Record[1]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3903 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1620 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation SpellingLoc = ReadSourceLocation(*F, Record[1], Seq);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3904 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1621 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation ExpansionBegin = ReadSourceLocation(*F, Record[2], Seq);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3905 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1622 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation ExpansionEnd = ReadSourceLocation(*F, Record[3], Seq);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3906 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1637 | if | 计算 | 强制收窄为32位 | `if (unsigned(-ID) - 2 >= getTotalNumSLocs() \|\| ID > 0) {` | 改为 uint64_t / 移除收窄 | TODO |
| 3907 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1701 | setLocation | 序列化 | 序列化位置读写（需复核） | `Tok.setLocation(ReadSourceLocation(F, Record, Idx));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3908 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1775 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation Loc = ReadSourceLocation(F, Record, NextIndex);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3909 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1777 | setDefinitionEndLoc | 序列化 | 序列化位置读写（需复核） | `MI->setDefinitionEndLoc(ReadSourceLocation(F, Record, NextIndex));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3910 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1904 | off_t | I/O | 平台I/O偏移需复核 | `ikey.Size = off_t(endian::readNext<uint64_t, little, unaligned>(d));` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 3911 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 1916 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `const unsigned char *End = d + DataLen;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 3912 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 2221 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation Loc = ReadSourceLocation(M, Record, Idx);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3913 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 2301 |  | I/O | 平台I/O偏移需复核 | `R.StoredSize = static_cast<off_t>(Record[1]);` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 3914 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 2351 |  | I/O | 平台I/O偏移需复核 | `off_t StoredSize = FI.StoredSize;` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 3915 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 2852 | ReadUntranslatedSourceLocation | 序列化 | 序列化位置读写（需复核） | `ReadUntranslatedSourceLocation(Record[Idx++]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3916 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 2853 |  | I/O | 平台I/O偏移需复核 | `off_t StoredSize = (off_t)Record[Idx++];` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 3917 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3221 | size | 计算 | 强制收窄为32位 | `static_cast<unsigned int>(Blob.size() / 4));` | 改为 uint64_t / 移除收窄 | TODO |
| 3918 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3355 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `ReadSourceLocation(F, Record, I).getRawEncoding());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3919 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3397 | push_back | 序列化 | 序列化位置读写（需复核） | `ReferencedSelectorsData.push_back(ReadSourceLocation(F, Record, Idx).` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3920 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3407 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `ReadSourceLocation(F, Record, Idx));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3921 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3413 | size | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Idx = 0, End = Record.size() - 1;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 3922 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3417 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation HashToken = ReadSourceLocation(F, Record, Idx);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3923 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3418 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation IfTokenLoc = ReadSourceLocation(F, Record, Idx);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3924 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3421 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation ElseLoc = ReadSourceLocation(F, Record, Idx);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3925 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3427 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `auto Loc = ReadSourceLocation(F, Record, Idx);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3926 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3463 | unsigned | 计算 | 强制收窄为32位 | `unsigned(-F.SLocEntryBaseID) - F.LocalNumSLocEntries + 1;` | 改为 uint64_t / 移除收窄 | TODO |
| 3927 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3465 | getFromRawEncoding | 比较/实现 | 关键函数相关（需复核） | `F.FirstLoc = SourceLocation::getFromRawEncoding(F.SLocEntryBaseOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3928 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3522 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `ReadSourceLocation(F, Record, Idx).getRawEncoding());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3929 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3541 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `ReadSourceLocation(F, Record, I).getRawEncoding());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3930 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3699 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `ReadSourceLocation(F, Record, I).getRawEncoding());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3931 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3709 | push_back | 序列化 | 序列化位置读写（需复核） | `DelayedDeleteExprs.push_back(ReadSourceLocation(F, Record, I).getRawEncoding());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3932 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3723 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation Loc = ReadSourceLocation(F, Record, I);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3933 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3772 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `OptimizeOffPragmaLocation = ReadSourceLocation(F, Record[0]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3934 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3788 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `PointersToMembersPragmaLocation = ReadSourceLocation(F, Record[1]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3935 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3809 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `PragmaAlignPackCurrentLocation = ReadSourceLocation(F, Record[1]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3936 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3817 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `Entry.Location = ReadSourceLocation(F, Record[Idx++]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3937 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3818 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `Entry.PushLocation = ReadSourceLocation(F, Record[Idx++]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3938 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3831 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `FpPragmaCurrentLocation = ReadSourceLocation(F, Record[1]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3939 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3839 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `Entry.Location = ReadSourceLocation(F, Record[Idx++]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3940 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3840 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `Entry.PushLocation = ReadSourceLocation(F, Record[Idx++]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3941 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3874 |  | 声明/类型别名 | 可疑别名32位 | `using RemapBuilder = ContinuousRangeMap<uint32_t, int, 2>::Builder;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3942 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 3923 |  | 声明/局部 | 仅命名可疑需复核 | `auto mapOffset = [&](uint32_t Offset, uint32_t BaseOffset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 3943 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 4354 |  | 声明/局部 | 仅命名可疑需复核 | `const unsigned char *Data = F.IdentifierTableData + Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 3944 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 4537 |  | I/O | 平台I/O偏移需复核 | `off_t ExpectedSize, time_t ExpectedModTime,` | 启用 64 位接口：_FILE_OFFSET_BITS=64 / 64-bit file view offset | TODO |
| 3945 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 5773 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<uint32_t, 16> Inits;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3946 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 5965 |  | 计算 | 指针差值落入32位 | `unsigned LocalIndex = GlobalIndex - M->BasePreprocessedEntityID;` | 用 uint64_t 接收指针差值 | TODO |
| 3947 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 5998 |  | 计算 | 指针差值落入32位 | `unsigned LocalIndex = GlobalIndex - M->BasePreprocessedSkippedRangeID;` | 用 uint64_t 接收指针差值 | TODO |
| 3948 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6137 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `return Reader.getSourceManager().isBeforeInTranslationUnit(LHS, RHS);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3949 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6142 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `return Reader.getSourceManager().isBeforeInTranslationUnit(LHS, RHS);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3950 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6147 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `return Reader.getSourceManager().isBeforeInTranslationUnit(LHS, RHS);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3951 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6150 | getLoc | 比较/实现 | 关键函数相关（需复核） | `SourceLocation getLoc(const PPEntityOffset &PPE) const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3952 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6151 | TranslateSourceLocation | 序列化 | 序列化位置读写（需复核） | `return Reader.TranslateSourceLocation(M, PPE.getBegin());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3953 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6163 | getOffset | 比较/实现 | 关键函数相关（需复核） | `SourceManager::MaxLoadedOffset - Loc.getOffset() - 1);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3954 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6194 | if | 比较/实现 | 关键函数相关（需复核） | `if (SourceMgr.isBeforeInTranslationUnit(` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3955 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6216 | assert | 比较/实现 | 关键函数相关（需复核） | `assert(!SourceMgr.isBeforeInTranslationUnit(Range.getEnd(),Range.getBegin()));` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3956 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6360 | ReadDiagState | 序列化 | 序列化位置读写（需复核） | `FirstState = ReadDiagState(Initial, SourceLocation(), true);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3957 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6382 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation Loc = ReadSourceLocation(F, Record[Idx++]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3958 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6395 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = Record[Idx++];` | 确认是否参与源位置运算；非则忽略 | TODO |
| 3959 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6397 | ReadDiagState | 比较/实现 | 关键函数相关（需复核） | `ReadDiagState(*FirstState, Loc.getLocWithOffset(Offset), false);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3960 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6406 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `ReadSourceLocation(F, F.PragmaDiagMappings[Idx++]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3961 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6434 | getBitOffset | 比较/实现 | 关键函数相关（需复核） | `M, M->TypeOffsets[Index - M->BaseTypeIndex].getBitOffset() +` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3962 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 6508 | readSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation readSourceLocation() { return Reader.readSourceLocation(Seq); }` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3963 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 7302 | getLocalBitOffset | 比较/实现 | 关键函数相关（需复核） | `RecordLocation Loc = getLocalBitOffset(Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3964 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 7336 | getLocalBitOffset | 比较/实现 | 关键函数相关（需复核） | `RecordLocation Loc = getLocalBitOffset(Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3965 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 7410 |  | 计算 | 指针差值落入32位 | `unsigned Index = ID - NUM_PREDEF_DECL_IDS;` | 用 uint64_t 接收指针差值 | TODO |
| 3966 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 7498 |  | 计算 | 指针差值落入32位 | `unsigned Index = ID - NUM_PREDEF_DECL_IDS;` | 用 uint64_t 接收指针差值 | TODO |
| 3967 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 7513 |  | 计算 | 指针差值落入32位 | `unsigned Index = ID - NUM_PREDEF_DECL_IDS;` | 用 uint64_t 接收指针差值 | TODO |
| 3968 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 7568 | getLocalBitOffset | 比较/实现 | 关键函数相关（需复核） | `RecordLocation Loc = getLocalBitOffset(Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3969 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 7634 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `return Reader.getSourceManager().isBeforeInTranslationUnit(LHS, RHS);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3970 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 7639 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `return Reader.getSourceManager().isBeforeInTranslationUnit(LHS, RHS);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3971 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 7644 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `return Reader.getSourceManager().isBeforeInTranslationUnit(LHS, RHS);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3972 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 7656 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset, unsigned Length,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 3973 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 7669 | getLocForStartOfFile | 比较/实现 | 关键函数相关（需复核） | `BeginLoc = SM.getLocForStartOfFile(File).getLocWithOffset(Offset);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3974 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 7670 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation EndLoc = BeginLoc.getLocWithOffset(Length);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 3975 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 8587 |  | 计算 | 指针差值落入32位 | `unsigned Index = ID - M->BaseIdentifierID;` | 用 uint64_t 接收指针差值 | TODO |
| 3976 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 8638 |  | 计算 | 指针差值落入32位 | `unsigned Index = ID - M->BaseMacroID;` | 用 uint64_t 接收指针差值 | TODO |
| 3977 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 8772 |  | 计算 | 指针差值落入32位 | `unsigned Idx = ID - M.BaseSelectorID - NUM_PREDEF_SELECTOR_IDS;` | 用 uint64_t 接收指针差值 | TODO |
| 3978 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 9037 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation beg = ReadSourceLocation(F, Record, Idx, Seq);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3979 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 9038 | ReadSourceLocation | 序列化 | 序列化位置读写（需复核） | `SourceLocation end = ReadSourceLocation(F, Record, Idx, Seq);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3980 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 9184 |  | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> Loc =` | 确认是否参与源位置运算；非则忽略 | TODO |
| 3981 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 9248 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<uint32_t, 4> DeclIDs =` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3982 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 9887 |  | 声明/类型别名 | 可疑别名32位 | `using DeclHashes = llvm::SmallVector<std::pair<Decl *, unsigned>, 4>;` | 追溯别名链条，统一提升为 64 位或限定仅用于非位置语义 | TODO |
| 3983 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 12384 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 16> ListsPerDecl;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3984 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 12390 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 32> ListSizes;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3985 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 12507 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 16> ListsPerDecl;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3986 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 12513 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 32> ListSizes;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3987 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 12563 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 16> ListsPerDecl;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3988 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 12569 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 32> ListSizes;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3989 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 12613 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 16> ListsPerDecl;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3990 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 12619 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 32> ListSizes;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3991 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 12655 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 16> ListsPerDecl;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3992 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 12661 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 32> ListSizes;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3993 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 12698 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 16> ListsPerDecl;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3994 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 12704 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 32> ListSizes;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3995 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 12741 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 16> ListsPerDecl;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3996 | Serialization/ASTReader | ./lib/Serialization/ASTReader.cpp | 12747 |  | 声明/容器 | 容器承载32位位置 | `SmallVector<unsigned, 32> ListSizes;` | 将模板参数改为 64 位或专用偏移类型 | TODO |
| 3997 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 165 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3998 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 169 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(typeParams->size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 3999 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 173 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(typeParams->getLAngleLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4000 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 174 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(typeParams->getRAngleLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4001 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 228 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4002 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 287 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(FD->doesThisDeclarationHaveABody());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4003 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 304 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4004 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 305 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isInvalidDecl());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4005 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 306 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasAttrs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4006 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 309 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isImplicit());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4007 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 310 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isUsed(false));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4008 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 311 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isReferenced());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4009 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 312 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isTopLevelDeclInObjCContainer());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4010 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 313 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getAccess());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4011 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 314 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back((uint64_t)D->getModuleOwnershipKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4012 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 315 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Writer.getSubmoduleID(D->getOwningModule()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4013 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 340 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Arg.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4014 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 342 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4015 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 343 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getCommentKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4016 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 352 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Name.size() + 1 + Value.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4017 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 354 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4018 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 367 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(needsAnonymousDeclarationNumber(D)` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4019 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 374 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4020 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 382 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isModed());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4021 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 413 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getIdentifierNamespace());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4022 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 414 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back((unsigned)D->getTagKind()); // FIXME: stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4023 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 416 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isCompleteDefinition());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4024 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 417 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isEmbeddedInDeclarator());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4025 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 418 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isFreeStanding());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4026 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 419 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isCompleteDefinitionRequired());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4027 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 423 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(1);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4028 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 426 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(2);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4029 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 430 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4030 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 440 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getNumPositiveBits());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4031 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 441 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getNumNegativeBits());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4032 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 442 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isScoped());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4033 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 443 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isScopedUsingClassTag());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4034 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 444 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isFixed());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4035 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 445 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getODRHash());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4036 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 449 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MemberInfo->getTemplateSpecializationKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4037 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 450 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(MemberInfo->getPointOfInstantiation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4038 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 479 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasFlexibleArrayMember());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4039 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 480 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isAnonymousStructOrUnion());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4040 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 481 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasObjectMember());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4041 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 482 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasVolatileMember());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4042 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 483 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isNonTrivialToPrimitiveDefaultInitialize());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4043 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 484 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isNonTrivialToPrimitiveCopy());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4044 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 485 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isNonTrivialToPrimitiveDestroy());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4045 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 486 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasNonTrivialToPrimitiveDefaultInitializeCUnion());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4046 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 487 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasNonTrivialToPrimitiveDestructCUnion());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4047 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 488 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasNonTrivialToPrimitiveCopyCUnion());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4048 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 489 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isParamDestroyedInCallee());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4049 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 490 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getArgPassingRestrictions());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4050 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 519 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getInitExpr()? 1 : 0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4051 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 529 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getInnerLocStart());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4052 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 530 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasExtInfo());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4053 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 545 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getIdentifierNamespace());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4054 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 549 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(static_cast<int>(D->getStorageClass())); // FIXME: stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4055 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 550 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isInlineSpecified());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4056 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 551 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isInlined());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4057 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 552 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isVirtualAsWritten());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4058 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 553 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isPure());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4059 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 554 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasInheritedPrototype());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4060 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 555 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasWrittenPrototype());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4061 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 556 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isDeletedBit());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4062 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 557 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isTrivial());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4063 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 558 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isTrivialForCall());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4064 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 559 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isDefaulted());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4065 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 560 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isExplicitlyDefaulted());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4066 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 561 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasImplicitReturnZero());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4067 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 562 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(static_cast<uint64_t>(D->getConstexprKind()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4068 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 563 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->usesSEHTry());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4069 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 564 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasSkippedBody());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4070 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 565 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isMultiVersion());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4071 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 566 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isLateTemplateParsed());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4072 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 567 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getLinkageInternal());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4073 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 568 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getEndLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4074 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 570 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getODRHash());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4075 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 574 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(FDI->getUnqualifiedLookups().size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4076 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 577 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(P.getAccess());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4077 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 580 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4078 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 584 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getTemplatedKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4079 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 597 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MemberInfo->getTemplateSpecializationKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4080 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 598 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(MemberInfo->getPointOfInstantiation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4081 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 608 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(FTSInfo->getTemplateSpecializationKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4082 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 614 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(FTSInfo->TemplateArgumentsAsWritten != nullptr);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4083 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 616 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(FTSInfo->TemplateArgumentsAsWritten->NumTemplateArgs);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4084 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 621 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(FTSInfo->TemplateArgumentsAsWritten->LAngleLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4085 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 622 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(FTSInfo->TemplateArgumentsAsWritten->RAngleLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4086 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 625 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(FTSInfo->getPointOfInstantiation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4087 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 629 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(1);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4088 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 631 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MemberInfo->getTemplateSpecializationKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4089 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 632 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(MemberInfo->getPointOfInstantiation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4090 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 634 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4091 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 649 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(DFTSInfo->getNumTemplates());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4092 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 654 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(DFTSInfo->getNumTemplateArgs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4093 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 657 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(DFTSInfo->getLAngleLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4094 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 658 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(DFTSInfo->getRAngleLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4095 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 663 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->param_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4096 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 673 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Kind);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4097 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 683 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isCopyDeductionCandidate());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4098 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 692 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(HasBodyStuff);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4099 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 698 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isInstanceMethod());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4100 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 699 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isVariadic());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4101 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 700 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isPropertyAccessor());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4102 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 701 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isSynthesizedAccessorStub());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4103 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 702 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isDefined());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4104 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 703 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isOverriding());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4105 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 704 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasSkippedBody());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4106 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 706 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isRedeclaration());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4107 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 707 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasRedeclaration());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4108 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 714 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getImplementationControl());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4109 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 716 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getObjCDeclQualifier());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4110 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 717 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasRelatedResultType());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4111 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 720 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getEndLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4112 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 721 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->param_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4113 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 725 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getSelLocsKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4114 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 728 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(NumStoredSelLocs);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4115 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 730 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(SelLocs[i]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4116 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 737 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->Variance);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4117 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 738 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->Index);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4118 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 739 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->VarianceLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4119 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 740 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->ColonLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4120 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 747 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getAtStartLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4121 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 758 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isThisDeclarationADefinition());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4122 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 764 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getEndOfDefinitionLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4123 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 765 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Data.HasDesignatedInitializers);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4124 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 768 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Data.ReferencedProtocols.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4125 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 772 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(PL);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4126 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 775 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Data.AllReferencedProtocols.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4127 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 799 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getAccessControl());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4128 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 800 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getSynthesize());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4129 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 821 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isThisDeclarationADefinition());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4130 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 823 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->protocol_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4131 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 827 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(PL);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4132 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 840 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getCategoryNameLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4133 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 841 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getIvarLBraceLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4134 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 842 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getIvarRBraceLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4135 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 845 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->protocol_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4136 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 849 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(PL);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4137 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 861 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getAtLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4138 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 862 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getLParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4139 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 866 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back((unsigned)D->getPropertyAttributes());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4140 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 867 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back((unsigned)D->getPropertyAttributesAsWritten());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4141 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 869 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back((unsigned)D->getPropertyImplementation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4142 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 871 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getGetterNameLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4143 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 873 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getSetterNameLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4144 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 888 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getCategoryNameLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4145 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 895 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getSuperClassLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4146 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 896 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getIvarLBraceLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4147 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 897 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getIvarRBraceLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4148 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 898 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasNonZeroConstructors());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4149 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 899 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasDestructors());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4150 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 900 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->NumIvarInitializers);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4151 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 909 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4152 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 912 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getPropertyIvarDeclLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4153 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 922 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isMutable());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4154 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 925 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ISK);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4155 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 966 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Parts.Part1);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4156 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 967 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Parts.Part2);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4157 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 968 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Parts.Part3);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4158 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 988 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getChainingSize());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4159 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 998 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getStorageClass());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4160 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 999 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getTSCSpec());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4161 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1000 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getInitStyle());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4162 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1001 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isARCPseudoStrong());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4163 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1003 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isThisDeclarationADemotedDefinition());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4164 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1004 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isExceptionVariable());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4165 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1005 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isNRVOVariable());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4166 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1006 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isCXXForRangeDecl());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4167 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1007 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isObjCForDecl());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4168 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1008 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isInline());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4169 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1009 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isInlineSpecified());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4170 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1010 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isConstexpr());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4171 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1011 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isInitCapture());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4172 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1012 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isPreviousDeclInSameBlockScope());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4173 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1014 | push_back | 计算 | 强制收窄为32位 | `Record.push_back(static_cast<unsigned>(IPD->getParameterKind()));` | 改为 uint64_t / 移除收窄 | TODO |
| 4174 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1014 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(static_cast<unsigned>(IPD->getParameterKind()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4175 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1016 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4176 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1017 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isEscapingByref());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4177 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1019 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getLinkageInternal());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4178 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1027 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Init.canThrow());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4179 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1045 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(ModulesCodegen);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4180 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1054 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(VarTemplate);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4181 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1058 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(StaticDataMemberSpecialization);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4182 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1060 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(SpecInfo->getTemplateSpecializationKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4183 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1061 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(SpecInfo->getPointOfInstantiation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4184 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1063 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(VarNotTemplate);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4185 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1100 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isObjCMethodParameter());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4186 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1101 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getFunctionScopeDepth());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4187 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1102 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getFunctionScopeIndex());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4188 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1103 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getObjCDeclQualifier()); // FIXME: stable encoding` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4189 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1104 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isKNRPromoted());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4190 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1105 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasInheritedDefaultArg());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4191 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1106 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasUninstantiatedDefaultArg());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4192 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1147 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->bindings().size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4193 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1164 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4194 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1178 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(static_cast<bool>(D->getValue()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4195 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1181 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getManglingNumber());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4196 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1188 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->param_size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4197 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1191 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isVariadic());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4198 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1192 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->blockMissingReturnType());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4199 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1193 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isConversionFromLambda());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4200 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1194 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->doesNotEscape());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4201 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1195 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->canAvoidCopyToHeap());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4202 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1196 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->capturesCXXThis());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4203 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1197 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getNumCaptures());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4204 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1205 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(flags);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4205 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1214 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(CD->getNumParams());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4206 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1216 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(CD->getContextParamPosition());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4207 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1217 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(CD->isNothrow() ? 1 : 0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4208 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1226 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getLanguage());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4209 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1227 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getExternLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4210 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1228 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getRBraceLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4211 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1234 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getRBraceLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4212 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1240 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4213 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1248 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isInline());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4214 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1249 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4215 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1250 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getRBraceLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4216 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1274 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getNamespaceLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4217 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1275 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getTargetNameLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4218 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1283 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getUsingLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4219 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1287 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasTypename());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4220 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1294 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getUsingLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4221 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1295 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getEnumLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4222 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1303 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->NumExpansions);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4223 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1315 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getIdentifierNamespace());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4224 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1326 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->IsVirtual);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4225 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1332 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getUsingLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4226 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1333 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getNamespaceKeyLocation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4227 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1342 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getUsingLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4228 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1345 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getEllipsisLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4229 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1352 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getTypenameLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4230 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1354 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getEllipsisLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4231 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1371 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(CXXRecTemplate);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4232 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1375 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(CXXRecMemberSpecialization);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4233 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1377 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(MSInfo->getTemplateSpecializationKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4234 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1378 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(MSInfo->getPointOfInstantiation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4235 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1380 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(CXXRecNotTemplate);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4236 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1383 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isThisDeclarationADefinition());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4237 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1398 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->size_overridden_methods());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4238 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1403 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4239 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1421 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getTrailingAllocKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4240 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1450 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(Writer.getSubmoduleID(D->getImportedModule()));` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4241 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1452 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(!IdentifierLocs.empty());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4242 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1454 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getEndLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4243 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1455 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(1);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4244 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1458 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(IdentifierLocs[I]);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4245 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1459 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(IdentifierLocs.size());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4246 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1468 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getColonLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4247 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1475 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->NumTPLists);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4248 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1478 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(hasFriendDecl);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4249 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1486 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->UnsupportedFriend);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4250 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1487 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->FriendLoc);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4251 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1493 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getNumTemplateParameters());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4252 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1496 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getFriendDecl() != nullptr);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4253 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1501 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getFriendLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4254 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1531 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isMemberSpecialization());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4255 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1535 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getIdentifierNamespace());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4256 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1563 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getPointOfInstantiation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4257 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1564 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getSpecializationKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4258 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1565 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isCanonicalDecl());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4259 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1575 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getExternLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4260 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1576 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getTemplateKeywordLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4261 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1592 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isMemberSpecialization());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4262 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1624 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getExternLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4263 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1625 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getTemplateKeywordLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4264 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1629 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getPointOfInstantiation());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4265 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1630 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getSpecializationKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4266 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1631 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->IsCompleteDefinition);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4267 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1632 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isCanonicalDecl());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4268 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1652 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isMemberSpecialization());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4269 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1662 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasExplicitTemplateArgs());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4270 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1678 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->hasTypeConstraint());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4271 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1681 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->wasDeclaredWithTypename());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4272 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1684 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(TC != nullptr);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4273 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1689 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(TC->getTemplateArgsAsWritten() != nullptr);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4274 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1693 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isExpandedParameterPack());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4275 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1695 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getNumExpansionParameters());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4276 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1700 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(OwnsDefaultArg);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4277 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1712 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(!!TypeConstraint);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4278 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1714 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getNumExpansionTypes());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4279 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1718 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getDepth());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4280 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1719 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getPosition());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4281 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1732 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isParameterPack());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4282 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1735 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(OwnsDefaultArg);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4283 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1747 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getNumExpansionTemplateParameters());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4284 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1751 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getDepth());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4285 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1752 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getPosition());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4286 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1761 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isParameterPack());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4287 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1764 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(OwnsDefaultArg);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4288 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1779 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->isFailed());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4289 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1781 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getRParenLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4290 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1827 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4291 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1845 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4292 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1849 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4293 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1863 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(0);` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4294 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1887 | AddSourceLocation | 序列化 | 序列化位置读写（需复核） | `Record.AddSourceLocation(D->getBeginLoc());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4295 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 1894 | push_back | 序列化 | 序列化位置读写（需复核） | `Record.push_back(D->getInitializerKind());` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4296 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 2012 | Add | 序列化 | 序列化位置读写（需复核） | `Abv->Add(BitCodeAbbrevOp(BitCodeAbbrevOp::VBR, 6)); // Source Location` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4297 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 2021 | Add | 序列化 | 序列化位置读写（需复核） | `Abv->Add(BitCodeAbbrevOp(BitCodeAbbrevOp::VBR, 6)); // SourceLocation` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4298 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 2022 | Add | 序列化 | 序列化位置读写（需复核） | `Abv->Add(BitCodeAbbrevOp(BitCodeAbbrevOp::VBR, 6)); // SourceLocation` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4299 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 2062 | Add | 序列化 | 序列化位置读写（需复核） | `Abv->Add(BitCodeAbbrevOp(BitCodeAbbrevOp::VBR, 6)); // Source Location` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4300 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 2071 | Add | 序列化 | 序列化位置读写（需复核） | `Abv->Add(BitCodeAbbrevOp(BitCodeAbbrevOp::VBR, 6)); // SourceLocation` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4301 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 2072 | Add | 序列化 | 序列化位置读写（需复核） | `Abv->Add(BitCodeAbbrevOp(BitCodeAbbrevOp::VBR, 6)); // SourceLocation` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4302 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 2172 | Add | 序列化 | 序列化位置读写（需复核） | `Abv->Add(BitCodeAbbrevOp(BitCodeAbbrevOp::VBR, 6)); // Source Location` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4303 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 2312 | Add | 序列化 | 序列化位置读写（需复核） | `Abv->Add(BitCodeAbbrevOp(BitCodeAbbrevOp::VBR, 6)); // Location` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4304 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 2325 | Add | 序列化 | 序列化位置读写（需复核） | `Abv->Add(BitCodeAbbrevOp(BitCodeAbbrevOp::VBR, 6)); // Location` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4305 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 2341 | Add | 序列化 | 序列化位置读写（需复核） | `Abv->Add(BitCodeAbbrevOp(BitCodeAbbrevOp::VBR, 6)); // Location` | 核对读写位置字段的位宽；必要时扩位 | TODO |
| 4306 | Serialization/ASTWriterDecl | ./lib/Serialization/ASTWriterDecl.cpp | 2430 |  | 计算 | 指针差值落入32位 | `unsigned Index = ID - FirstDeclID;` | 用 uint64_t 接收指针差值 | TODO |
| 4307 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 66 | getMappedOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned RealOffset = getMappedOffset(OrigOffset, true);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4308 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 120 | getMappedOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned RealOffset = getMappedOffset(OrigOffset, InsertAfter);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4309 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 132 | getMappedOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned RealOffset = getMappedOffset(OrigOffset, true);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4310 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 151 | getLocationOffsetAndFileID | 声明/局部 | 仅命名可疑需复核 | `unsigned StartOff = getLocationOffsetAndFileID(Range.getBegin(), StartFileID);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4311 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 152 | getLocationOffsetAndFileID | 声明/局部 | 仅命名可疑需复核 | `unsigned EndOff = getLocationOffsetAndFileID(Range.getEnd(), EndFileID);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4312 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 163 | getMappedOffset | 比较/实现 | 关键函数相关（需复核） | `EndOff = RB.getMappedOffset(EndOff, opts.IncludeInsertsAtEndOfRange);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4313 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 164 | getMappedOffset | 比较/实现 | 关键函数相关（需复核） | `StartOff = RB.getMappedOffset(StartOff, !opts.IncludeInsertsAtBeginOfRange);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4314 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 214 | getMappedOffset | 比较/实现 | 关键函数相关（需复核） | `EndOff = RB.getMappedOffset(EndOff, true);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4315 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 215 | getMappedOffset | 比较/实现 | 关键函数相关（需复核） | `StartOff = RB.getMappedOffset(StartOff);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4316 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 232 | getLocationOffsetAndFileID | 声明/局部 | 仅命名可疑需复核 | `unsigned Rewriter::getLocationOffsetAndFileID(SourceLocation Loc,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4317 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 235 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> V = SourceMgr->getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4318 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 260 | getLocationOffsetAndFileID | 声明/局部 | 仅命名可疑需复核 | `unsigned StartOffs = getLocationOffsetAndFileID(Loc, FID);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4319 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 266 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned lineNo = SourceMgr->getLineNumber(FID, StartOffs) - 1;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4320 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 300 | getLocationOffsetAndFileID | 声明/局部 | 仅命名可疑需复核 | `unsigned StartOffs = getLocationOffsetAndFileID(Loc, FID);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4321 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 313 | getLocationOffsetAndFileID | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned StartOffs = getLocationOffsetAndFileID(Start, FID);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 4322 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 325 | getLocationOffsetAndFileID | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned StartOffs = getLocationOffsetAndFileID(Start, StartFileID);` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 4323 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 367 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned parentLineNo = SourceMgr->getLineNumber(FID, parentOff) - 1;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4324 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 368 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned startLineNo = SourceMgr->getLineNumber(FID, StartOff) - 1;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4325 | Rewrite/Rewriter | ./lib/Rewrite/Rewriter.cpp | 369 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `unsigned endLineNo = SourceMgr->getLineNumber(FID, EndOff) - 1;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4326 | Rewrite/DeltaTree | ./lib/Rewrite/DeltaTree.cpp | 45 | get | 声明/局部 | 仅命名可疑需复核 | `static SourceDelta get(unsigned Loc, int D) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4327 | Rewrite/HTMLRewrite | ./lib/Rewrite/HTMLRewrite.cpp | 35 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `B = SM.getExpansionLoc(B);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4328 | Rewrite/HTMLRewrite | ./lib/Rewrite/HTMLRewrite.cpp | 36 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `E = SM.getExpansionLoc(E);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4329 | Rewrite/HTMLRewrite | ./lib/Rewrite/HTMLRewrite.cpp | 40 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned BOffset = SM.getFileOffset(B);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4330 | Rewrite/HTMLRewrite | ./lib/Rewrite/HTMLRewrite.cpp | 41 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned EOffset = SM.getFileOffset(E);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4331 | Rewrite/HTMLRewrite | ./lib/Rewrite/HTMLRewrite.cpp | 52 | HighlightRange | 比较/实现 | 关键函数相关（需复核） | `HighlightRange(R.getEditBuffer(FID), BOffset, EOffset,` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4332 | Rewrite/HTMLRewrite | ./lib/Rewrite/HTMLRewrite.cpp | 244 |  | 计算 | 指针差值落入32位 | `unsigned LineEndPos = FileEnd - FileBeg;` | 用 uint64_t 接收指针差值 | TODO |
| 4333 | Rewrite/HTMLRewrite | ./lib/Rewrite/HTMLRewrite.cpp | 282 | getLocWithOffset | 比较/实现 | 关键函数相关（需复核） | `SourceLocation EndLoc = StartLoc.getLocWithOffset(FileEnd-FileStart);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4334 | Rewrite/HTMLRewrite | ./lib/Rewrite/HTMLRewrite.cpp | 465 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `unsigned TokOffs = SM.getFileOffset(Tok.getLocation());` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4335 | Rewrite/HTMLRewrite | ./lib/Rewrite/HTMLRewrite.cpp | 514 | getFileOffset | 比较/实现 | 关键函数相关（需复核） | `TokEnd = SM.getFileOffset(Tok.getLocation())+Tok.getLength();` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4336 | Rewrite/HTMLRewrite | ./lib/Rewrite/HTMLRewrite.cpp | 634 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `SM.getExpansionLoc(Tok.getLocation()) == LLoc.getBegin()) {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4337 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 109 | split | 声明/局部 | 仅命名可疑需复核 | `RopePieceBTreeNode *split(unsigned Offset);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4338 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 117 | insert | 声明/局部 | 仅命名可疑需复核 | `RopePieceBTreeNode *insert(unsigned Offset, const RopePiece &R);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4339 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 121 | erase | 声明/局部 | 仅命名可疑需复核 | `void erase(unsigned Offset, unsigned NumBytes);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4340 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 209 | split | 声明/局部 | 仅命名可疑需复核 | `RopePieceBTreeNode *split(unsigned Offset);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4341 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 217 | insert | 声明/局部 | 仅命名可疑需复核 | `RopePieceBTreeNode *insert(unsigned Offset, const RopePiece &R);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4342 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 221 | erase | 声明/局部 | 仅命名可疑需复核 | `void erase(unsigned Offset, unsigned NumBytes);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4343 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 236 | split | 声明/局部 | 仅命名可疑需复核 | `RopePieceBTreeNode *RopePieceBTreeLeaf::split(unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4344 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 259 |  | 计算 | 指针差值落入32位 | `unsigned IntraPieceOffset = Offset-PieceOffs;` | 用 uint64_t 接收指针差值 | TODO |
| 4345 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 259 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned IntraPieceOffset = Offset-PieceOffs;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4346 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 276 | insert | 声明/局部 | 仅命名可疑需复核 | `RopePieceBTreeNode *RopePieceBTreeLeaf::insert(unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4347 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 337 | erase | 声明/局部 | 仅命名可疑需复核 | `void RopePieceBTreeLeaf::erase(unsigned Offset, unsigned NumBytes) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4348 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 361 |  | 计算 | 指针差值落入32位 | `unsigned NumDeleted = i-StartPiece;` | 用 uint64_t 接收指针差值 | TODO |
| 4349 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 370 |  | 计算 | 指针差值落入32位 | `unsigned CoverBytes = PieceOffs-Offset;` | 用 uint64_t 接收指针差值 | TODO |
| 4350 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 370 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned CoverBytes = PieceOffs-Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4351 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 446 | split | 声明/局部 | 仅命名可疑需复核 | `RopePieceBTreeNode *split(unsigned Offset);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4352 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 454 | insert | 声明/局部 | 仅命名可疑需复核 | `RopePieceBTreeNode *insert(unsigned Offset, const RopePiece &R);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4353 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 462 | erase | 声明/局部 | 仅命名可疑需复核 | `void erase(unsigned Offset, unsigned NumBytes);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4354 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 477 | split | 声明/局部 | 仅命名可疑需复核 | `RopePieceBTreeNode *RopePieceBTreeInterior::split(unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4355 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 492 | if | 比较/实现 | 关键函数相关（需复核） | `if (RopePieceBTreeNode *RHS = getChild(i)->split(Offset-ChildOffset))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4356 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 503 | insert | 声明/局部 | 仅命名可疑需复核 | `RopePieceBTreeNode *RopePieceBTreeInterior::insert(unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4357 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 522 | if | 比较/实现 | 关键函数相关（需复核） | `if (RopePieceBTreeNode *RHS = getChild(i)->insert(Offset-ChildOffs, R))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4358 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 572 | erase | 声明/局部 | 仅命名可疑需复核 | `void RopePieceBTreeInterior::erase(unsigned Offset, unsigned NumBytes) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4359 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 596 | size | 声明/局部 | 仅命名可疑需复核 | `unsigned BytesFromChild = CurChild->size()-Offset;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4360 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 633 | split | 声明/局部 | 仅命名可疑需复核 | `RopePieceBTreeNode *RopePieceBTreeNode::split(unsigned Offset) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4361 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 646 | insert | 声明/局部 | 仅命名可疑需复核 | `RopePieceBTreeNode *RopePieceBTreeNode::insert(unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4362 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 656 | erase | 声明/局部 | 仅命名可疑需复核 | `void RopePieceBTreeNode::erase(unsigned Offset, unsigned NumBytes) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4363 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 747 | insert | 声明/局部 | 仅命名可疑需复核 | `void RopePieceBTree::insert(unsigned Offset, const RopePiece &R) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4364 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 749 | if | 比较/实现 | 关键函数相关（需复核） | `if (RopePieceBTreeNode *RHS = getRoot(Root)->split(Offset))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4365 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 753 | if | 比较/实现 | 关键函数相关（需复核） | `if (RopePieceBTreeNode *RHS = getRoot(Root)->insert(Offset, R))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4366 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 757 | erase | 声明/局部 | 仅命名可疑需复核 | `void RopePieceBTree::erase(unsigned Offset, unsigned NumBytes) {` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4367 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 759 | if | 比较/实现 | 关键函数相关（需复核） | `if (RopePieceBTreeNode *RHS = getRoot(Root)->split(Offset))` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4368 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 763 | getRoot | 比较/实现 | 关键函数相关（需复核） | `getRoot(Root)->erase(Offset, NumBytes);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4369 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 775 |  | 计算 | 指针差值落入32位 | `unsigned Len = End-Start;` | 用 uint64_t 接收指针差值 | TODO |
| 4370 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 775 |  | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Len = End-Start;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 4371 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 788 | sizeof | 计算 | 指针差值落入32位 | `unsigned Size = End-Start+sizeof(RopeRefCountString)-1;` | 用 uint64_t 接收指针差值 | TODO |
| 4372 | Rewrite/RewriteRope | ./lib/Rewrite/RewriteRope.cpp | 788 | sizeof | 声明/局部 | 无关键词的32位位置变量（需复核） | `unsigned Size = End-Start+sizeof(RopeRefCountString)-1;` | 在 SourceManager/LineTable 等模块重点复核 | TODO |
| 4373 | Support/RISCVVIntrinsicUtils | ./lib/Support/RISCVVIntrinsicUtils.cpp | 710 |  | 计算 | 强制收窄为32位 | `TypeModifierMaskShift <= static_cast<unsigned>(TypeModifier::MaxOffset);` | 改为 uint64_t / 移除收窄 | TODO |
| 4374 | Support/RISCVVIntrinsicUtils | ./lib/Support/RISCVVIntrinsicUtils.cpp | 713 | if | 计算 | 强制收窄为32位 | `if ((static_cast<unsigned>(Transformer.TM) & TypeModifierMask) !=` | 改为 uint64_t / 移除收窄 | TODO |
| 4375 | Index/IndexBody | ./lib/Index/IndexBody.cpp | 71 |  | 计算 | 强制收窄为32位 | `Roles \|= (unsigned)(unsigned)SymbolRole::Read;` | 改为 uint64_t / 移除收窄 | TODO |
| 4376 | Index/IndexingAction | ./lib/Index/IndexingAction.cpp | 229 | handleMacroOccurrence | 计算 | 强制收窄为32位 | `DataConsumer.handleMacroOccurrence(II, MI, static_cast<unsigned>(Role), Loc);` | 改为 uint64_t / 移除收窄 | TODO |
| 4377 | Index/IndexingAction | ./lib/Index/IndexingAction.cpp | 229 | handleMacroOccurrence | 声明/局部 | 仅命名可疑需复核 | `DataConsumer.handleMacroOccurrence(II, MI, static_cast<unsigned>(Role), Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4378 | Index/CommentToXML | ./lib/Index/CommentToXML.cpp | 595 |  | 声明/局部 | 仅命名可疑需复核 | `unsigned Offset = 0;` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4379 | Index/CommentToXML | ./lib/Index/CommentToXML.cpp | 889 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `std::pair<FileID, unsigned> LocInfo = SM.getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4380 | Index/CommentToXML | ./lib/Index/CommentToXML.cpp | 899 | getLineNumber | 比较/实现 | 关键函数相关（需复核） | `Result << " line=\"" << SM.getLineNumber(FID, FileOffset)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4381 | Index/CommentToXML | ./lib/Index/CommentToXML.cpp | 900 | getColumnNumber | 比较/实现 | 关键函数相关（需复核） | `<< "\" column=\"" << SM.getColumnNumber(FID, FileOffset)` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4382 | Index/FileIndexRecord | ./lib/Index/FileIndexRecord.cpp | 20 | getDeclOccurrencesSortedByOffset | 比较/实现 | 关键函数相关（需复核） | `FileIndexRecord::getDeclOccurrencesSortedByOffset() const {` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4383 | Index/FileIndexRecord | ./lib/Index/FileIndexRecord.cpp | 31 | addDeclOccurence | 声明/局部 | 仅命名可疑需复核 | `void FileIndexRecord::addDeclOccurence(SymbolRoleSet Roles, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4384 | Index/FileIndexRecord | ./lib/Index/FileIndexRecord.cpp | 40 | addMacroOccurence | 声明/局部 | 仅命名可疑需复核 | `void FileIndexRecord::addMacroOccurence(SymbolRoleSet Roles, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4385 | Index/FileIndexRecord | ./lib/Index/FileIndexRecord.cpp | 62 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4386 | Index/FileIndexRecord | ./lib/Index/FileIndexRecord.cpp | 72 | getPresumedLoc | 比较/实现 | 关键函数相关（需复核） | `PresumedLoc PLoc = SM.getPresumedLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4387 | Index/FileIndexRecord | ./lib/Index/FileIndexRecord.h | 36 | getDeclOccurrencesSortedByOffset | 比较/实现 | 关键函数相关（需复核） | `ArrayRef<DeclOccurrence> getDeclOccurrencesSortedByOffset() const;` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4388 | Index/FileIndexRecord | ./lib/Index/FileIndexRecord.h | 48 | addDeclOccurence | 声明/局部 | 仅命名可疑需复核 | `void addDeclOccurence(SymbolRoleSet Roles, unsigned Offset, const Decl *D,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4389 | Index/FileIndexRecord | ./lib/Index/FileIndexRecord.h | 57 | addMacroOccurence | 声明/局部 | 仅命名可疑需复核 | `void addMacroOccurence(SymbolRoleSet Roles, unsigned Offset,` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4390 | Index/USRGeneration | ./lib/Index/USRGeneration.cpp | 32 | getExpansionLoc | 比较/实现 | 关键函数相关（需复核） | `Loc = SM.getExpansionLoc(Loc);` | 检查实现是否用 64 位位置/偏移 | TODO |
| 4391 | Index/USRGeneration | ./lib/Index/USRGeneration.cpp | 33 | getDecomposedLoc | 声明/局部 | 仅命名可疑需复核 | `const std::pair<FileID, unsigned> &Decomposed = SM.getDecomposedLoc(Loc);` | 确认是否参与源位置运算；非则忽略 | TODO |
| 4392 | Index/USRGeneration | ./lib/Index/USRGeneration.cpp | 618 | getSourceManager | 比较/实现 | 关键函数相关（需复核） | `Context->getSourceManager(), IncludeOffset);` | 检查实现是否用 64 位位置/偏移 | TODO |
