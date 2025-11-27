#include <stdlib.h>

typedef struct {
    int id;
    int value;
} Node;

int main() {
    Node *node = (Node *)malloc(sizeof(Node));
    if (!node) return 1;

    node->id = 1;
    free(node);

    // UAF: 读取已释放结构体的成员
    if (node->id == 1) { 
        return 1;
    }

    return 0;
}