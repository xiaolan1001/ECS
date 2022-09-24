//【PAT A-1090】Highest Price in Supply Chain
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

const gg MAX = 1e5+5;
vector<vector<gg>>tree(MAX);
vector<double>price(MAX);
gg ni,ai,maxNum=0;
double ri,pi,maxPrice=0;
void dfs(gg root) {
    if(price[root]>maxPrice) {
        maxPrice=price[root];
        maxNum=1;
    } else if(abs(maxPrice-price[root])<1e-6) {
        ++maxNum;
    }
    for(gg i:tree[root]) {
        price[i]=price[root]*(1+ri);
        dfs(i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>ni>>pi>>ri;
    ri/=100;
    gg root=-1;
    for(gg i=0; i<ni; ++i) {
        cin>>ai;
        if(ai==-1) {
            root = i;
            price[i]=pi;
        } else {
            tree[ai].push_back(i);
        }
    }
    dfs(root);
    cout<<fixed<<setprecision(2)<<maxPrice<<" "<<maxNum;
    return 0;
}