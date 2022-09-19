//【PAT B-1031】查验身份证
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    gg ni;
    cin>>ni;
    string si;
    gg weight[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    string m = "10X98765432";
    bool pass = true;
    while(ni--) {
        cin>>si;
        bool f = true;
        gg sum=0;
        for(int i=0; i<17 && f; ++i) {
            if(not isdigit(si[i])) {
                f = false;
            } else {
                sum += (si[i]-'0') * weight[i];
            }
        }
        if(m[sum%11] != si.back() || not f) {
            cout << si << '\n';
            pass = false;
        }
    }
    if(pass) {
        cout << "All passed";
    }
    return 0;
}