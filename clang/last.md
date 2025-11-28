# 新文档


根据实验计划，依靠include文件可能粒度太大，遂改为以class甚至函数为粒度，记录如下：
## clang\include\clang\Basic\SourceLocation.h
*SourceLocation*
friend class:
  friend class ASTReader;
  friend class ASTWriter;
  friend class SourceManager;
  friend struct llvm::FoldingSetTrait<SourceLocation, void>;

public:
SourceLocation getLocWithOffset(IntTy Offset)
UIntTy getRawEncoding()
static SourceLocation getFromRawEncoding(UIntTy Encoding)

private:
UIntTy getOffset()
static SourceLocation getFileLoc(UIntTy ID)
static SourceLocation getMacroLoc(UIntTy ID)


*PresumedLoc*
public:
PresumedLoc(const char *FN, FileID FID, uint64_t Ln, uint64_t Co,
              SourceLocation IL)
uint64_t getLine()
uint64_t getColumn()

*FullSourceLoc*
public:
uint64_t getFileOffset()
uint64_t getExpansionLineNumber(bool *Invalid = nullptr)
uint64_t getSpellingLineNumber(bool *Invalid = nullptr)
uint64_t getLineNumber(bool *Invalid = nullptr)
std::pair<FileID, uint64_t> getDecomposedLoc()

## clang\include\clang\Basic\SourceManager.h
*LineOffsetMapping*
public:
uint64_t size()
ArrayRef<uint64_t> getLines()
const uint64_t *begin()
const uint64_t *end() const
const uint64_t &operator[](uint64_t I)
LineOffsetMapping(ArrayRef<uint64_t> LineOffsets,
                    llvm::BumpPtrAllocator &Alloc)

*ContentCache*
public:
uint64_t getSize()
uint64_t getSizeBytesMapped()

*SLocEntry*
public:
SourceLocation::UIntTy getOffset()
static SLocEntry get(SourceLocation::UIntTy Offset, const FileInfo &FI)
static SLocEntry get(SourceLocation::UIntTy Offset,
                       const ExpansionInfo &Expansion)

*InBeforeInTUCacheEntry*
public:
bool getCachedResult(uint64_t LOffset, uint64_t ROffset)
void setCommonLoc(FileID commonFID, uint64_t lCommonOffset,
                    uint64_t rCommonOffset)

*SourceManager*
public:
mutable llvm::DenseMap<FileID, std::pair<FileID, uint64_t>> IncludedLocMap;
SourceLocation getComposedLoc(FileID FID, uint64_t Offset)
std::pair<FileID, uint64_t> getDecomposedLoc(SourceLocation Loc)
std::pair<FileID, uint64_t> getDecomposedExpansionLoc(SourceLocation Loc)
std::pair<FileID, uint64_t> getDecomposedSpellingLoc(SourceLocation Loc)
std::pair<FileID, uint64_t> getDecomposedIncludedLoc(FileID FID) 
uint64_t getFileOffset(SourceLocation SpellingLoc)
bool isInSLocAddrSpace(SourceLocation Loc, SourceLocation Start, uint64_t Length,
                    SourceLocation::UIntTy *RelativeOffset = nullptr)
bool isInSameSLocAddrSpace(SourceLocation LHS, SourceLocation RHS,
                             SourceLocation::IntTy *RelativeOffset)
unsigned getColumnNumber(FileID FID, uint64_t FilePos, bool *Invalid = nullptr) const;                    
uint64_t getLineNumber(FileID FID, uint64_t FilePos, bool *Invalid = nullptr)


uint64_t getSpellingLineNumber(SourceLocation Loc, bool *Invalid = nullptr)
uint64_t getExpansionLineNumber(SourceLocation Loc, bool *Invalid = nullptr)
uint64_t getPresumedLineNumber(SourceLocation Loc, bool *Invalid = nullptr)
uint64_t getFileIDSize(FileID FID)
FileID createFileID(const FileEntry *SourceFile, SourceLocation IncludePos,
                      SrcMgr::CharacteristicKind FileCharacter,
                      int LoadedID = 0,
                      SourceLocation::UIntTy LoadedOffset = 0);

FileID createFileID(FileEntryRef SourceFile, SourceLocation IncludePos,
                      SrcMgr::CharacteristicKind FileCharacter,
                      int LoadedID = 0,
                      SourceLocation::UIntTy LoadedOffset = 0);
