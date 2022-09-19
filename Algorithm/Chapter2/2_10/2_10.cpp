//【CCF CSP-20181202】小明放学
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg light[3],ni,a,b,ans=0;
    cin>>light[0]>>light[2]>>light[1]>>ni;
    gg sum=light[0]+light[1]+light[2];
    while(cin>>a>>b) {
        if(a==0) {
            ans+=b;
        } else {
            if(a==1) {
                a=0;
            } else if(a==3) {
                a=1;
            }
            b=(light[a]-b+ans) % sum;
            while(b>light[a]) {
                b-=light[a];
                a = (a+1)%3;
            }
            if(a==0) {
                ans+=light[a]-b;
            } else if(a==2) {
                ans+=light[a]-b+light[0];
            }
        }
    }
    cout<<ans;
    return 0;
}