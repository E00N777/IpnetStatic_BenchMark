#include <stdlib.h>

int main() {
    int *p = (int *)malloc(sizeof(int));
    if (!p) return 1;

    *p = 10;

    // CSA 报告: Potential leak of memory pointed to by 'p'
    return 0; 
}