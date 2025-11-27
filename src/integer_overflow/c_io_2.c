#include <stdlib.h>

int main() {
    // 两个较大的数
    int count = 1073741824; // 2^30
    int element_size = 4;
    
    // 溢出点：count * 4 = 4294967296
    // 在 32 位有符号整数中，这会溢出并回绕（通常变为 0 或负数）
    int total_size = count * element_size;
    
    // CSA 警告：Argument to 'malloc' is negative (or zero)
    // 这里的警告表明计算出的 total_size 是错误的
    void *p = malloc(total_size);
    
    if (p) free(p);
    return 0;
}