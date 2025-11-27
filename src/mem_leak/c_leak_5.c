#include <stdlib.h>

char* create_string() {
    return (char *)malloc(50);
}

int main() {
    // 调用了分配内存的函数，但返回值被忽略了
    // 这里的地址直接丢失，无法释放
    // CSA 报告: Potential leak of memory
    create_string(); 
    
    return 0;
}