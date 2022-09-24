//【PAT A-1004】Counting Leaves
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

vector<vector<gg>>tree(105);
gg ni,mi,ki;
vector<gg>ans;
void preOrder(gg root, gg depth) {
    if(ans.size()<=depth) {
        ans.push_back(0);
    }
    if(tree[root].empty()) {
        ++ans[depth];
    }
    for(auto i:tree[root]) {
        preOrder(i,depth+1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>ni>>mi;
    gg id1,id2;
    while(mi--) {
        cin>>id1>>ki;
        while(ki--) {
            cin>>id2;
            tree[id1].push_back(id2);
        }
    }
    preOrder(1,0);
    for(int i=0; i<ans.size(); ++i) {
        cout<<(i==0?"":" ")<<ans[i];
    }
    return 0;
}