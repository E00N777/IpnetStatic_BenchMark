#include <stdlib.h>

int main() {
    // 分配 2 个 int 的空间 (比如 8 字节)
    int *arr = (int *)malloc(2 * sizeof(int));
    if (!arr) return 1;
    
    int *ptr = arr;
    
    ptr++; // 指向第 2 个 int (index 1)
    ptr++; // 指向第 3 个 int (index 2) - 越界！

    // CSA 检测：ptr 已经超出了 malloc 的范围
    // 报告: Out of bound memory access
    *ptr = 123; 
    
    free(arr);
    return 0;
}