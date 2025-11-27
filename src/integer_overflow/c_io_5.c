#include <stdlib.h>

int main() {
    // 536870912 正好是 2的29次方
    int count = 536870912;
    
    // 溢出点：
    // count * 4 (即 sizeof(int)) = 2147483648 (2的31次方)
    // 2147483648 超出了 int 的最大值 (2147483647)
    // 在 32 位有符号整数中，这一位正好落在符号位上，结果变成了 -2147483648 (INT_MIN)
    int size = count * 4; 

    // CSA 必定识别：Argument to 'malloc' is negative
    // 这是一个非常确定的数学事实，没有任何模糊空间
    void *p = malloc(size);

    if(p) free(p);
    return 0;
}