FileID createFileID(std::unique_ptr<llvm::MemoryBuffer> Buffer,
                      SrcMgr::CharacteristicKind FileCharacter = SrcMgr::C_User,
                      int LoadedID = 0, SourceLocation::UIntTy LoadedOffset = 0,
                      SourceLocation IncludeLoc = SourceLocation());
FileID createFileID(const llvm::MemoryBufferRef &Buffer,
                      SrcMgr::CharacteristicKind FileCharacter = SrcMgr::C_User,
                      int LoadedID = 0, SourceLocation::UIntTy LoadedOffset = 0,
                      SourceLocation IncludeLoc = SourceLocation());
SourceLocation createExpansionLoc(SourceLocation SpellingLoc,
                                    SourceLocation ExpansionLocStart,
                                    SourceLocation ExpansionLocEnd,
                                    unsigned Length,
                                    bool ExpansionIsTokenRange = true,
                                    int LoadedID = 0,
                                    SourceLocation::UIntTy LoadedOffset = 0)
bool isInFileID(SourceLocation Loc, FileID FID,
                  uint64_t *RelativeOffset = nullptr)
void AddLineNote(SourceLocation Loc, uint64_t LineNo, int FilenameID,
                   bool IsFileEntry, bool IsFileExit,
                   SrcMgr::CharacteristicKind FileKind)
SourceLocation translateFileLineCol(const FileEntry *SourceFile,
                                      uint64_t Line, unsigned Col)
SourceLocation translateLineCol(FileID FID,
                                  uint64_t Line, unsigned Col)
std::pair<bool, bool>
  isInTheSameTranslationUnit(std::pair<FileID, uint64_t> &LOffs,
                             std::pair<FileID, uint64_t> &ROffs)
bool isBeforeInSLocAddrSpace(SourceLocation LHS,
                               SourceLocation::UIntTy RHS) 
SourceLocation::UIntTy getNextLocalOffset()
std::pair<int, SourceLocation::UIntTy>
  AllocateLoadedSLocEntries(unsigned NumSLocEntries,
                            SourceLocation::UIntTy TotalSize)
SourceLocation
  createExpansionLocImpl(const SrcMgr::ExpansionInfo &Expansion,
                         unsigned Length, int LoadedID = 0,
                         SourceLocation::UIntTy LoadedOffset = 0)
inline bool isOffsetInFileID(FileID FID,
                               SourceLocation::UIntTy SLocOffset)
FileID createFileIDImpl(SrcMgr::ContentCache &File, StringRef Filename,
                          SourceLocation IncludePos,
                          SrcMgr::CharacteristicKind DirCharacter, int LoadedID,
                          SourceLocation::UIntTy LoadedOffset)
FileID getFileIDSlow(SourceLocation::UIntTy SLocOffset)
FileID getFileIDLocal(SourceLocation::UIntTy SLocOffset)
FileID getFileIDLoaded(SourceLocation::UIntTy SLocOffset)
std::pair<FileID, uint64_t>
  getDecomposedExpansionLocSlowCase(const SrcMgr::SLocEntry *E)
std::pair<FileID, uint64_t>
  getDecomposedSpellingLocSlowCase(const SrcMgr::SLocEntry *E,
                                   uint64_t Offset)

----------

SourceLocation SourceManager::createMacroArgExpansionLoc(
    SourceLocation SpellingLoc, SourceLocation ExpansionLoc, uint64_t Length)

SourceManager::createExpansionLocImpl(const ExpansionInfo &Info,
                                      uint64_t Length, int LoadedID,
                                      SourceLocation::UIntTy LoadedOffset)



## clang\include\clang\Basic\SourceManagerInternals.h
*LineEntry*
  uint64_t FileOffset;
  uint64_t LineNo;
  uint64_t IncludeOffset;
  static LineEntry get(uint64_t Offs, uint64_t Line, int Filename,
                       SrcMgr::CharacteristicKind FileKind,
                       uint64_t IncludeOffset)
inline bool operator<(const LineEntry &E, uint64_t Offset)
inline bool operator<(uint64_t Offset, const LineEntry &E)

*LineTableInfo*
void AddLineNote(FileID FID, uint64_t Offset,
                   uint64_t LineNo, int FilenameID,
                   unsigned EntryExit, SrcMgr::CharacteristicKind FileKind)
const LineEntry *FindNearestLineEntry(FileID FID, uint64_t Offset)

# E:\llvm-msvc\llvm-project-msvc\clang\lib\AST\RawCommentList.cpp
uint64_t RawCommentList::getCommentBeginLine(RawComment *C, FileID File,
                                             uint64_t Offset)
                

