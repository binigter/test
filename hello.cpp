#include <iostream>
#include <vector>
#include <string>

using namespace std;
int num;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    cout << "请输入一个数字：";
    cin >> num;
    cout << "你输入的数字是：" << num << endl;
}