int main() {
    // 堆上分配包含 5 个整数的数组
    int* arr = new int[5];

    // CSA 检测：最大有效索引是 4
    // 报告: Out of bound memory access
    arr[5] = 99; 

    delete[] arr;
    return 0;
}