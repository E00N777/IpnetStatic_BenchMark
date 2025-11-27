#include <stdlib.h>

int main() {
    unsigned int size = 0;
    
    // 溢出点：无符号减法下溢
    // 结果变成 UINT_MAX (4294967295)
    size = size - 1; 
    
    // CSA 警告：Memory allocation size is too large
    // CSA 知道 size 现在是一个巨大的数，超出了合理的堆大小限制
    void *p = malloc(size);
    
    if (p) free(p);
    return 0;
}