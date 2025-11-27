int main() {
    // 分配 8 个字节
    char* buffer = new char[8];

    // 强转为 int 指针
    int* i_ptr = (int*)buffer;

    // index 0 占用字节 0-3
    // index 1 占用字节 4-7
    // index 2 占用字节 8-11 -> 溢出！
    
    // CSA 检测：写入位置超出了 8 字节的范围
    i_ptr[2] = 100; 

    delete[] buffer;
    return 0;
}