//【CCF CSP-20140303】命令行选项
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s,t;
    cin>>s;
    vector<gg>type(128);
    for(gg i=0; i<s.size();++i) {
        type[s[i]] = 1;
        if(i+1<s.size() and s[i+1]==':') {
            type[s[i]] = 2;
        }
    }
    gg ni;
    cin>>ni;
    cin.get();
    for(gg ii=1; ii<=ni; ++ii) {
        getline(cin,s);
        map<char,string>ans;
        stringstream ss(s);
        ss>>s;
        while(ss>>s) {
            if(s.size()==2 and s[0]=='-' and type[s[1]]==1) {
                ans[s[1]]="";
            } else if(s.size()==2 and s[0]=='-' and type[s[1]]==2 and ss>>t) {
                ans[s[1]] = t;
            } else {
                break;
            }
        }
        cout<<"Case "<<ii<<": ";
        for(auto& i:ans) {
            cout<<"-"<<i.first;
            if(not i.second.empty()) {
                cout<<" "<<i.second;
            }
            cout<<(i==*ans.end()?"":" ");
        }
        cout<<"\n";
    }
    return 0;
}