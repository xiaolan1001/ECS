//【PAT B-1078】字符串压缩与解压
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

string compress(const string& s) {
    string r;
    for(gg i=0,j=0; i < s.size(); i=j) {
        j=s.find_first_not_of(s[i],i);
        if(j==-1)
            j = s.size();
        r+=(j-i==1 ? "":to_string(j-i))+string(1,s[i]);
    }
    return r;
}

string decompress(const string& s) {
    string r;
    for(gg i=0,j=0; i < s.size(); i=j+1) {
        j=s.find_first_not_of("0123456789",i);
        gg k=j-i==0 ? 1:stoll(s.substr(i,j-i));
        r+=string(k,s[j]);
    }
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string fi,si;
    getline(cin,fi);
    getline(cin,si);
    cout<<(fi=="C" ? compress(si):decompress(si));

    return 0;
}