//【PAT A-1070、PAT B-1020】Mooncake、月饼
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,di;
    cin>>ni>>di;
    using ad2 = array<double,2>;
    vector<ad2>cakes(ni);
    for(gg i=0; i<ni; ++i)
        cin>>cakes[i][0];
    for(gg i=0; i<ni; ++i)
        cin>>cakes[i][1];
    sort(cakes.begin(),cakes.end(),[](const ad2&c1,const ad2&c2) {
        return c1[1]*1.0/c1[0]>c2[1]*1.0/c2[0];
    });
    double ans=0.0;
    for(auto & c:cakes) {
        if(di>=c[0]) {
            ans+=c[1];
            di-=c[0];
        } else {
            ans+=c[1]*1.0/c[0]*di;
            di=0;
        }
    }
    cout<<fixed<<setprecision(2)<<ans;
    return 0;
}