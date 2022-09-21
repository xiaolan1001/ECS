//【CCF CSP-20160902】火车购票
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,pi;
    cin>>ni;
    vector<gg> v(20,5);
    while(ni--) {
        cin>>pi;
        auto i=find_if(v.begin(),v.end(),[pi](int a) {
            return a>=pi;
        });
        if(i!=v.end()) {
            gg start = (i-v.begin())*5+6-(*i);
            *i -= pi;
            for(gg j=0; j<pi; ++j) {
                cout<<start+j<<" ";
            }
            cout << "\n";
            continue;
        }
        for(gg j=0; pi>0; ++j) {
            for(gg start=j*5+6-v[j]; v[j]>0; --v[j],++start,--pi) {
                cout<<start<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}