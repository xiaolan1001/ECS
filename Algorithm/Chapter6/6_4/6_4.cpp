//【CCF CSP-20190302】二十四点
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni;
    cin>>ni;
    string si;
    queue<gg> num;
    queue<char> op;
    while(ni--) {
        cin>>si;
        num.push(si[0]-'0');
        for(gg i=1; i<si.size(); i+=2) {
            if(si[i]=='+' or si[i]=='-') {
                op.push(si[i]);
                num.push(si[i+1]-'0');
            } else if(si[i]=='x') {
                num.back() *= (si[i+1]-'0');
            } else {
                num.back() /= (si[i+1]-'0');
            }
        }
        gg t = num.front();
        num.pop();
        while(!op.empty()) {
            char c = op.front();
            op.pop();
            t=(c=='+') ? t+num.front():t-num.front();
            num.pop();
        }
        cout<<(t==24 ? "Yes":"No")<<"\n";
    }
    return 0;
}