#include <iostream>
#include <string>
#include <windows.h>

struct teacher{
    std::string name;
    int age;
    float height;
    double stu;
};

struct tea  {
    teacher info;
    std::string subject;

};

int main(){
    SetConsoleOutputCP(CP_UTF8);  // 设置控制台输出为 UTF-8 编码
    using namespace std;
    tea info = {
        {
        "张三",
        18,
        1.75
        },
        "数学"
    };
    cout << "姓名: " << info.info.name << endl;
    cout << "年龄: " << info.info.age << endl;
    cout << "身高: " << info.info.height << endl;
    cout << "科目: " << info.subject << endl;
}