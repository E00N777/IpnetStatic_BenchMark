#include <stdlib.h>

int main() {
    // 0xFFFFFFFF 在 unsigned int 中是 4294967295 (巨大的正数)
    unsigned int huge_unsigned = 0xFFFFFFFF;
    
    // 强转为 int (signed)
    // 0xFFFFFFFF 在有符号补码中代表 -1
    int size = (int)huge_unsigned;

    // CSA 必定识别：Argument to 'malloc' is negative
    // CSA 追踪数据流发现 size 的值是 -1
    void *p = malloc(size);

    if(p) free(p);
    return 0;
}