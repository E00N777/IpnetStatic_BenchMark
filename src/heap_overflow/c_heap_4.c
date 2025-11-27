#include <stdlib.h>

int main() {
    // 1. 分配空间：只分配了 1 个 int 的大小 (比如 4 字节)
    // CSA 记账：堆块大小 = sizeof(int)
    int *p = (int *)malloc(sizeof(int)); 
    if (!p) return 1;

    // 2. 越界访问：
    // p[0] 是合法的。
    // p[1] 试图访问第 2 个 int。
    // 偏移量 = sizeof(int)。此时正好超出了分配的边界。
    // CSA 会报告：Heap memory buffer overflow
    p[1] = 100; 

    free(p);
    return 0;
}