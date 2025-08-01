/////////////////////////////////////
// .\clang-testcase\test14.cpp(11,5): error: static assertion failed due to requirement 'std::is_same<bit_pack<unsigned
//       int>::prohibit_operator_uint16_conversion, unsigned char>::value || std::is_same<bit_pack<unsigned int>::prohibit_operator_uint16_conversion,
//       unsigned short>::value || std::is_same<bit_pack<unsigned int>::prohibit_operator_uint16_conversion, unsigned int>::value': uint8_t, uint16_t,
//       uint32_t required.
//     static_assert(std::is_same<T, uint8_t>::value || std::is_same<T, uint16_t>::value ||
//     ^             ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// .\clang-testcase\test14.cpp(73,20): note: in instantiation of template class 'bit_pack<bit_pack<unsigned int>::prohibit_operator_uint16_conversion>'
//       requested here
// const lmap bit16 = bit_pack_factory<16>::nth_bit();
//                    ^
// 1 error generated.
//来源：https://github.com/llvm/llvm-project/issues/26968
//author:欧阳照林
//typdef 、模板扩展和条件编译错误
#include <cstddef>
#include <cstdint>
#include <limits>
#include <type_traits>

template <typename T>
struct bit_pack
{
    static_assert(std::is_same<T, uint8_t>::value || std::is_same<T, uint16_t>::value ||
        std::is_same<T, uint32_t>::value, "uint8_t, uint16_t, uint32_t required.");

    class prohibit_operator_uint16_conversion {};
    class prohibit_operator_uint32_conversion {};

    typedef T Type;

    bit_pack() : the_backing_store(0)
    {
    }

    bit_pack(T const& value) : the_backing_store(value)
    {
    }

    operator bit_pack<typename std::conditional<
        sizeof(T) <= sizeof(uint16_t), uint16_t,
        prohibit_operator_uint16_conversion>::type>() const
    {
        return bit_pack<uint16_t>(the_backing_store);
    }

    operator bit_pack<typename std::conditional<
        sizeof(T) <= sizeof(uint32_t), uint32_t,
        prohibit_operator_uint32_conversion>::type>() const
    {
        return bit_pack<uint32_t>(the_backing_store);
    }

    T the_backing_store;
};

#define TEST_TYPEDEF
#ifdef TEST_TYPEDEF

typedef bit_pack<uint8_t>  bmap;
typedef bit_pack<uint16_t> wmap;
typedef bit_pack<uint32_t> lmap;

#define BIT_PACK_NTH_BIT_MAP_TYPE \
    typename std::conditional<bit_index < 8, bmap, typename std::conditional<bit_index < 16, wmap, lmap>::type>::type

#else

#define BIT_PACK_NTH_BIT_MAP_TYPE \
    typename std::conditional<bit_index < 8, uint8_t, typename std::conditional<bit_index < 16, uint16_t, uint32_t>::type>::type

#endif

template <size_t bit_index>
struct bit_pack_factory
{
    static BIT_PACK_NTH_BIT_MAP_TYPE nth_bit()
    {
        // With clang and TEST_TYPEDEF, this does not give a warning
        BIT_PACK_NTH_BIT_MAP_TYPE const result = 1u << bit_index;
        return result;
    }
};

#ifdef TEST_TYPEDEF
const lmap bit16 = bit_pack_factory<16>::nth_bit();
#else
bit_pack<uint32_t> bit_pack_int = bit_pack_factory<16>::nth_bit();
#endif