#include<iostream>
#include<string>
using namespace std;
int main()
{
    std::string sb;
    cout << "请回答水豚鼠是人还是勾（回答人或勾）：” << endl;
    cin >> sb;
    if (sb = 人)
    {
        cout << "恭喜你你是和水豚鼠一样的人";
    }
    else if(sb = 勾)
    {
        cout << "还真是";
    }
    return 0;
}
