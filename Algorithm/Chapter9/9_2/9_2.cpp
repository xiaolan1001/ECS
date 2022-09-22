//【PAT A-1105、PAT B-1050】Spiral Matrix、螺旋矩阵
#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg m,n,ni;
    cin>>ni;
    vector<gg>ai(ni);
    for(gg & i:ai) {
        cin>>i;
    }
    sort(ai.begin(),ai.end(),greater<gg>());
    for(n=gg(sqrt(ni)); n>0; --n) {
        if(ni%n==0) {
            m=ni/n;
            break;
        }
    }
    vector<vector<gg>>ans(m,vector<gg>(n));
    vector<array<gg,2>>direct{{0,1},{1,0},{0,-1},{-1,0}};
    gg d=0,x=0,y=0;
    for(gg i=0; i<ni; ++i) {
        ans[x][y]=ai[i];
        gg nx = x+direct[d][0],ny=y+direct[d][1];
        if(nx>=0 and nx<m and ny>=0 and ny<n and ans[nx][ny]==0) {
            x=nx,y=ny;
        } else {
            d = (d+1)%4;
            x+=direct[d][0],y+=direct[d][1];
        }
    }
    for(auto& i:ans) {
        for(gg j=0; j<i.size(); ++j) {
            cout<<(j==0?"":" ")<<i[j];
        }
        cout<<"\n";
    }
    return 0;
}