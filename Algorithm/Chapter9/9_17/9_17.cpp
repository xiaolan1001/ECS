//【PAT A-1010】Radix
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

unordered_map<char,gg>um;
string s1,s2;
gg tag,radix;

gg rToDec(const string& r, gg R) {
    gg d=0;
    for(auto i:r)
        d=d*R+um[i];
    return d;
}

gg binarySearchF(gg left,gg right ,gg n) {
    while(left<right) {
        gg mid = (left+right)/2;
        auto k = rToDec(s2,mid);
        if(k>=n or k<0)
            right=mid;
        else
            left=mid+1;
    }
    auto k=rToDec(s2,left);
    return left>right or not(k>=n or k<0)?-1:left;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,mi;
    cin>>s1>>s2>>tag>>radix;
    if(tag==2)
        swap(s1,s2);
    for(gg i=0; i<36;++i) {
        um.insert({i<10?i+'0':i-10+'a',i});
    }
    gg n=rToDec(s1,radix);
    auto m = max_element(s2.begin(),s2.end(),[](char c1,char c2){
        return um[c1]<um[c2];
    });
    gg left=um[*m]+1;
    auto ans=binarySearchF(left,n+1,n);
    ans==-1 or rToDec(s2,ans)!=n?cout<<"Impossible":cout<<ans;
    return 0;
}