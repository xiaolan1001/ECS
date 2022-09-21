//【PAT B-1077】互评成绩计算
#include<bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {

    gg ni,mi;
    cin>>ni>>mi;
    for(gg i=0; i<ni; ++i) {
        gg g1,a;
        vector<gg>g2;
        cin>>g1;
        for(gg j=0; j<ni-1; ++j) {
            cin>>a;
            if(a>=0 and a<=mi) {
                g2.push_back(a);
            }
        }
        auto m = minmax_element(g2.begin(),g2.end());
        gg g2a = accumulate(g2.begin(),g2.end(),0)-*m.first-*m.second;
        cout<<round((g1+g2a*1.0/(g2.size()-2))/2.0)<<'\n';
    }
    return 0;
}