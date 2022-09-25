//【PAT A-1155】Heap Paths
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

vector<gg>path;
void dfs(vector<gg>& v, gg root) {
    if(root>=v.size()) {
        return;
    }
    if(root*2+1>=v.size()) {
        for(gg i:path) {
            cout<<i<<" ";
        }
        cout<<v[root]<<"\n";
        return;
    }
    path.push_back(v[root]);
    dfs(v,root*2+2);
    dfs(v,root*2+1);
    path.pop_back();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    gg ni;
    cin>>ni;
    vector<gg>v(ni);
    for(gg& i:v) {
        cin>>i;
    }
    dfs(v,0);
    if(is_heap(v.begin(),v.end())) {
        cout<<"Max Heap\n";
    } else if(is_heap(v.begin(),v.end(),greater<gg>())) {
        cout<<"Min Heap\n";
    } else {
        cout<<"Not Heap\n";
    }

    return 0;
}