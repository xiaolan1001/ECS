//【PAT A-1064】Complete Binary Search Tree
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

vector<gg>tree(1005),in(1005);
gg ni;
void inOrder(gg root, gg& p) {
    if(root>ni) {
        return;
    }
    inOrder(root*2,p);
    tree[root]=in[p++];
    inOrder(root*2+1,p);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>ni;
    for(gg i=0; i<ni; ++i) {
        cin>>in[i];
    }
    sort(in.begin(),in.begin()+ni);
    gg p=0;
    inOrder(1,p);
    for(gg i=1; i<=ni; ++i) {
        cout<<(i==1?"":" ")<<tree[i];
    }
    return 0;
}