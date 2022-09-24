//【PAT A-1149、PAT B-1090】Dangerours Goods Packaging、危险品装箱
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,mi,ki,ai,bi;
    cin>>ni>>mi;
    unordered_map<gg,unordered_set<gg>>um;
    while(ni--) {
        cin>>ai>>bi;
        um[ai].insert(bi);
        um[bi].insert(ai);
    }
    while(mi--) {
        cin>>ki;
        unordered_set<gg>us;
        while(ki--) {
            cin>>ai;
            us.insert(ai);
        }
        for(auto i:us) {
            if(um.count(i)) {
                for(auto j:um[i]) {
                    if(us.count(j)) {
                        cout<<"No\n";
                        goto loop;
                    }
                }
            }
        }
        cout<<"Yes\n";
        loop:;
    }
    return 0;
}