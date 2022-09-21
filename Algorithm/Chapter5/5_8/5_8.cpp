//【CCF CSP-20190902】小明种苹果（续）
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,mi,t=0,d=0,e=0;
    cin>>ni;
    vector<bool>f(ni);
    for(gg i=0; i<ni; ++i) {
        gg ai,bi;
        cin>>mi>>ai;
        while(--mi) {
            cin>>bi;
            if(bi<=0) {
                ai+=bi;
            } else {
                if(ai>bi)
                    f[i]=true;
                ai=bi;
            }
        }
        t+=ai;
    }
    d=count(f.begin(),f.end(),true);
    for(gg i=0; i<ni; ++i) {
        if(f[i] && f[(i+1)%ni]&& f[(i+2)%ni])
            ++e;
    }
    cout<<t<<" "<<d<<" "<<e;
    return 0;
}