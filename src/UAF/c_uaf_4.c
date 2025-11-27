#include <stdlib.h>

void my_free(int *ptr) {
    free(ptr);
}

int main() {
    int *data = (int *)malloc(sizeof(int));
    if (!data) return 1;

    *data = 42;
    my_free(data);

    // UAF: 调用者不知道 callee 已经释放了内存
    int val = *data; 
    
    return val;
}