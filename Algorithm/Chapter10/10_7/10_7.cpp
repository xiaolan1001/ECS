//【PAT A-1152、PAT B-1094】Google Recruitment、谷歌的招聘
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

bool isPrime(gg n) {
    if(n<2) {
        return false;
    }
    for(gg i=2; i<=(gg)sqrt(n);++i) {
        if(n%i==0)
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg li,ki;
    string s;
    cin>>li>>ki>>s;
    for(int i=0; i<s.size()-ki+1; ++i) {
        string n=s.substr(i,ki);
        if(isPrime(stoll(n))) {
            cout<<n;
            return 0;
        }
    }
    cout<<"404";
    return 0;
}