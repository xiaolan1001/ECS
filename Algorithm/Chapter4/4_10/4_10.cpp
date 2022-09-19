//【CCF CSP-20160403】路径解析
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

vector<string> split(string& s) {
    vector<string> ans;
    stringstream ss(s);
    while(getline(ss,s,'/')) {
        ans.push_back(s);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni;
    string si,cur;
    cin>>ni;
    cin.get();
    getline(cin,cur);
    while(ni--) {
        getline(cin,si);
        if(si.empty() or si[0]!='/') {
            si=cur+"/"+si;
        }
        auto path = split(si);
        vector<string> ans;
        for(auto& s:path) {
            if(s=="." || s.empty() || (s==".." && ans.empty())) {
                continue;
            } else if(s=="..") {
                ans.pop_back();
            } else {
                ans.push_back(s);
            }
        }
        string out;
        for(string& i:ans) {
            out+="/"+i;
        }
        cout<<(out.empty() ? "/":out)<<"\n";
    }
    return 0;
}