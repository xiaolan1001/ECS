//【PAT A-1147】Heaps
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

gg mi,ni;
void postOrder(vector<gg>& v,gg root, gg& num) {
    if(root>=v.size()) {
        return;
    }
    postOrder(v,root*2+1,num);
    postOrder(v,root*2+2,num);
    cout<<v[root]<<(num++<ni-1?" ":"\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>mi>>ni;
    vector<gg>v(ni);
    while(mi--) {
        for(gg & i:v) {
            cin>>i;
        }
        if(is_heap(v.begin(),v.end())) {
            cout<<"Max Heap\n";
        } else if(is_heap(v.begin(),v.end(),greater<gg>())) {
            cout<<"Min Heap\n";
        } else {
            cout<<"Not Heap\n";
        }
        gg num=0;
        postOrder(v,0,num);
    }
    return 0;
}