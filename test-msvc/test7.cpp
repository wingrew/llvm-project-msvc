// exceptions_Exception_Handling_Differences3.cpp
// compile with: /EHa（MSVC2015需在属性内设置）
//奇怪的是，此处如果把   SE_Exception(SE_Exception& e) : nSE(e.nSE) {}改为   SE_Exception(const SE_Exception& e) : nSE(e.nSE) {}
//clang-cl编译就不会报错，但是运行可执行文件没有结果
//c++中的异常处理-混合使用c和c++异常-处理c++中的结构性异常
//author: 欧阳照林
#include <stdio.h>
#include <eh.h>
#include <windows.h>

class SE_Exception {
private:
   SE_Exception() {}
   unsigned int nSE;
public:
   SE_Exception(SE_Exception& e) : nSE(e.nSE) {}
   SE_Exception(unsigned int n) : nSE(n) {}
   ~SE_Exception() {}
   unsigned int getSeNumber() { return nSE; }
};

void SEFunc() {
    __try {
        int x, y = 0;
        x = 5 / y;
    }
    __finally {
        printf_s( "In finally\n" );
    }
}

void trans_func( unsigned int u, _EXCEPTION_POINTERS* pExp ) {
    printf_s( "In trans_func.\n" );
    throw SE_Exception( u );
}

int main() {
    _set_se_translator( trans_func );
    try {
        SEFunc();
    }
    catch( SE_Exception e ) {
        printf_s( "Caught a __try exception with SE_Exception.\n" );
        printf_s( "nSE = 0x%x\n", e.getSeNumber() );
    }
}