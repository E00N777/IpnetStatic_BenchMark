#include <stdlib.h>

int main() {
    // 在堆上分配 10 个字节
    char *buf = (char *)malloc(10);
    if (!buf) return 1;

    // CSA 检测：有效索引是 0 到 9
    // buf[10] 访问了分配块之外的内存
    // 报告: Heap-allocated memory overflow
    buf[10] = 'A'; 
    
    free(buf);
    return 0;
}