//【PAT A-1060】Area They Equal
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

pair<string,gg>f(const string& s, gg n) {
    string ans;
    gg i=find_if(s.begin(),s.end(),[](char c){return isdigit(c) && c!='0';})-s.begin();
    if(i==s.size()) {
        return {string(n,'0'),0};
    }
    for(gg j=i; j < s.size(); ++j) {
        if(ans.size()<n && isdigit(s[j])) {
            ans.push_back(s[j]);
        }
    }
    ans += string(n-ans.size(), '0');
    gg num = s.find('.');
    if(num==-1) {
        num = s.size();
    }

    return {ans,num-i>0 ? num-i:num-i+1};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s1,s2;
    gg ni;
    cin>>ni>>s1>>s2;
    auto ans1 = f(s1,ni),ans2=f(s2,ni);
    if(ans1 == ans2) {
        cout<<"YES 0."<<ans1.first<<"*10^"<<ans1.second<<"\n";
    } else {
        cout<<"NO 0."<<ans1.first<<"*10^"<<ans1.second<<" 0."<<ans2.first<<"*10^"<<ans2.second<<"\n";
    }
    return 0;
}