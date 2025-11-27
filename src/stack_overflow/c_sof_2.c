int main() {
    int stack_array[5];
    int index = 10;
    
    // CSA 检测：index (10) 超过了 stack_array 的范围 [0..4]
    stack_array[index] = 100; 
    
    return 0;
}