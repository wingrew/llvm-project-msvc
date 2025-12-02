#include <fstream>
#include <iostream>
int main() {
  std::ofstream ofs("too_large.cpp", std::ios::out);
  // 0x10000000 = 4294967296
  // generate file size (4294967328 = 4294967296 + 32
  for(long i = 0; i<=0x8000000; ++i) {          // 0x100000000 / 32 // complain 'too large'
// for(long i = 0; i<0x8000000; ++i) {          // 0x100000000 / 32 // good to compile
    ofs << "extern int a123456789ABCDEFGHI;\n"; // single line 32 charactor
  }
  ofs.close();
  return 0;
}