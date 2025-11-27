#include <stdlib.h>

int main() {
    int *p = (int *)malloc(sizeof(int));
    
    // 指针被覆盖，第一次分配的内存地址丢失
    // CSA 报告: Potential leak of memory
    p = (int *)malloc(sizeof(int)); 

    free(p); // 只释放了第二次分配的内存
    return 0;
}