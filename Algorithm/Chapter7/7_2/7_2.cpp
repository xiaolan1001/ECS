//【PAT B-1083】是否存在相等的差
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,a;
    cin>>ni;
    map<gg,gg,greater<gg>>m;
    for(int i=1; i<=ni; ++i) {
        cin>>a;
        ++m[abs(a-i)];
    }
    for(auto& i:m) {
        if(i.second>1)
            cout<<i.first<<' '<<i.second<<'\n';
    }
    return 0;
}