// c_sof_4.c
// 场景：指针递增导致的越界 (Pointer Arithmetic Overflow)
// 这种线性的指针移动，CSA 不需要处理复杂的循环逻辑，能直接计算出偏移量。
int main() {
    int stack_array[3]; // 栈上分配 3 个 int 的空间
    int *ptr = stack_array;

    // 1. 指向 stack_array[0]
    *ptr = 10; 
    
    // 2. 移动到 stack_array[1]
    ptr++; 
    *ptr = 20;

    // 3. 移动到 stack_array[2]
    ptr++;
    *ptr = 30;

    // 4. 再移动一次，现在指向 stack_array[3] (越界！)
    ptr++;

    // CSA 此时非常清楚 ptr 的偏移量是 3 * sizeof(int)，超出了数组大小
    // 报告: Out of bound memory access
    *ptr = 999; 

    return 0;
}