# E:\llvm-msvc\llvm-project-msvc\clang\lib\CodeGen\CGDebugInfo.cpp
uint64_t CGDebugInfo::getLineNumber(SourceLocation Loc)

void CGDebugInfo::collectVarDeclProps(const VarDecl *VD, llvm::DIFile *&Unit,
                                      uint64_t &LineNo, QualType &T,
                                      StringRef &Name, StringRef &LinkageName,
                                      llvm::MDTuple *&TemplateParameters,
                                      llvm::DIScope *&VDContext)

# E:\llvm-msvc\llvm-project-msvc\clang\lib\Frontend\TextDiagnostic.cpp
static std::string buildFixItInsertionLine(FileID FID,
                                           uint64_t LineNo,
                                           const SourceColumnMap &map,
                                           ArrayRef<FixItHint> Hints,
                                           const SourceManager &SM,
                                           const DiagnosticOptions *DiagOpts)

static llvm::Optional<std::pair<unsigned, unsigned>>
findLinesForRange(const CharSourceRange &R, FileID FID,
                  const SourceManager &SM)                                         
static std::pair<uint64_t, uint64_t>
maybeAddRange(std::pair<uint64_t, uint64_t> A, std::pair<uint64_t, uint64_t> B,
              unsigned MaxRange) 
static void highlightRange(const CharSourceRange &R,
                           uint64_t LineNo, FileID FID,
                           const SourceColumnMap &map,
                           std::string &CaretLine,
                           const SourceManager &SM,
                           const LangOptions &LangOpts)

# E:\llvm-msvc\llvm-project-msvc\clang\tools\libclang\CXIndexDataConsumer.cpp
void CXIndexDataConsumer::translateLoc(SourceLocation Loc,
                                   CXIdxClientFile *indexFile, CXFile *file,
                                   unsigned *line, unsigned *column,
                                   unsigned *offset)

void clang_getSpellingLocation(CXSourceLocation location,
                               CXFile *file,
                               unsigned *line,
                               unsigned *column,
                               unsigned *offset)

void CXLoadedDiagnostic::decodeLocation(CXSourceLocation location,
                                        CXFile *file,
                                        unsigned int *line,
                                        unsigned int *column,
                                        unsigned int *offset)                                        
                                                
                                                
                                                
# E:\llvm-msvc\llvm-project-msvc\clang\tools\libclang\CXSourceLocation.cpp

static void createNullLocation(CXFile *file, unsigned *line,
                               unsigned *column, unsigned *offset)   

void clang_getSpellingLocation(CXSourceLocation location,
                               CXFile *file,
                               uint64_t *line,
                               unsigned *column,
                               uint64_t *offset)                                        
                                                void clang_getFileLocation(CXSourceLocation location,
                           CXFile *file,
                           unsigned *line,
                           unsigned *column,
                           unsigned *offset)
                                            
# E:\llvm-msvc\llvm-project-msvc\clang\tools\libclang\CIndex.cpp
void clang_getDefinitionSpellingAndExtent(
    CXCursor C, const char **startBuf, const char **endBuf, uint64_t *startLine,
    unsigned *startColumn, uint64_t *endLine, unsigned *endColumn)                                  

# E:\llvm-msvc\llvm-project-msvc\clang\lib\Frontend\Rewrite\InclusionRewriter.cpp

void InclusionRewriter::CommentOutDirective(Lexer &DirectiveLex,
                                            const Token &StartToken,
                                            const MemoryBufferRef &FromFile,
                                            StringRef LocalEOL,
                                            uint64_t &NextToWrite, uint64_t &Line)

  void OutputContentUpTo(const MemoryBufferRef &FromFile, unsigned &WriteFrom,
                         unsigned WriteTo, StringRef EOL, int &lines,
                         bool EnsureNewline);

void InclusionRewriter::WriteLineInfo(StringRef Filename, int64_t Line,
                                      SrcMgr::CharacteristicKind FileType,
                                      StringRef Extra)

# E:\llvm-msvc\llvm-project-msvc\clang\lib\Tooling\Refactoring\Rename\USRFindingAction.cpp

  bool FindSymbol(ASTContext &Context, const SourceManager &SourceMgr,
                  unsigned SymbolOffset, const std::string &QualifiedName)

# E:\llvm-msvc\llvm-project-msvc\clang\lib\Tooling\Syntax\Tokens.cpp

