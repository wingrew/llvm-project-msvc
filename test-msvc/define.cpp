#include <stdio.h>

int main() {
    // 检查并输出每个宏
    #ifdef __ARM_ARCH
    printf("__ARM_ARCH: %d\n", __ARM_ARCH);
    #else
    printf("__ARM_ARCHxxx\n");
    #endif

    #ifdef __ATOM__
    printf("__ATOM__: %s\n", __ATOM__ ? "1/favor:ATOM" : "未定义");
    #else
    printf("__ATOM__xxx\n");
    #endif

    #ifdef __AVX__
    printf("__AVX__: 1\n");
    #else
    printf("__AVX__xxx\n");
    #endif

    #ifdef __AVX2__
    printf("__AVX2__: 1\n");
    #else
    printf("__AVX2__xxx\n");
    #endif

    #ifdef __AVX512BW__
    printf("__AVX512BW__: 1\n");
    #else
    printf("__AVX512BW__xxx\n");
    #endif

    #ifdef __AVX512CD__
    printf("__AVX512CD__: 1\n");
    #else
    printf("__AVX512CD__xxx\n");
    #endif

    #ifdef __AVX512DQ__
    printf("__AVX512DQ__: 1\n");
    #else
    printf("__AVX512DQ__xxx\n");
    #endif

    #ifdef __AVX512F__
    printf("__AVX512F__: 1\n");
    #else
    printf("__AVX512F__xxx\n");
    #endif

    #ifdef __AVX512VL__
    printf("__AVX512VL__: 1\n");
    #else
    printf("__AVX512VL__xxx\n");
    #endif

    #ifdef __AVX10_VER__
    printf("__AVX10_VER__: %d\n", __AVX10_VER__);
    #else
    printf("__AVX10_VER__xxx\n");
    #endif

    #ifdef _CHAR_UNSIGNED
    printf("_CHAR_UNSIGNED: 1\n");
    #else
    printf("_CHAR_UNSIGNEDxxx\n");
    #endif

    #ifdef __CLR_VER
    printf("__CLR_VER: %d\n", __CLR_VER);
    #else
    printf("__CLR_VERxxx\n");
    #endif

    #ifdef _CONTROL_FLOW_GUARD
    printf("_CONTROL_FLOW_GUARD: 1\n");
    #else
    printf("_CONTROL_FLOW_GUARDxxx\n");
    #endif

    #ifdef __COUNTER__
    printf("__COUNTER__: %d\n", __COUNTER__);
    #else
    printf("__COUNTER__xxx\n");
    #endif

    #ifdef __cplusplus_cli
    printf("__cplusplus_cli: 200406/clr\n");
    #else
    printf("__cplusplus_clixxx\n");
    #endif

    #ifdef __cplusplus_winrt
    printf("__cplusplus_winrt: 201009\n");
    #else
    printf("__cplusplus_winrtxxx\n");
    #endif

    #ifdef _CPPRTTI
    printf("_CPPRTTI: 1\n");
    #else
    printf("_CPPRTTIxxx\n");
    #endif

    #ifdef _CPPUNWIND
    printf("_CPPUNWIND: 1\n");
    #else
    printf("_CPPUNWINDxxx\n");
    #endif

    #ifdef _DEBUG
    printf("_DEBUG: 1\n");
    #else
    printf("_DEBUGxxx\n");
    #endif

    #ifdef _DLL
    printf("_DLL: 1\n");
    #else
    printf("_DLLxxx\n");
    #endif

    #ifdef __FUNCDNAME__
    printf("__FUNCDNAME__: %s\n", __FUNCDNAME__);
    #else
    printf("__FUNCDNAME__xxx\n");
    #endif

    #ifdef __FUNCSIG__
    printf("__FUNCSIG__: %s\n", __FUNCSIG__);
    #else
    printf("__FUNCSIG__xxx\n");
    #endif

    #ifdef __FUNCTION__
    printf("__FUNCTION__: %s\n", __FUNCTION__);
    #else
    printf("__FUNCTION__xxx\n");
    #endif

    #ifdef _INTEGRAL_MAX_BITS
    printf("_INTEGRAL_MAX_BITS: %d\n", _INTEGRAL_MAX_BITS);
    #else
    printf("_INTEGRAL_MAX_BITSxxx\n");
    #endif

    #ifdef __INTELLISENSE__
    printf("__INTELLISENSE__: 1\n");
    #else
    printf("__INTELLISENSE__xxx\n");
    #endif

    #ifdef _ISO_VOLATILE
    printf("_ISO_VOLATILE: 1\n");
    #else
    printf("_ISO_VOLATILExxx\n");
    #endif

    #ifdef _KERNEL_MODE
    printf("_KERNEL_MODE: 1\n");
    #else
    printf("_KERNEL_MODExxx\n");
    #endif

    #ifdef _M_AMD64
    printf("_M_AMD64: 100\n");
    #else
    printf("_M_AMD64xxx\n");
    #endif

    #ifdef _M_ARM
    printf("_M_ARM: 7\n");
    #else
    printf("_M_ARMxxx\n");
    #endif

    #ifdef _M_ARM_ARMV7VE
    printf("_M_ARM_ARMV7VE: 1\n");
    #else
    printf("_M_ARM_ARMV7VExxx\n");
    #endif

    #ifdef _M_ARM_FP
    printf("_M_ARM_FP: %d\n", _M_ARM_FP);
    #else
    printf("_M_ARM_FPxxx\n");
    #endif

    #ifdef _M_ARM64
    printf("_M_ARM64: 1\n");
    #else
    printf("_M_ARM64xxx\n");
    #endif

    #ifdef _M_ARM64EC
    printf("_M_ARM64EC: 1\n");
    #else
    printf("_M_ARM64ECxxx\n");
    #endif

    #ifdef _M_CEE
    printf("_M_CEE: 1\n");
    #else
    printf("_M_CEExxx\n");
    #endif

    #ifdef _M_CEE_PURE
    printf("_M_CEE_PURE: 1\n");
    #else
    printf("_M_CEE_PURExxx\n");
    #endif

    #ifdef _M_CEE_SAFE
    printf("_M_CEE_SAFE: 1\n");
    #else
    printf("_M_CEE_SAFExxx\n");
    #endif

    #ifdef _M_FP_CONTRACT
    printf("_M_FP_CONTRACT: 1\n");
    #else
    printf("_M_FP_CONTRACTxxx\n");
    #endif

    #ifdef _M_FP_EXCEPT
    printf("_M_FP_EXCEPT: 1\n");
    #else
    printf("_M_FP_EXCEPTxxx\n");
    #endif

    #ifdef _M_FP_FAST
    printf("_M_FP_FAST: 1\n");
    #else
    printf("_M_FP_FASTxxx\n");
    #endif

    #ifdef _M_FP_PRECISE
    printf("_M_FP_PRECISE: 1\n");
    #else
    printf("_M_FP_PRECISExxx\n");
    #endif

    #ifdef _M_FP_STRICT
    printf("_M_FP_STRICT: 1\n");
    #else
    printf("_M_FP_STRICTxxx\n");
    #endif

    #ifdef _M_IX86
    printf("_M_IX86: 600\n");
    #else
    printf("_M_IX86xxx\n");
    #endif

    #ifdef _M_IX86_FP
    printf("_M_IX86_FP: %d\n", _M_IX86_FP);
    #else
    printf("_M_IX86_FPxxx\n");
    #endif

    #ifdef _M_X64
    printf("_M_X64: 100\n");
    #else
    printf("_M_X64xxx\n");
    #endif

    #ifdef _MSC_BUILD
    printf("_MSC_BUILD: %d\n", _MSC_BUILD);
    #else
    printf("_MSC_BUILDxxx\n");
    #endif

    #ifdef _MSC_EXTENSIONS
    printf("_MSC_EXTENSIONS: 1\n");
    #else
    printf("_MSC_EXTENSIONSxxx\n");
    #endif

    #ifdef _MSC_FULL_VER
    printf("_MSC_FULL_VER: %d\n", _MSC_FULL_VER);
    #else
    printf("_MSC_FULL_VERxxx\n");
    #endif

    #ifdef _MSC_VER
    printf("_MSC_VER: %d\n", _MSC_VER);
    #else
    printf("_MSC_VERxxx\n");
    #endif

    #ifdef _MSVC_LANG
    printf("_MSVC_LANG: %d\n", _MSVC_LANG);
    #else
    printf("_MSVC_LANGxxx\n");
    #endif

    #ifdef __MSVC_RUNTIME_CHECKS
    printf("__MSVC_RUNTIME_CHECKS: 1\n");
    #else
    printf("__MSVC_RUNTIME_CHECKSxxx\n");
    #endif

    #ifdef _MSVC_TRADITIONAL
    printf("_MSVC_TRADITIONAL: 0\n");
    #else
    printf("_MSVC_TRADITIONALxxx\n");
    #endif

    #ifdef _MT
    printf("_MT: 1\n");
    #else
    printf("_MTxxx\n");
    #endif

    #ifdef _NATIVE_WCHAR_T_DEFINED
    printf("_NATIVE_WCHAR_T_DEFINED: 1\n");
    #else
    printf("_NATIVE_WCHAR_T_DEFINEDxxx\n");
    #endif

    #ifdef _OPENMP
    printf("_OPENMP: 200203\n");
    #else
    printf("_OPENMPxxx\n");
    #endif

    #ifdef _PREFAST_
    printf("_PREFAST_: 1\n");
    #else
    printf("_PREFAST_xxxxx\n");
    #endif

    #ifdef _TIMESTAMP_
    printf("__TIMESTAMP__: 1\n");
    #else
    printf("__TIMESTAMP__xxxxx\n");
    #endif

    #ifdef _VC_NODEFAULTLIB
    printf("_VC_NODEFAULTLIB: 1\n");
    #else
    printf("_VC_NODEFAULTLIBxxxxx\n");
    #endif

    #ifdef _WCHAR_T_DEFINED
    printf("_WCHAR_T_DEFINED: 1\n");
    #else
    printf("_WCHAR_T_DEFINEDxxxxx\n");
    #endif

    #ifdef _WIN32
    printf("_WIN32: 1\n");
    #else
    printf("_WIN32xxxxx\n");
    #endif

    #ifdef _WIN64
    printf("_WIN64: 1\n");
    #else
    printf("_WIN64xxxxx\n");
    #endif

    #ifdef _WINRT_DLL
    printf("_WINRT_DLL: 1\n");
    #else
    printf("_WINRT_DLLxxxxx\n");
    #endif

}