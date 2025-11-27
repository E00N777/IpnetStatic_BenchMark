#include <stdlib.h>
#include <limits.h>

int main() {
    int max = INT_MAX; // 2147483647
    
    // 溢出点：正数 + 正数 变成了 负数
    // 结果是 -2147483648
    int size = max + 1; 
    
    // CSA 警告：Argument to 'malloc' is negative
    // 这直接证明了 size 发生了整形溢出
    void *p = malloc(size);
    
    if (p) free(p);
    return 0;
}