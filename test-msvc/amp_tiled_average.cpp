// 文档 /Microsoft专用的修饰符/tile_static 关键字
/*
Clang 根本不支持 C++ AMP。 C++ AMP 是一套非常特定的语言扩展和运行时库，它不是标准 C++ 的一部分，
也不是 Clang 旨在兼容的 GNU 或其他主流扩展。Clang 也没有任何编译选项可以启用 C++ AMP 的支持。
尝试用 Clang 编译这段代码会遇到大量错误，因为它不认识 array_view、parallel_for_each、restrict(amp)、tile_static 等关键字和类型。
*/
// Author：廖中煜
#include <iostream>
#include <amp.h> // Required for C++ AMP types and functions
#include <vector>

// Use the Concurrency namespace for C++ AMP types and functions
using namespace Concurrency;

int main()
{
    std::cout << "Starting C++ AMP Tiled Averaging Example." << std::endl;

    // Sample data:
    // Note: C++ AMP works best with data in contiguous memory, like C-style arrays or std::vector.
    int sampledata[] = {
        2, 2, 9, 7, 1, 4,
        4, 4, 8, 8, 3, 4,
        1, 5, 1, 2, 5, 2,
        6, 8, 3, 2, 7, 2};

    // Averages:
    int averagedata[] = {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    };

    array_view<int, 2> sample(4, 6, sampledata);
    array_view<int, 2> average(4, 6, averagedata);

    parallel_for_each(
        sample.extent.tile<2, 2>(),              // Defines the computation domain and tiling
        [=](tiled_index<2, 2> idx) restrict(amp) // Lambda function executed by each thread
        {
            // tile_static: Declares shared memory within a tile.
            // All threads within the same 2x2 tile share this 'nums' array.
            tile_static int nums[2][2];
            nums[idx.local[1]][idx.local[0]] = sample[idx.global];
            idx.barrier.wait();

            int sum = nums[0][0] + nums[0][1] + nums[1][0] + nums[1][1];
        });
    std::cout << "\nComputed Averages:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cout << average(i, j) << " ";
        }
        std::cout << "\n";
    }
    return 0;
}