int main() {
    int* data = new int[2];

    // 正常写入
    data[0] = 0;
    data[1] = 1;

    // 错误：以为大小是 3，或者习惯性多写了一个
    // CSA 检测：Out of bound access
    data[2] = 2; 

    delete[] data;
    return 0;
}