FileRange::FileRange(FileID File, uint64_t BeginOffset, uint64_t EndOffset)
    : File(File), Begin(BeginOffset), End(EndOffset)

  uint64_t beginOffset() const { return Begin; }
  /// End offset (exclusive) in the corresponding file.
  uint64_t endOffset() const { return End; }

  bool touches(uint64_t Offset) const {
    return Begin <= Offset && Offset <= End;
  }


# E:\llvm-msvc\llvm-project-msvc\clang\tools\libclang\CIndex.cpp
bool CursorVisitor::visitDeclsFromFileRegion(FileID File, uint64_t Offset,
                                             uint64_t Length)

# E:\llvm-msvc\llvm-project-msvc\clang\lib\Frontend\ASTUnit.cpp
void ASTUnit::findFileRegionDecls(FileID File, uint64_t Offset, uint64_t Length,
                                  SmallVectorImpl<Decl *> &Decls)


# E:\llvm-msvc\llvm-project-msvc\clang\lib\Serialization\ASTReader.cpp
void ASTReader::FindFileRegionDecls(FileID File,
                                    uint64_t Offset, unsigned Length,
                                    SmallVectorImpl<Decl *> &Decls)



# E:\llvm-msvc\llvm-project-msvc\clang\lib\Lex\Lexer.cpp

Lexer *Lexer::Create_PragmaLexer(SourceLocation SpellingLoc,
                                 SourceLocation ExpansionLocStart,
                                 SourceLocation ExpansionLocEnd,
                                 uint64_t TokLen, Preprocessor &PP)

static SourceLocation GetMappedTokenLoc(Preprocessor &PP,
                                        SourceLocation FileLoc,
                                        uint64_t CharNo, uint64_t TokLen)                               

# E:\llvm-msvc\llvm-project-msvc\clang\include\Lex\Token.h
void setLength(uint64_t Len)
uint64_t getLength() const      


# E:\llvm-msvc\llvm-project-msvc\clang\include\Lex\MacroInfo.h
uint64_t getDefinitionLength(const SourceManager &SM) 
uint64_t MacroInfo::getDefinitionLengthSlow(const SourceManager &SM)

# E:\llvm-msvc\llvm-project-msvc\clang\lib\Frontend\FrontendAction.cpp
static bool loadModuleMapForModuleBuild(CompilerInstance &CI, bool IsSystem,
                                        bool IsPreprocessed,
                                        std::string &PresumedModuleMapFile,
                                        uint64_t &Offset) 

# E:\llvm-msvc\llvm-project-msvc\clang\lib\CodeGen\CodeGenAction.cpp
const FullSourceLoc BackendConsumer::getBestLocationFromDebugLoc(
    const llvm::DiagnosticInfoWithLocationBase &D, bool &BadDebugInfo,
    StringRef &Filename, uint64_t &Line, unsigned &Column)  
# E:\llvm-msvc\llvm-project-msvc\clang\lib\Frontend\ASTUnit.cpp
SourceLocation ASTUnit::getLocation(const FileEntry *File,
                                    uint64_t Line, uint64_t Col)                                     


# E:\llvm-msvc\llvm-project-msvc\clang\tools\clang-format\ClangFormat.cpp
static bool parseLineRange(StringRef Input, uint64_t &FromLine,
                           uint64_t &ToLine) {
  std::pair<StringRef, StringRef> LineRange = Input.split(':');
  return LineRange.first.getAsInteger(0, FromLine) ||
         LineRange.second.getAsInteger(0, ToLine);
}

# E:\llvm-msvc\llvm-project-msvc\clang\lib\AST\ASTContext.cpp
RawComment *ASTContext::getRawCommentForDeclNoCacheImpl(
    const Decl *D, const SourceLocation RepresentativeLocForDecl,
    const std::map<uint64_t, RawComment *> &CommentsInTheFile)

# E:\llvm-msvc\llvm-project-msvc\clang\lib\CodeGen\CGDebugInfo.cpp
void CGDebugInfo::collectVarDeclProps(const VarDecl *VD, llvm::DIFile *&Unit,
                                      uint64_t &LineNo, QualType &T,
                                      StringRef &Name, StringRef &LinkageName,
                                      llvm::MDTuple *&TemplateParameters,
                                      llvm::DIScope *&VDContext)
  
# E:\llvm-msvc\llvm-project-msvc\clang\tools\libclang\CXIndexDataConsumer.cpp
void CXIndexDataConsumer::translateLoc(SourceLocation Loc,
                                   CXIdxClientFile *indexFile, CXFile *file,
                                   uint64_t *line, unsigned *column,
                                   uint64_t *offset) 