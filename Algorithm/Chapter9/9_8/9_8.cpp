//【CCF CSP-20150902】日期计算
#include<bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg yi,di;
    cin>>yi>>di;
    array<gg,13>month={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(yi%400==0 || (yi%100!=0 && yi%4==0)) {
        month[2] = 29;
    }
    gg i=0;
    while(di>month[++i])
        di-=month[i];
    cout<<i<<'\n'<<di;
    return 0;
}