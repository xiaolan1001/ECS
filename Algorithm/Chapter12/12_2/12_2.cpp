//【PAT A-1079】Total Sales of Supply Chain
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

const gg MAX=1e5+5;
vector<vector<gg>>tree(MAX);
vector<double>amount(MAX),price(MAX);
gg ni,ki,ai;
double ri;
void dfs(gg root) {
    for(gg i:tree[root]) {
        price[i]=price[root]*(1+ri);
        dfs(i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>ni>>price[0]>>ri;
    ri/=100;
    for(gg i=0; i<ni; ++i) {
        cin>>ki;
        if(ki==0) {
            cin>>amount[i];
        } else {
            while(ki--) {
                cin>>ai;
                tree[i].push_back(ai);
            }
        }
    }
    dfs(0);
    cout<<fixed<<setprecision(1)<<
    inner_product(price.begin(),price.begin()+ni,amount.begin(),0.0);
    return 0;
}