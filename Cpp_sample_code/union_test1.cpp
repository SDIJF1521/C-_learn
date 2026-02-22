#include <iostream>
#include <string>

// 枚举：跟踪活跃成员的类型
enum ActiveMember {
    MEMBER_STR,
    MEMBER_NUM
};

union Test {
    std::string str;
    int num;

    // 构造函数：默认初始化（无活跃成员）
    Test() {}

    // 析构函数：根据活跃成员手动析构
    ~Test() {}
};

int main() {
    Test t;
    ActiveMember active = MEMBER_STR;

    // 1. 激活 str 成员
    new (&t.str) std::string("hello");  // 放置新表达式：在 t.str 地址构造 std::string
    std::cout << "str: " << t.str << std::endl;

    // 2. 切换到 num 成员（关键步骤）
    if (active == MEMBER_STR) {
        t.str.~basic_string();  // 手动析构 str
        active = MEMBER_NUM;    // 更新活跃成员标记
    }
    t.num = 100;                // 直接赋值激活 num
    std::cout << "num: " << t.num << std::endl;

    // 3. 程序结束前析构最后一个活跃成员
    if (active == MEMBER_NUM) {
        // int 是基本类型，无需手动析构
    } else if (active == MEMBER_STR) {
        t.str.~basic_string();
    }

    return 0;
}