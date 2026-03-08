#include <chrono>
#include <iostream>
#include <vector>
#include <windows.h>
void benchmark_loops();

int main(int argc, char const *argv[])
{
    SetConsoleOutputCP(CP_UTF8);
    benchmark_loops();
    return 0;
}

void benchmark_loops() {
    const int n = 10000000;
    std::vector<int> vec(n, 1);
    
    // 测试传统 for 循环
    auto start = std::chrono::high_resolution_clock::now();
    long long sum1 = 0;
    for (int i = 0; i < n; ++i) {
        sum1 += vec[i];
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    
    // 测试基于范围的 for 循环
    start = std::chrono::high_resolution_clock::now();
    long long sum2 = 0;
    for (const auto& x : vec) {
        sum2 += x;
    }
    end = std::chrono::high_resolution_clock::now();
    auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    
    std::cout << "传统 for 循环: " << duration1.count() << " μs\n";
    std::cout << "范围 for 循环: " << duration2.count() << " μs\n";
}