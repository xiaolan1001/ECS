//【CCF CSP-20190901】小明种苹果
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,mi,t=0,k=0,p=-1;
    cin>>ni>>mi;
    for(gg i=1; i <= ni; ++i) {
        gg ai,b=0,ci;
        cin>>ai;
        t+=ai;
        for(gg j=0; j < mi; ++j) {
            cin>>ci;
            b+=ci;
        }
        t+=b;
        if(abs(b) > p) {
            k = i;
            p = abs(b);
        }
    }
    cout<<t<<" "<<k<<" "<<p;
    return 0;
}