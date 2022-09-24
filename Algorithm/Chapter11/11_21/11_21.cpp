//【PAT B-1005】继续(3n+1)猜想
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,ai;
    unordered_set<gg>us;
    cin>>ni;
    vector<gg>v;
    while(ni--) {
        cin>>ai;
        v.push_back(ai);
        while(ai!=1) {
            if(ai%2==1) {
                ai=ai*3+1;
            }
            ai/=2;
            us.insert(ai);
        }
    }
    sort(v.begin(),v.end(),greater<gg>());
    bool first=true;
    for(auto i:v) {
        if(not us.count(i)) {
            cout<<(first?"":" ")<<i;
            first=false;
        }
    }
    return 0;
}