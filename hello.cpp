#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "========================================" << endl;
    cout << "🤖 欢迎使用云端编译的 C++ 程序！" << endl;
    cout << "========================================" << endl;
    cout << "请输入你的名字: ";
    cin >> name;
    cout << "你好，" << name << "！我是由微软服务器为你编译出来的程序。" << endl;
    cout << "按下回车键退出..." << endl;
    cin.ignore();
    cin.get();
    return 0;
}