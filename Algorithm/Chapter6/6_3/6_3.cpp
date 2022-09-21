//【CCF CSP-20171202】游戏
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,ki;
    cin>>ni>>ki;
    queue<gg>q;
    for(gg i=1; i<=ni; ++i) {
        q.push(i);
    }
    for(gg i=1; q.size()>1; ++i) {
        gg t = q.front();
        q.pop();
        if(i % ki!=0 and i%10!=ki) {
            q.push(t);
        }
    }
    cout<<q.front();
    return 0;
}