# include 整理

关键核心文件：SourceLocation.h,SourceManager.h,SourceManagerInternals.h

分批分析，涉及到的其它include文件，然后直接在cpp文件根据include文件缩小范围。

这里的涉及到的include文件分为两种，一种需要进行修改的，另一种不需要修改，但是引用了相关核心include文件的内容，在cpp文件中可能传入中间值。

## SourceLocation.h,
### 无需修改
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Analysis\MacroExpansionContext.h

----

E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Analysis\Analyses\Consumed.h

----

E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Analysis\Analyses\ReachableCode.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Analysis\Analyses\ThreadSafety.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Analysis\FlowSensitive\Models\UncheckedOptionalAccessModel.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\ARCMigrate\ARCMT.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\ASTConcept.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\ASTImporter.hw

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\Attr.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\Availability.h


----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\CanonicalType.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\Comment.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\CommentSema.h

-----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\Decl.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\DeclarationName.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\DeclBase.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\DeclCXX.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\DeclFriend.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\DeclObjC.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\DeclTemplate.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\DependentDiagnostic.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\ExprConcepts.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\ExprCXX.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\ExprObjC.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\NestedNameSpecifier.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\OpenMPClause.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\PrettyDeclStackTrace.h


----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\StmtOpenMP.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\TemplateBase.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\Type.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\TypeLoc.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Basic\AttributeCommonInfo.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Basic\AttrSubjectMatchRules.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Basic\Module.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Basic\NoSanitizeList.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Basic\PartialDiagnostic.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Basic\PlistSupport.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Basic\PrettyStackTrace.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Basic\ProfileList.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Basic\Sarif.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Basic\XRayLists.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Edit\Commit.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Edit\EditedSource.h

----------------------------------------

E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Edit\EditsReceiver.h    1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\ExtractAPI\API.h       1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Frontend\DiagnosticRenderer.h        1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Frontend\TextDiagnosticBuffer.h         1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Frontend\VerifyDiagnosticConsumer.h      1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\MacroInfo.h        1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\ModuleLoader.h      1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\MultipleIncludeOpt.h    1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\PPCallbacks.h    1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\PPConditionalDirectiveRecord.h    1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\Pragma.h      1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\PreprocessingRecord.h  1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\PreprocessorLexer.h    1

-----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\ScratchBuffer.h      1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\Token.h   

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Parse\LoopHint.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Rewrite\Core\HTMLRewrite.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Rewrite\Core\TokenRewriter.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Rewrite\Frontend\FixItRewriter.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Sema\DelayedDiagnostic.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Sema\Designator.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Sema\Initialization.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Sema\Lookup.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Sema\Overload.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Sema\ParsedAttr.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Sema\ParsedTemplate.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Sema\ScopeInfo.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Sema\SemaConcept.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Sema\TemplateDeduction.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Sema\TypoCorrection.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Sema\Weak.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Serialization\ASTBitCodes.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Serialization\SourceLocationEncoding.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\StaticAnalyzer\Core\BugReporter\BugReporter.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\StaticAnalyzer\Core\PathSensitive\CallEvent.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\StaticAnalyzer\Core\PathSensitive\CallEvent.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\StaticAnalyzer\Core\PathSensitive\MemRegion.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Tooling\Refactoring\ASTSelection.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Tooling\Refactoring\Lookup.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Tooling\Refactoring\Rename\SymbolOccurrences.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Tooling\Transformer\Parsing.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Tooling\Transformer\RangeSelector.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Tooling\Transformer\SourceCode.h




### 经过修改

E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Analysis\PathDiagnostic.h

/// File IDs mapped to sets of line numbers.
using FilesToLineNumsMap = std::map<FileID, std::set<uint64_t>>;

---- 
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\RawCommentList.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\AST\Stmt.h

---

E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Basic\Diagnostic.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Edit\FileOffset.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Frontend\ASTUnit.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Frontend\LogDiagnosticPrinter.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\DependencyDirectivesScanner.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\HeaderSearch.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\Lexer.h    1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\ModuleMap.h    1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\Preprocessor.h   1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Lex\TokenLexer.h  1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Serialization\ASTReader.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Serialization\ASTWriter.h

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Serialization\ModuleFile.h    1 

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Serialization\ModuleManager.h    1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Tooling\Core\Replacement.h    1

----
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Tooling\Syntax\Tokens.h
  31,1: #include "clang/Basic/SourceLocation.h"
  
### 
E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Rewrite\Core\Rewriter.h   

private:
  unsigned getLocationOffsetAndFileID(SourceLocation Loc, FileID &FID) const;
暂时无法确定，需结合lib查看逻辑



E:\llvm-msvc\llvm-project-msvc\clang\include\clang\Edit\EditedSource.h