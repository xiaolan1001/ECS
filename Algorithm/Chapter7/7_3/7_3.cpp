//【PAT A-1002】A+B for Polynomials
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    map<gg,double,greater<gg>> um;
    gg ki,ai;
    double bi;
    cin>>ki;
    while(ki--) {
        cin>>ai>>bi;
        um[ai]+=bi;
    }
    cin>>ki;
    while(ki--) {
        cin>>ai>>bi;
        um[ai]+=bi;
        if(um[ai] == 0) {
            um.erase(ai);
        }
    }
    if(um.empty()) {
        cout<<"0";
        return 0;
    }
    cout<<fixed<<setprecision(1);
    cout<<um.size();
    for(auto& i:um) {
        cout<<" "<<i.first<<" "<<i.second;
    }
    return 0;
}