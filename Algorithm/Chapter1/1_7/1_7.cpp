//【CCF CSP-20180301】跳一跳
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    //ai存储输入数据, ans为最终得分, num为连跳方块中心次数
    gg ai, ans=0, num=0;
    while(cin>>ai && ai!=0) {
        if(ai == 1) {
            ans+=ai;
            num=0;
        } else if(ai ==2) {
            ans+=2*(++num);
        }
    }
    cout<<ans;
    return 0;
}