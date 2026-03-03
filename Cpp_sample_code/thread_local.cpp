#include <iostream>
#include <thread>   // 包含线程库头文件

thread_local int threadVar = 0; // 声明一个线程局部变量

void threadFunction(int id) {
    threadVar = id; // 修改线程局部变量
    std::cout << "Thread " << id << ": threadVar = " << threadVar << "\n";
}

int main() {
    std::thread t1(threadFunction, 1);  // 创建线程 t1，传递参数 1
    std::thread t2(threadFunction, 2);  // 创建线程 t2，传递参数 2

    t1.join();
    t2.join();

    return 0;
}