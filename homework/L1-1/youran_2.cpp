/*
第二题
解法：先判断输入是否满足条件，再用第一题方法
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if (a <= 10 || b > 100) cout << 0;
    else if (a > b) cout << 0;
    else if (a == b) cout << a;
    else
    {
        int res = (a+b) * (b-a+1);
        cout << res/2;
    }
    return 0;
}