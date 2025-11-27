int main() {
    int* ptr = new int(100);
    int& ref = *ptr;

    delete ptr;

    // UAF: 通过引用访问已释放的内存
    int val = ref; 
    
    return val;
}