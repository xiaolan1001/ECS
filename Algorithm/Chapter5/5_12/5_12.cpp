//【PAT A-1038】Recover the Smallest Number
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni;
    cin>>ni;
    vector<string> v(ni);
    for(auto & i:v) {
        cin>>i;
    }
    sort(v.begin(),v.end(),
    [](const string & s1,const string & s2) {
        return s1+s2<s2+s1;
    });
    string s = accumulate(v.begin(),v.end(),string());
    auto i=find_if(s.begin(),s.end(),[](char c) {return c!='0';});
    i==s.end()?(cout<<"0"):(cout<<s.substr(i-s.begin()));
    return 0;
}