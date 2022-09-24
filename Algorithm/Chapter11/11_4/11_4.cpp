//【CCF CSP-20191202】回收站选址
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    map<array<gg,2>,array<gg,2>>m;
    gg n;
    array<gg,2>p;
    cin>>n;
    while(n--) {
        cin>>p[0]>>p[1];
        m.insert({p,{0,0}});
        for(auto& i:m) {
            auto& p2=i.first;
            if((abs(p[0]-p2[0])==1 and p[1]==p2[1]) or (p[0]==p2[0] and abs(p[1]-p2[1])==1)) {
                ++m[p][0];
                ++m[p2][0];
            } else if(abs(p[0]-p2[0])==1 and abs(p[1]-p2[1])==1) {
                ++m[p][1];
                ++m[p2][1];
            }
        }
    }
    array<gg,5>ans{};
    for(auto& i:m) {
        if(i.second[0]==4) {
            ++ans[i.second[1]];
        }
    }
    for(auto i:ans)
        cout<<i<<"\n";
    return 0;
}