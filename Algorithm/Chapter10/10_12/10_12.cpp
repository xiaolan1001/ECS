//【PAT A-1023】Have Fun with Numbers
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

string Plus(const string& a,const string &b) {
    string ans;
    gg carry = 0;
    for(gg i=a.size()-1,j=b.size()-1; i>=0||j>=0||carry!=0;--i,--j) {
        gg p1=i>=0?a[i]-'0':0,p2=j>=0?b[j]-'0':0;
        gg k=p1+p2+carry;
        ans.push_back(k%10+'0');
        carry=k/10;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a;
    cin>>a;
    string b = Plus(a,a);
    if(a.size()==b.size() and is_permutation(a.begin(),a.end(),b.begin())) {
        cout<<"Yes\n";
    } else {
        cout<<"No\n";
    }
    cout<<b;
    return 0;
}