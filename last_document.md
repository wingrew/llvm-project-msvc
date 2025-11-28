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




