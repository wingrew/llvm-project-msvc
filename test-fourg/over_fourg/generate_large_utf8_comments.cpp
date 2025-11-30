#include <cstdint>
#include <fstream>
#include <iostream>

int main() {
  const uint64_t target = (1ull << 33); // 8 GiB
  std::ofstream ofs("too_large_utf8_comments.cpp",
                    std::ios::binary | std::ios::trunc);
  if (!ofs) {
    std::cerr << "无法打开 too_large_utf8_comments.cpp 进行写入\n";
    return 1;
  }

  static const char head[] =
      "// AUTOGEN: UTF-8 line comments\n";

  // 注意：保存这个源文件时用 UTF-8 编码
  static const char line[] =
      "// 注释：这是一个 UTF-8 测试行 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";

  static const char tail[] =
      "#endif\n"
      "#include <iostream>\n"
      "int main() {\n"
      "  std::cout << \"Hello from too_large_utf8_comments.cpp\\\\n\";\n"
      "  return 0;\n"
      "}\n";

  std::cout << "开始生成 too_large_utf8_comments.cpp ..." << std::endl;

  ofs.write(head, sizeof(head) - 1);

  const uint64_t head_bytes = sizeof(head) - 1;
  const uint64_t tail_bytes = sizeof(tail) - 1;
  const uint64_t line_bytes = sizeof(line) - 1;

  const uint64_t reserve = head_bytes + tail_bytes;
  const uint64_t body = (target > reserve) ? (target - reserve) : 0;
  const uint64_t lines = (line_bytes ? body / line_bytes : 0);

  for (uint64_t i = 0; i < lines; ++i) {
    ofs.write(line, line_bytes);
    if (i % 10000000ull == 0) {
      std::cout << "已写入 UTF-8 注释行: " << i << " / " << lines << "\r"
                << std::flush;
    }
  }

  ofs.write(tail, tail_bytes);
  ofs.flush();

  if (!ofs) {
    std::cerr << "\n写入文件时发生错误\n";
    return 1;
  }

  std::cout << "\n生成完成: too_large_utf8_comments.cpp" << std::endl;
  return 0;
}
