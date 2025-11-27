#include <stdlib.h>
#include <string.h>

int main() {
    // 堆上分配 10 字节
    void *dest = malloc(10);
    if (!dest) return 1;
    
    char src[20] = "This string is long";

    // CSA 检测：试图拷贝 20 字节到 10 字节的堆空间
    // 报告: Heap memory buffer overflow
    memcpy(dest, src, 20); 

    free(dest);
    return 0;
}