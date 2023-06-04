/*
第一题
解法：分情况
若a<b,直接用公式求出答案
若a=b,则区间[a,b]={a}，输出a
若a>b，输出0
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if (a > b) cout << 0;
    else if (a == b) cout << a;
    else
    {
        int res = (a+b) * (b-a+1);
        cout << res/2;
    }
    return 0;
}
