#include <string.h>

int main() {
    char buffer[10];
    // CSA 检测：字符串字面量长度为 15 (含null)，超过 buffer 大小
    strcpy(buffer, "This is too long"); 
    return 0;
}