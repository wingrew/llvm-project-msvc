★ Basic (SourceLocation / SourceManager)

clang/include/clang/Basic/SourceLocation.h

clang/lib/Basic/SourceManager.cpp

clang/include/clang/Basic/SourceManager.h

★ Lexing（Lexer / TokenLexer / PP）

clang/lib/Lex/Lexer.cpp

clang/lib/Lex/TokenLexer.cpp

clang/lib/Lex/MacroInfo.cpp

clang/lib/Lex/PPDirectives.cpp

clang/lib/Lex/DependencyDirectivesScanner.cpp

★ Tooling (Replacement / ApplyReplacements)

clang/include/clang/Tooling/Core/Replacement.h

clang/lib/Tooling/Core/Replacement.cpp

clang-tools-extra/clang-apply-replacements/...

★ Formatting（clang-format）

clang/lib/Format/Format.cpp

clang/lib/Format/FormatTokenLexer.cpp

★ Frontend (Diagnostics / PrintPreprocessedOutput / ASTUnit)

clang/lib/Frontend/TextDiagnostic.cpp

clang/lib/Frontend/PrintPreprocessedOutput.cpp

clang/lib/Frontend/ASTUnit.cpp

★ Rewrite

clang/include/clang/Rewrite/Core/RewriteBuffer.h

clang/lib/Rewrite/Rewriter.cpp

clang/lib/Rewrite/DeltaTree.cpp

clang/lib/Rewrite/HTMLRewrite.cpp

clang/lib/Frontend/Rewrite/InclusionRewriter.cpp

★ CodeGen

clang/lib/CodeGen/CGExpr.cpp

clang/lib/CodeGen/CGOpenMPRuntime.cpp

clang/lib/CodeGen/CGDebugInfo.cpp

★ libclang API

clang/tools/libclang/CXSourceLocation.cpp

clang/tools/libclang/CXIndexDataConsumer.cpp

clang/tools/libclang/CIndex.cpp

★ Serialization

clang/lib/Serialization/ASTReader.cpp

★ Static Analyzer

clang/lib/StaticAnalyzer/Core/HTMLDiagnostics.cpp

clang/lib/StaticAnalyzer/Core/SarifDiagnostics.cpp
