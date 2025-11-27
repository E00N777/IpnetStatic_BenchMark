struct DataPacket {
    int id;
    int payload[3]; // 只有 3 个 int
};

int main() {
    DataPacket packet;
    
    packet.id = 1;
    
    // CSA 检测：payload 只有 [0, 1, 2]，这里访问了 [4]
    // 报告：Out of bound memory access
    packet.payload[4] = 0xDEADBEEF;

    return 0;
}