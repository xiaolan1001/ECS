//【CCF CSP-20180902】买菜
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int ni,ans=0;
    cin>>ni;
    vector<array<gg,2>>v1(ni),v2(ni);

    for(int i=0; i<ni;++i) {
        cin>>v1[i][0]>>v1[i][1];
    }
    for(int i=0; i<ni;++i) {
        cin>>v2[i][0]>>v2[i][1];
    }
    for(auto& p1:v1) {
        for(auto& p2:v2) {
            if(p1[0]<=p2[1] and p1[1]>=p2[0]) {
                ans+=min(p1[1],p2[1])-max(p1[0],p2[0]);
            }
        }
    }
    cout<<ans;
    return 0;
}