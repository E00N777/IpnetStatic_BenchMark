// benchmark_03.cpp
#include <cstdlib>

void vulnerable_allocation(int count) {
    int element_size = 1024;
    
    // 漏洞点：如果 count 很大，计算结果可能回绕变成一个很小的正数
    int total_size = count * element_size;
    
    void* ptr = std::malloc(total_size);
    std::free(ptr);
}

int main() {
    // 传入一个足够大的数，乘以 1024 后会溢出
    vulnerable_allocation(4194305); 
    return 0;
}