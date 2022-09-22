//【PAT A-1044】Shopping in Mars
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,mi;
    cin>>ni>>mi;
    vector<gg>v(ni);
    for(gg& i:v) {
        cin>>i;
    }
    gg s=0,sum=INT_MAX;
    vector<array<gg,2>>ans;
    for(gg i=0,j=0; i<ni and j<=ni;) {
        if(s>=mi) {
            if(sum>s) {
                sum=s;
                ans={{i+1,j}};
            } else if(s==sum) {
                ans.push_back({i+1,j});
            }
            s-=v[i++];
        } else {
            s+=v[j++];
        }
    }
    for(auto & i:ans) {
        cout<<i[0]<<"-"<<i[1]<<"\n";
    }
    return 0;
}