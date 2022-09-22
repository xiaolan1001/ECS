//【CCF CSP-20161202】工资计算
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    double ti;
    cin>>ti;
    array<double,9>s{0,3500,5000,8000,12500,38500,58500,83500,INT_MAX},
    rate{0.0,0.0,0.03,0.1,0.2,0.25,0.3,0.35,0.45},t{};
    for(int i=1; i<9;++i) {
        t[i]=t[i-1]+(s[i]-s[i-1])*(1-rate[i]);
    }
    auto i=find_if(t.begin(),t.end(),[ti](double a) {
        return a>=ti;
    })-t.begin();
    cout<<round((ti-t[i-1])/(1-rate[i])+s[i-1]);
    return 0;
}