// 函数期望操作 index 9，即需要至少大小为 10 的数组
void write_to_tenth_element(int* arr) {
    arr[9] = 999;
}

int main() {
    int small_buf[5]; // 实际只提供了 5 个

    // CSA 检测：将大小为 5 的数组传给通过 arr[9] 访问的函数
    // 报告：Out of bound memory access (in function write_to_tenth_element)
    write_to_tenth_element(small_buf);

    return 0;
}