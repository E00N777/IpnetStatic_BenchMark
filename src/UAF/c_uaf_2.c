#include <stdlib.h>

int main() {
    int *p = (int *)malloc(sizeof(int));
    if (!p) return 1;

    int *q = p; // q 是 p 的别名
    
    free(p);
    
    // UAF: 通过别名 q 访问已释放的内存
    return *q; 
}