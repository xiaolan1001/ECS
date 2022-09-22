//【PAT B-1007】素数对猜想
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

bool isPrime(gg n) {
    if(n<2) {
        return false;
    }
    for(gg i=2; i<=(gg)sqrt(n);++i) {
        if(n%i==0)
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,ans=0;
    cin>>ni;
    for(gg i=5;i<=ni;i+=2) {
        if(isPrime(i) and isPrime(i-2)) {
            ++ans;
        }
    }
    cout<<ans;
    return 0;
}