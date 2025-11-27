#include <stdlib.h>
#include <string.h>

int main() {
    // 分配 5 个字节
    char *buf = (char *)malloc(5);
    if (!buf) return 1;

    // CSA 检测："Hello" 加上 null 结尾共 6 个字节
    // 试图将 6 字节写入 5 字节的堆空间
    // 报告: Heap memory buffer overflow
    strcpy(buf, "Hello"); 
    
    free(buf);
    return 0;
}