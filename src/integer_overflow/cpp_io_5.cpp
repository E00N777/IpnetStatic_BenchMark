// benchmark_05.cpp
#include <limits>

int main() {
    // 一个超过 short 范围的整数
    int large_val = 40000; 
    
    // 漏洞点：short 的最大值通常是 32767
    // 强制转换或隐式转换会导致数值截断，改变原意
    short small_val = large_val;

    if (small_val != large_val) {
        return 1; // 实际运行时会进入这里
    }
    return 0;
}