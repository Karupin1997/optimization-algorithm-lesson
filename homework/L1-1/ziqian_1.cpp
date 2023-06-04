#include <bits/stdc++.h>
using namespace std;
#define int long long
int func(int l,int r)
{
 if(l>r)
  return cout<<"illegal ",-1;
 return (r-l+1)*(l+r)/2;
}
signed main() {
// freopen(".in","r",stdin);
// freopen(".out","w",stdout);
// cin.tie(0),cout.tie(0);
// ios::sync_with_stdio(false);
 int l,r;
 cin>>l>>r;
 cout<<func(l,r)<<endl;
 return 0;
}
//1