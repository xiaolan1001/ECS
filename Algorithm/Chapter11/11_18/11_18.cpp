//【CCF CSP-20180302】碰撞的小球
#include<bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,li,ti;
    cin>>ni>>li>>ti;
    vector<array<int,2>>balls(ni);
    for(gg i=0; i<ni; ++i) {
        cin>>balls[i][0];
        balls[i][1]=1;
    }
    while(ti--) {
        unordered_map<gg,gg>um;
        for(gg j=0; j<balls.size();++j) {
            auto& i=balls[j];
            i[0]+=i[1];
            if(i[0]==0 or i[0]==li) {
                i[1]=-i[1];
            } else if(um.count(i[0])) {
                i[1] = -i[1];
                balls[um[i[0]]][1] = -balls[um[i[0]]][1];
            }
            um[i[0]]=j;
        }
    }
    for(auto& i:balls) {
        cout<<i[0]<<" ";
    }
    return 0;
}