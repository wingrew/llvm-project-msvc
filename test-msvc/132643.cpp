/*
llvm项目/clang/lib/Lex/PPDirectives.cpp

1860 至 1866 行 06e2fd9

 // FIXME：考虑对 C11 6.4.7/3 中描述的一些情况发出警告， 
 // C++20 [lex.header]/2： 
 // 
 //如果标题名称中出现 `"`、`'`、`\`、`/*` 或 `//`，则 
 //   在 C 中：行为未定义 
 //   在 C++ 中：程序是有条件支持的，并且由实现定义 
 //           语义 

*/


#if __has_include("\")
#endif