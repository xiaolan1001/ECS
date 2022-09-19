//【CCF CSP-20141202】Z字形扫描
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni;
    cin>>ni;
    vector<vector<gg>> ai(ni,vector<gg>(ni));
    for(auto& i:ai) {
        for(auto& j:i) {
            cin>>j;
        }
    }
    vector<array<gg,2>>d1={{-1,1},{1,-1}}, d2={{0,1},{1,0}};
    gg index=0, x=0, y=0;
    auto outOfBorder=[ni](gg x, gg y) {
        return x<0 || x>=ni || y<0 || y>=ni;
    };

    for(gg i=0; i < ni*ni; ++i) {
        cout<<ai[x][y]<<" ";
        if(outOfBorder(x+d1[index][0],y+d1[index][1])) {
            auto d = d2[index];
            if(outOfBorder(x+d[0],y+d[1])) {
                d = d2[index^1];
            }
            x+=d[0],y+=d[1],index^=1;
        } else {
            x+=d1[index][0], y+=d1[index][1];
        }
    }
    return 0;
}