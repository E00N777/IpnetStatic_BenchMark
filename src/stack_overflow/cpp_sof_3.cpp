int main() {
    long stack_array[2];
    long* ptr = stack_array;

    // 指向 index 0
    *ptr = 100;
    
    ptr++; // 指向 index 1
    *ptr = 200;

    ptr++; // 指向 index 2 (越界！)

    // CSA 检测：指针偏移量已超出数组声明的大小
    // 报告：Out of bound memory access
    *ptr = 300; 

    return 0;
}