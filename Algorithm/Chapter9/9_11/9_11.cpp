//【PAT B-1022】D进制的A+B
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

vector<gg>decToR(gg n, gg R) {
    vector<gg>ans;
    do{
        ans.push_back(n%R);
        n/=R;
    } while(n!=0);
    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ai,bi,di;
    cin>>ai>>bi>>di;
    ai+=bi;
    for(auto i:decToR(ai,di))
        cout<<i;
    return 0;
}