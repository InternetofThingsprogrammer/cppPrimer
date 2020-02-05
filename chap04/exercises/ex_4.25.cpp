//练习 4.15：如果一台机器上 int 占 32 位、char 占 8 位，用的是 Latin-1 字符集，
//其中字符 'q' 的二进制形式是 01110001，那么表达式 ~'q'<< 6 的值是什么？

//首先 01110001 提升到 int 得到 0000 0000 0000 0000 0000 0000 01110001
//然后取反得到                  1111 1111 1111 1111 1111 1111 10001110
//然后左移 6 位得到             1111 1111 1111 1111 1110 0011 1000 0000
//（上述显然是一个负数，对其先减 1 然后取反得到对应的正数。）
//结果为 -7296

#include <iostream>

int main() {
    std::cout << "当前机器上 ~'q'<< 6 的值为：" << (~'q' << 6) << std::endl;
    return 0;
}
