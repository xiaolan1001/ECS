//【PAT B-1037】在霍格沃茨找零钱
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg g1,s1,k1,g2,s2,k2;
    char c;
    cin>>g1>>c>>s1>>c>>k1>>g2>>c>>s2>>c>>k2;
    gg t1=(g1*17+s1)*29+k1,t2=(g2*17+s2)*29+k2;
    t2-=t1;
    cout<<t2/29/17<<'.'<<abs(t2)/29%17<<'.'<<abs(t2)%29;
    return 0;
}