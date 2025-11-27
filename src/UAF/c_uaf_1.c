#include <stdlib.h>

int main() {
    int *p = (int *)malloc(sizeof(int));
    if (!p) return 1;
    
    *p = 10;
    free(p);
    
    // UAF: 写入已释放的内存
    *p = 20; 
    
    return 0;
}