//【PAT A-1044】Shopping in Mars
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,mi;
    cin>>ni>>mi;
    vector<gg>v(ni+1);
    for(gg i=1;i<=ni;++i) {
        cin>>v[i];
    }
    partial_sum(v.begin(),v.end(),v.begin());
    gg sum = INT_MAX;
    vector<array<gg,2>>ans;
    for(gg i=0; i<v.size(); ++i) {
        gg j=lower_bound(v.begin(),v.end(),v[i]+mi)-v.begin();
        if(j==v.size()) {
            continue;
        }
        gg s = v[j]-v[i];
        if(sum>s) {
            sum=s;
            ans={{i+1,j}};
        } else if(s==sum) {
            ans.push_back({i+1,j});
        }
    }
    for(auto& i:ans) {
        cout<<i[0]<<"-"<<i[1]<<"\n";
    }
    return 0;
}