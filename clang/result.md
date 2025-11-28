
## Basic\SourceLocation.cpp
uint64_t FullSourceLoc::getFileOffset() const {
  assert(isValid());
  return SrcMgr->getFileOffset(*this);
}

uint64_t FullSourceLoc::getLineNumber(bool *Invalid) const {
  assert(isValid());
  return SrcMgr->getLineNumber(getFileID(), getFileOffset(), Invalid);
}

uint64_t FullSourceLoc::getColumnNumber(bool *Invalid) const {
  assert(isValid());
  return SrcMgr->getColumnNumber(getFileID(), getFileOffset(), Invalid);
}

const FileEntry *FullSourceLoc::getFileEntry() const {
  assert(isValid());
  return SrcMgr->getFileEntryForID(getFileID());
}

uint64_t FullSourceLoc::getExpansionLineNumber(bool *Invalid) const {
  assert(isValid());
  return SrcMgr->getExpansionLineNumber(*this, Invalid);
}

uint64_t FullSourceLoc::getExpansionColumnNumber(bool *Invalid) const {
  assert(isValid());
  return SrcMgr->getExpansionColumnNumber(*this, Invalid);
}

uint64_t FullSourceLoc::getSpellingLineNumber(bool *Invalid) const {
  assert(isValid());
  return SrcMgr->getSpellingLineNumber(*this, Invalid);
}

uint64_t FullSourceLoc::getSpellingColumnNumber(bool *Invalid) const {
  assert(isValid());
  return SrcMgr->getSpellingColumnNumber(*this, Invalid);
}

std::pair<FileID, uint64_t> FullSourceLoc::getDecomposedLoc() const {
  return SrcMgr->getDecomposedLoc(*this);
}

