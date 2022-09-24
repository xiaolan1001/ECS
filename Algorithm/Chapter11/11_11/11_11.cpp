//【PAT A-1092、PAT B-1039】To Buy or Not to Buy、到底买不买
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    array<gg,128>h{};
    for(char c:s1)
        ++h[c];
    for(char c:s2)
        --h[c];
    gg k1=0,k2=0;
    for(int i:h) {
        i>0?k1+=i:k2-=i;
    }
    k2>0?cout<<"No "<<k2:cout<<"Yes "<<k1;
    return 0;
}