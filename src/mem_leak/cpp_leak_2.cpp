int main(int argc, char** argv) {
    int* data = new int[100];

    if (argc > 1) {
        // 在这个分支中，data 离开了作用域但未被删除
        // CSA 报告: Potential memory leak
        return 1; 
    }

    delete[] data;
    return 0;
}