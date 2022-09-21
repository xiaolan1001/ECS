//【PAT A-1042】Shuffling Machine
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<gg> ans(54),order(54);
    gg times;
    cin>>times;
    for(int i=0; i<54; ++i) {
        cin>>order[i];
    }
    iota(ans.begin(),ans.end(),0);
    while(times--) {
        vector<gg>temp(54);
        for(gg i=0; i<54; ++i) {
            temp[order[i]-1]=ans[i];
        }
        ans=temp;
    }
    string s="SHCDJ";
    for(int i=0; i<54; ++i) {
        cout<<(i>0?" ":"")<<s[ans[i]/13]<<ans[i]%13+1;
    }

    return 0;
}