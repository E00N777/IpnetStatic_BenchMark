// cpp_uaf_4.cpp
// 场景：将对象指针存入数组（模拟容器），释放原指针后，通过数组再次访问
class Item {
public:
    int id;
};

int main() {
    // 使用简单的指针数组代替 std::vector
    // CSA 非常擅长追踪这种直接的数组索引别名
    Item* storage[5]; 

    Item* obj = new Item();
    
    // 将指针存入数组的第一个位置
    storage[0] = obj;

    // 释放对象
    delete obj;

    // UAF: 这里发生了 Use-After-Free
    // 此时 obj 已经变成了悬垂指针，但 storage[0] 依然持有这个地址
    storage[0]->id = 999; 
    
    return 0;
}