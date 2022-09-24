//【PAT A-1151】LCA in a Binary Tree
#include<bits/stdc++.h>
using namespace std;
using gg = long long;

unordered_map<gg,gg>um;
gg LCA(vector<gg>&pre, gg r, gg left, gg right, gg p, gg q) {
    gg i=um[pre[r]],pi=um[p],qi=um[q];

    return(i-pi)*(i-qi)<=0?pre[r]:pi<i?
    LCA(pre,r+1,left,i-1,p,q):LCA(pre,r+1+i-left,i+1,right,p,q);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg mi,ni,u,v;
    cin>>mi>>ni;
    vector<gg>pre(ni);
    for(gg i=0; i<ni; ++i) {
        cin>>u;
        um[u]=i;
    }
    for(gg i=0; i<ni; ++i) {
        cin>>pre[i];
    }
    while(mi--) {
        cin>>u>>v;
        bool f1=um.count(u),f2=um.count(v);
        if(not f1 and not f2) {
            cout<<"ERROR: "<<u<<" and "<<v<<" are not found.\n";
        } else if(not f1 or not f2) {
            cout<<"ERROR: "<<(not f1?u:v)<<" is not found.\n";
        } else {
            gg ans=LCA(pre,0,0,ni-1,u,v);
            if(ans==u or ans==v) {
                cout<<(ans==u?u:v)<<" is an ancestor of "<<(ans==u?v:u)<<".\n";
            } else {
                cout<<"LCA of "<<u<<" and "<<v<<" is "<<ans<<".\n";
            }
        }
    }
    return 0;
}