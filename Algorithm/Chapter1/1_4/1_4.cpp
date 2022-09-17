//【PAT B-1066】图像过滤
#include<bits/stdc++.h>
using namespace std;
using gg=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    gg ni,mi,ai,bi,ri,ki;
    cout<<setfill('0');
    cin>>mi>>ni>>ai>>bi>>ri;
    for(gg i=1; i <= mi; ++i) {
        for(gg j=1; j <= ni; ++j) {
            cin>>ki;
            ki = (ki>=ai and ki<=bi ? ri:ki);
            cout<<setw(3)<<ki<<(j==ni ? '\n':' ');
        }
    }
    return 0;
}