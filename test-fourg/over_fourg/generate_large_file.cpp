#include <cstdint>
#include <fstream>
#include <iostream>

int main() {
  std::ofstream ofs("too_large.cpp", std::ios::binary | std::ios::trunc);
  if (!ofs) {
    std::cerr << "无法打开 too_large.cpp 进行写入\n";
    return 1;
  }

  // 生成器自己的输出
  static const uint64_t target = (1ull << 33); // > 4 GiB
  std::cout << "开始生成 too_large.cpp ..." << std::endl;
  std::cout << "目标大小: " << target << " 字节 (约 "
            << (target / (1024ull * 1024ull * 1024ull)) << " GiB)" << std::endl;

  static const char head[] = "// AUTOGEN\n#if 0\n";
  static const char line[] = "/*0123456789ABCDEFGHIJKLMNOPQ*/\n"; // 32B

  // 生成的 too_large.cpp 里会有输出的 main
  static const char tail[] =
      "#endif\n"
      "#include <iostream>\n"
      "int main() {\n"
      "  std::cout << \"Hello from too_large.cpp\\\\n\";\n"
      "  return 0;\n"
      "}\n";

  ofs.write(head, sizeof(head) - 1);

  const uint64_t reserve = (sizeof(head) - 1) + (sizeof(tail) - 1);
  const uint64_t body = target - reserve; // 要写入的主体字节数
  const uint64_t lines = body / 32;

  for (uint64_t i = 0; i < lines; ++i) {
    ofs.write(line, 32);

    // 可选：简单进度提示（比如每写 1000 万行打印一次）
    if (i % 10000000ull == 0) {
      std::cout << "已写入行数: " << i << " / " << lines << "\r" << std::flush;
    }
  }

  ofs.write(tail, sizeof(tail) - 1);
  ofs.flush();

  if (!ofs) {
    std::cerr << "\n写入文件时发生错误\n";
    return 1;
  }

  std::cout << "\n生成完成: too_large.cpp" << std::endl;
  return 0;
}
