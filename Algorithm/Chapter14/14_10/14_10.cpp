//【PAT A-1122】Hamiltonian Cycle
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,mi,ki;
    cin>>ni>>mi;
    vector<vector<bool>>graph(ni+1,vector<bool>(ni+1));
    while(mi--) {
        gg ai,bi;
        cin>>ai>>bi;
        graph[ai][bi]=graph[bi][ai]=true;
    }
    cin>>mi;
    while(mi--) {
        bool ans=true;
        cin>>ki;
        vector<gg>v(ki);
        unordered_set<gg>us;
        for(gg& i:v) {
            cin>>i;
            us.insert(i);
        }
        if(ki!=ni+1 or v[0]!=v.back() or us.size()!=ni) {
            ans=false;
        }
        for(gg i=0; i<ki-1; ++i) {
            if(not graph[v[i]][v[i+1]]) {
                ans=false;
            }
        }
        cout<<(ans?"YES":"NO")<<"\n";
    }
    return 0;
}