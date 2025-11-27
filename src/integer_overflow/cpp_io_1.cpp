// benchmark_01.cpp
#include <limits>

int main() {
    // 获取 int 的最大值 (通常是 2147483647)
    int max_val = std::numeric_limits<int>::max();
    
    // 漏洞点：有符号整数溢出是未定义行为 (Undefined Behavior)
    int result = max_val + 1; 

    return result; 
}