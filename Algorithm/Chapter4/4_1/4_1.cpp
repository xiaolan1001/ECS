//【PAT B-1009】说反话
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    vector<string> v;
    while(cin>>s) {
        v.push_back(s);
    }
    for(auto i=v.rbegin(); i!=v.rend(); ++i) {
        cout<<(i==v.rbegin()? "":" ")<<*i;
    }
    return 0;
}