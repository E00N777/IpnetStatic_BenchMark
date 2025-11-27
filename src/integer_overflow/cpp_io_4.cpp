// benchmark_04.cpp
#include <iostream>

int main() {
    unsigned int count = 0;
    
    // 漏洞点：0 - 1 在无符号运算中会变成 UINT_MAX (通常是 4294967295)
    unsigned int loop_limit = count - 1; 
    
    int dummy = 0;
    // 如果静态分析器能检测到，它应该警告这个循环可能过大或不可达
    for (unsigned int i = 0; i < loop_limit; ++i) {
        dummy++;
        if (i > 10) break; // 为了防止实际运行时死循环，手动break
    }
    
    return dummy;
}